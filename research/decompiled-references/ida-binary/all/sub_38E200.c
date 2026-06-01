unsigned __int64 __fastcall sub_38E200(QT::QComboBox **a1)
{
  void **v1; // rbx
  void **v2; // rbp
  void *v4[4]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v5; // [rsp+20h] [rbp-58h] BYREF
  __int128 v6; // [rsp+28h] [rbp-50h]
  void *ptr[2]; // [rsp+38h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  unsigned __int64 v9; // [rsp+58h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v6 = 0;
  *(_OWORD *)ptr = 0;
  v5 = 0;
  v8 = 0;
  sub_4F65D0(&v5, "STROFFSET");
  QT::QComboBox::lineEdit(a1[12]);
  QT::QLineEdit::text((QT::QLineEdit *)v4);
  sub_4F6A20(&v5, v4);
  if ( v4[0] && !_InterlockedSub((volatile signed __int32 *)v4[0], 1u) )
    free(v4[0]);
  (*((void (__fastcall **)(QT::QComboBox **))*a1 + 55))(a1);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    v1 = (void **)ptr[1];
    v2 = (void **)((char *)ptr[1] + 24 * v8);
    if ( ptr[1] != v2 )
    {
      do
      {
        if ( *v1 && !_InterlockedSub((volatile signed __int32 *)*v1, 1u) )
          free(*v1);
        v1 += 3;
      }
      while ( v2 != v1 );
    }
    free(ptr[0]);
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree(v5, (const char *)v4);
  }
  return v9 - __readfsqword(0x28u);
}
