void __fastcall sub_7CE310(__int64 a1, double a2)
{
  _BYTE *v3; // rax
  __int64 *v4; // rbx
  __int64 *v5; // r12
  __int64 v6; // rdi
  unsigned int **v7; // rbx
  unsigned int **i; // r12
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  unsigned int *v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r15
  char v17; // al
  unsigned int *v18; // rdi
  unsigned int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  unsigned int *v22; // rdx
  _QWORD *v23; // rdi
  __int64 v24; // rsi
  __int64 (__fastcall *v25)(_QWORD *, unsigned int); // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rdi
  void (*v29)(void); // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r14
  __int64 v33; // r15
  __int64 v34; // rbx
  _BYTE v35[16]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v36[32]; // [rsp+10h] [rbp-88h] BYREF
  _BYTE v37[16]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v38[88]; // [rsp+40h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 1408) )
  {
    v34 = sub_186B270(0xA0u);
    sub_7C6A80(v34, (_QWORD *)a1);
    sub_7CDF60((_QWORD *)a1, v34);
  }
  v3 = *(_BYTE **)(a1 + 2288);
  *(_QWORD *)(a1 + 2296) = 0;
  *v3 = 0;
  v4 = *(__int64 **)(a1 + 2392);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    while ( v5 != v4 )
    {
      v6 = *v4++;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    }
  }
  v7 = *(unsigned int ***)(a1 + 8344);
  if ( v7 )
  {
    for ( i = &v7[4 * *((unsigned int *)v7 - 1)]; i != v7; v7 += 4 )
    {
      while ( 1 )
      {
        v12 = *v7;
        v17 = sub_15D2CB0(*(_QWORD *)(a1 + 144), *v7);
        v18 = *v7;
        if ( v17 )
          break;
        v19 = *(unsigned int **)(sub_15D1F10(v18) + 24);
        if ( !v19
          || (v20 = *(_QWORD *)(a1 + 2400), v21 = *v19, !v20)
          || (unsigned int)v21 >= *(_DWORD *)(v20 - 4)
          || (v18 = *(unsigned int **)(v20 + 8 * v21)) == nullptr )
        {
          if ( (unsigned int)sub_180B130(v18) <= 4 )
            goto LABEL_18;
          if ( !(unsigned __int8)sub_186A530(a2) )
          {
LABEL_38:
            v32 = sub_180B150(v18, v12);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v35, *v7, *(_QWORD *)(a1 + 144), 0, 0, 0);
            v33 = sub_160E8B0(v32, v35);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_1606360(v37, v7[2], *(_QWORD *)(a1 + 144), 0, 0, 0);
            sub_160E8B0(v33, v37);
            std::__ostream_insert<char,std::char_traits<char>>();
            sub_18572D0(v38);
            sub_18572D0(v36);
            goto LABEL_18;
          }
          goto LABEL_17;
        }
        v22 = v7[2];
        v7 += 4;
        (*(void (__fastcall **)(unsigned int *, _QWORD, unsigned int *))(*(_QWORD *)v18 + 504LL))(v18, *(v7 - 4), v22);
        if ( i == v7 )
          return;
      }
      v9 = *(_QWORD *)(a1 + 1720);
      if ( v9 )
      {
        v10 = *v18;
        if ( (unsigned int)v10 >= *(_DWORD *)(v9 - 4) )
        {
          v11 = 0;
          v12 = nullptr;
          goto LABEL_13;
        }
        v9 = *(_QWORD *)(v9 + 8 * v10);
      }
      v11 = *(_DWORD *)(v9 + 28);
      v12 = (unsigned int *)(unsigned int)(2 * v11);
      if ( (_DWORD)v12 == -2 )
      {
        if ( (unsigned int)sub_180B130(v18) <= 4 )
          continue;
        if ( !(unsigned __int8)sub_186A530(a2) )
          goto LABEL_38;
        goto LABEL_17;
      }
LABEL_13:
      v13 = *(_QWORD *)(a1 + 144);
      v14 = v7[2];
      if ( *(unsigned int **)(v13 + 856) == v14 )
      {
        v28 = *(_QWORD **)(a1 + 24);
        v29 = *(void (**)(void))(*v28 + 48LL);
        if ( (char *)v29 == (char *)sub_784580 )
        {
          v30 = v28[412];
          v31 = v11 & 0x7FFFFFFF;
          if ( v30 && (unsigned int)v31 < *(_DWORD *)(v30 - 4) )
          {
            *(_BYTE *)(v28[431] + v31) = 1;
            *(_BYTE *)(v28[432] + v31) = 1;
          }
        }
        else
        {
          v29();
        }
        continue;
      }
      if ( v14 == *(unsigned int **)(v13 + 864) )
      {
        v23 = *(_QWORD **)(a1 + 24);
        v24 = (unsigned int)v12 ^ 1;
        v25 = *(__int64 (__fastcall **)(_QWORD *, unsigned int))(*v23 + 48LL);
        if ( v25 == sub_784580 )
        {
          v26 = v23[412];
          v27 = (unsigned int)v24 >> 1;
          if ( v26 && (unsigned int)v27 < *(_DWORD *)(v26 - 4) )
          {
            *(_BYTE *)(v23[431] + v27) = 0;
            *(_BYTE *)(v23[432] + v27) = 0;
          }
        }
        else
        {
          v25(v23, v24);
        }
        continue;
      }
      if ( (unsigned int)sub_180B130(v18) > 4 )
      {
        if ( !(unsigned __int8)sub_186A530(a2) )
          goto LABEL_38;
LABEL_17:
        sub_186A4C0(a2);
        v15 = sub_180B150(v18, v12);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v35, *v7, *(_QWORD *)(a1 + 144), 0, 0, 0);
        v16 = sub_160E8B0(v15, v35);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_1606360(v37, v7[2], *(_QWORD *)(a1 + 144), 0, 0, 0);
        sub_160E8B0(v16, v37);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_18572D0(v38);
        sub_18572D0(v36);
        sub_186A500(v36, "\n");
      }
LABEL_18:
      ;
    }
  }
}

