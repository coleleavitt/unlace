__int64 __fastcall sub_3AF370(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx

  v2 = sub_3AF270(a2 - 32);
  if ( v2 == (_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1576) + 8LL * *(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1576) + 8LL))
    || (unsigned int)compare_bpt_locs(*v2 + 32LL, a2) )
  {
    return 0;
  }
  else
  {
    return *v2;
  }
}
