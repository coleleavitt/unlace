__int64 __fastcall checkout_for_cvt64_action_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 (__fastcall **a10)())
{
  const char *v11; // rdx
  const char *v12; // rsi
  unsigned int v13; // r12d
  __int64 *v15; // r12
  __int64 (__fastcall *v16)(__int64); // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 (*v19)(); // rdx
  unsigned int v20; // eax
  __int64 (__fastcall *v21)(); // rax
  __int64 (__fastcall *v22)(); // r8
  __int64 (__fastcall *v23)(); // r14
  __int64 (__fastcall **v24)(); // r15
  __m128i v25; // xmm0
  char *v26; // rax
  const char *v27; // r15
  size_t v28; // r13
  unsigned __int64 v29; // rdi
  __m128i v30; // xmm0
  char *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r8
  __int64 (*v34)(); // rax
  __m128 v35; // xmm0
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __m128 v41; // xmm4
  __m128 v42; // xmm5
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdi
  const char *v47; // rdx
  __int64 v48; // r14
  __int64 v49; // rbx
  const char *v50; // rax
  __int64 v51; // rdi
  const char *v52; // rsi
  __int64 v53; // rax
  char v54; // al
  __m128i v55; // [rsp+0h] [rbp-110h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+10h] [rbp-100h]
  __m128i v57; // [rsp+18h] [rbp-F8h] BYREF
  unsigned int v58; // [rsp+2Ch] [rbp-E4h] BYREF
  const char *v59; // [rsp+30h] [rbp-E0h] BYREF
  __int64 v60; // [rsp+38h] [rbp-D8h]
  const char *v61; // [rsp+50h] [rbp-C0h] BYREF
  __int128 v62; // [rsp+58h] [rbp-B8h]
  __int64 v63; // [rsp+70h] [rbp-A0h] BYREF
  __int128 v64; // [rsp+78h] [rbp-98h]
  __int64 (__fastcall **v65)(); // [rsp+90h] [rbp-80h] BYREF
  _BYTE v66[24]; // [rsp+98h] [rbp-78h] BYREF
  __int64 v67; // [rsp+B0h] [rbp-60h]
  __int128 v68; // [rsp+B8h] [rbp-58h]
  __int64 v69; // [rsp+C8h] [rbp-48h]
  unsigned __int64 v70; // [rsp+D8h] [rbp-38h]

  v70 = __readfsqword(0x28u);
  v65 = a10;
  sub_43C060((__int64)&v59, (__int64)&v65);
  v11 = &s1;
  if ( v60 )
    v11 = v59;
  v12 = "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to convert these files to i64?\n%s";
  if ( (unsigned int)sub_1698A0(
                       1,
                       (int)"AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to convert these files to i64?\n%s",
                       v11) != 1 )
    goto LABEL_4;
  v55.m128i_i64[1] = (__int64)sub_426230(
                                1,
                                "AUTOHIDE REGISTRY\nHIDECANCEL\nDo you really want to convert these files to i64?\n%s");
  v15 = (__int64 *)sub_417080(v55.m128i_i64[1]);
  v16 = *(__int64 (__fastcall **)(__int64))(*v15 + 256);
  if ( v16 == vault_with_events_t__::vfunc_32 )
  {
    v17 = v15[1];
    if ( v17 )
    {
      v18 = *(_QWORD *)v17;
      v19 = *(__int64 (**)())(*(_QWORD *)v17 + 480LL);
      if ( v19 == sub_178B60 )
      {
LABEL_11:
        v20 = (*(__int64 (__fastcall **)(__int64, unsigned int *, const char *))(v18 + 224))(
                v17,
                &v58,
                "idb->i64 conversion");
        goto LABEL_12;
      }
      if ( !(unsigned __int8)v19() )
      {
        v17 = v15[1];
        v18 = *(_QWORD *)v17;
        goto LABEL_11;
      }
    }
    v20 = 52;
    goto LABEL_53;
  }
  v20 = ((__int64 (__fastcall *)(__int64 *, unsigned int *, const char *))v16)(v15, &v58, "idb->i64 conversion");
LABEL_12:
  if ( v20 )
  {
LABEL_53:
    v12 = "Failed to add worklist";
    sub_4168C0(v20, (__int64)"Failed to add worklist");
LABEL_4:
    v13 = 0;
    goto LABEL_5;
  }
  v21 = a10[1];
  v22 = *a10;
  v61 = nullptr;
  v62 = 0;
  v23 = v22;
  v56 = (__int64 (__fastcall *)())((char *)v22 + 48 * (_QWORD)v21);
  if ( v56 != v22 )
  {
    do
    {
      while ( 1 )
      {
        v27 = &s1;
        if ( *((_QWORD *)v23 + 1) )
          v27 = *(const char **)v23;
        v65 = nullptr;
        *(_OWORD *)v66 = 0;
        if ( v27 )
        {
          v28 = strlen(v27);
          v57.m128i_i64[0] = v28 + 1;
          v65 = (__int64 (__fastcall **)())qvector_reserve(&v65, 0, v28 + 1, 1);
          *(_QWORD *)v66 = v57.m128i_i64[0];
          memmove(v65, v27, v28);
          *((_BYTE *)v65 + v28) = 0;
        }
        v53 = v62;
        v52 = v61;
        v29 = v62 + 1;
        if ( &v65 < (__int64 (__fastcall ***)())v61
          || &v65 >= (__int64 (__fastcall ***)())&v61[24 * *((_QWORD *)&v62 + 1)] )
        {
          break;
        }
        a3 = 0;
        v24 = v65;
        v25 = _mm_loadl_epi64((const __m128i *)v66);
        v65 = nullptr;
        a2 = (__m128)_mm_loadl_epi64((const __m128i *)&v66[8]);
        *(_OWORD *)v66 = 0;
        if ( *((_QWORD *)&v62 + 1) < v29 )
        {
          v55.m128i_i64[0] = a2.m128_u64[0];
          v57.m128i_i64[0] = v25.m128i_i64[0];
          v61 = (const char *)qvector_reserve(&v61, v61, v62 + 1, 24);
          v52 = v61;
          a2 = (__m128)_mm_loadl_epi64(&v55);
          v25 = _mm_loadl_epi64(&v57);
          v53 = v62;
        }
        v26 = (char *)&v52[24 * v53];
        *(_QWORD *)v26 = v24;
        *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v25, (__m128i)a2);
        *(_QWORD *)&v62 = v62 + 1;
        if ( v65 )
        {
          *(_QWORD *)v66 = 0;
          qfree(v65, v52);
        }
        v23 = (__int64 (__fastcall *)())((char *)v23 + 48);
        if ( v56 == v23 )
          goto LABEL_29;
      }
      if ( *((_QWORD *)&v62 + 1) < v29 )
      {
        v61 = (const char *)qvector_reserve(&v61, v61, v62 + 1, 24);
        v52 = v61;
        v53 = v62;
      }
      v30 = _mm_loadu_si128((const __m128i *)v66);
      v23 = (__int64 (__fastcall *)())((char *)v23 + 48);
      v31 = (char *)&v52[24 * v53];
      *(_QWORD *)v31 = v65;
      *(__m128i *)(v31 + 8) = v30;
      *(_QWORD *)&v62 = v62 + 1;
    }
    while ( v56 != v23 );
  }
LABEL_29:
  v65 = &local_site_t___vtable;
  memset(v66, 0, sizeof(v66));
  v67 = 0;
  v69 = 0;
  v68 = 0;
  sub_417360(v55.m128i_i64[1], &v65);
  v32 = v15[1];
  if ( !v32
    || (v33 = v58, v34 = *(__int64 (**)())(*(_QWORD *)v32 + 480LL), v34 != sub_178B60)
    && (v57.m128i_i32[0] = v58, v54 = v34(), v33 = v57.m128i_u32[0], v54) )
  {
    LODWORD(v37) = 52;
LABEL_56:
    sub_416980(v37, (__int64)"Failed cvt64");
    goto LABEL_40;
  }
  v35 = 0;
  v64 = 0;
  v36 = v15[1];
  v63 = 0;
  v37 = (*(unsigned int (__fastcall **)(__int64, __int64 *, __int64 (__fastcall ***)(), const char **, __int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 448LL))(
          v36,
          &v63,
          &v65,
          &v61,
          v33,
          0,
          0);
  v12 = (const char *)v37;
  (*(void (__fastcall **)(__int64 *, __int64, __int64 *))(*v15 + 24))(v15, v37, &v63);
  v43 = v63;
  if ( v63 )
  {
    v57.m128i_i64[0] = v64;
    if ( (_QWORD)v64 )
    {
      v44 = 0;
      do
      {
        v45 = v43 + 32 * v44;
        v46 = *(_QWORD *)(v45 + 8);
        if ( v46 )
        {
          *(_QWORD *)(v45 + 16) = 0;
          qfree(v46, (const char *)v37);
          v43 = v63;
        }
        ++v44;
      }
      while ( v57.m128i_i64[0] != v44 );
    }
    *(_QWORD *)&v64 = 0;
    *(double *)v35.m128_u64 = qfree(v43, (const char *)v37);
  }
  if ( (_DWORD)v37 == 1 )
  {
    sub_169700(
      (int)"The current operation was canceled\n",
      v37,
      v43,
      v38,
      v39,
      v40,
      v35,
      a2,
      a3,
      a4,
      v41,
      v42,
      a7,
      a8,
      v55.m128i_i8[0]);
    v13 = 0;
    goto LABEL_41;
  }
  if ( (_DWORD)v37 )
    goto LABEL_56;
LABEL_40:
  v12 = (const char *)v58;
  v13 = sub_4344A0(v15, v58);
LABEL_41:
  v69 = 0;
  v65 = &local_site_t___vtable;
  if ( v67 )
  {
    *(_QWORD *)&v68 = 0;
    qfree(v67, v12);
  }
  if ( *(_QWORD *)v66 )
  {
    *(_QWORD *)&v66[8] = 0;
    qfree(*(_QWORD *)v66, v12);
  }
  v47 = v61;
  if ( v61 )
  {
    v48 = v62;
    if ( (_QWORD)v62 )
    {
      v49 = 0;
      do
      {
        v50 = &v47[24 * v49];
        v51 = *(_QWORD *)v50;
        if ( *(_QWORD *)v50 )
        {
          *((_QWORD *)v50 + 1) = 0;
          qfree(v51, v12);
          v47 = v61;
        }
        ++v49;
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&v62 = 0;
    qfree(v47, v12);
  }
LABEL_5:
  if ( v59 )
  {
    v60 = 0;
    qfree(v59, v12);
  }
  return v13;
}
