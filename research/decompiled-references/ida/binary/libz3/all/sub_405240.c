__int64 __fastcall sub_405240(
        __int64 a1,
        __int64 *a2,
        __int32 a3,
        unsigned __int64 a4,
        __int8 a5,
        __int64 *a6,
        double a7,
        __m128 a8)
{
  char **exception; // rbp
  _QWORD *v10; // r14
  __int64 v11; // rax
  __m128i *v12; // rax
  __m128i v13; // xmm0
  __int32 v14; // edx
  __int64 v15; // rdx
  unsigned int v17; // r13d
  size_t v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // rbx
  _DWORD *v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r15
  __int64 *v32; // rdi
  _QWORD *v33; // rax
  __m128i v34; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v35[4]; // [rsp+10h] [rbp-98h] BYREF
  __m128i v36; // [rsp+30h] [rbp-78h] BYREF
  __m128i v37; // [rsp+40h] [rbp-68h] BYREF
  __int8 v38; // [rsp+50h] [rbp-58h]
  __int64 v39; // [rsp+58h] [rbp-50h] BYREF
  __int64 v40; // [rsp+60h] [rbp-48h]

  sub_404F80(&v36, a2, a3, a4, a5, a6);
  v10 = *(_QWORD **)(a1 + 16);
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 == *((_DWORD *)v10 - 2) )
    {
      v17 = (unsigned int)(3 * v11 + 1) >> 1;
      v18 = 56 * v17 + 8;
      if ( 56 * (int)v11 + 8 >= (unsigned int)v18 || (unsigned int)v11 >= v17 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3FCFD0(v35, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v19 = sub_186B270(v18);
      v20 = *(_QWORD **)(a1 + 16);
      v21 = (_DWORD *)v19;
      v10 = (_QWORD *)(v19 + 8);
      if ( v20 )
      {
        v22 = *((unsigned int *)v20 - 1);
        v21[1] = v22;
        v23 = 7 * v22;
        v24 = v20;
        v25 = &v20[v23];
        v26 = v10;
        if ( v20 != v25 )
        {
          do
          {
            v27 = *v24;
            v24 += 7;
            v26 += 7;
            *(v26 - 7) = v27;
            *((_DWORD *)v26 - 12) = *((_DWORD *)v24 - 12);
            v28 = _mm_loadu_si128((const __m128i *)(v24 - 5));
            *(v24 - 5) = 0;
            *(__m128i *)(v26 - 5) = v28;
            *((_BYTE *)v26 - 24) = *((_BYTE *)v24 - 24);
            *(v26 - 2) = *(v24 - 2);
            v29 = *(v24 - 1);
            *(v24 - 1) = 0;
            *(v26 - 1) = v29;
          }
          while ( v25 != v24 );
        }
        v30 = *((unsigned int *)v20 - 1);
        if ( (_DWORD)v30 )
        {
          v31 = &v20[7 * v30];
          do
          {
            v32 = v20 + 5;
            v20 += 7;
            sub_2B4F40(v32);
            sub_3FCDF0(*(v20 - 5), *(v20 - 4));
          }
          while ( v20 != v31 );
          v20 = *(_QWORD **)(a1 + 16);
        }
        sub_186B220(v20 - 1);
        v12 = (__m128i *)&v10[7 * (unsigned int)v21[1]];
      }
      else
      {
        *(_DWORD *)(v19 + 4) = 0;
        v12 = (__m128i *)(v19 + 8);
      }
      *(_QWORD *)(a1 + 16) = v10;
      *v21 = v17;
    }
    else
    {
      v12 = (__m128i *)&v10[7 * v11];
    }
  }
  else
  {
    v33 = (_QWORD *)sub_186B270(0x78u);
    v10 = v33 + 1;
    *v33 = 2;
    *(_QWORD *)(a1 + 16) = v33 + 1;
    v12 = (__m128i *)(v33 + 1);
  }
  v13 = _mm_load_si128(&v37);
  v37.m128i_i64[0] = 0;
  v12->m128i_i64[0] = v36.m128i_i64[0];
  v14 = v36.m128i_i32[2];
  v12[1] = v13;
  v12->m128i_i32[2] = v14;
  v34 = v13;
  v12[2].m128i_i8[0] = v38;
  v12[2].m128i_i64[1] = v39;
  v15 = v40;
  v40 = 0;
  v12[3].m128i_i64[0] = v15;
  ++*((_DWORD *)v10 - 1);
  sub_2B4F40(&v39);
  return sub_3FCDF0(0, _mm_movehl_ps(a8, (__m128)_mm_load_si128(&v34)).m128_i64[0]);
}

