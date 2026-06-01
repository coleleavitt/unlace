__int64 __fastcall sub_3BA360(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  char v8; // [rsp+7h] [rbp-21h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v2 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
         QT::QCoreApplication::self + 2,
         a1,
         a2);
  if ( v2 <= 3 )
  {
    v4 = sub_3C5C60(a2);
    if ( v4 )
    {
      if ( !*(_BYTE *)(v4 + 112) )
      {
        v5 = *(_QWORD *)(v4 + 104);
        if ( v5 )
        {
          v6 = *(_QWORD *)(a2 + 72);
          v8 = *(_BYTE *)(*(_QWORD *)(v5 + 1000) + 57LL);
          v7 = sub_534430(v6);
          if ( v7 )
            sub_537630(v7, 7, &v8);
        }
      }
    }
  }
  return (unsigned int)v2;
}
