__int64 __fastcall sub_52FDF0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rbp

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1808LL);
  if ( *(_BYTE *)(v2 + 64) )
  {
    sub_52F980((__int64 *)(v2 + 32), 0);
    if ( a2 < *(_QWORD *)(v2 + 48) )
    {
      v3 = *(_QWORD **)(*(_QWORD *)a1 + 1672LL);
      if ( *(_BYTE *)(v2 + 64) )
        sub_52F980((__int64 *)(v2 + 32), 0);
      return sub_3BDE50(v3, *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * a2));
    }
  }
  else if ( a2 < *(_QWORD *)(v2 + 48) )
  {
    v3 = *(_QWORD **)(*(_QWORD *)a1 + 1672LL);
    return sub_3BDE50(v3, *(_QWORD *)(*(_QWORD *)(v2 + 40) + 8 * a2));
  }
  return -1;
}
