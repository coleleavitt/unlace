unsigned __int64 __fastcall sub_7BB20(__int64 a1, __int64 *a2)
{
  signed int v3; // esi
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // rt0
  __int64 v9; // rax

  if ( !*(_QWORD *)(a1 + 8) )
  {
    v3 = *(_DWORD *)(a1 + 16);
    if ( v3 <= 127 )
      return sub_7ADE0(a2, v3);
  }
  v4 = a2[1];
  v5 = *a2;
  if ( a2[2] < (unsigned __int64)(v4 + 1) )
  {
    v9 = qvector_reserve(a2, v5, v4 + 1, 1);
    *a2 = v9;
    v5 = v9;
    v4 = a2[1];
  }
  *(_BYTE *)(v5 + v4) = 0x80;
  ++a2[1];
  sub_7ADE0(a2, *(_DWORD *)(a1 + 16));
  v6 = -*(_QWORD *)(a1 + 8);
  if ( *(__int64 *)(a1 + 8) > 0 )
    v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v7 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)&v7 + 1) = v6;
  return sub_7AE40(a2, v7 >> 63);
}
