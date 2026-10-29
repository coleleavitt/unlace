unsigned __int64 __fastcall sub_4734F0(__int64 a1, QT::QLineEdit **a2)
{
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h]
  __int64 v5; // [rsp+18h] [rbp-20h]
  unsigned __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v4 = 0;
  v5 = 1;
  sub_3F53E0(a2, (QT::QString *)ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v6 - __readfsqword(0x28u);
}
