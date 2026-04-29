__int64 __fastcall sub_172B30(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx

  result = 0;
  if ( *(_BYTE *)a2 == 1 )
  {
    v3 = *(_DWORD *)(a2 + 4);
    if ( v3 != -1 && v3 < *(_DWORD *)(a1[6] + 84) )
      return (unsigned __int8)sub_13B090(a1[1], *(_DWORD *)(a2 + 8), *(_QWORD *)(a1[4] + 24));
  }
  return result;
}
