unsigned __int64 __fastcall sub_6E03E0(__int64 a1, _QWORD *a2, __int64 a3)
{
  if ( !a2 )
    BUG();
  sub_B07090(a3, *(_QWORD *)(a1 + 16), a2[1], a2[2], a2[3]);
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

