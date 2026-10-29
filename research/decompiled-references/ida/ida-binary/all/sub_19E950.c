__int64 __fastcall add_bpt_ah_t__::vfunc_0(
        char *a1,
        __m128i *p_s1,
        __m128 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  unsigned int v10; // ecx
  char *v11; // r13
  __m128i *v12; // r15
  __int64 bpt_kernel_interface; // r12
  QT::QAbstractItemView *v14; // rdi
  bool v15; // zf
  __int64 v16; // rdx
  char *v17; // rbx
  char *v18; // r15
  __int64 *v19; // rbp
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 v28; // r15
  __m128i *v29; // rcx
  __int64 v30; // rdx
  char v31; // al
  char *v32; // rbx
  unsigned int v33; // ebx
  __int64 v35; // rdi
  __m128i **v36; // rdx
  __m128i **v37; // r14
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 (*v40)(); // rax
  char *v41; // r14
  char *v42; // rbx
  __int64 v43; // rax
  char v44; // [rsp+0h] [rbp-E8h]
  __int64 *v45; // [rsp+8h] [rbp-E0h]
  __m128i *v46; // [rsp+10h] [rbp-D8h]
  __m128i **v47; // [rsp+10h] [rbp-D8h]
  __int64 *v48; // [rsp+18h] [rbp-D0h]
  __m128i v49; // [rsp+20h] [rbp-C8h] BYREF
  __m128i v50; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v51; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v52; // [rsp+50h] [rbp-98h] BYREF
  __int64 *v53; // [rsp+58h] [rbp-90h]
  __int64 *v54; // [rsp+60h] [rbp-88h]
  __int64 v55; // [rsp+70h] [rbp-78h] BYREF
  __int128 v56; // [rsp+78h] [rbp-70h]
  char *s1; // [rsp+90h] [rbp-58h] BYREF
  __int128 v58; // [rsp+98h] [rbp-50h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  v10 = p_s1->m128i_u32[2];
  if ( v10 > 0x23 )
    return 0;
  v11 = a1;
  v12 = p_s1;
  if ( ((1LL << v10) & 0xA000D) != 0 )
    goto LABEL_6;
  if ( v10 != 35 )
  {
    if ( v10 == 13 && a1[12] )
      goto LABEL_6;
    return 0;
  }
  a3 = 0;
  v30 = p_s1->m128i_i64[0];
  s1 = nullptr;
  v58 = 0;
  p_s1 = (__m128i *)&s1;
  v31 = (*(__int64 (__fastcall **)(_QWORD *, char **, __int64))(QT::QCoreApplication::self[2] + 64LL))(
          QT::QCoreApplication::self + 2,
          &s1,
          v30);
  v32 = s1;
  if ( !v31 || (unsigned __int64)v58 <= 7 || (p_s1 = (__m128i *)"Module:", a1 = s1, strncmp(s1, "Module:", 7u)) )
  {
    if ( v32 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(v32, p_s1->m128i_i8);
    }
    return 0;
  }
  if ( v32 )
  {
    *(_QWORD *)&v58 = 0;
    a1 = v32;
    qfree(v32, "Module:");
  }
LABEL_6:
  bpt_kernel_interface = get_bpt_kernel_interface(a1, p_s1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 296LL))(bpt_kernel_interface);
  if ( !v12[12].m128i_i64[1] )
  {
    v35 = v12[2].m128i_i64[1];
    if ( !v35 )
      goto LABEL_70;
    v36 = (__m128i **)v12[3].m128i_i64[0];
    v47 = &v36[v12[3].m128i_i64[1]];
    if ( v47 == v36 )
      goto LABEL_70;
    v45 = nullptr;
    v37 = (__m128i **)v12[3].m128i_i64[0];
    v19 = nullptr;
    v48 = nullptr;
    while ( 1 )
    {
      v40 = *(__int64 (**)())(*(_QWORD *)v35 + 56LL);
      if ( v40 == addon_chooser_t__::vfunc_7
        || (p_s1 = *v37, v39 = ((__int64 (__fastcall *)(__int64, __m128i *))v40)(v35, *v37), v39 == -1) )
      {
        v38 = 0;
        v39 = -1;
        if ( v45 != v19 )
          goto LABEL_45;
      }
      else
      {
        p_s1 = (__m128i *)v39;
        v38 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(
                bpt_kernel_interface,
                v39);
        if ( v45 != v19 )
        {
LABEL_45:
          *v19 = v38;
          v19 += 2;
          *(v19 - 1) = v39;
          goto LABEL_46;
        }
      }
      p_s1 = &v51;
      v51.m128i_i64[0] = v38;
      v51.m128i_i64[1] = v39;
      v52 = v48;
      v53 = v45;
      v54 = v45;
      sub_19E840((__int64)&v52, &v51);
      v19 = v53;
      v48 = v52;
      v45 = v54;
LABEL_46:
      if ( v47 == ++v37 )
        goto LABEL_16;
      v35 = v12[2].m128i_i64[1];
    }
  }
  v14 = (QT::QAbstractItemView *)QT::QMetaObject::cast(
                                   (QT::QMetaObject *)&off_887C80,
                                   (const QT::QObject *)v12[20].m128i_i64[1]);
  if ( !v14 )
    goto LABEL_70;
  v15 = v12->m128i_i32[2] == 13;
  a3 = 0;
  v16 = v12[12].m128i_i64[1];
  s1 = nullptr;
  v58 = 0;
  if ( !v15 )
  {
    sub_2DC1A0(v14, &s1, v16, -1);
    v17 = &s1[8 * v58];
    if ( v17 != s1 )
    {
      v18 = s1;
      v19 = nullptr;
      v45 = nullptr;
      v48 = nullptr;
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)v18;
          p_s1 = *(__m128i **)v18;
          v21 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
                  bpt_kernel_interface,
                  *(_QWORD *)v18);
          if ( v45 == v19 )
            break;
          v18 += 8;
          *v19 = v21;
          v19 += 2;
          *(v19 - 1) = v20;
          if ( v17 == v18 )
            goto LABEL_14;
        }
        p_s1 = &v50;
        v50.m128i_i64[0] = v21;
        v50.m128i_i64[1] = v20;
        v52 = v48;
        v53 = v45;
        v54 = v45;
        sub_19E840((__int64)&v52, &v50);
        v18 += 8;
        v19 = v53;
        v48 = v52;
        v45 = v54;
      }
      while ( v17 != v18 );
LABEL_14:
      if ( s1 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(s1, p_s1->m128i_i8);
      }
      goto LABEL_16;
    }
    if ( v17 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(v17, (const char *)&s1);
    }
LABEL_70:
    v45 = nullptr;
    v33 = 1;
    v48 = nullptr;
    goto LABEL_53;
  }
  sub_48EA50(v14);
  v41 = s1;
  v42 = &s1[8 * v58];
  if ( s1 == v42 )
  {
    if ( s1 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(s1, (const char *)&s1);
    }
    goto LABEL_70;
  }
  v45 = nullptr;
  v19 = nullptr;
  v48 = nullptr;
  do
  {
    p_s1 = *(__m128i **)v41;
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 168LL))(
            bpt_kernel_interface,
            *(_QWORD *)v41);
    if ( v43 )
    {
      if ( v45 == v19 )
      {
        p_s1 = &v49;
        v49.m128i_i64[0] = v43;
        v52 = v48;
        v53 = v45;
        v54 = v45;
        v49.m128i_i64[1] = -1;
        sub_19E840((__int64)&v52, &v49);
        v19 = v53;
        v48 = v52;
        v45 = v54;
      }
      else
      {
        *v19 = v43;
        v19 += 2;
        *(v19 - 1) = -1;
      }
    }
    v41 += 8;
  }
  while ( v42 != v41 );
  if ( s1 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(s1, p_s1->m128i_i8);
  }
LABEL_16:
  v22 = v48;
  if ( v48 == v19 )
  {
LABEL_52:
    v33 = 1;
    goto LABEL_53;
  }
  while ( 1 )
  {
    v28 = *v22;
    v29 = (__m128i *)v22[1];
    v55 = 0;
    s1 = nullptr;
    v56 = 0;
    v58 = 0;
    if ( v28 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, char **))(*(_QWORD *)bpt_kernel_interface + 224LL))(
        bpt_kernel_interface,
        *(_QWORD *)(v28 + 32),
        *(_QWORD *)(v28 + 40),
        &s1);
      p_s1 = (__m128i *)&v55;
      if ( !(*(unsigned __int8 (__fastcall **)(char *, __int64 *, __int64))(*(_QWORD *)v11 + 32LL))(v11, &v55, v28) )
        goto LABEL_55;
      goto LABEL_19;
    }
    if ( v29 != (__m128i *)-1LL )
      break;
LABEL_25:
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55, p_s1->m128i_i8);
    }
    v22 += 2;
    if ( v19 == v22 )
      goto LABEL_52;
  }
  v46 = v29;
  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64 *, __m128i *))(*(_QWORD *)v11 + 40LL))(v11, &v55, v29) )
  {
    p_s1 = v46;
    get_nice_colored_name(&s1, v46, 2);
LABEL_19:
    if ( (unsigned __int64)v56 > 1 )
    {
      p_s1 = (__m128i *)&::s1;
      if ( (_QWORD)v58 )
        p_s1 = (__m128i *)s1;
      sub_169700((int)"%s: %s\n", (__int64)p_s1, v55, v23, v24, v25, a3, (__m128)0LL, a5, a6, v26, v27, a9, a10, v44);
    }
    if ( s1 )
    {
      *(_QWORD *)&v58 = 0;
      qfree(s1, p_s1->m128i_i8);
    }
    goto LABEL_25;
  }
LABEL_55:
  if ( s1 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(s1, (const char *)&v55);
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55, (const char *)&v55);
  }
  v33 = 0;
LABEL_53:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)bpt_kernel_interface + 304LL))(bpt_kernel_interface);
  mark_builtin_widgets(0x2000, 0, 1);
  sub_531B30(1, 0, 0);
  if ( v48 )
    operator delete(v48, (char *)v45 - (char *)v48);
  return v33;
}
