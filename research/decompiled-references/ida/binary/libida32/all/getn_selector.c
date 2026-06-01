__int64 __fastcall getn_selector(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _DWORD *v6; // rdx

  v4 = 0;
  v5 = *(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1568LL);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v5 + 24) )
  {
    v6 = (_DWORD *)(*(_QWORD *)(v5 + 16) + 8LL * a3);
    if ( a1 )
      *a1 = *v6;
    if ( a2 )
      *a2 = v6[1];
    return 1;
  }
  return v4;
}

