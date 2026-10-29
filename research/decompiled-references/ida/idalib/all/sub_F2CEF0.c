void __fastcall sub_F2CEF0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 && (v2 & 2) != 0 && (v2 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " field ");
    sub_F2A6D0(a1, v2 & 0xFFFFFFFFFFFFFFFCLL);
  }
}
