__int64 __fastcall sub_7CFF80(_QWORD *a1, int a2, __int64 a3, _DWORD **a4, int a5, double a6, double a7, __m128 a8)
{
  char **exception; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r13
  char v12; // r12
  __int64 result; // rax
  int *v15; // rcx
  int *v16; // rbx
  int v17; // r15d
  int *v18; // r14
  _DWORD *v19; // rdx
  _QWORD *v20; // rax
  const __m128i *v21; // rbx
  __int64 v22; // rdx
  const __m128i *v23; // r14
  const __m128i *v24; // r13
  __m128 v25; // xmm0
  __int64 v26; // rax
  __m128i *v27; // rdx
  __m128i v28; // xmm0
  unsigned int v29; // eax
  __int64 v30; // rdi
  int v31; // eax
  __m128i *v32; // rdi
  __int64 v33; // rax
  unsigned int v34; // r10d
  size_t v35; // rsi
  unsigned int *v36; // rax
  __int64 v37; // rax
  unsigned int v38; // ebx
  size_t v39; // rdi
  __int64 v40; // rax
  __int64 v41; // r10
  _DWORD *v42; // rsi
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  _QWORD *v46; // rax
  unsigned int v47; // [rsp+0h] [rbp-A8h]
  __m128i *v48; // [rsp+0h] [rbp-A8h]
  __int64 v50; // [rsp+8h] [rbp-A0h]
  __m128i v51; // [rsp+10h] [rbp-98h] BYREF
  int v52; // [rsp+24h] [rbp-84h]
  __int64 v53; // [rsp+28h] [rbp-80h]
  int v54; // [rsp+34h] [rbp-74h]
  __int64 v55; // [rsp+38h] [rbp-70h]
  __m128i v56; // [rsp+40h] [rbp-68h] BYREF
  __int64 v57[11]; // [rsp+50h] [rbp-58h] BYREF

  v11 = a3;
  v12 = a5;
  result = *(unsigned int *)(a3 + 32);
  v15 = *(int **)(a3 + 40);
  v54 = a2;
  v16 = &v15[result];
  v52 = a5;
  if ( v16 != v15 )
  {
    v17 = *v15;
    v18 = v15;
    v19 = *a4;
    if ( *a4 )
      goto LABEL_17;
    v18 = v15 + 1;
    v20 = (_QWORD *)sub_186B270(0x10u);
    *v20 = 2;
    v19 = v20 + 1;
    *a4 = v20 + 1;
    result = (__int64)v19;
    *v19 = v17;
    ++*(v19 - 1);
    for ( ; v16 != v18; ++*(v19 - 1) )
    {
      v17 = *v18;
LABEL_17:
      v33 = (unsigned int)*(v19 - 1);
      if ( (_DWORD)v33 == *(v19 - 2) )
      {
        v34 = (unsigned int)(3 * v33 + 1) >> 1;
        v35 = 4 * v34 + 8;
        if ( 4 * (int)v33 + 8 >= (unsigned int)v35 || (unsigned int)v33 >= v34 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_116834(v57, "Overflow encountered when expanding vector", v9);
          goto LABEL_37;
        }
        v47 = (unsigned int)(3 * v33 + 1) >> 1;
        v36 = (unsigned int *)sub_186B300(v19 - 2, v35);
        v19 = v36 + 2;
        *v36 = v47;
        v37 = v36[1];
        *a4 = v19;
        result = (__int64)&v19[v37];
      }
      else
      {
        result = (__int64)&v19[v33];
      }
      ++v18;
      *(_DWORD *)result = v17;
    }
  }
  v21 = *(const __m128i **)(v11 + 48);
  v22 = *(unsigned int *)(v11 + 36);
  v23 = &v21[v22];
  if ( &v21[v22] != v21 )
  {
    v53 = v11;
    v24 = v21;
    do
    {
      v25 = (__m128)_mm_loadu_si128(v24);
      a8 = _mm_movehl_ps(a8, v25);
      if ( !v12 )
      {
        v26 = a1[3];
        if ( v26 )
        {
          if ( *(_BYTE *)(v26 + 352) )
          {
            v51 = (__m128i)v25;
            v50 = v25.m128_u64[0];
            sub_7A4170(a1);
            v27 = (__m128i *)a1[294];
            v28 = _mm_load_si128(&v51);
            if ( v27 )
            {
              v29 = v27[-1].m128i_u32[3];
              if ( v29 == v27[-1].m128i_i32[2] )
              {
                v38 = (3 * v29 + 1) >> 1;
                v39 = 16 * v38 + 8;
                if ( 16 * v29 + 8 >= (unsigned int)v39 || v29 >= v38 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_116834(v57, "Overflow encountered when expanding vector", v10);
LABEL_37:
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v57);
                  sub_233E40((__int64)v57);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v51 = v28;
                v40 = sub_186B270(v39);
                v41 = a1[294];
                v28 = _mm_load_si128(&v51);
                v42 = (_DWORD *)v40;
                v27 = (__m128i *)(v40 + 8);
                if ( v41 )
                {
                  v43 = *(unsigned int *)(v41 - 4);
                  *(_DWORD *)(v40 + 4) = v43;
                  v44 = 0;
                  v45 = 16 * v43;
                  if ( v45 )
                  {
                    do
                    {
                      *(__m128i *)&v42[v44 / 4 + 2] = _mm_loadu_si128((const __m128i *)(v41 + v44));
                      v44 += 16LL;
                    }
                    while ( v45 != v44 );
                  }
                  v55 = v50;
                  v51.m128i_i64[0] = a8.m128_u64[0];
                  v48 = v27;
                  v56 = v28;
                  sub_186B220((void *)(v41 - 8));
                  v27 = v48;
                  v28 = _mm_load_si128(&v56);
                  v32 = &v48[v42[1]];
                  v31 = v42[1] + 1;
                }
                else
                {
                  *(_DWORD *)(v40 + 4) = 0;
                  v32 = (__m128i *)(v40 + 8);
                  v31 = 1;
                }
                a1[294] = v27;
                *v42 = v38;
              }
              else
              {
                v30 = v29;
                v31 = v29 + 1;
                v32 = &v27[v30];
              }
            }
            else
            {
              v51 = v28;
              v46 = (_QWORD *)sub_186B270(0x28u);
              v27 = (__m128i *)(v46 + 1);
              *v46 = 2;
              v28 = _mm_load_si128(&v51);
              v31 = 1;
              a1[294] = v27;
              v32 = v27;
            }
            *v32 = v28;
            v27[-1].m128i_i32[3] = v31;
          }
        }
      }
      ++v24;
      result = sub_13DBC80((int)a1 + 1592);
    }
    while ( v23 != v24 );
    v11 = v53;
  }
  if ( !(_BYTE)v52 )
  {
    result = a1[3];
    if ( result )
    {
      if ( *(_BYTE *)(result + 352) )
      {
        sub_7A4170(a1);
        return sub_7A3780(a1, v54, (int *)v11);
      }
    }
  }
  return result;
}

