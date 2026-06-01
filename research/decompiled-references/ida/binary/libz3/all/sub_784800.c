__int64 __fastcall sub_784800(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 *v4; // r15
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 result; // rax
  __m128 *v8; // rdx
  unsigned int v9; // r13d
  size_t v10; // rdi
  __int64 v11; // rax
  _QWORD *v12; // r14
  _DWORD *v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // r10d
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rsi
  _QWORD *v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rsi
  __int64 v27; // rdi
  _QWORD *v28; // rax
  char **exception; // r14
  __int64 v30; // rdx
  __int64 v31; // [rsp+8h] [rbp-70h] BYREF
  _DWORD *v32; // [rsp+10h] [rbp-68h]
  _QWORD *v33; // [rsp+18h] [rbp-60h]
  __int64 v34[11]; // [rsp+20h] [rbp-58h] BYREF

  v31 = *(_QWORD *)(a1 + 48);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  if ( a3 )
    ++*(_DWORD *)(a3 + 8);
  v4 = *(__m128 **)(a1 + 56);
  if ( v4 )
  {
    v5 = v4[-1].m128_u32[3];
    if ( v5 == v4[-1].m128_i32[2] )
    {
      v9 = (3 * v5 + 1) >> 1;
      v10 = 32 * v9 + 8;
      if ( 32 * v5 + 8 >= (unsigned int)v10 || v5 >= v9 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_10FA3E(v34, "Overflow encountered when expanding vector", v30);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v34);
        sub_233E40((__int64)v34);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v11 = sub_186B270(v10);
      v12 = *(_QWORD **)(a1 + 56);
      v13 = (_DWORD *)v11;
      v4 = (__m128 *)(v11 + 8);
      if ( v12 )
      {
        v14 = *((unsigned int *)v12 - 1);
        v15 = v11 + 8;
        *(_DWORD *)(v11 + 4) = v14;
        v16 = v14;
        v17 = v12;
        v18 = &v12[4 * v14];
        if ( v18 != v12 )
        {
          do
          {
            v19 = v17[1];
            v17 += 4;
            v15 += 32;
            *(_QWORD *)(v15 - 24) = v19;
            v20 = *(v17 - 4);
            *(v17 - 4) = 0;
            *(_QWORD *)(v15 - 32) = v20;
            *(_QWORD *)(v15 - 8) = *(v17 - 1);
            v21 = *(v17 - 2);
            *(v17 - 2) = 0;
            *(_QWORD *)(v15 - 16) = v21;
          }
          while ( v18 != v17 );
        }
        v22 = &v12[4 * v14];
        if ( v16 )
        {
          do
          {
            while ( 1 )
            {
              v26 = v12[2];
              if ( v26 )
              {
                v27 = v12[3];
                v25 = (*(_DWORD *)(v26 + 8))-- == 1;
                if ( v25 )
                {
                  v33 = v22;
                  v32 = v13;
                  sub_15D7BC0(v27, v26);
                  v22 = v33;
                  v13 = v32;
                }
              }
              v23 = *v12;
              if ( *v12 )
              {
                v24 = v12[1];
                v25 = (*(_DWORD *)(v23 + 8))-- == 1;
                if ( v25 )
                  break;
              }
              v12 += 4;
              if ( v12 == v22 )
                goto LABEL_23;
            }
            v33 = v22;
            v12 += 4;
            v32 = v13;
            sub_15D7BC0(v24, v23);
            v22 = v33;
            v13 = v32;
          }
          while ( v12 != v33 );
LABEL_23:
          v12 = *(_QWORD **)(a1 + 56);
        }
        v32 = v13;
        sub_186B220(v12 - 1);
        v13 = v32;
        v8 = &v4[2 * (unsigned int)v32[1]];
        result = (unsigned int)(v32[1] + 1);
      }
      else
      {
        *(_DWORD *)(v11 + 4) = 0;
        v8 = (__m128 *)(v11 + 8);
        result = 1;
      }
      *(_QWORD *)(a1 + 56) = v4;
      *v13 = v9;
    }
    else
    {
      v6 = v5;
      result = v5 + 1;
      v8 = &v4[2 * v6];
    }
  }
  else
  {
    v28 = (_QWORD *)sub_186B270(0x48u);
    v4 = (__m128 *)(v28 + 1);
    *v28 = 2;
    result = 1;
    *(_QWORD *)(a1 + 56) = v4;
    v8 = v4;
  }
  *v8 = _mm_loadh_ps((const double *)&v31);
  v8[1] = _mm_loadh_ps((const double *)&v31);
  v4[-1].m128_i32[3] = result;
  return result;
}

