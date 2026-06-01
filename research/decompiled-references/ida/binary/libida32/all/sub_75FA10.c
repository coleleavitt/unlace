__int64 __fastcall sub_75FA10(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 104);
  if ( !(_BYTE)result )
  {
    result = sub_75F720(a1, 1);
    *(_BYTE *)(a1 + 104) = result;
  }
  return result;
}

