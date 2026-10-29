__int64 __fastcall sub_1157D0(
        const char *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
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
  char v29; // [rsp+0h] [rbp-4B8h]
  char v30; // [rsp+2Bh] [rbp-48Dh]
  unsigned int v31[4]; // [rsp+2Ch] [rbp-48Ch] BYREF
  int v32; // [rsp+3Ch] [rbp-47Ch] BYREF
  void *v33; // [rsp+40h] [rbp-478h] BYREF
  __int128 v34; // [rsp+48h] [rbp-470h]
  char v35[16]; // [rsp+60h] [rbp-458h] BYREF
  char v36[1032]; // [rsp+70h] [rbp-448h] BYREF
  unsigned __int64 v37; // [rsp+478h] [rbp-40h]

  v31[0] = a12;
  v37 = __readfsqword(0x28u);
  if ( a14 )
    setinf_buf();
  get_file_type_name();
  sub_8F660((__int64)"Loading file '%s' into database...\nDetected file format: %s\n", a1, v36);
  v15 = getinf_flag();
  v30 = getinf_flag();
  ph = get_ph();
  if ( *(_DWORD *)(ph + 4) == -1 && ((unsigned int)getinf() == 2 || a14 && (*(_BYTE *)(a14 + 84) & 2) != 0) )
  {
    if ( !getinf_buf() )
      v35[0] = 0;
    a2 = 0;
    v34 = 0;
    v26 = strlen(v35);
    v33 = (void *)qvector_reserve();
    *(_QWORD *)&v34 = v26 + 1;
    memmove(v33, v35, v26);
    *((_BYTE *)v33 + v26) = 0;
    v27 = set_processor_type();
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree();
    }
    if ( !v27 )
      return 0;
  }
  v32 = 0;
  LODWORD(v33) = 0;
  getinf();
  if ( (unsigned int)getinf() == 2 )
  {
    if ( *(_DWORD *)(ph + 4) )
    {
      v31[0] += 16 * getinf();
      v28 = qlsize();
      if ( !(unsigned __int8)sub_115320(v28, v31, &v32, (int *)&v33, *(double *)a2.m128_u64, *(double *)a3.m128_u64) )
        return 0;
    }
  }
  sub_144570(a1, 0);
  qgetenv();
  v17 = qbasename();
  sub_10DDF0((__int64)"Loading '%s' into the database.", v17, v18, v19, v20, v21, a2, a3, a4, a5, v22, v23, a8, a9, v29);
  sub_CB4C0("Loading");
  if ( (unsigned int)getinf() != 2 )
  {
    nonbinary_file = load_nonbinary_file();
    sub_10D850();
    if ( v15 )
      goto LABEL_8;
LABEL_23:
    setinf_flag();
    if ( v30 )
      goto LABEL_9;
    goto LABEL_24;
  }
  nonbinary_file = load_binary_file();
  sub_10D850();
  if ( !v15 )
    goto LABEL_23;
LABEL_8:
  if ( v30 )
    goto LABEL_9;
LABEL_24:
  setinf_flag();
LABEL_9:
  if ( (_BYTE)nonbinary_file )
  {
    sub_8F660((__int64)"File '%s' has been successfully loaded into the database.\n", a1);
    return nonbinary_file;
  }
  return 0;
}

