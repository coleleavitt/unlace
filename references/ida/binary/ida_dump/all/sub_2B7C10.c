bool __fastcall sub_2B7C10(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v4; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(a1 + 1496);
  if ( v1 != *(_QWORD *)(v2 + 1112) )
  {
    v4 = sub_2B6080(*(_QWORD *)(a1 + 40), 0);
    if ( v4 != -1 )
    {
      *(_QWORD *)(v2 + 1112) = v1;
      *(_QWORD *)(v2 + 1120) = v4;
    }
  }
  return netnode_supval() > 0;
}
