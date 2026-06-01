__int64 __fastcall set_group_selector(int a1, int a2)
{
  unsigned int v2; // edx
  __int64 v3; // rbx
  unsigned int v4; // eax
  int v5; // edx

  v2 = 0;
  v3 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1448LL);
  v4 = *(_DWORD *)(v3 + 72);
  if ( v4 <= 7 )
  {
    v5 = 2 * v4;
    *(_DWORD *)(v3 + 4LL * v5 + 8) = a1;
    *(_DWORD *)(v3 + 4LL * (v5 + 1) + 8) = a2;
    *(_DWORD *)(v3 + 72) = v4 + 1;
    add_undo_record(175, 0, 0);
    sub_40E9E0(v3);
    return 1;
  }
  return v2;
}

