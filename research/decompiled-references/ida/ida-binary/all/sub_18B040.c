unsigned __int64 __fastcall sub_18B040(__int64 a1, double a2, __m128 a3)
{
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 96) )
  {
    QT::QLineEdit::text((QT::QLineEdit *)ptr);
    sub_18AEE0(a1, (const QT::QString *)ptr, a2, a3);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v5 - __readfsqword(0x28u);
}
