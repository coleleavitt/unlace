__int64 __fastcall sub_804030(__int64 a1, __int64 a2)
{
  int v2; // eax
  char v3; // cl
  __int64 v5; // [rsp+8h] [rbp-10h]

  v3 = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 57 <= 2 )
  {
    v2 = sub_7A4640(a2);
    v3 = 1;
  }
  LODWORD(v5) = v2;
  BYTE4(v5) = v3;
  return v5;
}

