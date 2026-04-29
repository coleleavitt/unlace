__int64 __fastcall sub_124E70(__int64 a1, _BYTE *a2, __int64 a3, char a4)
{
  __int64 v5; // rcx
  __int128 v6; // rdi

  *(_BYTE *)(a1 + 40) = 1;
  if ( a4 && ((*a2 - 4) & 0xFB) != 0 )
    return 0;
  v5 = *(unsigned int *)(a1 + 56);
  *((_QWORD *)&v6 + 1) = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 16);
  sub_123EA0(v6, (__int64)a2, v5, 0xFFFF0000);
  return 0;
}
