unsigned __int64 __fastcall sub_6E2870(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_B06D70(a3, *(_QWORD *)(a1 + 16), *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 8));
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

