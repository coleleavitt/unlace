bool __fastcall sub_2B3F90(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // rdi
  __int64 v6; // rax

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 1496);
  if ( v2 == *(_QWORD *)(v3 + 1112) )
  {
    v4 = *(_QWORD *)(v3 + 1120);
  }
  else
  {
    v6 = sub_2B2400(*(_QWORD *)(a1 + 40), 0);
    v4 = v6;
    if ( v6 != -1 )
    {
      *(_QWORD *)(v3 + 1112) = v2;
      *(_QWORD *)(v3 + 1120) = v6;
    }
  }
  return netnode_supval(v4, (a2 - v2) << 6, 0, 0, 103) > 0;
}
