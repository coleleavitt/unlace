unsigned __int64 __fastcall sub_654030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        char *a5,
        char *a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  char v15; // bl
  char *v16; // rax
  __int64 *v17; // r12
  char v18; // al
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rax
  char *v22; // rdi
  __int64 v23; // r13
  __int64 i; // r15
  char *v25; // rbx
  void *v26; // rdi
  void *v27; // rdi
  char *v28; // rdi
  __int64 v29; // r12
  __int64 v30; // r14
  char *v31; // rbx
  void *v32; // rdi
  void *v33; // rdi
  __int64 v35; // r12
  __int64 v36; // r14
  char *v37; // rbx
  void *v38; // rdi
  void *v39; // rdi
  int v40[2]; // [rsp+18h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v42; // [rsp+28h] [rbp-48h]
  unsigned __int64 v43; // [rsp+38h] [rbp-38h]

  v43 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 8) = a6;
  *(_BYTE *)(a1 + 64) = 0;
  v15 = *a5;
  *(_QWORD *)a1 = a5;
  if ( (v15 & 0x2F) == 0xD )
  {
    v42 = 0;
    *(_QWORD *)v40 = 0;
    ptr = nullptr;
    v16 = sub_653670(a2, a3, (__int64 *)&ptr, a5, a6, nullptr, nullptr, (__int64 **)v40);
    v17 = (__int64 *)v16;
    if ( !v16 )
    {
      v28 = (char *)ptr;
      if ( !ptr )
        return v43 - __readfsqword(0x28u);
      v35 = v42;
      if ( (_QWORD)v42 )
      {
        v36 = 0;
        do
        {
          v37 = &v28[144 * v36];
          clear_tinfo_t(v37 + 64);
          v38 = *((void **)v37 + 5);
          if ( v38 )
          {
            *((_QWORD *)v37 + 6) = 0;
            qfree(v38);
          }
          v39 = *((void **)v37 + 2);
          if ( v39 )
          {
            *((_QWORD *)v37 + 3) = 0;
            qfree(v39);
          }
          v28 = (char *)ptr;
          ++v36;
        }
        while ( v35 != v36 );
      }
      goto LABEL_25;
    }
    v18 = sub_653EF0(*(_QWORD *)(a2 + 1672), v16, a4);
    *(_BYTE *)(a1 + 64) = v18;
    if ( v18 )
    {
      if ( !(unsigned __int8)sub_570BB0(
                               (__int64 *)(a1 + 16),
                               a1 + 40,
                               0,
                               v17,
                               (__int64 *)&ptr,
                               *(_QWORD **)v40,
                               0.0,
                               a8,
                               a9,
                               a10,
                               v19,
                               v20,
                               a13,
                               a14,
                               v15 & 0xC0 | 0x10u) )
      {
        if ( !under_debugger )
          interr(2889);
        BUG();
      }
      *(_QWORD *)a1 = *(_QWORD *)(a1 + 16);
      v21 = 0;
      if ( *(_QWORD *)(a1 + 48) > 1u )
        v21 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 8) = v21;
    }
    v22 = (char *)*v17;
    if ( *v17 )
    {
      v23 = v17[1];
      if ( v23 )
      {
        for ( i = 0; i != v23; ++i )
        {
          v25 = &v22[144 * i];
          clear_tinfo_t(v25 + 64);
          v26 = *((void **)v25 + 5);
          if ( v26 )
          {
            *((_QWORD *)v25 + 6) = 0;
            qfree(v26);
          }
          v27 = *((void **)v25 + 2);
          if ( v27 )
          {
            *((_QWORD *)v25 + 3) = 0;
            qfree(v27);
          }
          v22 = (char *)*v17;
        }
      }
      v17[1] = 0;
      qfree(v22);
    }
    qfree(v17);
    v28 = (char *)ptr;
    if ( ptr )
    {
      v29 = v42;
      if ( (_QWORD)v42 )
      {
        v30 = 0;
        do
        {
          v31 = &v28[144 * v30];
          clear_tinfo_t(v31 + 64);
          v32 = *((void **)v31 + 5);
          if ( v32 )
          {
            *((_QWORD *)v31 + 6) = 0;
            qfree(v32);
          }
          v33 = *((void **)v31 + 2);
          if ( v33 )
          {
            *((_QWORD *)v31 + 3) = 0;
            qfree(v33);
          }
          v28 = (char *)ptr;
          ++v30;
        }
        while ( v29 != v30 );
      }
LABEL_25:
      *(_QWORD *)&v42 = 0;
      qfree(v28);
    }
  }
  return v43 - __readfsqword(0x28u);
}
