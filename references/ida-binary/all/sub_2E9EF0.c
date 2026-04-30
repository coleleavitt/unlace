unsigned __int64 __fastcall sub_2E9EF0(QT::QWidget *this, int *a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v7; // rdx
  const char **v8; // rbp
  unsigned __int64 v9; // r12
  const char *v10; // r14
  void *v11; // rax
  unsigned __int64 v12; // r12
  const char *v13; // rax
  QT::QLineEdit *v14; // r12
  size_t v15; // rax
  const char *v16; // rbp
  size_t v17; // rdx
  const char *v18; // r14
  void *v19; // rax
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v3 = *((_QWORD *)this + 10);
  if ( *(_DWORD *)(v3 + 72) || (v4 = *(_QWORD *)(v3 + 48)) == 0 )
  {
    v5 = sub_2E6E70(v3, a2);
    if ( v5 )
      return sub_2E9D20(this, v5);
    return v21 - __readfsqword(0x28u);
  }
  v7 = *a2;
  if ( (v7 & 0x80000000) != 0LL )
    return v21 - __readfsqword(0x28u);
  if ( a2[1] < 0 )
    return v21 - __readfsqword(0x28u);
  if ( !*((_QWORD *)a2 + 2) )
    return v21 - __readfsqword(0x28u);
  if ( v7 >= v4 )
    return v21 - __readfsqword(0x28u);
  v8 = (const char **)(*(_QWORD *)(v3 + 40) + 48 * v7);
  if ( !v8 )
    return v21 - __readfsqword(0x28u);
  if ( v8 != (const char **)((char *)this + 208) )
  {
    v9 = (unsigned __int64)v8[1];
    if ( v9 < 2 )
    {
      *((_QWORD *)this + 27) = 0;
    }
    else
    {
      v10 = *v8;
      v11 = *((void **)this + 26);
      if ( *((_QWORD *)this + 28) < v9 )
      {
        v11 = (void *)qvector_reserve((char *)this + 208, *((_QWORD *)this + 26), v8[1], 1);
        *((_QWORD *)this + 26) = v11;
      }
      *((_QWORD *)this + 27) = v9;
      memmove(v11, v10, v9 - 1);
      *(_BYTE *)(*((_QWORD *)this + 26) + v9 - 1) = 0;
    }
  }
  if ( (const char **)((char *)this + 232) != v8 + 3 )
  {
    v12 = (unsigned __int64)v8[4];
    if ( v12 > 1 )
    {
      v18 = v8[3];
      v19 = *((void **)this + 29);
      if ( *((_QWORD *)this + 31) < v12 )
      {
        v19 = (void *)qvector_reserve((char *)this + 232, *((_QWORD *)this + 29), v8[4], 1);
        *((_QWORD *)this + 29) = v19;
      }
      *((_QWORD *)this + 30) = v12;
      memmove(v19, v18, v12 - 1);
      *(_BYTE *)(*((_QWORD *)this + 29) + v12 - 1) = 0;
    }
    else
    {
      *((_QWORD *)this + 30) = 0;
    }
  }
  v13 = v8[1];
  v14 = *((QT::QLineEdit **)this + 8);
  if ( v13 )
  {
    v15 = (size_t)(v13 - 1);
    v16 = *v8;
    v17 = v15 >> 63;
  }
  else
  {
    LOBYTE(v17) = 0;
    v15 = 0;
    v16 = &s1;
  }
  if ( !v16 || (_BYTE)v17 )
  {
    v15 = 0;
    if ( v16 )
      v15 = strlen(v16);
  }
  QT::QString::fromUtf8(ptr, v15, v16);
  QT::QLineEdit::setText(v14, (const QT::QString *)ptr);
  if ( ptr[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return QT::QLineEdit::selectAll(*((QT::QLineEdit **)this + 8));
}
