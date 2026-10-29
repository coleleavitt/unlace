__int64 __fastcall sub_7D18A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = sub_7D17D0(a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)(a2 + 8) = (int)qlgetc(v2);
  return 0;
}
