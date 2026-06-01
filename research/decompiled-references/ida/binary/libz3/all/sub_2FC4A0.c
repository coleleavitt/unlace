__int64 __fastcall sub_2FC4A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( !*(_DWORD *)a3 )
    return sub_27B950(a1, a4, (int *)a2);
  if ( !*(_DWORD *)a2 )
    return sub_27B950(a1, a4, (int *)a3);
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0
    || *(_DWORD *)(a2 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    return sub_1851D20(a1, a2, a3, a4);
  }
  sub_1831A80(a1, a2, a3, a4);
  result = sub_182CBA0(a1, a4 + 16);
  *(_BYTE *)(a4 + 20) &= ~1u;
  *(_DWORD *)(a4 + 16) = 1;
  return result;
}

