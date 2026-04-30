__int64 __fastcall sub_51F150(QT::QAbstractItemView *a1)
{
  __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[3] = __readfsqword(0x28u);
  v1 = (__int64 *)QT::QAbstractItemView::model(a1);
  result = 0;
  if ( v1 )
  {
    v3 = *v1;
    v4[0] = -1;
    v4[1] = 0;
    v4[2] = 0;
    return (*(__int64 (__fastcall **)(__int64 *, _QWORD *))(v3 + 128))(v1, v4);
  }
  return result;
}
