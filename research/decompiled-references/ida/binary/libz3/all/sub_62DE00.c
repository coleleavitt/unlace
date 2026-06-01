__int64 __fastcall sub_62DE00(const __m128i *a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  char **exception; // rbp
  unsigned __int64 v5; // r14
  unsigned int v9; // r12d
  _DWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  unsigned __int64 v15; // rax
  _QWORD *v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rcx
  unsigned __int64 *v23; // r14
  unsigned __int64 *v24; // r15
  __int64 v25; // rsi
  int v26; // eax
  __int64 *v27; // rsi
  _QWORD *v28; // rdx
  __int64 v29; // r13
  unsigned int v30; // eax
  unsigned int v31; // r8d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rax
  __int64 v36; // [rsp+8h] [rbp-90h]
  unsigned __int64 v37; // [rsp+10h] [rbp-88h]
  unsigned int v38; // [rsp+10h] [rbp-88h]
  __m128i v39; // [rsp+30h] [rbp-68h] BYREF
  __m128i v40[5]; // [rsp+40h] [rbp-58h] BYREF

  v5 = a2;
  if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
    v5 = *(_QWORD *)(a2 + 24);
  v9 = sub_148C810(&a1[1], v5);
  if ( !*(_WORD *)(v5 + 4)
    && (v10 = *(_DWORD **)(*(_QWORD *)(v5 + 16) + 24LL)) != nullptr
    && !*v10
    && v10[1] == 9
    && *(_DWORD *)(v5 + 24) == 2 )
  {
    v36 = *(_QWORD *)(v5 + 32);
    v15 = *(_QWORD *)(v5 + 40);
    v16 = (_QWORD *)a1[23].m128i_i64[1];
    v37 = v15;
    if ( v16 )
    {
      v17 = &v16[*((unsigned int *)v16 - 1)];
      if ( v16 >= v17 )
        goto LABEL_21;
      do
      {
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 )
          {
            v19 = a1[23].m128i_i64[0];
            v13 = (*(_DWORD *)(v18 + 8))-- == 1;
            if ( v13 )
              break;
          }
          if ( ++v16 >= v17 )
            goto LABEL_20;
        }
        sub_15D7BC0(v19, v18);
        ++v16;
      }
      while ( v16 < v17 );
LABEL_20:
      v16 = (_QWORD *)a1[23].m128i_i64[1];
      if ( v16 )
LABEL_21:
        *((_DWORD *)v16 - 1) = 0;
    }
    sub_62A170(v40, a1, v37);
    v20 = *a4;
    v21 = v40[0].m128i_i64[1];
    *a4 = v40[0].m128i_i64[0];
    sub_629F20(v20, v21);
    sub_15EEF60(v36);
    v22 = a1[23].m128i_i64[1];
    if ( v22 )
    {
      v23 = (unsigned __int64 *)(v22 + 8LL * *(unsigned int *)(v22 - 4));
      if ( v23 != (unsigned __int64 *)v22 )
      {
        v24 = (unsigned __int64 *)a1[23].m128i_i64[1];
        sub_62A170(&v39, a1, *v24);
        while ( 1 )
        {
          v28 = *(_QWORD **)(a3 + 8);
          v29 = v39.m128i_i64[0];
          if ( v28 )
          {
            v30 = *((_DWORD *)v28 - 1);
            if ( v30 == *((_DWORD *)v28 - 2) )
            {
              v31 = (3 * v30 + 1) >> 1;
              v32 = 8 * v31 + 8;
              if ( 8 * v30 + 8 >= (unsigned int)v32 || v30 >= v31 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v40[0].m128i_i64, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v40);
                sub_233E40((__int64)v40);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v38 = (3 * v30 + 1) >> 1;
              v33 = (unsigned int *)sub_186B300(v28 - 1, v32);
              v34 = v33[1];
              v28 = v33 + 2;
              *(_QWORD *)(a3 + 8) = v33 + 2;
              *v33 = v38;
              LODWORD(v33) = v34;
              v27 = &v28[v34];
              v26 = (_DWORD)v33 + 1;
            }
            else
            {
              v25 = v30;
              v26 = v30 + 1;
              v27 = &v28[v25];
            }
          }
          else
          {
            v35 = (_QWORD *)sub_186B270(0x18u);
            v28 = v35 + 1;
            *v35 = 2;
            v26 = 1;
            *(_QWORD *)(a3 + 8) = v28;
            v27 = v28;
          }
          ++v24;
          *v27 = v29;
          *((_DWORD *)v28 - 1) = v26;
          if ( v23 == v24 )
            break;
          sub_62A170(&v39, a1, *v24);
        }
      }
    }
  }
  else
  {
    sub_62A170(v40, a1, v5);
    v11 = *a4;
    *a4 = v40[0].m128i_i64[0];
    if ( v11 )
    {
      v12 = v40[0].m128i_i64[1];
      v13 = (*(_DWORD *)(v11 + 8))-- == 1;
      if ( v13 )
        sub_15D7BC0(v12, v11);
    }
  }
  return v9;
}

