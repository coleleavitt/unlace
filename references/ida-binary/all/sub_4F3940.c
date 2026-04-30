unsigned __int64 __fastcall sub_4F3940(
        QT::QObject *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  size_t v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rbp
  int v19; // eax
  double v20; // xmm0_8
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  size_t v23; // r8
  __int64 v24; // r15
  size_t v25; // r9
  __int64 v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // r15
  __int64 v29; // rsi
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  size_t v32; // r15
  __int64 v33; // rsi
  const char *v34; // rcx
  __int64 v35; // rdx
  const char *v36; // rsi
  const char *v37; // rax
  const char *v38; // r13
  size_t v39; // rax
  size_t v40; // r14
  __int64 *v41; // r13
  __int64 v42; // r14
  QT::QObject *Child_helper; // r13
  __int64 v44; // rdx
  __int64 v45; // rcx
  const char *v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rax
  size_t v49; // rax
  const char *v50; // rbp
  size_t v51; // rdx
  const char *v52; // rcx
  __int64 v53; // rax
  void *v55; // rdi
  size_t v56; // rdx
  void *v57; // r8
  void *v58; // rdi
  __int64 v59; // rax
  size_t v60; // [rsp+0h] [rbp-B8h]
  size_t v61; // [rsp+0h] [rbp-B8h]
  void *v62; // [rsp+0h] [rbp-B8h]
  size_t v63; // [rsp+8h] [rbp-B0h]
  void *dest; // [rsp+10h] [rbp-A8h] BYREF
  __int128 v65; // [rsp+18h] [rbp-A0h]
  void *ptr[4]; // [rsp+30h] [rbp-88h] BYREF
  char v67[8]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v68; // [rsp+58h] [rbp-60h]
  char v69; // [rsp+70h] [rbp-48h]
  unsigned __int64 v70; // [rsp+78h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v10 = QT::QObject::sender(a1);
  if ( !v10 )
    return v70 - __readfsqword(0x28u);
  v11 = *(_QWORD *)(v10 + 8);
  if ( (*(_BYTE *)(v11 + 48) & 1) == 0 )
    return v70 - __readfsqword(0x28u);
  v12 = *(_QWORD *)(v11 + 16);
  v13 = sub_4F23C0((__int64)a1, v12, 13, 0);
  v18 = v13;
  if ( !v13 )
    return v70 - __readfsqword(0x28u);
  v19 = *(_DWORD *)(v13 + 144);
  v20 = 0.0;
  dest = nullptr;
  v65 = 0;
  if ( v19 == 2 )
  {
    v52 = &s1;
    if ( *(_QWORD *)(v18 + 184) )
      v52 = *(const char **)(v18 + 176);
    v53 = *(_QWORD *)(v18 + 136);
    v36 = &s1;
    if ( *(_QWORD *)(v53 + 8) )
      v36 = *(const char **)v53;
    if ( !(unsigned __int8)sub_484320((__int64)&dest, v36, (__int64)"%s", v52) )
      goto LABEL_50;
    goto LABEL_32;
  }
  *(_QWORD *)v67 = 0;
  v68 = 0;
  if ( *(_QWORD *)(v18 + 160) <= 1u )
  {
    v30 = *(_QWORD *)(v18 + 184);
    v34 = &s1;
    if ( !v30 )
      goto LABEL_26;
    v32 = v30 - 1;
    if ( v30 == 1 )
      goto LABEL_26;
    v14 = v30 - 1;
    v31 = 0;
  }
  else
  {
    *(_QWORD *)v67 = qvector_reserve(v67, 0, 8, 1);
    *(_QWORD *)&v68 = 8;
    *(_BYTE *)(*(_QWORD *)v67 + 7LL) = 0;
    v21 = *(_QWORD *)v67;
    **(_DWORD **)v67 = 1414285638;
    *(_DWORD *)(v21 + 3) = 542262612;
    v22 = *(_QWORD *)(v18 + 160);
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v22 != 1 )
      {
        v24 = v68;
        v25 = v22 - 1;
        if ( (_QWORD)v68 )
        {
          v24 = v68 - 1;
          v25 = v23 + v68 - 1;
          v22 += v68 - 1;
        }
        v26 = *(_QWORD *)v67;
        if ( *((_QWORD *)&v68 + 1) < v22 )
        {
          v63 = v23;
          v60 = v25;
          *(_QWORD *)v67 = qvector_reserve(v67, *(_QWORD *)v67, v22, 1);
          v23 = v63;
          v26 = *(_QWORD *)v67;
          v25 = v60;
        }
        *(_QWORD *)&v68 = v22;
        *(_BYTE *)(v26 + v25) = 0;
        memcpy((void *)(v24 + *(_QWORD *)v67), *(const void **)(v18 + 152), v23);
      }
    }
    v27 = v68;
    if ( (_QWORD)v68 )
    {
      v28 = v68 + 1;
      v14 = v68;
      v27 = v68 - 1;
    }
    else
    {
      v28 = 2;
      v14 = 1;
    }
    v29 = *(_QWORD *)v67;
    if ( *((_QWORD *)&v68 + 1) < v28 )
    {
      v60 = v14;
      *(_QWORD *)v67 = qvector_reserve(v67, *(_QWORD *)v67, v28, 1);
      v14 = v60;
      v29 = *(_QWORD *)v67;
    }
    *(_QWORD *)&v68 = v28;
    *(_BYTE *)(v29 + v14) = 0;
    *(_BYTE *)(*(_QWORD *)v67 + v27) = 10;
    v30 = *(_QWORD *)(v18 + 184);
    v31 = v68;
    if ( !v30 )
      goto LABEL_24;
    v14 = v30 - 1;
    if ( v30 == 1 )
      goto LABEL_24;
    if ( (_QWORD)v68 )
    {
      v31 = v68 - 1;
      v32 = v14 + v68 - 1;
      v30 += v68 - 1;
    }
    else
    {
      v32 = v30 - 1;
    }
  }
  v33 = *(_QWORD *)v67;
  if ( *((_QWORD *)&v68 + 1) < v30 )
  {
    v60 = v14;
    *(_QWORD *)v67 = qvector_reserve(v67, *(_QWORD *)v67, v30, 1);
    v14 = v60;
    v33 = *(_QWORD *)v67;
  }
  *(_QWORD *)&v68 = v30;
  *(_BYTE *)(v33 + v32) = 0;
  memcpy((void *)(v31 + *(_QWORD *)v67), *(const void **)(v18 + 176), v14);
  v31 = v68;
LABEL_24:
  v19 = *(_DWORD *)(v18 + 144);
  v34 = &s1;
  if ( v31 )
    v34 = *(const char **)v67;
LABEL_26:
  v35 = *(_QWORD *)(v18 + 136);
  v36 = &s1;
  if ( *(_QWORD *)(v35 + 8) )
    v36 = *(const char **)v35;
  v37 = (const char *)sub_17CD60(
                        v19 == 1,
                        (int)v36,
                        (int)"%s",
                        (__int64)v34,
                        v14,
                        v15,
                        (__m128)0LL,
                        a3,
                        a4,
                        a5,
                        v16,
                        v17,
                        a8,
                        a9,
                        v60);
  v38 = v37;
  if ( !v37 )
  {
    *(_QWORD *)&v65 = 0;
    if ( *(_QWORD *)v67 )
    {
      *(_QWORD *)&v68 = 0;
      v20 = qfree(*(_QWORD *)v67, v36);
    }
    goto LABEL_50;
  }
  v39 = strlen(v37);
  v40 = v39;
  if ( v39 )
  {
    v55 = dest;
    v56 = v39 + 1;
    if ( *((_QWORD *)&v65 + 1) < v39 + 1 )
    {
      v61 = v39 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v56, 1);
      v56 = v61;
      v55 = dest;
    }
    *(_QWORD *)&v65 = v56;
    memmove(v55, v38, v40);
    *((_BYTE *)dest + v40) = 0;
    if ( *(_QWORD *)v67 )
    {
      *(_QWORD *)&v68 = 0;
      v20 = qfree(*(_QWORD *)v67, v38);
    }
  }
  else
  {
    *(_QWORD *)&v65 = 0;
    if ( !*(_QWORD *)v67 )
    {
      v41 = *(__int64 **)(v18 + 136);
      if ( v41 == (__int64 *)&dest )
        goto LABEL_35;
      goto LABEL_34;
    }
    *(_QWORD *)&v68 = 0;
    v20 = qfree(*(_QWORD *)v67, v36);
  }
LABEL_32:
  v41 = *(__int64 **)(v18 + 136);
  if ( v41 != (__int64 *)&dest )
  {
    v42 = v65;
    if ( (unsigned __int64)v65 > 1 )
    {
      v57 = dest;
      v58 = (void *)*v41;
      if ( v41[2] < (unsigned __int64)v65 )
      {
        v62 = dest;
        v59 = qvector_reserve(*(_QWORD *)(v18 + 136), *v41, v65, 1);
        *v41 = v59;
        v57 = v62;
        v58 = (void *)v59;
      }
      v41[1] = v42;
      memmove(v58, v57, v42 - 1);
      *(_BYTE *)(*v41 + v42 - 1) = 0;
      goto LABEL_35;
    }
LABEL_34:
    v41[1] = 0;
  }
LABEL_35:
  Child_helper = (QT::QObject *)QT::qt_qFindChild_helper(v12, 0, 0, &QT::QLineEdit::staticMetaObject, 1);
  if ( Child_helper )
  {
    QT::QObject::QObject((QT::QObject *)v67, nullptr);
    *((_QWORD *)&v68 + 1) = 0;
    *(_QWORD *)v67 = &object_lifecycle_monitor_t___vtable;
    sub_478D00(v67, (__int64)Child_helper, v20, v44, v45, v46);
    v69 = QT::QObject::blockSignals(Child_helper, 1);
    v47 = *(_QWORD *)(v18 + 136);
    v48 = *(_QWORD *)(v47 + 8);
    if ( v48 )
    {
      v49 = v48 - 1;
      v50 = *(const char **)v47;
      v51 = v49 >> 63;
    }
    else
    {
      LOBYTE(v51) = 0;
      v49 = 0;
      v50 = &s1;
    }
    if ( !v50 || (_BYTE)v51 )
    {
      v49 = 0;
      if ( v50 )
        v49 = strlen(v50);
    }
    v20 = QT::QString::fromUtf8(ptr, v49, v50);
    QT::QLineEdit::setText(Child_helper, (const QT::QString *)ptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    sub_51A3D0((QT::QObject *)v67);
  }
  v36 = (const char *)v12;
  sub_4F2BB0((__int64)a1, v12);
LABEL_50:
  if ( dest )
  {
    *(_QWORD *)&v65 = 0;
    qfree(dest, v36, v20);
  }
  return v70 - __readfsqword(0x28u);
}
