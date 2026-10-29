QT::QFont *__fastcall sub_3D7160(QT::QFont *this, const char *a2, char a3, char *a4)
{
  const char *v7; // rbp
  char v8; // r15
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // r13d
  size_t v13; // rax
  char *v14; // rbp
  unsigned __int64 v15; // rdx
  double v16; // xmm0_8
  size_t v17; // rax
  char *v18; // r13
  unsigned __int64 v19; // rdx
  double v20; // xmm0_8
  const char *v22; // rax
  size_t v23; // rax
  const char *v24; // r8
  size_t v25; // r9
  char *v26; // rdi
  void *v27; // rdx
  int src; // [rsp+0h] [rbp-D0h]
  const char *srca; // [rsp+0h] [rbp-D0h]
  _BYTE *srcc; // [rsp+0h] [rbp-D0h]
  void *srcb; // [rsp+0h] [rbp-D0h]
  int v32; // [rsp+8h] [rbp-C8h]
  const char *v33; // [rsp+8h] [rbp-C8h]
  size_t v34; // [rsp+10h] [rbp-C0h]
  const char *v35; // [rsp+18h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+20h] [rbp-B0h]
  char *v37; // [rsp+38h] [rbp-98h] BYREF
  __int128 v38; // [rsp+40h] [rbp-90h]
  char *s; // [rsp+58h] [rbp-78h] BYREF
  __int128 v40; // [rsp+60h] [rbp-70h]
  void *ptr[11]; // [rsp+78h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v36 = 0;
  v35 = nullptr;
  sub_169A50((__int64 *)&v35, (__int64)"Font\\%s", a2);
  v7 = &s1;
  if ( (_QWORD)v36 )
    v7 = v35;
  v37 = nullptr;
  v38 = 0;
  if ( (unsigned __int8)reg_str_get(&v37, "Name", v7) || (v8 = reg_str_get(&v37, "Font/Name", 0)) != 0 )
  {
    v8 = 1;
  }
  else
  {
    v22 = (const char *)sub_4EB9E0();
    if ( v22 && (srca = v22, v23 = strlen(v22), v24 = srca, (v25 = v23) != 0) )
    {
      v26 = v37;
      v27 = (void *)(v23 + 1);
      if ( *((_QWORD *)&v38 + 1) < v23 + 1 )
      {
        v34 = v23;
        v33 = srca;
        srcb = (void *)(v23 + 1);
        v37 = (char *)qvector_reserve(&v37, v37, v27, 1);
        v25 = v34;
        v26 = v37;
        v24 = v33;
        v27 = srcb;
      }
      *(_QWORD *)&v38 = v27;
      srcc = (_BYTE *)v25;
      memmove(v26, v24, v25);
      srcc[(_QWORD)v37] = 0;
    }
    else
    {
      *(_QWORD *)&v38 = 0;
    }
  }
  v9 = reg_int_op("Font/Size", 0, 10, 0);
  src = reg_int_op("Size", 0, v9, v7);
  v10 = reg_int_op("Font/Bold", 0, 1, 0);
  v32 = reg_int_op("Bold", 0, v10 != 0, v7);
  v11 = reg_int_op("Font/Italic", 0, 0, 0);
  v12 = reg_int_op("Italic", 0, v11 != 0, v7);
  s = nullptr;
  v40 = 0;
  if ( !(unsigned __int8)reg_str_get(&s, "Style", v7) )
    reg_str_get(&s, "Font/Style", 0);
  if ( (_QWORD)v38 )
  {
    v13 = v38 - 1;
    v14 = v37;
    v15 = (unsigned __int64)(v38 - 1) >> 63;
  }
  else
  {
    LOBYTE(v15) = 0;
    v13 = 0;
    v14 = (char *)&s1;
  }
  if ( !v14 || (_BYTE)v15 )
  {
    v13 = 0;
    if ( v14 )
      v13 = strlen(v14);
  }
  v16 = QT::QString::fromUtf8(ptr, v13, v14);
  QT::QFont::QFont(this, (const QT::QString *)ptr, src, -1, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !a3 )
      goto LABEL_14;
  }
  else if ( !a3 )
  {
    goto LABEL_14;
  }
  QT::QFont::setStyleHint(this, 2, 1, v16);
LABEL_14:
  QT::QFont::setWeight(this, v32 == 0 ? 400 : 700);
  QT::QFont::setStyle(this, v12 != 0);
  if ( (_QWORD)v40 )
  {
    v17 = v40 - 1;
    v18 = s;
    v19 = (unsigned __int64)(v40 - 1) >> 63;
  }
  else
  {
    LOBYTE(v19) = 0;
    v17 = 0;
    v18 = (char *)&s1;
  }
  if ( !v18 || (_BYTE)v19 )
  {
    v17 = 0;
    if ( v18 )
      v17 = strlen(v18);
  }
  v20 = QT::QString::fromUtf8(ptr, v17, v18, v16);
  QT::QFont::setStyleName(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( a4 )
    *a4 = v8;
  if ( s )
  {
    *(_QWORD *)&v40 = 0;
    v20 = qfree(s, (const char *)ptr, v20);
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    v20 = qfree(v37, (const char *)ptr, v20);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35, (const char *)ptr, v20);
  }
  return this;
}
