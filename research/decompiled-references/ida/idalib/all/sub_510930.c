__int64 __fastcall sub_510930(__int64 a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  _QWORD v7[7]; // [rsp+0h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 776) && a2 <= 2 )
    callui(11, (int)v7, a3, a4, a5, a6);
  return 0;
}
