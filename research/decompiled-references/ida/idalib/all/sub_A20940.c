__int64 __fastcall sub_A20940(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int16 v4; // [rsp+Ch] [rbp-1Ch] BYREF
  __int16 v5; // [rsp+Eh] [rbp-1Ah] BYREF

  sub_A20890(a1, a2);
  v5 = 0;
  v2 = *(_BYTE *)(a2 + 72);
  if ( (v2 & 1) != 0 )
  {
    LOBYTE(v5) = 1;
    HIBYTE(v5) = (v2 >> 1) & 3;
  }
  sub_227BF10(a1, &v5, 2);
  v4 = *(_QWORD *)(a2 + 88);
  sub_227BF10(a1, &v4, 2);
  return sub_227BF10(a1, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
}
