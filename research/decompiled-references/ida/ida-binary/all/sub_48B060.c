QT::QVariant *__fastcall sub_48B060(QT::QVariant *this, _QWORD *a2, int *a3, _QWORD *a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64); // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rsi
  size_t v16; // rbp
  _QWORD *v17; // rax
  __int64 v18; // rax
  const char *v19; // rdx
  const char *v20; // r12
  _QWORD *v21; // rax
  size_t v22; // rax
  char *v23; // rbp
  unsigned __int64 v24; // rdx
  double v25; // xmm0_8
  _QWORD *v26; // [rsp+0h] [rbp-88h]
  int v27; // [rsp+Ch] [rbp-7Ch]
  __int64 v28; // [rsp+17h] [rbp-71h] BYREF
  char v29; // [rsp+1Fh] [rbp-69h]
  char *s; // [rsp+20h] [rbp-68h] BYREF
  __int128 v31; // [rsp+28h] [rbp-60h]
  void *ptr[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+50h] [rbp-38h]
  unsigned __int64 v34; // [rsp+58h] [rbp-30h]

  v34 = __readfsqword(0x28u);
  if ( (unsigned int)a5 > 9 || (v6 = 839, !_bittest64(&v6, a5)) )
  {
LABEL_12:
    *((_QWORD *)this + 2) = 0;
    *((_QWORD *)this + 3) = 2;
    *(_OWORD *)this = 0;
    return this;
  }
  if ( *a3 < 0 )
  {
    v12 = a3[1];
LABEL_15:
    v28 = -1;
    v14 = -1;
    v29 = 0;
    goto LABEL_16;
  }
  v9 = *a3;
  v10 = *(__int64 (__fastcall **)(__int64))(*a4 + 24LL);
  if ( v10 == folder_data_t__::vfunc_3 )
  {
    v11 = a4[2];
  }
  else
  {
    v27 = a5;
    v26 = a4;
    v11 = v10((__int64)a4);
    LODWORD(a5) = v27;
    a4 = v26;
  }
  v12 = a3[1];
  if ( v9 >= v11 )
    goto LABEL_15;
  v13 = a4[1] + 9 * v9;
  v14 = *(_QWORD *)v13;
  v28 = v14;
  v29 = *(_BYTE *)(v13 + 8);
  if ( v14 == -1 || !v29 )
  {
LABEL_16:
    v16 = (1LL << a5) & 0x342;
    if ( ((1LL << a5) & 0x342) != 0 )
    {
      ptr[0] = (void *)v14;
      sub_4E1A30((_DWORD)this, (_DWORD)a2, (unsigned int)ptr, (_DWORD)a3, a5, a6, (_DWORD)v26);
      return this;
    }
    if ( ((1LL << a5) & 5) == 0 )
      goto LABEL_12;
    v17 = (_QWORD *)sub_4DF1E0(a2[2], v14);
    if ( !v17 || (v12 & 0x80000000) != 0LL || v12 >= a2[4] )
    {
      v33 = 0;
      *(_OWORD *)ptr = 0;
LABEL_22:
      QT::QVariant::QVariant(this, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      return this;
    }
    v18 = sub_4DFD60(a2[2], *v17 + 24 * v12, 0);
    v20 = v19;
    if ( v19 )
    {
      if ( v18 >= 0 )
      {
LABEL_29:
        QT::QString::fromUtf8(ptr, v18, v20);
        goto LABEL_22;
      }
      v16 = strlen(v19);
    }
    v18 = v16;
    goto LABEL_29;
  }
  if ( (_DWORD)v12 )
    goto LABEL_12;
  if ( (_DWORD)a5 == 1 )
  {
    QT::QIcon::operator QT::QVariant(this, a2 + 16);
    return this;
  }
  if ( (a5 & 0xFFFFFFFD) != 0 )
    goto LABEL_12;
  v21 = (_QWORD *)a2[26];
  s = nullptr;
  v31 = 0;
  dirtree_get_entry_name(&s, *v21, &v28, 1);
  if ( (_QWORD)v31 )
  {
    v22 = v31 - 1;
    v23 = s;
    v24 = (unsigned __int64)(v31 - 1) >> 63;
  }
  else
  {
    LOBYTE(v24) = 0;
    v22 = 0;
    v23 = (char *)&s1;
  }
  if ( !v23 || (_BYTE)v24 )
  {
    v22 = 0;
    if ( v23 )
      v22 = strlen(v23);
  }
  v25 = QT::QString::fromUtf8(ptr, v22, v23);
  QT::QVariant::QVariant(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( s )
  {
    *(_QWORD *)&v31 = 0;
    qfree(s, (const char *)ptr, v25);
  }
  return this;
}
