__int64 __fastcall sub_A25770(__int64 *a1, const __m128i **a2)
{
  int v3; // ebx
  unsigned __int64 v4; // r14
  char i; // al
  const __m128i *v6; // r12
  __m128i *v7; // r13
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 m128i_i64; // rbx
  const __m128i *v12; // rbp
  __m128i *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  int v16; // ebp
  unsigned __int64 v17; // r13
  _BYTE *v18; // rbp
  unsigned __int8 (__fastcall *v19)(__int64 *, char *, _BOOL8); // r12
  char v20; // al
  _BOOL8 v21; // rdx
  unsigned __int8 (__fastcall *v22)(__int64 *, char *, _BOOL8); // r12
  char v23; // al
  _BOOL8 v24; // rdx
  unsigned __int8 (__fastcall *v25)(__int64 *, char *, _BOOL8); // r12
  char v26; // al
  _BOOL8 v27; // rdx
  unsigned __int8 (__fastcall *v28)(__int64 *, char *, _BOOL8); // r12
  char v29; // al
  _BOOL8 v30; // rdx
  unsigned __int8 (__fastcall *v31)(__int64 *, char *, _BOOL8); // r12
  char v32; // al
  _BOOL8 v33; // rdx
  unsigned __int8 (__fastcall *v34)(__int64 *, const char *, _BOOL8); // r12
  char v35; // al
  _BOOL8 v36; // rdx
  unsigned __int8 (__fastcall *v37)(__int64 *, char *, _BOOL8); // r12
  char v38; // al
  _BOOL8 v39; // rdx
  unsigned __int8 (__fastcall *v40)(__int64 *, char *, _BOOL8); // r12
  char v41; // al
  _BOOL8 v42; // rdx
  unsigned __int8 (__fastcall *v43)(__int64 *, char *, _BOOL8); // r12
  char v44; // al
  _BOOL8 v45; // rdx
  unsigned __int64 v46; // r14
  __int64 v47; // rbp
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbp
  const __m128i *v50; // rdx
  __m128i *v51; // rdi
  __int64 v52; // rdx
  bool v53; // cf
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r12
  __int64 v56; // rax
  char *v57; // rbx
  char *v58; // rdx
  void *v59; // rdi
  const __m128i *v60; // rbp
  __m128i *v61; // rbx
  const __m128i *v62; // rcx
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rsi
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rdx
  __m128i v73; // xmm1
  __m128i v74; // xmm3
  void *v75; // rdi
  void *v76; // rdi
  unsigned __int64 v77; // [rsp+8h] [rbp-B0h]
  __int64 v78; // [rsp+18h] [rbp-A0h]
  __int64 v79; // [rsp+28h] [rbp-90h]
  unsigned __int64 v81; // [rsp+38h] [rbp-80h]
  char v82; // [rsp+5Fh] [rbp-59h] BYREF
  __int64 v83; // [rsp+60h] [rbp-58h] BYREF
  __int64 v84; // [rsp+68h] [rbp-50h] BYREF
  const char *v85; // [rsp+70h] [rbp-48h] BYREF
  __int64 v86; // [rsp+78h] [rbp-40h]

  v3 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v3 = -1171354717 * (a2[1] - *a2);
  if ( v3 )
  {
    v4 = 0;
    v78 = (unsigned int)(v3 - 1);
    for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, 0, &v83);
          ;
          i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, (unsigned int)v77, &v83) )
    {
      v77 = v4 + 1;
      if ( i )
      {
        v6 = a2[1];
        v7 = (__m128i *)*a2;
        v8 = (char *)v6 - (char *)*a2;
        v9 = 0x2E8BA2E8BA2E8BA3LL * (v8 >> 4);
        if ( v9 <= v4 )
        {
          if ( v9 < v77 )
          {
            v49 = v4 + 1 - v9;
            if ( v4 + 1 != v9 )
            {
              if ( v49 > 0x2E8BA2E8BA2E8BA3LL * (a2[2] - v6) )
              {
                if ( v49 > 0x1745D1745D1745DLL - v9 )
                  std::__throw_length_error("vector::_M_default_append");
                v52 = v4 + 1 - v9;
                if ( v9 >= v49 )
                  v52 = 0x2E8BA2E8BA2E8BA3LL * (a2[1] - *a2);
                v53 = __CFADD__(v52, v9);
                v54 = v52 + v9;
                if ( v53 )
                {
                  v55 = 0xFFFFFFFFFFFFFFFLL;
                }
                else
                {
                  if ( v54 > 0x1745D1745D1745DLL )
                    v54 = 0x1745D1745D1745DLL;
                  v55 = 11 * v54;
                }
                v56 = operator new(v55 * 16);
                v57 = (char *)(v56 + v8);
                v7 = (__m128i *)v56;
                v58 = &v57[176 * v49];
                do
                {
                  v59 = v57;
                  v57 += 176;
                  memset(v59, 0, 0xB0u);
                }
                while ( v58 != v57 );
                v60 = a2[1];
                v61 = (__m128i *)*a2;
                if ( v60 != *a2 )
                {
                  v62 = *a2;
                  do
                  {
                    v63 = _mm_loadu_si128(v62);
                    *(_QWORD *)(v56 + 24) = 0;
                    v62 += 11;
                    v56 += 176;
                    *(_QWORD *)(v56 - 144) = 0;
                    *(_QWORD *)(v56 - 160) = 0;
                    v64 = v62[-10].m128i_i64[0];
                    *(__m128i *)(v56 - 176) = v63;
                    *(_QWORD *)(v56 - 160) = v64;
                    v65 = v62[-10].m128i_i64[1];
                    v62[-10].m128i_i64[0] = 0;
                    v66 = *(_QWORD *)(v56 - 152);
                    *(_QWORD *)(v56 - 152) = v65;
                    v67 = v62[-9].m128i_i64[0];
                    v62[-10].m128i_i64[1] = v66;
                    v68 = *(_QWORD *)(v56 - 144);
                    *(_QWORD *)(v56 - 144) = v67;
                    v62[-9].m128i_i64[0] = v68;
                    *(_QWORD *)(v56 - 128) = 0;
                    *(_QWORD *)(v56 - 120) = 0;
                    *(_QWORD *)(v56 - 136) = 0;
                    *(_QWORD *)(v56 - 136) = v62[-9].m128i_i64[1];
                    v69 = v62[-8].m128i_i64[0];
                    v62[-9].m128i_i64[1] = 0;
                    v70 = *(_QWORD *)(v56 - 128);
                    *(_QWORD *)(v56 - 128) = v69;
                    v71 = v62[-8].m128i_i64[1];
                    v62[-8].m128i_i64[0] = v70;
                    v72 = *(_QWORD *)(v56 - 120);
                    *(_QWORD *)(v56 - 120) = v71;
                    v62[-8].m128i_i64[1] = v72;
                    *(_WORD *)(v56 - 112) = v62[-7].m128i_i16[0];
                    v73 = _mm_loadu_si128(v62 - 6);
                    *(_QWORD *)(v56 - 108) = *(__int64 *)((char *)v62[-7].m128i_i64 + 4);
                    *(__m128i *)(v56 - 96) = v73;
                    *(_QWORD *)(v56 - 80) = v62[-5].m128i_i64[0];
                    LOWORD(v72) = v62[-5].m128i_i16[4];
                    *(__m128i *)(v56 - 64) = _mm_loadu_si128(v62 - 4);
                    v74 = _mm_loadu_si128(v62 - 3);
                    *(_WORD *)(v56 - 72) = v72;
                    *(__m128i *)(v56 - 48) = v74;
                    *(__m128i *)(v56 - 32) = _mm_loadu_si128(v62 - 2);
                    *(__m128i *)(v56 - 16) = _mm_loadu_si128(v62 - 1);
                  }
                  while ( v60 != v62 );
                  do
                  {
                    while ( 1 )
                    {
                      v75 = (void *)v61[2].m128i_i64[1];
                      if ( v75 )
                        operator delete(v75);
                      v76 = (void *)v61[1].m128i_i64[0];
                      if ( !v76 )
                        break;
                      operator delete(v76);
                      v61 += 11;
                      if ( v60 == v61 )
                        goto LABEL_104;
                    }
                    v61 += 11;
                  }
                  while ( v60 != v61 );
LABEL_104:
                  v61 = (__m128i *)*a2;
                }
                if ( v61 )
                  operator delete(v61);
                *a2 = v7;
                a2[2] = &v7[v55];
                a2[1] = &v7[11 * v77];
              }
              else
              {
                v50 = &v6[11 * v49];
                do
                {
                  v51 = (__m128i *)v6;
                  v6 += 11;
                  memset(v51, 0, 0xB0u);
                }
                while ( v6 != v50 );
                a2[1] = v6;
              }
            }
          }
          else if ( v9 > v77 )
          {
            v12 = &v7[11 * v4 + 11];
            if ( v6 != v12 )
            {
              v13 = &v7[11 * v4 + 11];
              do
              {
                while ( 1 )
                {
                  v14 = (void *)v13[2].m128i_i64[1];
                  if ( v14 )
                    operator delete(v14);
                  v15 = (void *)v13[1].m128i_i64[0];
                  if ( !v15 )
                    break;
                  operator delete(v15);
                  v13 += 11;
                  if ( v6 == v13 )
                    goto LABEL_28;
                }
                v13 += 11;
              }
              while ( v6 != v13 );
LABEL_28:
              a2[1] = v12;
              v7 = (__m128i *)*a2;
            }
          }
        }
        (*(void (__fastcall **)(__int64 *))(*a1 + 104))(a1);
        m128i_i64 = (__int64)v7[11 * v4].m128i_i64;
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, __int64 *, const char **))(*a1 + 120))(
               a1,
               "Name",
               1,
               0,
               &v84,
               &v85) )
        {
          sub_A1E350(a1, m128i_i64);
          (*(void (__fastcall **)(__int64 *, const char *))(*a1 + 128))(a1, v85);
        }
        if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1)
           || *(_QWORD *)(m128i_i64 + 24) != *(_QWORD *)(m128i_i64 + 16))
          && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, const char **))(*a1 + 120))(
               a1,
               "Parameters",
               0,
               0,
               &v84,
               &v85) )
        {
          sub_A1F4D0(a1, (__int64 *)(m128i_i64 + 16));
          (*(void (__fastcall **)(__int64 *, const char *))(*a1 + 128))(a1, v85);
        }
        if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1)
           || *(_QWORD *)(m128i_i64 + 48) != *(_QWORD *)(m128i_i64 + 40))
          && (*(unsigned __int8 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
               a1,
               "Nullability",
               0,
               0,
               &v82,
               &v84) )
        {
          v16 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 64))(a1);
          if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
            v16 = *(_QWORD *)(m128i_i64 + 48) - *(_DWORD *)(m128i_i64 + 40);
          if ( v16 )
          {
            v17 = 0;
            v81 = v4;
            v79 = (unsigned int)(v16 - 1);
            while ( 1 )
            {
              v46 = v17 + 1;
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, const char **))(*a1 + 72))(
                     a1,
                     (unsigned int)v17,
                     &v85) )
              {
                v47 = *(_QWORD *)(m128i_i64 + 40);
                v48 = *(_QWORD *)(m128i_i64 + 48) - v47;
                if ( v48 <= v17 )
                {
                  if ( v46 > v48 )
                  {
                    sub_A25630(m128i_i64 + 40, v46 - v48);
                    v47 = *(_QWORD *)(m128i_i64 + 40);
                  }
                  else if ( v46 < v48 && *(_QWORD *)(m128i_i64 + 48) != v47 + v46 )
                  {
                    *(_QWORD *)(m128i_i64 + 48) = v47 + v46;
                  }
                }
                v18 = (_BYTE *)(v17 + v47);
                (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
                v19 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v20 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v21 = 0;
                if ( v20 )
                  v21 = *v18 == 0;
                if ( v19(a1, "Nonnull", v21) )
                  *v18 = 0;
                v22 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v23 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v24 = 0;
                if ( v23 )
                  v24 = *v18 == 1;
                if ( v22(a1, "Optional", v24) )
                  *v18 = 1;
                v25 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v26 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v27 = 0;
                if ( v26 )
                  v27 = *v18 == 2;
                if ( v25(a1, "Unspecified", v27) )
                  *v18 = 2;
                v28 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v29 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v30 = 0;
                if ( v29 )
                  v30 = *v18 == 3;
                if ( v28(a1, "NullableResult", v30) )
                  *v18 = 3;
                v31 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v32 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v33 = 0;
                if ( v32 )
                  v33 = *v18 == 2;
                if ( v31(a1, "Scalar", v33) )
                  *v18 = 2;
                v34 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
                v35 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v36 = 0;
                if ( v35 )
                  v36 = *v18 == 0;
                if ( v34(a1, "N", v36) )
                  *v18 = 0;
                v37 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v38 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v39 = 0;
                if ( v38 )
                  v39 = *v18 == 1;
                if ( v37(a1, "O", v39) )
                  *v18 = 1;
                v40 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v41 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v42 = 0;
                if ( v41 )
                  v42 = *v18 == 2;
                if ( v40(a1, "U", v42) )
                  *v18 = 2;
                v43 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
                v44 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
                v45 = 0;
                if ( v44 )
                  v45 = *v18 == 2;
                if ( v43(a1, "S", v45) )
                  *v18 = 2;
                (*(void (__fastcall **)(__int64 *))(*a1 + 184))(a1);
                (*(void (__fastcall **)(__int64 *, const char *))(*a1 + 80))(a1, v85);
              }
              if ( v17 == v79 )
                break;
              ++v17;
            }
            v4 = v81;
          }
          (*(void (__fastcall **)(__int64 *))(*a1 + 88))(a1);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v84);
        }
        BYTE1(v85) = 0;
        sub_A1EF30((__int64)a1, (__int64)"NullabilityOfRet", (_BYTE *)(m128i_i64 + 64), &v85, 0);
        HIDWORD(v85) = 0;
        sub_A1F0A0((__int64)a1, (__int64)"RetainCountConvention", m128i_i64 + 68, (__int64 *)&v85, 0);
        LODWORD(v85) = 0;
        sub_A1CEB0((__int64)a1, (_DWORD *)(m128i_i64 + 80), &v85);
        v85 = &byte_22CD811;
        v86 = 0;
        sub_A1F410(a1, (__int64)"AvailabilityMsg", m128i_i64 + 88, (__int64)&v85, 0);
        BYTE1(v85) = 0;
        sub_A1F2C0(a1, (__int64)"SwiftPrivate", m128i_i64 + 104, &v85, 0);
        v85 = &byte_22CD811;
        v86 = 0;
        sub_A1F410(a1, (__int64)"SwiftName", m128i_i64 + 112, (__int64)&v85, 0);
        v85 = &byte_22CD811;
        v86 = 0;
        sub_A1F410(a1, (__int64)"ResultType", m128i_i64 + 144, (__int64)&v85, 0);
        v85 = &byte_22CD811;
        v86 = 0;
        sub_A1F410(a1, (__int64)"SwiftReturnOwnership", m128i_i64 + 160, (__int64)&v85, 0);
        (*(void (__fastcall **)(__int64 *))(*a1 + 112))(a1);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v83);
        if ( v78 == v4 )
          return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
      }
      else if ( v78 == v4 )
      {
        return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
      }
      v4 = v77;
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
}

