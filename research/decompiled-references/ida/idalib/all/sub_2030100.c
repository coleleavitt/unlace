__int64 __fastcall sub_2030100(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // cl
  __int64 result; // rax

  v2 = *(_BYTE *)(a1 + 32) & 0xF;
  result = (unsigned int)v2 - 7;
  if ( (unsigned int)result > 1 && ((*(_BYTE *)(a1 + 32) & 0x30) == 0 || v2 == 9) )
    return sub_995540(a2, "dso_local ");
  return result;
}
