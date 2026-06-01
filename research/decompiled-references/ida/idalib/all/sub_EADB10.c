unsigned __int64 __fastcall sub_EADB10(__int64 a1)
{
  unsigned __int8 v1; // cl
  unsigned __int64 result; // rax

  v1 = *(_BYTE *)(a1 + 8);
  result = 0;
  if ( v1 <= 0x2Du )
    return (0x238C51B9FFE2uLL >> v1) & 1;
  return result;
}
