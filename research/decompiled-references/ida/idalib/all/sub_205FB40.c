__int64 __fastcall sub_205FB40(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // ecx
  __int64 v6; // [rsp+8h] [rbp-10h]

  v3 = a1;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 8) - 17 <= 1 )
    a1 = **(_QWORD **)(a1 + 16);
  result = sub_2055240(a1, a2, a3);
  v5 = *(unsigned __int8 *)(v3 + 8);
  if ( (unsigned int)(v5 - 17) <= 1 )
  {
    BYTE4(v6) = (_BYTE)v5 == 18;
    LODWORD(v6) = *(_DWORD *)(v3 + 32);
    return sub_205EF10(v6, result);
  }
  return result;
}
