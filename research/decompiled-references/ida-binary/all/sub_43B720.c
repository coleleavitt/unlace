__int64 __fastcall diff_any_action_t__::vfunc_0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v10; // rbx
  unsigned int v11; // eax
  unsigned int v12; // r12d
  __int64 v14; // r13
  size_t v15; // r12
  size_t v16; // r12
  int v17; // eax
  size_t v18; // r14
  const char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 *v23; // rax
  __int64 v24; // rdi
  __m128 v25; // xmm0
  size_t v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // r15
  __int64 v34; // r14
  int v35; // r15d
  __int64 *v36; // rdi
  int v37; // r15d
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  __m128 v43; // xmm0
  unsigned int v44; // ebx
  const char *v45; // rdx
  const char *v46; // rdx
  unsigned __int64 v47; // r14
  const char *v48; // rdx
  const char *v49; // rsi
  double v50; // xmm4_8
  double v51; // xmm5_8
  const char *v52; // rdx
  const char *v53; // rdi
  __int64 *v54; // rax
  __int64 *v55; // r15
  void *v56; // rax
  __int64 v57; // rdi
  size_t v58; // r14
  __int64 *v59; // rax
  __int64 *v60; // r15
  const char *v61; // rdx
  __int64 v62; // rbx
  const char *v63; // rsi
  __int64 v64; // rbx
  __m128 v65; // xmm4
  __m128 v66; // xmm5
  char v67; // [rsp+0h] [rbp-140h]
  unsigned int v68; // [rsp+8h] [rbp-138h]
  int v69; // [rsp+Ch] [rbp-134h]
  __m128i v70; // [rsp+10h] [rbp-130h] BYREF
  __m128i v71; // [rsp+20h] [rbp-120h] BYREF
  __int16 v72; // [rsp+38h] [rbp-108h] BYREF
  unsigned __int16 v73; // [rsp+3Ah] [rbp-106h]
  unsigned int v74; // [rsp+3Ch] [rbp-104h] BYREF
  __int64 v75; // [rsp+40h] [rbp-100h] BYREF
  __int64 v76; // [rsp+48h] [rbp-F8h]
  void *src; // [rsp+50h] [rbp-F0h] BYREF
  __int128 v78; // [rsp+58h] [rbp-E8h]
  void *v79; // [rsp+70h] [rbp-D0h] BYREF
  __int128 v80; // [rsp+78h] [rbp-C8h]
  __int64 v81; // [rsp+90h] [rbp-B0h] BYREF
  __int128 v82; // [rsp+98h] [rbp-A8h]
  __int64 *v83; // [rsp+B0h] [rbp-90h] BYREF
  __m128 v84; // [rsp+B8h] [rbp-88h]
  const char *v85; // [rsp+D0h] [rbp-70h] BYREF
  __m128 v86; // [rsp+D8h] [rbp-68h]
  __int64 *v87; // [rsp+F0h] [rbp-50h] BYREF
  __m128i v88; // [rsp+F8h] [rbp-48h] BYREF
  unsigned __int64 v89; // [rsp+108h] [rbp-38h]

  v71.m128i_i64[0] = (__int64)a2;
  v89 = __readfsqword(0x28u);
  v10 = sub_426230(a1, a2);
  LOBYTE(v11) = sub_4175A0((__int64)v10);
  v12 = v11;
  if ( !(_BYTE)v11 )
    return v12;
  v14 = *(_QWORD *)a2;
  src = nullptr;
  v78 = 0;
  v15 = *(_QWORD *)(v14 + 8);
  if ( v15 )
  {
    v56 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 8));
    *((_QWORD *)&v78 + 1) = v15;
    src = v56;
    memcpy(v56, *(const void **)v14, v15);
    *(_QWORD *)&v78 = v15;
    v14 = *(_QWORD *)v71.m128i_i64[0];
  }
  v79 = nullptr;
  v80 = 0;
  v16 = *(_QWORD *)(v14 + 8);
  if ( v16 )
  {
    v79 = (void *)qalloc_or_throw(*(_QWORD *)(v14 + 8));
    *((_QWORD *)&v80 + 1) = v16;
    memcpy(v79, *(const void **)v14, v16);
    *(_QWORD *)&v80 = v16;
    v14 = *(_QWORD *)v71.m128i_i64[0];
  }
  v17 = *(_DWORD *)(v14 + 32);
  v81 = 0;
  v82 = 0;
  v88 = 0;
  v18 = *(_QWORD *)(v14 + 8);
  v69 = v17;
  if ( v18 )
  {
    v54 = (__int64 *)qalloc_or_throw(v18);
    v88.m128i_i64[1] = v18;
    v55 = v54;
    memcpy(v54, *(const void **)v14, v18);
    v19 = (const char *)&v87;
    v88.m128i_i64[0] = v18;
    v87 = v55;
    LOBYTE(v18) = sub_437350((const char *)&v81, (__int64)&v87, 0xFFFFFFFD);
    if ( v55 )
      qfree(v55, (const char *)&v87);
  }
  else
  {
    v87 = nullptr;
    v19 = (const char *)&v87;
    v18 = (unsigned __int8)sub_437350((const char *)&v81, (__int64)&v87, 0xFFFFFFFD);
  }
  if ( (_BYTE)v18 )
  {
    v20 = v81;
    v74 = *(_DWORD *)(v81 + 60);
    if ( v81 )
    {
      v21 = v82;
      if ( (_QWORD)v82 )
      {
        v22 = 0;
        do
        {
          v23 = (__int64 *)(v20 + 80 * v22);
          v24 = *v23;
          if ( *v23 )
          {
            v23[1] = 0;
            qfree(v24, (const char *)&v87);
            v20 = v81;
          }
          ++v22;
        }
        while ( v21 != v22 );
      }
      *(_QWORD *)&v82 = 0;
      qfree(v20, (const char *)&v87);
      v81 = 0;
      *((_QWORD *)&v82 + 1) = 0;
    }
    v25 = 0;
    v88 = 0;
    v26 = *(_QWORD *)(*(_QWORD *)v71.m128i_i64[0] + 8LL);
    if ( v26 )
    {
      v57 = *(_QWORD *)(*(_QWORD *)v71.m128i_i64[0] + 8LL);
      v71.m128i_i64[0] = *(_QWORD *)v71.m128i_i64[0];
      v58 = v26;
      v59 = (__int64 *)qalloc_or_throw(v57);
      v88.m128i_i64[1] = v58;
      v60 = v59;
      memcpy(v59, *(const void **)v71.m128i_i64[0], v58);
      v19 = (const char *)&v87;
      v88.m128i_i64[0] = v58;
      v87 = v60;
      v70.m128i_i8[0] = sub_437350((const char *)&v81, (__int64)&v87, 0xFFFFFFFE);
      if ( v60 )
        *(double *)v25.m128_u64 = qfree(v60, (const char *)&v87);
    }
    else
    {
      v19 = (const char *)&v87;
      v87 = nullptr;
      v70.m128i_i8[0] = sub_437350((const char *)&v81, (__int64)&v87, 0xFFFFFFFE);
    }
    if ( v70.m128i_i8[0] )
    {
      v72 = v74 != v69;
      v32 = *(_DWORD *)sub_4180E0((__int64)v10);
      v33 = v81;
      v75 = v69;
      v73 = v32;
      v76 = v69;
      v34 = v81 + 80 * v82;
      if ( v34 == v81 )
      {
        sub_4180E0((__int64)v10);
      }
      else
      {
        while ( 1 )
        {
          v71.m128i_i32[0] = *(_DWORD *)(v33 + 60);
          if ( v71.m128i_i32[0] == *(_DWORD *)(sub_4180E0((__int64)v10) + 4) )
            break;
          v33 += 80;
          if ( v33 == v34 )
          {
            v70.m128i_i8[0] = 0;
            break;
          }
        }
        if ( *(_DWORD *)sub_4180E0((__int64)v10) == 1 && v70.m128i_i8[0] )
          v76 = *(int *)(sub_4180E0((__int64)v10) + 4);
      }
      v71.m128i_i64[0] = (__int64)&v79;
      v19 = (const char *)sub_433E30;
      if ( (unsigned int)sub_1697D0(
                           (int)off_8BDEC8,
                           (__int64)sub_433E30,
                           (__int64)&v74,
                           (__int64)&src,
                           (__int64)&v75,
                           (__int64)&v72,
                           v25,
                           a4,
                           a5,
                           a6,
                           v65,
                           v66,
                           a9,
                           a10,
                           (char)&v79) == 1 )
      {
        v35 = v73;
        *(_DWORD *)sub_4180E0((__int64)v10) = v35;
        v36 = v10;
        v37 = v76;
        *(_DWORD *)(sub_4180E0((__int64)v10) + 4) = v37;
        v43 = 0;
        v83 = nullptr;
        v85 = nullptr;
        v84 = 0;
        v86 = 0;
        if ( v72 == 1 )
        {
          v61 = &s1;
          v68 = v75;
          if ( (_QWORD)v78 )
            v61 = (const char *)src;
          v36 = (__int64 *)&v83;
          v19 = "%s#%d";
          sub_169A50((__int64 *)&v83, (__int64)"%s#%d", v61, v75);
          v44 = v74;
        }
        else if ( v72 == 2 )
        {
          v19 = (const char *)sub_426230(v10, (const char *)sub_433E30);
          sub_417500((__int64)&v87, (__int64)v19, (__int64)&src);
          v36 = v83;
          v43 = 0;
          v62 = (__int64)v87;
          v87 = nullptr;
          a4 = (__m128)_mm_loadu_si128(&v88);
          v88 = 0;
          if ( v83 )
          {
            v70 = (__m128i)a4;
            v84.m128_u64[0] = 0;
            *(double *)v43.m128_u64 = qfree(v83, v19);
            v36 = v87;
            a4 = (__m128)_mm_load_si128(&v70);
            v83 = (__int64 *)v62;
            v84 = a4;
            if ( v87 )
            {
              v88.m128i_i64[0] = 0;
              *(double *)v43.m128_u64 = qfree(v87, v19, *(double *)v43.m128_u64);
            }
          }
          else
          {
            v83 = (__int64 *)v62;
            v84 = a4;
          }
          v68 = -4;
          v44 = v74;
        }
        else
        {
          v44 = v74;
          if ( !v72 )
          {
            v45 = &s1;
            if ( (_QWORD)v78 )
              v45 = (const char *)src;
            v36 = (__int64 *)&v83;
            v19 = "%s#%d";
            sub_169A50((__int64 *)&v83, (__int64)"%s#%d", v45, v74);
            v68 = v44;
            v44 = v74;
          }
        }
        if ( v73 == 1 )
        {
          v44 = v76;
        }
        else
        {
          if ( v73 == 2 )
          {
            v63 = (const char *)sub_426230(v36, v19);
            sub_417500((__int64)&v87, (__int64)v63, v71.m128i_i64[0]);
            v43 = (__m128)_mm_loadu_si128(&v88);
            a4 = 0;
            v64 = (__int64)v87;
            v88 = 0;
            v87 = nullptr;
            v47 = v43.m128_u64[0];
            if ( v85 )
            {
              v71 = (__m128i)v43;
              v86.m128_u64[0] = 0;
              qfree(v85, v63);
              v85 = (const char *)v64;
              v43 = (__m128)_mm_load_si128(&v71);
              v86 = v43;
              if ( v87 )
              {
                v88.m128i_i64[0] = 0;
                *(double *)v43.m128_u64 = qfree(v87, v63);
                v47 = v86.m128_u64[0];
              }
            }
            else
            {
              v85 = (const char *)v64;
              v86 = v43;
            }
            v44 = -4;
            goto LABEL_53;
          }
          if ( v73 )
          {
LABEL_52:
            v47 = v86.m128_u64[0];
LABEL_53:
            v48 = &s1;
            if ( v47 )
              v48 = v85;
            v49 = &s1;
            if ( v84.m128_u64[0] )
              v49 = (const char *)v83;
            sub_169700(
              (int)"Comparing %s vs. %s\n",
              (__int64)v49,
              (__int64)v48,
              v38,
              v39,
              v40,
              v43,
              a4,
              a5,
              a6,
              v41,
              v42,
              a9,
              a10,
              v67);
            v52 = &s1;
            if ( (_QWORD)v80 )
              v52 = (const char *)v79;
            v53 = &s1;
            if ( (_QWORD)v78 )
              v53 = (const char *)src;
            v19 = (const char *)v68;
            v12 = sub_434EE0(
                    v53,
                    (const char *)v68,
                    (__int64)v52,
                    v44,
                    *(double *)v43.m128_u64,
                    a4,
                    a5,
                    a6,
                    v50,
                    v51,
                    a9,
                    a10);
            if ( v85 )
            {
              v86.m128_u64[0] = 0;
              *(double *)v43.m128_u64 = qfree(v85, (const char *)v68);
            }
            if ( v83 )
            {
              v84.m128_u64[0] = 0;
              qfree(v83, (const char *)v68, *(double *)v43.m128_u64);
            }
            goto LABEL_21;
          }
        }
        v46 = &s1;
        if ( (_QWORD)v80 )
          v46 = (const char *)v79;
        sub_169A50((__int64 *)&v85, (__int64)"%s#%d", v46, v44);
        goto LABEL_52;
      }
    }
  }
  v12 = 0;
LABEL_21:
  v27 = v81;
  if ( v81 )
  {
    v28 = v82;
    if ( (_QWORD)v82 )
    {
      v29 = 0;
      do
      {
        v30 = (__int64 *)(v27 + 80 * v29);
        v31 = *v30;
        if ( *v30 )
        {
          v30[1] = 0;
          qfree(v31, v19);
          v27 = v81;
        }
        ++v29;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v82 = 0;
    qfree(v27, v19);
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79, v19);
  }
  if ( src )
  {
    *(_QWORD *)&v78 = 0;
    qfree(src, v19);
  }
  return v12;
}
