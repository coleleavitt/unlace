__m128i *__fastcall sub_2DAF80(__m128i *a1, const char *a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // rsi
  __m128i v12; // xmm0
  __m128i si128; // xmm1
  __int64 v14; // rcx
  __int64 v16; // r14
  __int64 v17; // rax
  void *v18; // r8
  void *v19; // r15
  unsigned int v20; // r12d
  __int64 v21; // r10
  char *v22; // r9
  char *v23; // rsi
  const char *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  void *v29; // rcx
  const char *v30; // rsi
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // r12
  __int64 i; // r15
  __int64 *v35; // rax
  __int64 v36; // rdi
  bool v37; // zf
  unsigned __int64 v38; // rax
  char *v39; // rbp
  signed __int64 v40; // rax
  char *v41; // r11
  QT::QAccessibleWidget *v42; // [rsp+0h] [rbp-D8h]
  unsigned __int64 v43; // [rsp+8h] [rbp-D0h]
  int v44; // [rsp+14h] [rbp-C4h]
  char *v45; // [rsp+18h] [rbp-C0h]
  void *v46; // [rsp+20h] [rbp-B8h]
  char *v47; // [rsp+20h] [rbp-B8h]
  char *v48; // [rsp+28h] [rbp-B0h]
  __int64 v49; // [rsp+30h] [rbp-A8h]
  void *v50; // [rsp+38h] [rbp-A0h]
  char *s; // [rsp+40h] [rbp-98h] BYREF
  __int128 v52; // [rsp+48h] [rbp-90h]
  __int128 v53; // [rsp+60h] [rbp-78h]
  __int64 v54; // [rsp+70h] [rbp-68h]
  void *ptr[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v56; // [rsp+90h] [rbp-48h]
  unsigned __int64 v57; // [rsp+98h] [rbp-40h]

  v42 = (QT::QAccessibleWidget *)a2;
  v57 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
  {
    a2 = "%s IDAMemoAccessible::text(t=%d)\n";
    sub_4F7CB0(16, (unsigned int)"%s IDAMemoAccessible::text(t=%d)\n", (unsigned int)&unk_5C2F25, a3, a5, a6);
  }
  v8 = QT::QAccessibleWidget::widget(v42);
  s = nullptr;
  v52 = 0;
  if ( a3 != 2 )
  {
    a1[1].m128i_i64[0] = 0;
    *a1 = 0;
LABEL_6:
    v11 = (const char *)v42;
    QT::QAccessibleWidget::text(ptr, v42, a3);
    goto LABEL_7;
  }
  v16 = sub_1EB5B0(v8, (__int64)a2, v9, v10, 0.0);
  if ( *(_BYTE *)(v16 + 68) )
  {
    v43 = v16 + 40;
  }
  else
  {
    v43 = v16 + 40;
    v30 = (const char *)(v16 + 40);
    v31 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 520LL))(v16, v16 + 40);
    *(_BYTE *)(v16 + 68) = v31;
    if ( !v31 )
    {
      v32 = *(_QWORD *)(v16 + 40);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v16 + 48);
        if ( v33 )
        {
          for ( i = 0; i != v33; ++i )
          {
            v35 = (__int64 *)(v32 + 24 * i);
            v36 = *v35;
            if ( *v35 )
            {
              v35[1] = 0;
              qfree(v36, v30);
              v32 = *(_QWORD *)(v16 + 40);
            }
          }
        }
        *(_QWORD *)(v16 + 48) = 0;
        qfree(v32, v30);
        v37 = *(_BYTE *)(v16 + 68) == 0;
        *(_QWORD *)(v16 + 40) = 0;
        *(_QWORD *)(v16 + 56) = 0;
        *(_DWORD *)(v16 + 64) = -1;
        if ( !v37 )
          goto LABEL_17;
      }
      else
      {
        *(_DWORD *)(v16 + 64) = -1;
      }
      v38 = v52;
      goto LABEL_45;
    }
  }
LABEL_17:
  v56 = 0;
  v17 = *(_QWORD *)(v16 + 48);
  v54 = 0;
  v44 = v17;
  v53 = 0;
  if ( (int)v17 > 0 )
  {
    v18 = nullptr;
    v19 = nullptr;
    v20 = 0;
    do
    {
      v24 = (const char *)v43;
      ptr[1] = v18;
      ptr[0] = v19;
      sub_2D91B0(ptr, v43, v20, 0, -1);
      v18 = ptr[1];
      v19 = ptr[0];
      if ( ptr[1] )
      {
        v41 = (char *)ptr[1] - 1;
        if ( ptr[1] != (char *)&dword_0 + 1 )
        {
          v21 = v52;
          if ( (_QWORD)v52 )
          {
            v21 = v52 - 1;
            v45 = &v41[v52 - 1];
            v22 = (char *)ptr[1] + v52 - 1;
          }
          else
          {
            v45 = (char *)ptr[1] - 1;
            v22 = (char *)ptr[1];
          }
          v23 = s;
          if ( *((_QWORD *)&v52 + 1) < (unsigned __int64)v22 )
          {
            v50 = ptr[1];
            v49 = v21;
            v48 = (char *)ptr[1] - 1;
            v47 = v22;
            s = (char *)qvector_reserve(&s, s, v22, 1);
            v18 = v50;
            v23 = s;
            v21 = v49;
            v41 = v48;
            v22 = v47;
          }
          *(_QWORD *)&v52 = v22;
          v46 = v18;
          v45[(_QWORD)v23] = 0;
          v24 = (const char *)v19;
          memcpy(&s[v21], v19, (size_t)v41);
          v18 = v46;
        }
      }
      ++v20;
    }
    while ( v44 != v20 );
    if ( v19 )
      qfree(v19, v24, v25, v26, v18);
  }
  v38 = v52;
LABEL_45:
  a1[1].m128i_i64[0] = 0;
  *a1 = 0;
  if ( v38 <= 1 )
    goto LABEL_6;
  v39 = s;
  v40 = v38 - 1;
  if ( !s || v40 < 0 )
  {
    v40 = 0;
    if ( s )
      v40 = strlen(s);
  }
  v11 = (const char *)v40;
  QT::QString::fromUtf8(ptr, v40, v39);
LABEL_7:
  v12 = _mm_loadu_si128(a1);
  si128 = _mm_load_si128((const __m128i *)ptr);
  v14 = v56;
  v56 = a1[1].m128i_i64[0];
  a1[1].m128i_i64[0] = v14;
  *a1 = si128;
  *(__m128i *)ptr = v12;
  if ( v12.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v12.m128i_i64[0], 1u) )
    free(ptr[0]);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 0x10) != 0 )
  {
    QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)a1);
    LODWORD(v29) = ptr[1];
    if ( !ptr[1] )
      v29 = &QT::QByteArray::_empty;
    v11 = "%s IDAMemoAccessible::text() => %s\n";
    sub_4F7CB0(
      16,
      (unsigned int)"%s IDAMemoAccessible::text() => %s\n",
      (unsigned int)&unk_5C2F25,
      (_DWORD)v29,
      v27,
      v28);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  if ( s )
  {
    *(_QWORD *)&v52 = 0;
    qfree(s, v11);
  }
  return a1;
}
