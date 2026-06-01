__int64 __fastcall sub_9C2300(__int64 a1, __int64 a2)
{
  __m128 *v3; // r14
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax
  __m128 *v7; // rdx
  unsigned __int64 v8; // rdi
  __m128 v9; // xmm0
  unsigned int v10; // r13d
  size_t v11; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rbx
  _DWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *i; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rax
  char **exception; // r13
  unsigned __int64 v30; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v31; // [rsp+8h] [rbp-60h]
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  v30 = *(_QWORD *)(a1 + 32);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v3 = *(__m128 **)(a1 + 72);
  if ( v3 )
  {
    v4 = v3[-1].m128_u32[3];
    if ( v4 == v3[-1].m128_i32[2] )
    {
      v10 = (3 * v4 + 1) >> 1;
      v11 = 40 * v10 + 8;
      if ( 40 * v4 + 8 >= (unsigned int)v11 || v4 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_98B3B0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v12 = sub_186B270(v11);
      v13 = *(_QWORD **)(a1 + 72);
      v14 = (_DWORD *)v12;
      v3 = (__m128 *)(v12 + 8);
      if ( v13 )
      {
        v15 = *((unsigned int *)v13 - 1);
        v16 = v12 + 8;
        *(_DWORD *)(v12 + 4) = v15;
        v17 = &v13[5 * v15];
        for ( i = v13; v17 != i; *(_DWORD *)(v16 - 8) = *((_DWORD *)i - 2) )
        {
          v19 = i[1];
          i += 5;
          v16 += 40;
          *(_QWORD *)(v16 - 32) = v19;
          v20 = *(i - 5);
          *(i - 5) = 0;
          *(_QWORD *)(v16 - 40) = v20;
          *(_QWORD *)(v16 - 16) = *(i - 2);
          v21 = *(i - 3);
          *(i - 3) = 0;
          *(_QWORD *)(v16 - 24) = v21;
        }
        if ( (_DWORD)v15 )
        {
          v22 = &v13[5 * v15];
          do
          {
            while ( 1 )
            {
              v26 = v13[2];
              if ( v26 )
              {
                v27 = v13[3];
                v25 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v25 )
                {
                  v31 = v22;
                  sub_15D7BC0(v27, v26);
                  v22 = v31;
                }
              }
              v23 = *v13;
              if ( *v13 )
              {
                v24 = v13[1];
                v25 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v25 )
                  break;
              }
              v13 += 5;
              if ( v13 == v22 )
                goto LABEL_21;
            }
            v31 = v22;
            v13 += 5;
            sub_15D7BC0(v24, v23);
            v22 = v31;
          }
          while ( v13 != v31 );
LABEL_21:
          v13 = *(_QWORD **)(a1 + 72);
        }
        sub_186B220(v13 - 1);
        v7 = (__m128 *)((char *)v3 + 40 * (unsigned int)v14[1]);
        result = (unsigned int)(v14[1] + 1);
      }
      else
      {
        *(_DWORD *)(v12 + 4) = 0;
        v7 = (__m128 *)(v12 + 8);
        result = 1;
      }
      *(_QWORD *)(a1 + 72) = v3;
      *v14 = v10;
    }
    else
    {
      v5 = v4;
      result = v4 + 1;
      v7 = (__m128 *)((char *)v3 + 40 * v5);
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x58u);
    v3 = (__m128 *)(v28 + 1);
    *v28 = 2;
    result = 1;
    *(_QWORD *)(a1 + 72) = v3;
    v7 = v3;
  }
  v8 = v30;
  v7[1].m128_u64[0] = 0;
  v9 = _mm_loadh_ps((const double *)&v30);
  v7[2].m128_i32[0] = 0;
  v7[1].m128_u64[1] = v8;
  *v7 = v9;
  v3[-1].m128_i32[3] = result;
  return result;
}

