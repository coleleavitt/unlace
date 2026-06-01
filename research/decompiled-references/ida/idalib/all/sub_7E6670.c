__int64 __fastcall sub_7E6670(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  unsigned __int64 v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[1] = __readfsqword(0x28u);
  v5[0] = *a2;
  if ( __CFADD__(a3, v5[0]) )
    return 0;
  v4 = a3 + v5[0];
  if ( !sub_7E30F0((_DWORD *)a1, v5) )
    return 0;
  if ( !sub_7E30F0((_DWORD *)(a1 + 4), v5) )
    return 0;
  result = sub_7E65D0((__int64 *)(a1 + 8), v5, v4 - v5[0]);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v5[0];
  return result;
}
