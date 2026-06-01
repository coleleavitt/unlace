__int64 __fastcall sub_DFB140(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 312);
  if ( !v1 )
  {
    sub_DFBCB0(a1);
    v1 = *(_QWORD *)(a1 + 312);
    v2 = *(_QWORD *)(v1 + 88);
    if ( v2 )
      return sub_DFAB80(a1, (unsigned __int64 *)(v2 + 24), v2);
LABEL_5:
    sub_DE4EF0(v1);
    v2 = *(_QWORD *)(v1 + 88);
    return sub_DFAB80(a1, (unsigned __int64 *)(v2 + 24), v2);
  }
  v2 = *(_QWORD *)(v1 + 88);
  if ( !v2 )
    goto LABEL_5;
  return sub_DFAB80(a1, (unsigned __int64 *)(v2 + 24), v2);
}

