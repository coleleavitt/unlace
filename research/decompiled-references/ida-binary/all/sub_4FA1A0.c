QT::QComboBox *__fastcall sub_4FA1A0(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  QT::QComboBox *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  void **v11; // rbp
  __int64 v12; // r12
  __int64 (*v13)(); // rax
  QT::QLineEdit *v15; // r12
  __m128i ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v17; // [rsp+10h] [rbp-38h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v5 = (QT::QComboBox *)operator new(0x28u);
  QT::QComboBox::QComboBox(v5, nullptr);
  if ( a2 )
  {
    v15 = (QT::QLineEdit *)operator new(0x28u);
    sub_50FA80(v15);
    QT::QComboBox::setLineEdit(v5, v15);
  }
  if ( a4 )
  {
    sub_4F76F0(&ptr, *(char *)(a4 + 16), v6, v7, v8, v9);
    v10 = (unsigned int)QT::QComboBox::count(v5);
    QT::QComboBox::insertItems(v5, v10, &ptr);
    if ( ptr.m128i_i64[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
      {
        v11 = (void **)ptr.m128i_i64[1];
        v12 = ptr.m128i_i64[1] + 24 * v17;
        if ( ptr.m128i_i64[1] != v12 )
        {
          do
          {
            if ( *v11 && !_InterlockedSub((volatile signed __int32 *)*v11, 1u) )
              free(*v11);
            v11 += 3;
          }
          while ( (void **)v12 != v11 );
        }
        free((void *)ptr.m128i_i64[0]);
      }
    }
  }
  v13 = *(__int64 (**)())(*QT::QCoreApplication::self + 288LL);
  if ( v13 != sub_3895F0 && !(unsigned __int8)v13() )
    QT::QComboBox::setCompleter(v5, nullptr);
  return v5;
}
