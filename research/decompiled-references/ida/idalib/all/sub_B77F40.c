__int64 __fastcall sub_B77F40(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 85) & 4) != 0 )
    return *(unsigned int *)(a1 + 136);
  v1 = (_QWORD *)sub_B77930(a1);
  if ( !v1 || (*v1 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    return sub_B71DD0(a1);
  *(_BYTE *)(a1 + 85) |= 4u;
  result = sub_B77F40();
  *(_DWORD *)(a1 + 136) = result;
  return result;
}
