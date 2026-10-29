__int64 __fastcall set_group_selector(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // edx

  v2 = 0;
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1640LL);
  v4 = *(_DWORD *)(v3 + 136);
  if ( v4 <= 7 )
  {
    v5 = 2 * v4;
    *(_QWORD *)(v3 + 8LL * v5 + 8) = a1;
    *(_QWORD *)(v3 + 8LL * (v5 + 1) + 8) = a2;
    *(_DWORD *)(v3 + 136) = v4 + 1;
    add_undo_record(175, 0, 0);
    sub_422110(v3);
    return 1;
  }
  return v2;
}
