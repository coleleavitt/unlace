__int64 __fastcall sub_AC9900(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = sub_B6AC30(a1 + 48);
  if ( result && (*(_BYTE *)(result + 28) & 0x7F) != 0x12 )
  {
    do
    {
      v2 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v2;
    }
    while ( v2 && (*(_BYTE *)(v2 + 28) & 0x7F) != 0x12 );
  }
  return result;
}

