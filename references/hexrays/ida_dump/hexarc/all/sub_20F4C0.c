__int64 __fastcall sub_20F4C0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 i; // r12
  __int64 v4; // rsi

  result = sub_2B1330(*(_QWORD *)(a1 + 1504), a1 + 1256, *(_QWORD *)(a1 + 40));
  if ( (_BYTE)result )
  {
    result = *(_QWORD *)(a1 + 1264);
    v2 = *(_QWORD *)(a1 + 1256);
    for ( i = v2 + 96 * result; v2 != i; *(_QWORD *)(v2 - 16) = result )
    {
      v4 = *(_QWORD *)(v2 + 48);
      v2 += 96;
      result = get_tinfo_size(0, v4, 0);
    }
    if ( (*(_BYTE *)(a1 + 1304) & 1) == 0 )
      *(_DWORD *)a1 &= ~1u;
  }
  return result;
}
