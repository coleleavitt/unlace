__int64 __fastcall sub_205FAF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // [rsp+8h] [rbp-10h]

  result = sub_2054E70(*(__int64 **)a1, a2);
  v3 = *(unsigned __int8 *)(a1 + 8);
  if ( (unsigned int)(v3 - 17) <= 1 )
  {
    BYTE4(v4) = (_BYTE)v3 == 18;
    LODWORD(v4) = *(_DWORD *)(a1 + 32);
    return sub_205EF10(v4, result);
  }
  return result;
}
