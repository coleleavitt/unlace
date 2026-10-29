__int64 __fastcall sub_CCD1D0(__int64 a1, _QWORD *a2)
{
  char **exception; // rbx
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 *v9; // r14
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  int v12; // eax
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned int v16; // eax
  unsigned int v17; // r12d
  size_t v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi
  _DWORD *v21; // rsi
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  _QWORD *v27; // rax
  __int64 *v29; // [rsp+0h] [rbp-88h]
  _QWORD *v30; // [rsp+10h] [rbp-78h]
  __int64 v31; // [rsp+18h] [rbp-70h]
  __int64 v32[11]; // [rsp+30h] [rbp-58h] BYREF

  v4 = a2[1];
  v5 = sub_186B270(0x30u);
  *(_QWORD *)(v5 + 32) = v4;
  v6 = *(__int64 **)(a1 + 40);
  v31 = v5;
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_BYTE *)(v5 + 24) = 1;
  *(_QWORD *)v5 = &off_1C74C90;
  *(_QWORD *)(v5 + 40) = 0;
  if ( v6 )
  {
    v7 = 2LL * *((unsigned int *)v6 - 1);
    v29 = &v6[v7];
    if ( &v6[v7] != v6 )
    {
      v8 = *v6;
      v9 = v6;
      if ( *a2 != a2[1] )
      {
        v10 = nullptr;
        goto LABEL_12;
      }
      v15 = v6[1];
LABEL_22:
      v27 = (_QWORD *)sub_186B270(0x28u);
      v10 = v27 + 1;
      *v27 = 2;
      v13 = v27 + 1;
      *(_QWORD *)(v31 + 40) = v27 + 1;
      v12 = 1;
      while ( 1 )
      {
        *v13 = v8;
        v13[1] = v15;
        *((_DWORD *)v10 - 1) = v12;
        if ( v8 )
          ++*(_DWORD *)(v8 + 8);
        if ( v15 )
          ++*(_DWORD *)(v15 + 8);
        v9 += 2;
        if ( v29 == v9 )
          break;
        v8 = *v9;
        v6 = v9;
        if ( a2[1] == *a2 )
        {
          v15 = v9[1];
        }
        else
        {
LABEL_12:
          v14 = sub_15CFF50(a2, v8);
          v15 = v6[1];
          v8 = v14;
          if ( *a2 != a2[1] )
            v15 = sub_15CFF50(a2, v6[1]);
          if ( !v10 )
            goto LABEL_22;
        }
        v16 = *((_DWORD *)v10 - 1);
        if ( v16 == *((_DWORD *)v10 - 2) )
        {
          v17 = (3 * v16 + 1) >> 1;
          v18 = 16 * v17 + 8;
          if ( 16 * v16 + 8 >= (unsigned int)v18 || v16 >= v17 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v32, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v32);
            sub_233E40((__int64)v32);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = sub_186B270(v18);
          v20 = *((unsigned int *)v10 - 1);
          v21 = (_DWORD *)v19;
          v22 = v19 + 8;
          *(_DWORD *)(v19 + 4) = v20;
          v23 = 0;
          v24 = 16 * v20;
          if ( v24 )
          {
            do
            {
              *(__m128i *)&v21[v23 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v10[v23 / 8]);
              v23 += 16LL;
            }
            while ( v24 != v23 );
          }
          v30 = (_QWORD *)v22;
          sub_186B220(v10 - 1);
          *v21 = v17;
          v25 = (unsigned int)v21[1];
          v10 = v30;
          *(_QWORD *)(v31 + 40) = v30;
          v26 = v25;
          v13 = &v30[2 * v25];
          v12 = v26 + 1;
        }
        else
        {
          v11 = v16;
          v12 = v16 + 1;
          v13 = &v10[2 * v11];
        }
      }
    }
  }
  return v31;
}

