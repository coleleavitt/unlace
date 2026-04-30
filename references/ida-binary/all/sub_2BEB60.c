unsigned __int64 __fastcall sub_2BEB60(
        _QWORD *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rax
  __int64 (__fastcall *v14)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  int v24; // r12d
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, __int64, unsigned int); // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64, __int64, unsigned int); // r9
  int v30; // eax
  __int64 (__fastcall *v31)(__int64); // rax
  int v32; // eax
  unsigned int v33; // r15d
  char v35; // al
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 v43; // rdi
  __int64 v44; // rax
  const char *v45; // rsi
  const __m128i *v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  __m128i v49; // xmm0
  __int64 v51; // rax
  char v52; // [rsp+0h] [rbp-78h]
  int v53; // [rsp+4h] [rbp-74h]
  __int64 v54; // [rsp+10h] [rbp-68h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 v56; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v57; // [rsp+28h] [rbp-50h]
  unsigned __int64 v58; // [rsp+38h] [rbp-40h]

  v12 = *a1;
  v58 = __readfsqword(0x28u);
  v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(v12 + 504);
  if ( v14 == sub_2B36E0 )
  {
    v15 = sub_1EA6A0(a1[2] + 384LL, a2, (__int64)sub_2B36E0, a12, *(double *)a3.m128_u64);
    v16 = *(_DWORD *)(v15 + 32);
    v17 = v15;
    if ( v16 != (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)a1,
        v18,
        v19,
        v20,
        v21,
        a3,
        a4,
        a5,
        a6,
        v22,
        v23,
        a9,
        a10,
        v52);
    v24 = *(_DWORD *)(v17 + 24);
  }
  else
  {
    v24 = ((__int64 (__fastcall *)(_QWORD *))v14)(a1);
  }
  if ( v24 < 0 )
    return v58 - __readfsqword(0x28u);
  if ( (sub_47B6A0(QT::QCoreApplication::self, 0) & 6) != 0 )
  {
    v25 = a1[55];
    if ( !v25 )
      goto LABEL_9;
    goto LABEL_8;
  }
  v43 = a1[24];
  if ( v43 )
  {
    a1[25] = 0;
    qfree(v43, nullptr);
    a1[24] = 0;
    a1[26] = 0;
  }
  sub_2B38C0((__int64)(a1 + 24));
  v25 = a1[55];
  if ( v25 )
LABEL_8:
    v25 = *(_QWORD *)(v25 + 8);
LABEL_9:
  v53 = -1;
  v26 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*a1 + 752LL);
  if ( v26 != sub_2B2450 )
    v53 = v26((__int64)a1, v25, (unsigned int)v24, 0xFFFFFFFF);
  v56 = v25;
  v57 = 0;
  v27 = node_iterator_goup(&v56);
  v28 = *(_QWORD *)v27;
  LODWORD(v27) = *(_DWORD *)(v27 + 8);
  v56 = v28;
  v57 = v27;
  while ( 1 )
  {
    v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 56LL);
    v32 = v31 == interactive_graph_t__::vfunc_7 ? *(_DWORD *)(v25 + 184) : v31(v25);
    v33 = v57;
    if ( v32 == v57 && v25 == v56 )
      return v58 - __readfsqword(0x28u);
    if ( (unsigned __int8)sub_29AC50(v25, v57) )
    {
      v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned int))(*a1 + 752LL);
      v30 = -1;
      if ( v29 != sub_2B2450 )
        v30 = v29((__int64)a1, v25, v33, 0xFFFFFFFF);
      if ( v53 == v30 )
      {
        v35 = sub_47B6A0(QT::QCoreApplication::self, 0);
        v36 = a1[25];
        v37 = a1[24];
        v38 = v37 + 20 * v36;
        if ( (v35 & 4) != 0 || (v35 & 2) == 0 )
        {
          v39 = (__int64)(a1 + 24);
          if ( v38 == v37 )
            goto LABEL_42;
          while ( !*(_BYTE *)v37 || v33 != *(_DWORD *)(v37 + 4) )
          {
            v37 += 20;
            if ( v37 == v38 )
              goto LABEL_42;
          }
          if ( v38 == v37 )
          {
LABEL_42:
            v42 = v36 + 1;
            if ( a1[26] < v42 )
            {
              v54 = a1[26];
              v44 = qvector_reserve(a1 + 24, 0, v42, 20);
              v45 = (const char *)a1[26];
              v46 = (const __m128i *)a1[24];
              v47 = v44;
              v48 = a1[25] - 1LL;
              a1[26] = v54;
              if ( v48 >= 0 )
              {
                do
                {
                  v49 = _mm_loadu_si128(v46);
                  v44 += 20;
                  v46 = (const __m128i *)((char *)v46 + 20);
                  *(__m128i *)(v44 - 20) = v49;
                  *(_DWORD *)(v44 - 4) = v46[-1].m128i_i32[3];
                }
                while ( v48-- != 0 );
                v46 = (const __m128i *)a1[24];
              }
              v55 = v47;
              qfree(v46, v45);
              v51 = a1[25];
              v39 = (__int64)(a1 + 24);
              a1[24] = v55;
              a1[26] = v45;
              v38 = v55 + 20 * v51;
            }
            *(_BYTE *)v38 = 1;
            *(_DWORD *)(v38 + 4) = v33;
            *(_QWORD *)(v38 + 8) = -1;
            *(_DWORD *)(v38 + 16) = -1;
            ++a1[25];
          }
          sub_2B38C0(v39);
        }
        else
        {
          v40 = (__int64)(a1 + 24);
          if ( 20 * v36 )
          {
            while ( !*(_BYTE *)v37 || v33 != *(_DWORD *)(v37 + 4) )
            {
              v37 += 20;
              if ( v37 == v38 )
                goto LABEL_41;
            }
            if ( v38 != v37 )
            {
              v41 = v38 - v37;
              if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (v41 >> 2) - 2) >= 0 )
              {
                memmove((void *)v37, (const void *)(v37 + 20), v41 - 20);
                v36 = a1[25];
                v40 = (__int64)(a1 + 24);
              }
              a1[25] = v36 - 1;
            }
          }
LABEL_41:
          sub_2B38C0(v40);
        }
      }
    }
    ++v57;
    node_iterator_goup(&v56);
  }
}
