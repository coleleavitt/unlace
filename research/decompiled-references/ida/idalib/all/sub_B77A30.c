unsigned __int64 __fastcall sub_B77A30(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 152);
  result = 0;
  if ( v1 )
  {
    if ( ((v1 >> 1) & 3) == 0 )
    {
      result = v1 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v1 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (*(_BYTE *)(result + 28) & 0x7F) != 0x47 )
        return (v1 >> 1) & 3;
    }
  }
  return result;
}
