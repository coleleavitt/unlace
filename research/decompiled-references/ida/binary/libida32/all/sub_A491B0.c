unsigned __int64 __fastcall sub_A491B0(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_F39F60(a3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 - 16), (*(_BYTE *)(a2 - 22) & 8) != 0);
  return sub_961DD0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

