__int64 __fastcall sub_115BD0(
        const char *a1,
        char a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        unsigned __int64 a12,
        __int64 a13,
        __int64 a14)
{
  char v15; // r14
  __int64 ph; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  unsigned int nonbinary_file; // ebx
  size_t v26; // r15
  char v27; // r15
  int v28; // eax
  char v29; // [rsp+Fh] [rbp-4A9h]
  unsigned __int64 v30; // [rsp+28h] [rbp-490h] BYREF
  __int64 v31; // [rsp+38h] [rbp-480h] BYREF
  void *v32; // [rsp+40h] [rbp-478h] BYREF
  __int128 v33; // [rsp+48h] [rbp-470h]
  char v34[16]; // [rsp+60h] [rbp-458h] BYREF
  char v35[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v36; // [rsp+478h] [rbp-40h]

  v30 = a12;
  v36 = __readfsqword(0x28u);
  if ( a14 )
    setinf_buf();
  get_file_type_name();
  sub_8F740((__int64)"Loading file '%s' into database...\nDetected file format: %s\n", a1, v35);
  v15 = getinf_flag();
  v29 = getinf_flag();
  ph = get_ph();
  if ( *(_DWORD *)(ph + 4) == -1 && ((unsigned int)getinf() == 2 || a14 && (*(_BYTE *)(a14 + 84) & 2) != 0) )
  {
    if ( !getinf_buf() )
      v34[0] = 0;
    a3 = 0;
    v33 = 0;
    v26 = strlen(v34);
    v32 = (void *)qvector_reserve();
    *(_QWORD *)&v33 = v26 + 1;
    memmove(v32, v34, v26);
    *((_BYTE *)v32 + v26) = 0;
    v27 = set_processor_type();
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree();
    }
    if ( !v27 )
      return 0;
  }
  v31 = 0;
  v32 = nullptr;
  getinf();
  if ( (unsigned int)getinf() == 2 )
  {
    if ( *(_DWORD *)(ph + 4) )
    {
      v30 += 16 * getinf();
      v28 = qlsize();
      if ( !(unsigned __int8)sub_1156B0(
                               v28,
                               &v30,
                               &v31,
                               (__int64 *)&v32,
                               *(double *)a3.m128_u64,
                               *(double *)a4.m128_u64) )
        return 0;
    }
  }
  sub_144CD0(a1, 0);
  qgetenv();
  v17 = qbasename();
  sub_10E0D0((__int64)"Loading '%s' into the database.", v17, v18, v19, v20, v21, a3, a4, a5, a6, v22, v23, a9, a10, a2);
  sub_CCA40("Loading");
  if ( (unsigned int)getinf() != 2 )
  {
    nonbinary_file = load_nonbinary_file();
    sub_10DB30();
    if ( v15 )
      goto LABEL_8;
LABEL_23:
    setinf_flag();
    if ( v29 )
      goto LABEL_9;
    goto LABEL_24;
  }
  nonbinary_file = load_binary_file();
  sub_10DB30();
  if ( !v15 )
    goto LABEL_23;
LABEL_8:
  if ( v29 )
    goto LABEL_9;
LABEL_24:
  setinf_flag();
LABEL_9:
  if ( (_BYTE)nonbinary_file )
  {
    sub_8F740((__int64)"File '%s' has been successfully loaded into the database.\n", a1);
    return nonbinary_file;
  }
  return 0;
}

