__int64 __fastcall sub_183A950(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx

  result = sub_B8E970(a1 + 64);
  if ( result && (*(_BYTE *)(result + 28) & 0x7F) != 0x26 )
  {
    do
    {
      v2 = *(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
      result = v2;
    }
    while ( v2 && (*(_BYTE *)(v2 + 28) & 0x7F) != 0x26 );
  }
  return result;
}
