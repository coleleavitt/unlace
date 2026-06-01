__int64 __fastcall sub_BF3E00(__int64 *a1, __int64 **a2)
{
  __m128i v3; // xmm0
  size_t v4; // rdi
  __int64 result; // rax
  __int64 *v6; // r14
  __int64 *v7; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  unsigned int v12; // r12d
  __int64 v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rsi
  _QWORD *v19; // rdx
  unsigned int v20; // r12d
  __int64 v21; // r15
  unsigned int v22; // eax
  __int64 v23; // rdi
  _QWORD *v24; // rdi
  unsigned int v25; // r8d
  size_t v26; // rsi
  unsigned int v27; // r13d
  unsigned int *v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // r8d
  size_t v31; // rsi
  unsigned int v32; // r13d
  unsigned int *v33; // rax
  __int64 v34; // rsi
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  char **v37; // r13
  char **exception; // r13
  __int64 v39; // [rsp+8h] [rbp-70h]
  __int64 v40[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( *a2 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(*a2 - 1));
    v4 = 32LL * (unsigned int)_mm_cvtsi128_si32(v3) + 8;
  }
  else
  {
    v3.m128i_i64[0] = 0;
    v4 = 8;
  }
  v39 = v3.m128i_i64[0];
  result = sub_186B270(v4) + 8;
  *(_QWORD *)(result - 8) = v3.m128i_i64[0];
  *a1 = result;
  v6 = *a2;
  v39 = result;
  if ( v6 )
  {
    v7 = &v6[4 * *((unsigned int *)v6 - 1)];
    if ( v6 != v7 )
    {
      v8 = (_QWORD *)result;
      do
      {
        v9 = *v6;
        v8[1] = 0;
        v10 = v6[1];
        *v8 = v9;
        if ( v10 )
        {
          v11 = nullptr;
          v12 = 0;
          do
          {
            if ( v12 >= *(_DWORD *)(v10 - 4) )
              break;
            v13 = *(_QWORD *)(v10 + 8LL * v12);
            if ( v13 )
              ++*(_DWORD *)(v13 + 8);
            if ( v11 )
            {
              v14 = *((_DWORD *)v11 - 1);
              if ( v14 == *((_DWORD *)v11 - 2) )
              {
                v30 = (3 * v14 + 1) >> 1;
                v31 = 8 * v30 + 8;
                v32 = v30;
                if ( 8 * v14 + 8 >= (unsigned int)v31 || v14 >= v30 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v40, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v40);
                  sub_233E40((__int64)v40);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v33 = (unsigned int *)sub_186B300(v11 - 1, v31);
                v34 = v33[1];
                v11 = v33 + 2;
                *v33 = v32;
                v8[1] = v33 + 2;
                LODWORD(v33) = v34;
                v17 = &v11[v34];
                v10 = v6[1];
                v16 = (_DWORD)v33 + 1;
              }
              else
              {
                v15 = v14;
                v16 = v14 + 1;
                v17 = &v11[v15];
              }
            }
            else
            {
              v36 = (_QWORD *)sub_186B270(0x18u);
              v11 = v36 + 1;
              v8[1] = v36 + 1;
              v17 = v36 + 1;
              v10 = v6[1];
              *v36 = 2;
              v16 = 1;
            }
            *v17 = v13;
            ++v12;
            *((_DWORD *)v11 - 1) = v16;
          }
          while ( v10 );
        }
        result = v6[2];
        v8[3] = 0;
        v18 = v6[3];
        v8[2] = result;
        if ( v18 )
        {
          v19 = nullptr;
          v20 = 0;
          do
          {
            if ( v20 >= *(_DWORD *)(v18 - 4) )
              break;
            v21 = *(_QWORD *)(v18 + 8LL * v20);
            if ( v21 )
              ++*(_DWORD *)(v21 + 8);
            if ( v19 )
            {
              v22 = *((_DWORD *)v19 - 1);
              if ( v22 == *((_DWORD *)v19 - 2) )
              {
                v25 = (3 * v22 + 1) >> 1;
                v26 = 8 * v25 + 8;
                v27 = v25;
                if ( 8 * v22 + 8 >= (unsigned int)v26 || v22 >= v25 )
                {
                  v37 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v40, "Overflow encountered when expanding vector");
                  *v37 = (char *)off_1C63128;
                  sub_2333C0(v37 + 1, v40);
                  sub_233E40((__int64)v40);
                  __cxa_throw(v37, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v28 = (unsigned int *)sub_186B300(v19 - 1, v26);
                v29 = v28[1];
                v19 = v28 + 2;
                *v28 = v27;
                v8[3] = v28 + 2;
                LODWORD(v28) = v29;
                v24 = &v19[v29];
                v18 = v6[3];
                result = (unsigned int)((_DWORD)v28 + 1);
              }
              else
              {
                v23 = v22;
                result = v22 + 1;
                v24 = &v19[v23];
              }
            }
            else
            {
              v35 = (_QWORD *)sub_186B270(0x18u);
              v19 = v35 + 1;
              v8[3] = v35 + 1;
              v24 = v35 + 1;
              v18 = v6[3];
              *v35 = 2;
              result = 1;
            }
            *v24 = v21;
            ++v20;
            *((_DWORD *)v19 - 1) = result;
          }
          while ( v18 );
        }
        v6 += 4;
        v8 += 4;
      }
      while ( v7 != v6 );
    }
  }
  return result;
}

