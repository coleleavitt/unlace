unsigned __int64 __fastcall sub_462550(__int64 a1, QT::QDockWidget *a2)
{
  void *ptr[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v4 = 0;
  sub_1DD6B0(a2, (__int64)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v5 - __readfsqword(0x28u);
}
