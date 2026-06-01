__int64 __fastcall sub_19DBE0(
        __int64 a1,
        __int64 a2,
        bool *a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r15
  __int64 v17; // r12
  int v18; // r13d
  __int64 v19; // rdx
  unsigned __int64 v20; // rax
  const char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v26; // rax
  __int64 extlang; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(char *, _BYTE *, _QWORD, _QWORD, __int64 *); // rax
  _BYTE *v32; // rsi
  unsigned int v33; // ebp
  int v34; // r8d
  int v35; // r9d
  const char *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __m128 v44; // xmm4
  __m128 v45; // xmm5
  __int64 v46; // rax
  const char *v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  const char *v50; // rdx
  struct _Unwind_Exception *v51; // rbx
  char v52; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v53; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+18h] [rbp-A0h]
  char v56[8]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v57; // [rsp+38h] [rbp-80h]
  __int64 v58; // [rsp+48h] [rbp-70h]
  _BYTE v59[40]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-40h]

  v15 = a1;
  v17 = a2;
  v60 = __readfsqword(0x28u);
  v18 = a4;
  if ( (*(_BYTE *)(a1 + 76) & 0x20) != 0 )
  {
    v19 = (unsigned int)dword_8CC5F0;
    if ( !dword_8CC5F0 )
      goto LABEL_3;
    goto LABEL_19;
  }
  v33 = sub_19CE20(a1, (const char *)a2, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  if ( !(_BYTE)v33 )
    return v33;
  v19 = (unsigned int)dword_8CC5F0;
  if ( dword_8CC5F0 )
  {
LABEL_19:
    a2 = -1;
    a1 = -1;
    invalidate_dbgmem_contents(-1, -1);
  }
LABEL_3:
  v20 = *(_DWORD *)(v15 + 72) >> 28;
  if ( v20 >= (unsigned __int64)xmmword_8CACB8 )
  {
    sub_199400(a5, a1, a2, v19, a4);
LABEL_32:
    sub_1993E0(a5, a1, a2, v23, v24);
    goto LABEL_33;
  }
  v21 = &s1;
  v22 = qword_8CACB0 + 24 * v20;
  if ( *(_QWORD *)(v22 + 8) )
    v21 = *(const char **)v22;
  a2 = 32;
  a1 = (__int64)v59;
  qsnprintf(v59, 32, "__%s_%d", v21, *(_DWORD *)(v15 + 84));
  v25 = *(_DWORD *)(v15 + 72);
  v54 = 0;
  v55 = 0;
  a5 = 0.0;
  v26 = v25 >> 28;
  v56[0] = 2;
  v58 = 0;
  v57 = 0;
  if ( v26 >= (unsigned __int64)xmmword_8CACB8 )
    goto LABEL_32;
  a1 = (__int64)&v53;
  a2 = 2;
  v53 = v26;
  extlang = find_extlang(&v53, 2);
  v30 = extlang;
  if ( !extlang )
  {
    v48 = *(_DWORD *)(v15 + 72) >> 28;
    if ( v48 < (unsigned __int64)xmmword_8CACB8 )
    {
      v49 = qword_8CACB0 + 24 * v48;
      v50 = &s1;
      if ( *(_QWORD *)(v49 + 8) )
        v50 = *(const char **)v49;
      sub_169A50(&v54, (__int64)"language '%s' is not present; cannot evaluate condition", v50);
      v36 = &s1;
      if ( (_QWORD)v55 )
        goto LABEL_16;
      goto LABEL_11;
    }
LABEL_33:
    v51 = (struct _Unwind_Exception *)sub_199400(a5, a1, a2, v28, v29);
    free_idcv(v56);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54, a2, v12, v13, v14);
    }
    _Unwind_Resume(v51);
  }
  v31 = *(__int64 (__fastcall **)(char *, _BYTE *, _QWORD, _QWORD, __int64 *))(extlang + 56);
  if ( !v31 )
  {
    sub_169A50(
      &v54,
      (__int64)"the '%s' extlang does not implement the 'call_func' callback",
      *(const char **)(v30 + 16));
    v36 = &s1;
    if ( (_QWORD)v55 )
LABEL_16:
      LODWORD(v36) = v54;
LABEL_11:
    v32 = (_BYTE *)v17;
    sub_233B00((unsigned int)"AUTOHIDE NONE\n%a: %s condition:\n%s\n", v17, v18, (_DWORD)v36, v34, v35);
    v33 = 0;
    if ( !v30 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v32 = v59;
  v33 = v31(v56, v59, 0, 0, &v54);
  if ( !(_BYTE)v33 )
  {
    v36 = &s1;
    if ( !(_QWORD)v55 )
      goto LABEL_11;
    goto LABEL_16;
  }
  idcv_int64(v56);
  v46 = v57;
  *a3 = (_QWORD)v57 != 0;
  if ( (debug & 0x10000) != 0 )
  {
    v47 = "SKIPPED";
    v32 = (_BYTE *)v17;
    if ( v46 )
      v47 = "HIT";
    sub_16B860(
      (int)"Breakpoint %a %s\n",
      v17,
      (__int64)v47,
      v41,
      v42,
      v43,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v44,
      v45,
      a11,
      a12,
      v52);
  }
LABEL_12:
  --*(_DWORD *)(v30 + 12);
LABEL_13:
  free_idcv(v56);
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54, v32, v37, v38, v39);
  }
  return v33;
}
