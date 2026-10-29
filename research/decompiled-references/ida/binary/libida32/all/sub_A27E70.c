__int64 __fastcall sub_A27E70(__int64 *a1, __int64 *a2)
{
  int v3; // ebx
  unsigned __int64 v4; // r13
  char i; // al
  unsigned __int64 v6; // rax
  char *v7; // r12
  __int64 v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 v12; // r14
  __int64 v14; // r14
  __int64 v15; // rax
  const void *v16; // rax
  __int64 v17; // rdx
  unsigned __int8 (__fastcall *v18)(__int64 *, char *, _BOOL8); // r14
  char v19; // al
  _BOOL8 v20; // rdx
  unsigned __int8 (__fastcall *v21)(__int64 *, const char *, _BOOL8); // r14
  char v22; // al
  _BOOL8 v23; // rdx
  unsigned __int8 (__fastcall *v24)(__int64 *, const char *, _BOOL8); // r14
  char v25; // al
  _BOOL8 v26; // rdx
  unsigned __int8 (__fastcall *v27)(__int64 *, const char *, _BOOL8); // r14
  char v28; // al
  _BOOL8 v29; // rdx
  unsigned __int8 (__fastcall *v30)(__int64 *, const char *, _BOOL8); // r14
  char v31; // al
  _BOOL8 v32; // rdx
  unsigned __int8 (__fastcall *v33)(__int64 *, const char *, _BOOL8); // r14
  char v34; // al
  _BOOL8 v35; // rdx
  unsigned __int8 (__fastcall *v36)(__int64 *, const char *, _BOOL8); // r14
  char v37; // al
  _BOOL8 v38; // rdx
  unsigned __int64 v39; // r8
  char *v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rdi
  char v43; // al
  int v44; // edx
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r12
  char *v47; // rdx
  __int64 v48; // rsi
  unsigned __int64 v49; // rax
  __int64 v50; // r13
  char *v51; // rax
  unsigned __int64 v52; // r8
  char *v53; // r8
  void *v54; // rdi
  unsigned __int64 v55; // rbp
  char *v56; // rdx
  char *v57; // rdi
  __int64 v58; // rdx
  bool v59; // cf
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r13
  __int64 v62; // rax
  char *v63; // rdx
  char *v64; // rdi
  __int64 v65; // rdx
  const __m128i *v66; // r8
  __m128i *v67; // rdi
  const __m128i *j; // rax
  __m128i v69; // xmm0
  unsigned __int64 v70; // rdx
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rdi
  __int64 v73; // rax
  unsigned __int64 v74; // r8
  char *v75; // rbx
  char *v76; // rsi
  void *v77; // rdi
  __int64 v78; // r12
  __int64 v79; // rbx
  __int64 v80; // rbp
  __m128i *v81; // rsi
  __int16 v82; // dx
  __int64 v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // r12
  __int64 v96; // rdi
  __int64 v97; // [rsp+0h] [rbp-D8h]
  size_t n; // [rsp+10h] [rbp-C8h]
  int nb; // [rsp+10h] [rbp-C8h]
  size_t na; // [rsp+10h] [rbp-C8h]
  __int64 v101; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v102; // [rsp+18h] [rbp-C0h]
  unsigned int v103; // [rsp+20h] [rbp-B8h]
  _QWORD *v105; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v106; // [rsp+38h] [rbp-A0h]
  __int64 v107; // [rsp+40h] [rbp-98h]
  unsigned __int64 v108; // [rsp+48h] [rbp-90h]
  char v109; // [rsp+56h] [rbp-82h] BYREF
  char v110; // [rsp+57h] [rbp-81h] BYREF
  __int64 v111; // [rsp+58h] [rbp-80h] BYREF
  __int64 v112; // [rsp+60h] [rbp-78h] BYREF
  __int64 v113; // [rsp+68h] [rbp-70h] BYREF
  __m128i v114; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v115[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v116; // [rsp+90h] [rbp-48h]

  v3 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
    v3 = -84215045 * ((a2[1] - *a2) >> 3);
  if ( v3 )
  {
    v4 = 0;
    v97 = (unsigned int)(v3 - 1);
    for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, 0, &v111);
          ;
          i = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(a1, (unsigned int)v6, &v111) )
    {
      if ( !i )
      {
        v6 = v4 + 1;
        if ( v97 == v4 )
          return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
        goto LABEL_6;
      }
      v7 = (char *)a2[1];
      v8 = *a2;
      v9 = (__int64)&v7[-*a2];
      v10 = 0xFAFAFAFAFAFAFAFBLL * (v9 >> 3);
      if ( v10 <= v4 )
      {
        v39 = v4 + 1;
        if ( v10 < v4 + 1 )
        {
          v55 = v39 - v10;
          if ( v39 != v10 )
          {
            if ( v55 > 0xFAFAFAFAFAFAFAFBLL * ((a2[2] - (__int64)v7) >> 3) )
            {
              if ( v55 > 0xA0A0A0A0A0A0A0LL - v10 )
LABEL_151:
                std::__throw_length_error("vector::_M_default_append");
              v70 = v39 - v10;
              if ( v10 >= v55 )
                v70 = 0xFAFAFAFAFAFAFAFBLL * ((a2[1] - *a2) >> 3);
              v59 = __CFADD__(v70, v10);
              v71 = v70 - 0x505050505050505LL * ((a2[1] - *a2) >> 3);
              if ( v59 )
              {
                na = -256;
                v72 = -256;
              }
              else
              {
                if ( v71 > 0xA0A0A0A0A0A0A0LL )
                  v71 = 0xA0A0A0A0A0A0A0LL;
                na = 408 * v71;
                v72 = 408 * v71;
              }
              v73 = operator new(v72);
              v74 = v4 + 1;
              v75 = (char *)(v73 + v9);
              v8 = v73;
              v76 = &v75[408 * v55];
              do
              {
                v77 = v75;
                v75 += 408;
                memset(v77, 0, 0x198u);
              }
              while ( v75 != v76 );
              v78 = a2[1];
              v79 = *a2;
              if ( v78 != *a2 )
              {
                v80 = v73;
                do
                {
                  *(__m128i *)v80 = _mm_loadu_si128((const __m128i *)v79);
                  *(__m128i *)(v80 + 16) = _mm_loadu_si128((const __m128i *)(v79 + 16));
                  *(_QWORD *)(v80 + 32) = *(_QWORD *)(v79 + 32);
                  *(__m128i *)(v80 + 40) = _mm_loadu_si128((const __m128i *)(v79 + 40));
                  *(_WORD *)(v80 + 56) = *(_WORD *)(v79 + 56);
                  *(__m128i *)(v80 + 64) = _mm_loadu_si128((const __m128i *)(v79 + 64));
                  *(_QWORD *)(v80 + 80) = *(_QWORD *)(v79 + 80);
                  *(__m128i *)(v80 + 88) = _mm_loadu_si128((const __m128i *)(v79 + 88));
                  *(_QWORD *)(v80 + 104) = *(_QWORD *)(v79 + 104);
                  sub_9FD150((__m128i *)(v80 + 112), (__m128i *)(v79 + 112));
                  sub_9FD150((__m128i *)(v80 + 152), (__m128i *)(v79 + 152));
                  sub_9FD150((__m128i *)(v80 + 192), (__m128i *)(v79 + 192));
                  sub_9FD150((__m128i *)(v80 + 232), (__m128i *)(v79 + 232));
                  v81 = (__m128i *)(v79 + 272);
                  v79 += 408;
                  sub_9FD150((__m128i *)(v80 + 272), v81);
                  v80 += 408;
                  *(_QWORD *)(v80 - 96) = *(_QWORD *)(v79 - 96);
                  *(_WORD *)(v80 - 88) = *(_WORD *)(v79 - 88);
                  *(_QWORD *)(v80 - 84) = *(_QWORD *)(v79 - 84);
                  *(_WORD *)(v80 - 76) = *(_WORD *)(v79 - 76);
                  v82 = *(_WORD *)(v79 - 74);
                  *(_QWORD *)(v80 - 64) = 0;
                  *(_WORD *)(v80 - 74) = v82;
                  *(_QWORD *)(v80 - 56) = 0;
                  *(_QWORD *)(v80 - 72) = 0;
                  *(_QWORD *)(v80 - 72) = *(_QWORD *)(v79 - 72);
                  v83 = *(_QWORD *)(v79 - 64);
                  *(_QWORD *)(v79 - 72) = 0;
                  v84 = *(_QWORD *)(v80 - 64);
                  *(_QWORD *)(v80 - 64) = v83;
                  v85 = *(_QWORD *)(v79 - 56);
                  *(_QWORD *)(v79 - 64) = v84;
                  v86 = *(_QWORD *)(v80 - 56);
                  *(_QWORD *)(v80 - 56) = v85;
                  *(_QWORD *)(v79 - 56) = v86;
                  *(_QWORD *)(v80 - 48) = 0;
                  *(_QWORD *)(v80 - 40) = 0;
                  *(_QWORD *)(v80 - 32) = 0;
                  *(_QWORD *)(v80 - 48) = *(_QWORD *)(v79 - 48);
                  v87 = *(_QWORD *)(v79 - 40);
                  *(_QWORD *)(v79 - 48) = 0;
                  v88 = *(_QWORD *)(v80 - 40);
                  *(_QWORD *)(v80 - 40) = v87;
                  v89 = *(_QWORD *)(v79 - 32);
                  *(_QWORD *)(v79 - 40) = v88;
                  v90 = *(_QWORD *)(v80 - 32);
                  *(_QWORD *)(v80 - 32) = v89;
                  *(_QWORD *)(v79 - 32) = v90;
                  *(_QWORD *)(v80 - 16) = 0;
                  *(_QWORD *)(v80 - 8) = 0;
                  *(_QWORD *)(v80 - 24) = 0;
                  *(_QWORD *)(v80 - 24) = *(_QWORD *)(v79 - 24);
                  v91 = *(_QWORD *)(v79 - 16);
                  *(_QWORD *)(v79 - 24) = 0;
                  v92 = *(_QWORD *)(v80 - 16);
                  *(_QWORD *)(v80 - 16) = v91;
                  v93 = *(_QWORD *)(v79 - 8);
                  *(_QWORD *)(v79 - 16) = v92;
                  v94 = *(_QWORD *)(v80 - 8);
                  *(_QWORD *)(v80 - 8) = v93;
                  *(_QWORD *)(v79 - 8) = v94;
                }
                while ( v78 != v79 );
                v74 = v4 + 1;
                v95 = a2[1];
                v79 = *a2;
                if ( v95 != *a2 )
                {
                  do
                  {
                    v96 = v79;
                    v79 += 408;
                    sub_A1CA30(v96);
                  }
                  while ( v95 != v79 );
                  v74 = v4 + 1;
                  v79 = *a2;
                }
              }
              if ( v79 )
              {
                v102 = v74;
                operator delete((void *)v79);
                v74 = v102;
              }
              *a2 = v8;
              a2[1] = v8 + 408 * v74;
              a2[2] = v8 + na;
            }
            else
            {
              v56 = &v7[408 * v55];
              do
              {
                v57 = v7;
                v7 += 408;
                memset(v57, 0, 0x198u);
              }
              while ( v7 != v56 );
              a2[1] = (__int64)v7;
              v8 = *a2;
            }
          }
        }
        else if ( v10 > v4 + 1 )
        {
          v40 = (char *)(v8 + 408 * v39);
          if ( v7 != v40 )
          {
            v41 = v8 + 408 * v39;
            do
            {
              v42 = v41;
              v41 += 408;
              sub_A1CA30(v42);
            }
            while ( v7 != (char *)v41 );
            a2[1] = (__int64)v40;
            v8 = *a2;
          }
        }
      }
      (*(void (__fastcall **)(__int64 *))(*a1 + 104))(a1);
      v11 = v8 + 408 * v4;
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, __int64 *, __m128i *))(*a1 + 120))(
             a1,
             "Name",
             1,
             0,
             &v113,
             &v114) )
      {
        sub_A1E350(a1, v11);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v114.m128i_i64[0]);
      }
      v114.m128i_i32[0] = 0;
      sub_A1CEB0((__int64)a1, (_DWORD *)(v11 + 16), &v114);
      v114.m128i_i64[0] = (__int64)&byte_22CD811;
      v114.m128i_i64[1] = 0;
      sub_A1F410(a1, (__int64)"AvailabilityMsg", v11 + 24, (__int64)&v114, 0);
      v114.m128i_i8[1] = 0;
      sub_A1F2C0(a1, (__int64)"SwiftPrivate", v11 + 56, &v114, 0);
      v114.m128i_i64[0] = (__int64)&byte_22CD811;
      v114.m128i_i64[1] = 0;
      sub_A1F410(a1, (__int64)"SwiftName", v11 + 40, (__int64)&v114, 0);
      v115[0] = 0;
      sub_A1FA60(a1, (__int64)"SwiftBridge", v11 + 64, &v114, 0);
      v115[0] = 0;
      sub_A1FA60(a1, (__int64)"NSErrorDomain", v11 + 88, &v114, 0);
      v116 = 0;
      sub_A1FBD0(a1, (__int64)"SwiftImportAs", v11 + 112, (__int64)&v114, 0);
      if ( (_BYTE)v116 && (_QWORD *)v114.m128i_i64[0] != v115 )
        operator delete((void *)v114.m128i_i64[0]);
      v116 = 0;
      sub_A1FBD0(a1, (__int64)"SwiftReleaseOp", v11 + 192, (__int64)&v114, 0);
      if ( (_BYTE)v116 && (_QWORD *)v114.m128i_i64[0] != v115 )
        operator delete((void *)v114.m128i_i64[0]);
      v116 = 0;
      sub_A1FBD0(a1, (__int64)"SwiftRetainOp", v11 + 152, (__int64)&v114, 0);
      if ( (_BYTE)v116 && (_QWORD *)v114.m128i_i64[0] != v115 )
        operator delete((void *)v114.m128i_i64[0]);
      v116 = 0;
      sub_A1FBD0(a1, (__int64)"SwiftDefaultOwnership", v11 + 232, (__int64)&v114, 0);
      if ( (_BYTE)v116 && (_QWORD *)v114.m128i_i64[0] != v115 )
        operator delete((void *)v114.m128i_i64[0]);
      v116 = 0;
      sub_A1FBD0(a1, (__int64)"SwiftConformsTo", v11 + 272, (__int64)&v114, 0);
      if ( (_BYTE)v116 && (_QWORD *)v114.m128i_i64[0] != v115 )
        operator delete((void *)v114.m128i_i64[0]);
      v114.m128i_i32[1] = 0;
      sub_A1FED0(a1, (__int64)"EnumExtensibility", v11 + 312, v114.m128i_i64, 0);
      v114.m128i_i8[1] = 0;
      sub_A1F2C0(a1, (__int64)"FlagEnum", v11 + 320, &v114, 0);
      LOBYTE(v112) = 1;
      v12 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
      if ( v12 )
        v12 = *(_BYTE *)(v11 + 328) ^ 1;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1) )
      {
        if ( *(_BYTE *)(v11 + 328) )
          goto LABEL_47;
        *(_DWORD *)(v11 + 324) = 0;
        *(_BYTE *)(v11 + 328) = 1;
      }
      if ( !*(_BYTE *)(v11 + 328) )
        goto LABEL_32;
LABEL_47:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __int64 *))(*a1 + 120))(
              a1,
              "EnumKind",
              0,
              v12,
              &v112,
              &v113) )
      {
LABEL_32:
        if ( (_BYTE)v112 )
          *(_QWORD *)(v11 + 324) = v103;
        goto LABEL_34;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 16))(a1)
        && (v14 = sub_2254E80(a1), *(_DWORD *)(v14 + 32) == 1)
        && (n = j__strlen("<none>"),
            v15 = *(_QWORD *)(v14 + 80),
            v114.m128i_i64[0] = *(_QWORD *)(v14 + 72),
            v114.m128i_i64[1] = v15,
            v16 = (const void *)sub_A1D7F0((__int64)&v114, 32),
            n == v17)
        && (!n || !memcmp(v16, "<none>", n)) )
      {
        *(_QWORD *)(v11 + 324) = v103;
      }
      else
      {
        (*(void (__fastcall **)(__int64 *))(*a1 + 160))(a1);
        v18 = *(unsigned __int8 (__fastcall **)(__int64 *, char *, _BOOL8))(*a1 + 168);
        v19 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v20 = 0;
        if ( v19 )
          v20 = *(_DWORD *)(v11 + 324) == 0;
        if ( v18(a1, "none", v20) )
          *(_DWORD *)(v11 + 324) = 0;
        v21 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
        v22 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v23 = 0;
        if ( v22 )
          v23 = *(_DWORD *)(v11 + 324) == 1;
        if ( v21(a1, "CFEnum", v23) )
          *(_DWORD *)(v11 + 324) = 1;
        v24 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
        v25 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v26 = 0;
        if ( v25 )
          v26 = *(_DWORD *)(v11 + 324) == 1;
        if ( v24(a1, "NSEnum", v26) )
          *(_DWORD *)(v11 + 324) = 1;
        v27 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
        v28 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v29 = 0;
        if ( v28 )
          v29 = *(_DWORD *)(v11 + 324) == 2;
        if ( v27(a1, "CFOptions", v29) )
          *(_DWORD *)(v11 + 324) = 2;
        v30 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
        v31 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v32 = 0;
        if ( v31 )
          v32 = *(_DWORD *)(v11 + 324) == 2;
        if ( v30(a1, "NSOptions", v32) )
          *(_DWORD *)(v11 + 324) = 2;
        v33 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
        v34 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v35 = 0;
        if ( v34 )
          v35 = *(_DWORD *)(v11 + 324) == 3;
        if ( v33(a1, "CFClosedEnum", v35) )
          *(_DWORD *)(v11 + 324) = 3;
        v36 = *(unsigned __int8 (__fastcall **)(__int64 *, const char *, _BOOL8))(*a1 + 168);
        v37 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v38 = 0;
        if ( v37 )
          v38 = *(_DWORD *)(v11 + 324) == 3;
        if ( v36(a1, "NSClosedEnum", v38) )
          *(_DWORD *)(v11 + 324) = 3;
        (*(void (__fastcall **)(__int64 *))(*a1 + 184))(a1);
      }
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v113);
LABEL_34:
      v114.m128i_i8[1] = 0;
      sub_A1F2C0(a1, (__int64)"SwiftCopyable", v11 + 332, &v114, 0);
      v114.m128i_i8[1] = 0;
      sub_A1F2C0(a1, (__int64)"SwiftEscapable", v11 + 334, &v114, 0);
      if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1)
         || *(_QWORD *)(v11 + 344) != *(_QWORD *)(v11 + 336))
        && (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __m128i *))(*a1 + 120))(
             a1,
             "Methods",
             0,
             0,
             &v113,
             &v114) )
      {
        sub_A25770(a1, (const __m128i **)(v11 + 336));
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v114.m128i_i64[0]);
      }
      if ( (!(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1)
         || *(_QWORD *)(v11 + 368) != *(_QWORD *)(v11 + 360))
        && (*(unsigned __int8 (__fastcall **)(__int64 *, char *, _QWORD, _QWORD, char *, __int64 *))(*a1 + 120))(
             a1,
             "Fields",
             0,
             0,
             &v109,
             &v112) )
      {
        nb = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 24))(a1);
        v43 = (*(__int64 (__fastcall **)(__int64 *))(*a1 + 16))(a1);
        v44 = nb;
        if ( v43 )
          v44 = -1171354717 * ((__int64)(*(_QWORD *)(v11 + 368) - *(_QWORD *)(v11 + 360)) >> 3);
        v101 = (unsigned int)(v44 - 1);
        if ( v44 )
        {
          v105 = (_QWORD *)v11;
          v45 = 0;
          v106 = v4;
          while ( 1 )
          {
            v46 = v45 + 1;
            if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, __int64 *))(*a1 + 32))(
                   a1,
                   (unsigned int)v45,
                   &v113) )
            {
              v47 = (char *)v105[46];
              v48 = v105[45];
              v49 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)&v47[-v48] >> 3);
              if ( v45 >= v49 )
              {
                if ( v49 < v46 )
                {
                  v52 = v46 - v49;
                  if ( v46 != v49 )
                  {
                    if ( v52 > 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v105[47] - (_QWORD)v47) >> 3) )
                    {
                      if ( v52 > 0x2E8BA2E8BA2E8BALL - v49 )
                        goto LABEL_151;
                      v58 = v46 - v49;
                      if ( v49 >= v52 )
                        v58 = 0x2E8BA2E8BA2E8BA3LL * ((v105[46] - v48) >> 3);
                      v59 = __CFADD__(v58, v49);
                      v60 = v58 + v49;
                      if ( v59 )
                      {
                        v61 = -16;
                      }
                      else
                      {
                        if ( v60 > 0x2E8BA2E8BA2E8BALL )
                          v60 = 0x2E8BA2E8BA2E8BALL;
                        v61 = 88 * v60;
                      }
                      v108 = v52;
                      v107 = v105[46] - v48;
                      v62 = operator new(v61);
                      v48 = v62;
                      v63 = (char *)(v62 + v107);
                      do
                      {
                        v64 = v63;
                        v63 += 88;
                        memset(v64, 0, 0x58u);
                      }
                      while ( v63 != (char *)(v62 + v107 + 88 * v108) );
                      v65 = v62;
                      v66 = (const __m128i *)v105[46];
                      v67 = (__m128i *)v105[45];
                      for ( j = v67; v66 != j; *(_QWORD *)(v65 - 8) = j[-1].m128i_i64[1] )
                      {
                        v69 = _mm_loadu_si128(j);
                        j = (const __m128i *)((char *)j + 88);
                        v65 += 88;
                        *(__m128i *)(v65 - 88) = v69;
                        *(__m128i *)(v65 - 72) = _mm_loadu_si128((const __m128i *)((char *)j - 72));
                        *(__m128i *)(v65 - 56) = _mm_loadu_si128((const __m128i *)((char *)j - 56));
                        *(__m128i *)(v65 - 40) = _mm_loadu_si128((const __m128i *)((char *)j - 40));
                        *(__m128i *)(v65 - 24) = _mm_loadu_si128((const __m128i *)((char *)j - 24));
                      }
                      if ( v67 )
                        operator delete(v67);
                      v105[45] = v48;
                      v105[46] = v48 + 88 * v46;
                      v105[47] = v48 + v61;
                    }
                    else
                    {
                      v53 = &v47[88 * v52];
                      do
                      {
                        v54 = v47;
                        v47 += 88;
                        memset(v54, 0, 0x58u);
                      }
                      while ( v53 != v47 );
                      v105[46] = v53;
                    }
                  }
                }
                else if ( v49 > v46 )
                {
                  v51 = (char *)(v48 + 88 * v46);
                  if ( v47 != v51 )
                    v105[46] = v51;
                }
              }
              v50 = v48 + 88 * v45;
              (*(void (__fastcall **)(__int64 *))(*a1 + 104))(a1);
              if ( (*(unsigned __int8 (__fastcall **)(__int64 *, char *, __int64, _QWORD, char *, __m128i *))(*a1 + 120))(
                     a1,
                     "Name",
                     1,
                     0,
                     &v110,
                     &v114) )
              {
                sub_A1E350(a1, v50);
                (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v114.m128i_i64[0]);
              }
              v114.m128i_i8[1] = 0;
              sub_A1EF30((__int64)a1, (__int64)"Nullability", (_BYTE *)(v50 + 16), &v114, 0);
              v114.m128i_i32[0] = 0;
              sub_A1CEB0((__int64)a1, (_DWORD *)(v50 + 24), &v114);
              v114.m128i_i64[0] = (__int64)&byte_22CD811;
              v114.m128i_i64[1] = 0;
              sub_A1F410(a1, (__int64)"AvailabilityMsg", v50 + 32, (__int64)&v114, 0);
              v114.m128i_i8[1] = 0;
              sub_A1F2C0(a1, (__int64)"SwiftPrivate", v50 + 48, &v114, 0);
              v114.m128i_i64[0] = (__int64)&byte_22CD811;
              v114.m128i_i64[1] = 0;
              sub_A1F410(a1, (__int64)"SwiftName", v50 + 56, (__int64)&v114, 0);
              v114.m128i_i64[0] = (__int64)&byte_22CD811;
              v114.m128i_i64[1] = 0;
              sub_A1F410(a1, (__int64)"Type", v50 + 72, (__int64)&v114, 0);
              (*(void (__fastcall **)(__int64 *))(*a1 + 112))(a1);
              (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v113);
              if ( v45 == v101 )
              {
LABEL_101:
                v11 = (__int64)v105;
                v4 = v106;
                break;
              }
            }
            else if ( v45 == v101 )
            {
              goto LABEL_101;
            }
            ++v45;
          }
        }
        (*(void (__fastcall **)(__int64 *))(*a1 + 48))(a1);
        (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v112);
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 56))(a1)
        || *(_QWORD *)(v11 + 392) != *(_QWORD *)(v11 + 384) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64 *, const char *, _QWORD, _QWORD, __int64 *, __m128i *))(*a1 + 120))(
               a1,
               "Tags",
               0,
               0,
               &v113,
               &v114) )
        {
          sub_A27E70(a1, v11 + 384, &v112);
          (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 128))(a1, v114.m128i_i64[0]);
        }
      }
      (*(void (__fastcall **)(__int64 *))(*a1 + 112))(a1);
      (*(void (__fastcall **)(__int64 *, __int64))(*a1 + 40))(a1, v111);
      v6 = v4 + 1;
      if ( v97 == v4 )
        return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
LABEL_6:
      v4 = v6;
    }
  }
  return (*(__int64 (__fastcall **)(__int64 *))(*a1 + 48))(a1);
}

