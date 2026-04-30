const QT::QString *__fastcall sub_2D9970(const QT::QString *a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v7; // rsi
  int v8; // ebx
  __int64 v9; // rdi
  double v10; // xmm0_8
  char *v11; // rax
  char *v12; // r14
  char *v13; // r12
  signed __int64 v14; // rax
  signed __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // r14
  __int16 v18; // r10
  int v19; // r11d
  unsigned __int64 v20; // rbx
  __int64 v21; // r8
  char *v22; // rsi
  size_t v23; // r11
  unsigned __int64 v24; // rdx
  size_t v25; // r10
  char v26; // al
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r15
  __int64 *v33; // rcx
  __int64 v34; // rdi
  bool v35; // zf
  __int64 v36; // rax
  size_t v37; // rax
  char *v38; // rbx
  size_t v39; // rdx
  const char *v40; // rsi
  double v41; // xmm0_8
  const char *v43; // rsi
  unsigned __int64 v44; // rbx
  size_t v45; // r14
  __int64 v46; // r12
  size_t v47; // r15
  char *v48; // rsi
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  void *v52; // rdx
  __int64 v53; // [rsp+0h] [rbp-B0h]
  size_t v54; // [rsp+0h] [rbp-B0h]
  __int16 v55; // [rsp+0h] [rbp-B0h]
  int v56; // [rsp+8h] [rbp-A8h]
  __int64 v57; // [rsp+8h] [rbp-A8h]
  int v58; // [rsp+8h] [rbp-A8h]
  __int64 v59; // [rsp+10h] [rbp-A0h]
  __int64 v60; // [rsp+18h] [rbp-98h]
  unsigned int v61; // [rsp+20h] [rbp-90h]
  unsigned __int64 v62; // [rsp+20h] [rbp-90h]
  __int16 v63; // [rsp+2Ch] [rbp-84h]
  int v64; // [rsp+2Ch] [rbp-84h]
  int src; // [rsp+38h] [rbp-78h]
  void *srca; // [rsp+38h] [rbp-78h]
  const char *srcb; // [rsp+38h] [rbp-78h]
  char *s; // [rsp+40h] [rbp-70h] BYREF
  __int128 v70; // [rsp+48h] [rbp-68h]
  void *ptr; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v72; // [rsp+68h] [rbp-48h]
  __int64 v73; // [rsp+70h] [rbp-40h]
  unsigned __int64 v74; // [rsp+78h] [rbp-38h]

  v74 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 1) != 0 )
    sub_4F7CB0(1, (unsigned int)"IDADisasmCursor::selectedText()\n", a3, a4, a5, a6);
  v7 = *(unsigned int *)(a2 + 12);
  v8 = *(_DWORD *)(a2 + 8);
  src = v7;
  if ( (int)v7 <= v8 )
  {
    v8 = v7;
    src = *(_DWORD *)(a2 + 8);
  }
  v9 = *(_QWORD *)a2;
  v10 = 0.0;
  s = nullptr;
  v70 = 0;
  v11 = (char *)sub_1EB5B0(v9, v7, a3, a4, 0.0);
  v12 = v11;
  v13 = v11 + 40;
  if ( !v11[68] )
  {
    v26 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v11 + 520LL))(v11, v13);
    v12[68] = v26;
    if ( !v26 )
    {
      v30 = *((_QWORD *)v12 + 5);
      if ( !v30 )
      {
        *((_DWORD *)v12 + 16) = -1;
LABEL_28:
        if ( (debug & 0x80000) != 0 && (::a6[0] & 1) != 0 )
          sub_4F7CB0(
            1,
            (unsigned int)"IDADisasmCursor::selectedText(); accessible listing data is invalid\n",
            v30,
            v27,
            v28,
            v29);
        goto LABEL_31;
      }
      if ( *((_QWORD *)v12 + 6) )
      {
        v64 = v8;
        v31 = 0;
        v32 = *((_QWORD *)v12 + 6);
        do
        {
          v33 = (__int64 *)(v30 + 24 * v31);
          v34 = *v33;
          if ( *v33 )
          {
            v33[1] = 0;
            qfree(v34, v13);
            v30 = *((_QWORD *)v12 + 5);
          }
          ++v31;
        }
        while ( v32 != v31 );
        v8 = v64;
      }
      *((_QWORD *)v12 + 6) = 0;
      v10 = qfree(v30, v13);
      v35 = v12[68] == 0;
      *((_QWORD *)v12 + 5) = 0;
      *((_QWORD *)v12 + 7) = 0;
      *((_DWORD *)v12 + 16) = -1;
      if ( v35 )
        goto LABEL_28;
    }
  }
  v14 = sub_176860((__int64 *)v13, v8);
  v59 = v14 >> 48;
  v16 = v14 >> 48;
  v53 = v14 << 16 >> 48;
  v56 = (int)((unsigned __int64)v14 >> 16) >> 16;
  v15 = sub_176860((__int64 *)v13, src);
  LODWORD(v16) = (__int16)v16;
  v17 = v15 >> 48;
  v61 = (__int16)v16;
  v60 = v15 << 16 >> 48;
  v18 = v56;
  v19 = (__int16)v53;
  v63 = HIWORD(v15);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 1) != 0 )
  {
    v55 = v56;
    v58 = v19;
    sub_4F7CB0(
      1,
      (unsigned int)"IDADisasmCursor::selectedText(); start=%d, end=%d, start_pos=%d,%d, end_pos=%d,%d\n",
      v8,
      src,
      v19,
      (__int16)v16);
    v18 = v55;
    v19 = v58;
  }
  v20 = 0;
  v73 = 0;
  srca = nullptr;
  if ( (__int16)v17 > (__int16)v59 )
  {
    while ( 1 )
    {
      v72 = v20;
      ptr = srca;
      sub_2D91B0(&ptr, (unsigned __int64)v13, (unsigned int)v16, v18, -1);
      v20 = v72;
      srca = ptr;
      if ( v72 )
      {
        v25 = v72 - 1;
        if ( v72 != 1 )
          break;
      }
LABEL_12:
      v18 = 0;
      if ( v63 <= (__int16)(v16 + 1) )
      {
        v19 = 0;
        v61 = (__int16)(v16 + 1);
        goto LABEL_40;
      }
      LODWORD(v16) = v16 + 1;
    }
    v21 = v70;
    if ( (_QWORD)v70 )
    {
      v21 = v70 - 1;
      v22 = s;
      v23 = v25 + v70 - 1;
      v24 = v72 + v70 - 1;
      if ( *((_QWORD *)&v70 + 1) < v24 )
      {
LABEL_18:
        v54 = v23;
        v57 = v21;
        v62 = v24;
        s = (char *)qvector_reserve(&s, v22, v24, 1);
        v23 = v54;
        v22 = s;
        v21 = v57;
        v25 = v20 - 1;
        v24 = v62;
      }
    }
    else
    {
      v22 = s;
      v24 = v72;
      v23 = v72 - 1;
      if ( *((_QWORD *)&v70 + 1) < v72 )
        goto LABEL_18;
    }
    *(_QWORD *)&v70 = v24;
    v22[v23] = 0;
    memcpy(&s[v21], srca, v25);
    goto LABEL_12;
  }
LABEL_40:
  v43 = v13;
  v72 = v20;
  ptr = srca;
  sub_2D91B0(&ptr, (unsigned __int64)v13, v61, v19, v60);
  v44 = v72;
  srcb = (const char *)ptr;
  if ( v72 )
  {
    v45 = v72 - 1;
    if ( v72 != 1 )
    {
      v46 = v70;
      v47 = v72 - 1;
      if ( (_QWORD)v70 )
      {
        v46 = v70 - 1;
        v47 = v45 + v70 - 1;
        v44 = v72 + v70 - 1;
      }
      v48 = s;
      if ( *((_QWORD *)&v70 + 1) < v44 )
      {
        s = (char *)qvector_reserve(&s, s, v44, 1);
        v48 = s;
      }
      *(_QWORD *)&v70 = v44;
      v48[v47] = 0;
      v43 = srcb;
      memcpy(&s[v46], srcb, v45);
    }
  }
  if ( !srcb )
  {
LABEL_31:
    v36 = v70;
    if ( (_QWORD)v70 )
      goto LABEL_32;
    goto LABEL_49;
  }
  v10 = qfree(srcb, v43);
  v36 = v70;
  if ( (_QWORD)v70 )
  {
LABEL_32:
    v37 = v36 - 1;
    v38 = s;
    v39 = v37 >> 63;
    if ( s )
      goto LABEL_33;
    goto LABEL_50;
  }
LABEL_49:
  v38 = (char *)&s1;
  LOBYTE(v39) = 0;
  v37 = 0;
  if ( &s1 )
  {
LABEL_33:
    if ( !(_BYTE)v39 )
      goto LABEL_34;
  }
LABEL_50:
  v37 = 0;
  if ( v38 )
    v37 = strlen(v38);
LABEL_34:
  v40 = (const char *)v37;
  v41 = QT::QString::fromUtf8(a1, v37, v38, v10);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 1) != 0 )
  {
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a1);
    LODWORD(v52) = v72;
    if ( !v72 )
      v52 = &QT::QByteArray::_empty;
    v40 = "IDADisasmCursor::selectedText() => %s\n";
    sub_4F7CB0(1, (unsigned int)"IDADisasmCursor::selectedText() => %s\n", (_DWORD)v52, v49, v50, v51);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
  }
  if ( s )
  {
    *(_QWORD *)&v70 = 0;
    qfree(s, v40, v41);
  }
  return a1;
}
