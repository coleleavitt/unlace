__int64 __fastcall sub_FFF650(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = sub_FFF2F0(a1, a2, 0);
  *(_BYTE *)(result + 48) |= 4u;
  return result;
}

