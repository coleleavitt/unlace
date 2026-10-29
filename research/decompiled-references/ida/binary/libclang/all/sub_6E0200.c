unsigned __int64 __fastcall sub_6E0200(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_B06BB0(a3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16), (*(_BYTE *)(a2 - 6) >> 3) & 0xF);
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

