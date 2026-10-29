__int64 __fastcall sub_77FE70(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 108);
  if ( !(_BYTE)result )
  {
    result = sub_77FB80((__int64 *)a1, 1);
    *(_BYTE *)(a1 + 108) = result;
  }
  return result;
}
