__int64 __fastcall sub_271D10(__int64 a1)
{
  __int64 result; // rax

  result = sub_277DF0();
  if ( (*(_BYTE *)(result + 128) & 1) == 0 )
    return sub_278C20(result, a1);
  return result;
}
