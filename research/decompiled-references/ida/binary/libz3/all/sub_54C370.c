__int64 __fastcall sub_54C370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(__int64); // rax
  char v7; // al
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int i; // r13d
  __int64 v18; // rbx
  _QWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  _QWORD *v23; // rsi
  unsigned int v24; // r15d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rsi
  _QWORD *v28; // rcx
  _QWORD *v29; // rsi
  int v30; // eax
  unsigned int v31; // r14d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  char **exception; // rbp
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 8) + 40LL))(*(_QWORD *)(a2 + 8), a1 + 8);
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v6 == sub_54A3A0 )
    v7 = *(_BYTE *)(a2 + 28);
  else
    v7 = v6(a2);
  if ( !v7 )
  {
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL);
    if ( !(v8 == sub_54A3A0 ? *(_BYTE *)(a3 + 28) : v8(a3)) )
    {
      v11 = *(_QWORD *)(a2 + 40);
      *(_BYTE *)(v5 + 28) = 0;
      v12 = 0;
      if ( v11 )
      {
        while ( v12 < *(_DWORD *)(v11 - 4) )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(v11 + 8LL * v12);
            if ( v13 )
              ++*(_DWORD *)(v13 + 8);
            v14 = *(_QWORD *)(v5 + 40);
            if ( !v14 )
            {
              v35 = (_QWORD *)sub_186B270(0x18u);
              v28 = v35 + 1;
              *v35 = 2;
              v30 = 1;
              *(_QWORD *)(v5 + 40) = v28;
              v29 = v28;
              v11 = *(_QWORD *)(a2 + 40);
              goto LABEL_30;
            }
            v15 = *(_DWORD *)(v14 - 4);
            if ( v15 == *(_DWORD *)(v14 - 8) )
              break;
            ++v12;
            *(_QWORD *)(v14 + 8LL * v15) = v13;
            *(_DWORD *)(v14 - 4) = v15 + 1;
            if ( v12 >= *(_DWORD *)(v11 - 4) )
              goto LABEL_16;
          }
          v24 = (3 * v15 + 1) >> 1;
          v25 = 8 * v24 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v25 || v15 >= v24 )
          {
LABEL_37:
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v38, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v38);
            sub_233E40((__int64)v38);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v26 = (unsigned int *)sub_186B300((void *)(v14 - 8), v25);
          v27 = v26[1];
          v28 = v26 + 2;
          *(_QWORD *)(v5 + 40) = v26 + 2;
          v11 = *(_QWORD *)(a2 + 40);
          *v26 = v24;
          LODWORD(v26) = v27;
          v29 = &v28[v27];
          v30 = (_DWORD)v26 + 1;
LABEL_30:
          *v29 = v13;
          *((_DWORD *)v28 - 1) = v30;
          if ( !v11 )
            break;
          ++v12;
        }
      }
LABEL_16:
      v16 = *(_QWORD *)(a3 + 40);
      if ( v16 )
      {
        for ( i = 0; i < *(_DWORD *)(v16 - 4); ++i )
        {
          v18 = *(_QWORD *)(v16 + 8LL * i);
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          v19 = *(_QWORD **)(v5 + 40);
          if ( v19 )
          {
            v20 = *((_DWORD *)v19 - 1);
            if ( v20 == *((_DWORD *)v19 - 2) )
            {
              v31 = (3 * v20 + 1) >> 1;
              v32 = 8 * v31 + 8;
              if ( 8 * v20 + 8 >= (unsigned int)v32 || v20 >= v31 )
                goto LABEL_37;
              v33 = (unsigned int *)sub_186B300(v19 - 1, v32);
              v34 = v33[1];
              v19 = v33 + 2;
              *(_QWORD *)(v5 + 40) = v33 + 2;
              *v33 = v31;
              LODWORD(v33) = v34;
              v23 = &v19[v34];
              v16 = *(_QWORD *)(a3 + 40);
              v22 = (_DWORD)v33 + 1;
            }
            else
            {
              v21 = v20;
              v22 = v20 + 1;
              v23 = &v19[v21];
            }
          }
          else
          {
            v36 = (_QWORD *)sub_186B270(0x18u);
            v19 = v36 + 1;
            *v36 = 2;
            v22 = 1;
            *(_QWORD *)(v5 + 40) = v19;
            v23 = v19;
            v16 = *(_QWORD *)(a3 + 40);
          }
          *v23 = v18;
          *((_DWORD *)v19 - 1) = v22;
          if ( !v16 )
            return v5;
        }
      }
    }
  }
  return v5;
}

