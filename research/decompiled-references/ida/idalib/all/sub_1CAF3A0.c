__int64 __fastcall sub_1CAF3A0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rdi
  unsigned __int8 v4; // cl
  unsigned __int64 v5; // r9

  result = a2;
  v3 = *a1;
  v4 = (*(_BYTE *)(a2 + 2) >> 3) & 7;
  if ( v4 == 7 || ((1LL << v4) & 0x43) == 0 )
  {
    if ( !*(_DWORD *)(v3 + 12632) )
      return result;
    v5 = *(_QWORD *)(v3 + 544);
    return sub_18C3820(v3, v4, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v5);
  }
  v5 = *(_QWORD *)(v3 + 544);
  if ( v5 != *(_QWORD *)(a2 + 24) || *(_DWORD *)(v3 + 12632) )
    return sub_18C3820(v3, v4, *(_QWORD *)(a2 + 8), *(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v5);
  return result;
}
