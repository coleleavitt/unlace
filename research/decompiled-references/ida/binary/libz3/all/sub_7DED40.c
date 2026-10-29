__int64 __fastcall sub_7DED40(__int64 a1)
{
  char **exception; // rbx
  __int64 v4; // rax
  int v5; // r12d
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rax
  int v9; // r8d
  _QWORD *v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // edi
  __int64 *v23; // rcx
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r12d
  unsigned int v32; // ecx
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rsi
  _QWORD *v37; // rdx
  __int64 v38[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 104) )
  {
    do
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 512LL))(a1);
    while ( (*(_DWORD *)(a1 + 104))-- != 1 );
  }
  v4 = *(_QWORD *)(a1 + 256);
  v5 = *(_DWORD *)(a1 + 264);
  if ( v4 )
    v6 = *(_DWORD *)(v4 - 4);
  else
    v6 = 0;
  if ( v5 == v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 80);
  v8 = sub_180C100(v7 + 2144, 24);
  v10 = *(_QWORD **)(v7 + 2128);
  v11 = v8;
  *(_QWORD *)v8 = &off_1C4C070;
  *(_QWORD *)(v8 + 8) = a1 + 264;
  *(_DWORD *)(v8 + 16) = v5;
  if ( v10 )
  {
    v12 = *((_DWORD *)v10 - 1);
    if ( v12 == *((_DWORD *)v10 - 2) )
    {
      v31 = (3 * v12 + 1) >> 1;
      v32 = 8 * v31 + 8;
      if ( 8 * v12 + 8 >= v32 || v12 >= v31 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v33 = (unsigned int *)sub_186B300(v10 - 1, v32);
      v34 = v33[1];
      v10 = v33 + 2;
      *(_QWORD *)(v7 + 2128) = v33 + 2;
      *v33 = v31;
      LODWORD(v33) = v34;
      v15 = &v10[v34];
      v14 = (_DWORD)v33 + 1;
    }
    else
    {
      v13 = v12;
      v14 = v12 + 1;
      v15 = &v10[v13];
    }
  }
  else
  {
    v37 = (_QWORD *)sub_186B270(0x18u);
    *v37 = 2;
    v14 = 1;
    v10 = v37 + 1;
    *(_QWORD *)(v7 + 2128) = v10;
    v15 = v10;
  }
  *v15 = v11;
  *((_DWORD *)v10 - 1) = v14;
  v16 = *(_QWORD *)(a1 + 256);
  if ( v16 )
  {
    v17 = *(unsigned int *)(a1 + 264);
    do
    {
      if ( (unsigned int)v17 >= *(_DWORD *)(v16 - 4) )
        break;
      v18 = *(_QWORD *)(a1 + 24);
      if ( *(_BYTE *)(v18 + 3184) )
        break;
      v19 = *(_QWORD *)(v16 + 8 * v17);
      v20 = *(_QWORD *)(v19 + 24);
      if ( v20 )
      {
        v21 = *(unsigned int *)(a1 + 184);
        v22 = *(_DWORD *)(v20 + 12);
        v23 = *(__int64 **)(a1 + 176);
        v24 = v21 - 1;
        v21 *= 16;
        v25 = (__int64 *)((char *)v23 + v21);
        v26 = 16LL * (v22 & v24);
        v27 = &v23[(unsigned __int64)v26 / 8];
        if ( v26 == v21 )
        {
LABEL_22:
          while ( v27 != v23 )
          {
            v30 = *v23;
            if ( (unsigned __int64)*v23 > 1 )
            {
              if ( *(_DWORD *)(v30 + 12) == v22 && v20 == v30 )
              {
                v28 = v23;
                goto LABEL_42;
              }
            }
            else if ( !v30 )
            {
              break;
            }
            v23 += 2;
          }
LABEL_45:
          BUG();
        }
        v28 = &v23[(unsigned __int64)v26 / 8];
        while ( 1 )
        {
          while ( 1 )
          {
            v29 = *v28;
            if ( (unsigned __int64)*v28 > 1 )
              break;
            if ( !v29 )
              goto LABEL_45;
            v28 += 2;
            if ( v25 == v28 )
              goto LABEL_22;
          }
          if ( *(_DWORD *)(v29 + 12) == v22 && v20 == v29 )
            break;
          v28 += 2;
          if ( v25 == v28 )
            goto LABEL_22;
        }
LABEL_42:
        sub_7DC1D0(a1, v20, v28[1]);
      }
      else
      {
        v35 = *(_QWORD *)(v19 + 16);
        if ( v35 )
        {
          sub_7DC310(a1, v35);
        }
        else if ( *(_QWORD *)v19 )
        {
          sub_7DE450(a1, *(__int64 **)v19, v16, v18, v9, 0);
        }
        else
        {
          sub_7DC460(a1, *(_QWORD *)(v19 + 8), v16, v18, v9, 0);
        }
      }
      v16 = *(_QWORD *)(a1 + 256);
      v17 = (unsigned int)(*(_DWORD *)(a1 + 264) + 1);
      *(_DWORD *)(a1 + 264) = v17;
    }
    while ( v16 );
  }
  return 1;
}

