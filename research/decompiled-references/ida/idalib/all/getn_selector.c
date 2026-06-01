__int64 __fastcall getn_selector(_QWORD *a1, _QWORD *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v4 = 0;
  v5 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1760LL);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v5 + 32) )
  {
    v6 = (_QWORD *)(*(_QWORD *)(v5 + 24) + 16LL * a3);
    if ( a1 )
      *a1 = *v6;
    if ( a2 )
      *a2 = v6[1];
    return 1;
  }
  return v4;
}
