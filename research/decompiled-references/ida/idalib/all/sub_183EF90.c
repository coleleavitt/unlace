__int64 __fastcall sub_183EF90(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // cl
  int v3; // edx

  if ( *(_DWORD *)a1 != 2 )
    return 0;
  result = **(_QWORD **)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  v2 = *(_BYTE *)(result + 28) & 0x7F;
  v3 = v2;
  if ( (unsigned int)v2 - 53 <= 1 || ((v2 + 52) & 0x7Fu) <= 1 )
  {
    result = sub_B72ED0(result);
    v3 = *(_BYTE *)(result + 28) & 0x7F;
  }
  if ( (unsigned int)(v3 - 58) >= 0xA )
    return 0;
  return result;
}
