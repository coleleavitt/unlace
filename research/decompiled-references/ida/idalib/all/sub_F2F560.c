void __fastcall sub_F2F560(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  sub_F2AD60(a1, a2);
  v2 = *(_QWORD *)(a2 + 80);
  if ( (v2 & 4) != 0 )
    sub_F2A610(a1, *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 8));
  else
    sub_F2A610(a1, *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL));
}
