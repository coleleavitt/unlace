__int64 __fastcall sub_1DB76E0(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v1 & 4) != 0 )
    v2 = (_QWORD *)*v2;
  return sub_B8C1B0((__int64)v2);
}
