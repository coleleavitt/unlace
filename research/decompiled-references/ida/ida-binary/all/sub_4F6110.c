unsigned __int64 __fastcall sub_4F6110(
        QT::QDialog *this,
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
  __int64 v10; // rax
  __int64 v12; // rdi
  __int64 (*v13)(); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const char **v18; // rax
  const char **v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // rbx
  __int64 v22; // rdi
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  const char **v28; // r12
  const char **v29; // rbx
  const char **v30; // [rsp+0h] [rbp-48h] BYREF
  __int128 v31; // [rsp+8h] [rbp-40h]
  unsigned __int64 v32; // [rsp+18h] [rbp-30h]

  v10 = *((_QWORD *)this + 7);
  v32 = __readfsqword(0x28u);
  v30 = nullptr;
  v12 = *(_QWORD *)(v10 + 40);
  v31 = 0;
  v13 = *(__int64 (**)())(*(_QWORD *)v12 + 64LL);
  if ( v13 == forms::abstract_form_desc_t__::vfunc_8
    || (a2 = (const char *)&v30, ((unsigned __int8 (__fastcall *)(__int64, const char ***))v13)(v12, &v30)) )
  {
    QT::QDialog::accept(this);
LABEL_3:
    v18 = v30;
    v19 = v30;
    goto LABEL_4;
  }
  if ( !(_QWORD)v31 )
  {
    v19 = v30;
    if ( !v30 )
      return v32 - __readfsqword(0x28u);
    goto LABEL_10;
  }
  a2 = (const char *)&unk_5C2F25;
  if ( (_QWORD)v31 != 1 )
    a2 = "s";
  sub_169700(
    (int)"The following error%s need to be addressed first:\n",
    (__int64)a2,
    v14,
    v15,
    v16,
    v17,
    (__m128)0LL,
    a4,
    a5,
    a6,
    v24,
    v25,
    a9,
    a10,
    (char)v30);
  v18 = v30;
  v14 = 3 * v31;
  v19 = v30;
  v28 = &v30[3 * v31];
  if ( v28 != v30 )
  {
    v29 = v30;
    do
    {
      a2 = &s1;
      if ( v29[1] )
        a2 = *v29;
      sub_169700((int)"\t%s\n", (__int64)a2, v14, v15, v16, v17, (__m128)0LL, a4, a5, a6, v26, v27, a9, a10, (char)v30);
      v29 += 3;
    }
    while ( v28 != v29 );
    goto LABEL_3;
  }
LABEL_4:
  if ( v18 )
  {
    v20 = v31;
    if ( (_QWORD)v31 )
    {
      v21 = 0;
      do
      {
        v14 = (__int64)&v18[3 * v21];
        v22 = *(_QWORD *)v14;
        if ( *(_QWORD *)v14 )
        {
          *(_QWORD *)(v14 + 8) = 0;
          qfree(v22, a2);
          v18 = v30;
        }
        ++v21;
        v19 = v18;
      }
      while ( v20 != v21 );
    }
LABEL_10:
    qfree(v19, a2, v14, v15, v16, v17, v30, 0, *((_QWORD *)&v31 + 1));
  }
  return v32 - __readfsqword(0x28u);
}
