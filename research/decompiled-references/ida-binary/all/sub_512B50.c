__int64 __fastcall sub_512B50(QT::QAbstractScrollArea *this, __int64 *a2, char a3, __m128d a4, __m128d a5)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdi
  const char *v8; // rax
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r12
  unsigned __int64 v13; // rax
  void *v14; // rdi
  size_t v15; // r13
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v18[7]; // [rsp+10h] [rbp-38h] BYREF

  v18[1] = __readfsqword(0x28u);
  v5 = *((_QWORD *)this + 8);
  if ( !v5 )
    return 0;
  if ( a3 )
  {
    v17 = QT::QCursor::pos(this);
    v18[0] = QT::QWidget::mapFromGlobal(this, &v17);
    v13 = sub_5128F0(this, (__int64)v18, a4, a5);
    v5 = *((_QWORD *)this + 8);
    v6 = HIDWORD(v13);
  }
  else
  {
    LODWORD(v6) = *((_DWORD *)this + 29);
  }
  if ( (unsigned int)v6 >= v5 )
    return 0;
  v7 = (_QWORD *)(*((_QWORD *)this + 7) + 48LL * (unsigned int)v6);
  if ( !v7 )
    return 0;
  v8 = sub_511DC0(v7, nullptr);
  v9 = v8;
  if ( v8 && (v10 = strlen(v8), (v11 = v10) != 0) )
  {
    v14 = (void *)*a2;
    v15 = v10 + 1;
    if ( a2[2] < v10 + 1 )
    {
      v16 = qvector_reserve(a2, *a2, v10 + 1, 1);
      *a2 = v16;
      v14 = (void *)v16;
    }
    a2[1] = v15;
    memmove(v14, v9, v11);
    *(_BYTE *)(*a2 + v11) = 0;
  }
  else
  {
    a2[1] = 0;
  }
  return 1;
}
