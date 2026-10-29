__m128i *__fastcall sub_3DEE30(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  int v9; // eax
  unsigned __int64 v10; // r14
  signed __int32 v11; // eax
  unsigned __int64 v13; // r12
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned __int64 v16; // rax
  volatile signed __int32 *v17; // rdi
  signed __int32 v18; // eax
  __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __m128 v22; // xmm1
  __m128i v23; // xmm2
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm0
  __int64 v30; // r13
  unsigned __int64 v31; // xmm3_8
  __int64 v32; // xmm1_8
  volatile signed __int32 *v33; // rdi
  signed __int32 v34; // eax
  __m128i v35; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v36; // [rsp+10h] [rbp-98h] BYREF
  char v37; // [rsp+27h] [rbp-81h] BYREF
  __int64 v38; // [rsp+28h] [rbp-80h] BYREF
  __m128i v39; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v40[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v41; // [rsp+60h] [rbp-48h]
  __int64 v42; // [rsp+68h] [rbp-40h]
  int v43; // [rsp+70h] [rbp-38h]
  char v44; // [rsp+74h] [rbp-34h]
  unsigned __int64 v45; // [rsp+78h] [rbp-30h]

  v9 = *(_DWORD *)(a2 + 60);
  v10 = *(_QWORD *)(a2 + 96);
  v45 = __readfsqword(0x28u);
  if ( (unsigned int)(v9 - 1) <= 1 )
  {
    v13 = a3;
    if ( v10 )
    {
      v14 = *(_DWORD *)(v10 + 8);
      a3 = v10 + 8;
      do
      {
        if ( !v14 )
        {
          v17 = *(volatile signed __int32 **)(a2 + 96);
          v10 = 0;
          goto LABEL_17;
        }
        a4 = (unsigned int)(v14 + 1);
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)a3, a4, v14);
      }
      while ( v15 != v14 );
      if ( *(_DWORD *)a3 )
      {
        v16 = *(_QWORD *)(a2 + 88);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 60) == 1 )
          {
            *a1 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v10);
            return a1;
          }
        }
      }
      v17 = *(volatile signed __int32 **)(a2 + 96);
LABEL_17:
      *(_OWORD *)(a2 + 88) = 0;
      if ( v17 )
      {
        if ( &_pthread_key_create )
        {
          v18 = _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF);
        }
        else
        {
          v18 = *((_DWORD *)v17 + 3);
          a3 = (unsigned int)(v18 - 1);
          *((_DWORD *)v17 + 3) = a3;
        }
        if ( v18 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 24LL))(v17);
      }
    }
    else
    {
      *(_OWORD *)(a2 + 88) = 0;
    }
    v19 = j__qalloc_or_throw(1512, a2, a3, a4);
    sub_336F00(v19, v13);
    v20 = *(_QWORD *)(a2 + 64);
    v21 = *(_QWORD *)(a2 + 72);
    v22 = _mm_loadh_ps((const double *)(v19 + 1504));
    v41 = -1;
    v42 = 0;
    v23 = (__m128i)(v20 + v21);
    v24 = *(_QWORD *)(a2 + 8);
    v44 = 0;
    v43 = 0;
    v40[0] = _mm_unpacklo_epi64((__m128i)v20, v23);
    v40[1] = v22;
    if ( (unsigned __int8)sub_8C080(v19, (__int64)v40, v24) )
    {
      v38 = v19;
      sub_3DEBC0(&v39, (__int64)&v37, &v38);
      v29 = (__m128)_mm_load_si128(&v39);
      v30 = v38;
      v31 = _mm_movehl_ps(a8, v29).m128_u64[0];
      v32 = v29.m128_u64[0];
      if ( v10 )
      {
        v36 = (__m128i)v29;
        v35.m128i_i64[0] = v29.m128_u64[0];
        sub_3D56E0((volatile signed __int32 *)v10);
        v29 = (__m128)_mm_load_si128(&v36);
        v32 = v35.m128i_i64[0];
      }
      *(_QWORD *)(a2 + 88) = v32;
      if ( v31 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v31 + 12), 1u);
        else
          ++*(_DWORD *)(v31 + 12);
      }
      v33 = *(volatile signed __int32 **)(a2 + 96);
      if ( v33 )
      {
        if ( &_pthread_key_create )
        {
          v34 = _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF);
        }
        else
        {
          v34 = *((_DWORD *)v33 + 3);
          v25 = (unsigned int)(v34 - 1);
          *((_DWORD *)v33 + 3) = v25;
        }
        if ( v34 == 1 )
        {
          (*(void (__fastcall **)(volatile signed __int32 *, char *, __int64, __int64, __int64, __int64, unsigned __int64, __int64, __int64, __int64))(*(_QWORD *)v33 + 24LL))(
            v33,
            &v37,
            v25,
            v26,
            v27,
            v28,
            v29.m128_u64[0],
            v29.m128_i64[1],
            v36.m128i_i64[0],
            v36.m128i_i64[1]);
          v29 = (__m128)_mm_load_si128(&v35);
        }
      }
      *(_QWORD *)(a2 + 96) = v31;
      *a1 = (__m128i)v29;
      if ( v30 )
      {
        sub_84290(v30);
        j__qfree(v30);
      }
    }
    else
    {
      *a1 = 0;
      if ( v19 )
      {
        sub_84290(v19);
        j__qfree(v19);
      }
      if ( v10 )
        sub_3D56E0((volatile signed __int32 *)v10);
    }
  }
  else
  {
    *(_OWORD *)(a2 + 88) = 0;
    if ( v10 )
    {
      if ( &_pthread_key_create )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF);
      }
      else
      {
        v11 = *(_DWORD *)(v10 + 12);
        *(_DWORD *)(v10 + 12) = v11 - 1;
      }
      if ( v11 == 1 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 24LL))(v10);
    }
    *a1 = 0;
  }
  return a1;
}
