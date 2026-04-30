__int64 __fastcall sub_2BE0B0(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // r12
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  int v19; // ebp
  __int64 v20; // r15
  __int64 (__fastcall *v21)(__int64); // rdx
  __int64 (__fastcall *v22)(__int64); // rax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // edx
  const char *v26; // rsi
  unsigned __int64 v27; // rbp
  unsigned int v28; // r14d
  unsigned int v29; // r8d
  char *v30; // rcx
  const char *v31; // rax
  __int64 v33; // rax
  __int64 v34; // rbp
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // [rsp+0h] [rbp-88h]
  unsigned int v39; // [rsp+Ch] [rbp-7Ch]
  unsigned __int64 v40; // [rsp+10h] [rbp-78h] BYREF
  __int128 v41; // [rsp+18h] [rbp-70h]
  const char *v42; // [rsp+30h] [rbp-58h] BYREF
  __int128 v43; // [rsp+38h] [rbp-50h]
  unsigned __int64 v44; // [rsp+48h] [rbp-40h]

  v10 = a1 + 56;
  v12 = a1[62];
  v44 = __readfsqword(0x28u);
  if ( v12 )
  {
    a1[63] = 0;
    *(double *)a3.m128_u64 = qfree(v12, (const char *)a2);
    a1[62] = 0;
    a1[64] = 0;
  }
  v13 = a1[59];
  if ( v13 )
  {
    a1[60] = 0;
    *(double *)a3.m128_u64 = qfree(v13, (const char *)a2);
    a1[59] = 0;
    a1[61] = 0;
  }
  sub_466DB0(v10);
  sub_466DA0(v10);
  if ( a2 )
  {
    if ( *(_BYTE *)a2 )
    {
      v19 = *(_DWORD *)(a2 + 4);
      if ( v19 >= 0 )
      {
        v20 = a1[55];
        if ( v20 )
          v20 = *(_QWORD *)(v20 + 8);
        v21 = interactive_graph_t__::vfunc_7;
        v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL);
        if ( v22 == interactive_graph_t__::vfunc_7 )
          v23 = *(_DWORD *)(v20 + 184);
        else
          v23 = v22(v20);
        if ( v19 >= v23 )
          sub_169700(
            (int)"Coherency check failed: n < g->size()\n",
            a2,
            (__int64)v21,
            v14,
            v15,
            v16,
            a3,
            a4,
            a5,
            a6,
            v17,
            v18,
            a9,
            a10,
            v38);
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 128LL))(v20) )
        {
          v42 = nullptr;
          v43 = 0;
          v24 = *(_QWORD *)(v20 + 80);
          v25 = *(_DWORD *)(v24 + 4LL * v19) & 0x7FFFFFFF;
          if ( v19 != v25 && *(int *)(v24 + 4LL * v25) >= 0 )
            sub_29A260(v20, (__int64 *)&v42, v25);
          sub_2B4640(v10, (__int64 *)&v42);
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree(v42, (const char *)&v42);
          }
          v26 = (const char *)&v40;
          v40 = 0;
          v42 = nullptr;
          v41 = 0;
          v43 = 0;
          sub_2988F0(v20, &v40, v19);
          v27 = v40;
          if ( 8LL * (_QWORD)v41 )
          {
            do
            {
              v26 = *(const char **)v27;
              if ( (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 160LL))(v20, *(_QWORD *)v27) )
              {
                v26 = v42;
                v28 = *(_DWORD *)v27;
                v29 = *(_DWORD *)(v27 + 4);
                v30 = (char *)&v42[8 * v43];
                if ( v42 == v30 )
                  goto LABEL_39;
                v31 = v42;
                while ( v28 != *(_DWORD *)v31 || v29 != *((_DWORD *)v31 + 1) )
                {
                  v31 += 8;
                  if ( v30 == v31 )
                    goto LABEL_39;
                }
                if ( v30 == v31 )
                {
LABEL_39:
                  if ( *((_QWORD *)&v43 + 1) < (unsigned __int64)(v43 + 1) )
                  {
                    v39 = *(_DWORD *)(v27 + 4);
                    v37 = qvector_reserve(&v42, v42, v43 + 1, 8);
                    v29 = v39;
                    v42 = (const char *)v37;
                    v30 = (char *)(v37 + 8 * v43);
                  }
                  *(_QWORD *)v30 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v29)).m128i_u64[0];
                  *(_QWORD *)&v43 = v43 + 1;
                }
              }
              v27 += 8LL;
            }
            while ( v27 != v40 + 8LL * (_QWORD)v41 );
          }
          if ( (_QWORD)v43 )
          {
            v26 = (const char *)&v42;
            sub_2B4700(v10, (__int64 *)&v42);
          }
          if ( v42 )
          {
            *(_QWORD *)&v43 = 0;
            qfree(v42, v26);
          }
          if ( v40 )
          {
            *(_QWORD *)&v41 = 0;
            qfree(v40, v26);
          }
        }
      }
    }
    else
    {
      v33 = a1[63];
      v34 = *(_QWORD *)(a2 + 12);
      v35 = a1[62];
      if ( a1[64] < (unsigned __int64)(v33 + 1) )
      {
        v36 = qvector_reserve(a1 + 62, v35, v33 + 1, 8);
        a1[62] = v36;
        v35 = v36;
        v33 = a1[63];
      }
      *(_QWORD *)(v35 + 8 * v33) = v34;
      ++a1[63];
      sub_466DB0(v10);
    }
  }
  return sub_466DD0(a1);
}
