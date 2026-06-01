unsigned __int64 __fastcall sub_6E1F00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  v5 = a2;
  if ( a2 )
    v5 = a2 - 8;
  sub_B02E60(v5, a3, *(_QWORD *)(a1 + 16));
  return sub_6999F0(*(_QWORD **)a3, *(_QWORD *)a3 + 4LL * *(unsigned int *)(a3 + 8));
}

