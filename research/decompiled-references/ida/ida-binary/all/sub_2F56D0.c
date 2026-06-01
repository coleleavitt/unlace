__int64 __fastcall sub_2F56D0(
        __int64 a1,
        char a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  const char *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  char v23; // r14
  __int64 ph; // r13
  __int64 v25; // rax
  __int64 v26; // r15
  unsigned __int16 v27; // bx
  __int64 v28; // rax
  unsigned int nonbinary_file; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128 v34; // xmm4
  __m128 v35; // xmm5
  size_t v37; // r15
  __int64 v38; // rdx
  const char *v39; // rdi
  char v40; // r15
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  unsigned int v44; // eax
  double v45; // xmm4_8
  double v46; // xmm5_8
  __int64 v48; // [rsp+0h] [rbp-4B8h]
  __int16 v49; // [rsp+Ch] [rbp-4ACh]
  char v50; // [rsp+Fh] [rbp-4A9h]
  char v52[16]; // [rsp+28h] [rbp-490h] BYREF
  __int64 v53; // [rsp+38h] [rbp-480h] BYREF
  __int64 v54; // [rsp+40h] [rbp-478h] BYREF
  __int128 v55; // [rsp+48h] [rbp-470h]
  char v56[16]; // [rsp+60h] [rbp-458h] BYREF
  _BYTE v57[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v58; // [rsp+478h] [rbp-40h]

  *(_QWORD *)v52 = a4;
  v49 = a3;
  v58 = __readfsqword(0x28u);
  if ( a6 )
  {
    v17 = &s1;
    if ( *(_QWORD *)(a6 + 40) )
      v17 = *(const char **)(a6 + 32);
    setinf_buf(69, v17, 0);
  }
  *(double *)a7.m128_u64 = get_file_type_name(v57, 1024);
  sub_169700(
    (int)"Loading file '%s' into database...\nDetected file format: %s\n",
    a1,
    (__int64)v57,
    v18,
    v19,
    v20,
    a7,
    a8,
    a9,
    a10,
    v21,
    v22,
    a13,
    a14,
    a2);
  v23 = getinf_flag(2, 1);
  v50 = getinf_flag(44, 4);
  ph = get_ph(44, &byte_4);
  if ( *(_DWORD *)(ph + 4) == -1 && ((unsigned int)getinf(5) == 2 || a6 && (*(_BYTE *)(a6 + 84) & 2) != 0) )
  {
    if ( !getinf_buf(1, v56, 16) )
      v56[0] = 0;
    a7 = 0;
    v54 = 0;
    v55 = 0;
    v37 = strlen(v56);
    v54 = qvector_reserve(&v54, 0, v37 + 1, 1);
    *(_QWORD *)&v55 = v37 + 1;
    memmove((void *)v54, v56, v37);
    v39 = &s1;
    *(_BYTE *)(v54 + v37) = 0;
    if ( (_QWORD)v55 )
      v39 = (const char *)v54;
    v40 = set_processor_type(v39, 2, v38);
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      *(double *)a7.m128_u64 = qfree(v54, (_BYTE *)&dword_0 + 2);
    }
    if ( !v40 )
      return 0;
  }
  v25 = getinf(12);
  v53 = 0;
  v54 = 0;
  v26 = v25;
  if ( (unsigned int)getinf(5) == 2 && *(_DWORD *)(ph + 4) )
  {
    *(_QWORD *)v52 += 16 * getinf(12);
    v44 = qlsize(v48);
    if ( !(unsigned __int8)sub_2ED1F0(v44, v52, &v53, &v54, a7, a8, a9, a10, v45, v46, a13, a14) )
      return 0;
    v26 = 0;
    v49 = a3 & 0xFFFE;
  }
  sub_37A650(a1, 0);
  v27 = v49 | ((unsigned __int16)qgetenv("IDA_LOADALL", 0) << 13);
  v28 = qbasename(a1);
  sub_1C76F0((int)"Loading '%s' into the database.", v28);
  sub_30A040("Loading");
  if ( (unsigned int)getinf(5) != 2 )
  {
    nonbinary_file = load_nonbinary_file(a1, v48, a5, v27, a6);
    sub_1C78D0();
    if ( v23 )
      goto LABEL_10;
LABEL_29:
    setinf_flag(2, 1, 0);
    if ( v50 )
      goto LABEL_11;
    goto LABEL_30;
  }
  v41 = *(_DWORD *)(ph + 16);
  v42 = v41 + 14;
  v43 = v41 + 7;
  if ( v43 >= 0 )
    v42 = v43;
  v54 *= v42 >> 3;
  nonbinary_file = load_binary_file(a1, v48, v27, v53, v26, *(_QWORD *)v52, v54);
  sub_1C78D0();
  if ( !v23 )
    goto LABEL_29;
LABEL_10:
  if ( v50 )
    goto LABEL_11;
LABEL_30:
  setinf_flag(44, 4, 0);
LABEL_11:
  if ( (_BYTE)nonbinary_file )
  {
    sub_169700(
      (int)"File '%s' has been successfully loaded into the database.\n",
      a1,
      v30,
      v31,
      v32,
      v33,
      a7,
      a8,
      a9,
      a10,
      v34,
      v35,
      a13,
      a14,
      v48);
    return nonbinary_file;
  }
  return 0;
}
