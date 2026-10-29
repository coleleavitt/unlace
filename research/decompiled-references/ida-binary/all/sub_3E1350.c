__int64 __fastcall srcitem_node_t__::vfunc_3(
        __int64 a1,
        __int64 a2,
        const QT::QString *a3,
        __int64 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 result; // rax
  __int64 v15; // rsi
  char tinfo_property; // al
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  __int64 v23; // rcx
  const char *v24; // rbp
  size_t v25; // rax
  size_t v26; // r14
  size_t v27; // r13
  __m128 si128; // xmm0
  bool v29; // zf
  unsigned int v30; // eax
  __int64 v31; // rsi
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __m128 v43; // xmm4
  __m128 v44; // xmm5
  const char *v45; // rdx
  char v46; // al
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __m128 v51; // xmm4
  __m128 v52; // xmm5
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // r13d
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  __int64 custom_argloc; // rax
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  char *v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char v68; // [rsp+0h] [rbp-C8h]
  unsigned __int8 v69; // [rsp+Fh] [rbp-B9h]
  unsigned __int8 v70; // [rsp+Fh] [rbp-B9h]
  char v71; // [rsp+Fh] [rbp-B9h]
  int v72; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+18h] [rbp-B0h]
  void *v74; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v75; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+40h] [rbp-88h] BYREF
  char *s[2]; // [rsp+48h] [rbp-80h]
  _QWORD v78[2]; // [rsp+60h] [rbp-68h] BYREF
  char v79[8]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v80; // [rsp+78h] [rbp-50h] BYREF
  __int64 v81; // [rsp+88h] [rbp-40h]
  unsigned __int64 v82; // [rsp+98h] [rbp-30h]

  v82 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 4) != 1 )
    return 0;
  if ( !dword_8CC5F0 )
  {
    sub_169700(
      (int)"Cannot set expression value unless debugger is active\n",
      a2,
      (__int64)a3,
      a4,
      0,
      a14,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      v68);
    return 0;
  }
  v15 = *(unsigned int *)(a1 + 104);
  if ( !(_DWORD)v15 )
  {
    sub_169700(
      (int)"Cannot set expression value\n",
      v15,
      (__int64)a3,
      a4,
      (unsigned int)dword_8CC5F0,
      a14,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      v68);
    return 0;
  }
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 72), 2);
  v23 = tinfo_property & 0xF;
  if ( (unsigned __int8)v23 > 0xAu && (tinfo_property & 0x3F) != 0x2D )
  {
    sub_169700((int)"Only scalar values can be set", 2, v18, v23, v19, v20, a5, a6, a7, a8, v21, v22, a11, a12, v68);
    return 0;
  }
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a3);
  v24 = s[0];
  v74 = nullptr;
  v75 = 0;
  if ( s[0] || (v24 = (const char *)&QT::QByteArray::_empty) != nullptr )
  {
    v25 = strlen(v24);
    v26 = v25 + 1;
    v27 = v25;
    v74 = (void *)qvector_reserve(&v74, 0, v25 + 1, 1);
    *(_QWORD *)&v75 = v26;
    memmove(v74, v24, v27);
    *((_BYTE *)v74 + v27) = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  si128 = 0;
  v29 = *(_DWORD *)(a1 + 104) == 3;
  ptr = nullptr;
  *(_OWORD *)s = 0;
  if ( v29 )
  {
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    v31 = v30;
    v32 = sub_3DFB30(*(unsigned __int16 *)(a1 + 112), v30, (__int64)&v74, (__int64)&ptr);
    goto LABEL_17;
  }
  v31 = 2;
  if ( !(unsigned __int8)get_tinfo_property(*(_QWORD *)(a1 + 72), 2) )
  {
    sub_169700((int)"Bad type\n", 2, v39, v40, v41, v42, (__m128)0LL, a6, a7, a8, v43, v44, a11, a12, v68);
LABEL_41:
    if ( ptr )
    {
      s[0] = nullptr;
      *(double *)si128.m128_u64 = qfree(ptr, (const char *)v31);
    }
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      qfree(v74, (const char *)v31, *(double *)si128.m128_u64);
    }
    return 0;
  }
  si128 = 0;
  v79[0] = 2;
  v45 = &s1;
  v81 = 0;
  v80 = 0;
  if ( (_QWORD)v75 )
    v45 = (const char *)v74;
  if ( !(unsigned __int8)eval_idc_expr(v79, xmmword_8CC810, v45, &ptr) )
  {
    free_idcv(v79);
    goto LABEL_37;
  }
  v31 = 2;
  v46 = get_tinfo_property(*(_QWORD *)(a1 + 72), 2);
  if ( (v79[0] == 3) != ((v46 & 0xF) == 9) )
  {
    LOBYTE(v47) = v79[0] == 3;
    sub_169700(
      (int)"Floating/integer type mismatch\n",
      2,
      v47,
      v48,
      v49,
      v50,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v51,
      v52,
      a11,
      a12,
      v68);
    goto LABEL_55;
  }
  v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( v57 <= 0 )
  {
    if ( !under_debugger )
      interr(40251, 2, v53, v54, 0.0);
    BUG();
  }
  if ( v79[0] == 3 )
  {
    v31 = (__int64)&v80;
    if ( (unsigned int)ieee2cpu(v78, &v80, (unsigned int)v57) == 1 )
      goto LABEL_49;
    sub_169700(
      (int)"Floating point conversion error\n",
      (__int64)&v80,
      v64,
      v65,
      v66,
      v67,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v61,
      v62,
      a11,
      a12,
      v68);
LABEL_55:
    free_idcv(v79);
    goto LABEL_41;
  }
  if ( v79[0] != 9 && v79[0] != 2 )
  {
    if ( *(int *)(a1 + 104) > 6 )
      goto LABEL_34;
    sub_169700(
      (int)"Only scalar values can be set\n",
      2,
      v53,
      v54,
      v55,
      v56,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v58,
      v59,
      a11,
      a12,
      v68);
    goto LABEL_55;
  }
  v31 = 32;
  v78[0] = v80;
  if ( (unsigned __int8)getinf_flag(3, 32) )
  {
    v31 = (__int64)v78;
    swap_value(v78, v78, (unsigned int)v57);
  }
LABEL_49:
  if ( *(int *)(a1 + 104) <= 6 )
  {
    sub_3DFD50(&v72, (__int64 *)a1, 0.0, a6, a7, a8, *(double *)v61.m128_u64, *(double *)v62.m128_u64, a11, a12);
    if ( v72 != 6 || v73 == -1 )
    {
      v63 = (char *)ptr;
      if ( s[1] <= (_BYTE *)&qword_20 + 5 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, 38, 1);
        v63 = (char *)ptr;
      }
      s[0] = (_BYTE *)(&qword_20 + 6);
      *(__m128i *)v63 = _mm_load_si128((const __m128i *)&xmmword_5DD7B0);
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD7C0);
      *((__m128 *)v63 + 1) = si128;
      *(_QWORD *)(v63 + 29) = 0x6E6F697461636F6CLL;
      *((_BYTE *)ptr + 37) = 0;
      cleanup_argloc(&v72);
      free_idcv(v79);
      goto LABEL_37;
    }
    v31 = (__int64)v78;
    patch_bytes(v73, v78, v57);
    cleanup_argloc(&v72);
LABEL_53:
    free_idcv(v79);
    goto LABEL_18;
  }
LABEL_34:
  custom_argloc = retrieve_custom_argloc();
  if ( !custom_argloc )
    goto LABEL_53;
  v31 = (__int64)v79;
  v71 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD *, _QWORD, void **))(custom_argloc + 88))(
          a1 + 104,
          v79,
          v78,
          (unsigned int)v57,
          &ptr);
  free_idcv(v79);
  v32 = v71;
LABEL_17:
  if ( !v32 )
  {
LABEL_37:
    v31 = (__int64)&s1;
    if ( s[0] )
      v31 = (__int64)ptr;
    sub_169700((int)"Error setting value: %s\n", v31, v33, v34, v35, v36, si128, a6, a7, a8, v37, v38, a11, a12, v68);
    result = 0;
    goto LABEL_19;
  }
LABEL_18:
  result = 1;
LABEL_19:
  if ( ptr )
  {
    v69 = result;
    s[0] = nullptr;
    qfree(ptr, (const char *)v31);
    result = v69;
  }
  if ( v74 )
  {
    v70 = result;
    *(_QWORD *)&v75 = 0;
    qfree(v74, (const char *)v31);
    return v70;
  }
  return result;
}
