__int64 __fastcall sub_3BA280(__int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rax
  char v6; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD *))(QT::QCoreApplication::self[2] + 40LL))(
         QT::QCoreApplication::self + 2,
         a1,
         a2);
  if ( v2 <= 3 )
  {
    if ( *a2 )
    {
      v3 = a2[9];
      v6 = *(_BYTE *)(*(_QWORD *)(*a2 + 1000LL) + 56LL);
      v4 = sub_534430(v3);
      if ( v4 )
        sub_537630(v4, 7, &v6);
    }
  }
  return (unsigned int)v2;
}
