unsigned __int64 __fastcall sub_5120D0(__int64 a1, const char *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // r14
  char *v5; // r15
  char *v6; // r13
  char *v7; // rbx
  QT::QTextLayout *v8; // rbp
  __int64 v9; // rdi
  char *v10; // rdx
  QT::QWidget *v11; // rdi

  result = *(_QWORD *)(a1 + 24);
  if ( a2 && (unsigned __int64)a2 < result )
  {
    v3 = 48 * (result - (_QWORD)a2);
    v5 = *(char **)(a1 + 16);
    v6 = &v5[v3];
    if ( &v5[v3] == v5 )
    {
      v10 = &v5[v3];
    }
    else
    {
      v7 = *(char **)(a1 + 16);
      do
      {
        v8 = *((QT::QTextLayout **)v7 + 3);
        *((_DWORD *)v7 + 10) = 0;
        if ( v8 )
        {
          QT::QTextLayout::~QTextLayout(v8);
          a2 = &byte_8;
          operator delete(v8, 8u);
        }
        v9 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v9, a2);
        }
        v7 += 48;
      }
      while ( v6 != v7 );
      v10 = *(char **)(a1 + 16);
      result = *(_QWORD *)(a1 + 24);
    }
    memmove(v5, &v5[v3], &v10[48 * result] - v6);
    *(_DWORD *)(a1 + 56) |= 1u;
    v11 = *(QT::QWidget **)(a1 + 40);
    *(_QWORD *)(a1 + 24) -= 0xAAAAAAAAAAAAAAABLL * (v3 >> 4);
    return QT::QWidget::update(v11);
  }
  return result;
}
