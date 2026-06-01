unsigned __int64 __fastcall sub_6E16A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( !a2 )
    BUG();
  sub_B0CE80(a3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 - 16), (*(_BYTE *)(a2 - 22) & 8) != 0, a5, a6);
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

