__int64 __fastcall sub_5C630(__int64 a1, unsigned __int8 *a2, _QWORD *a3, __int64 a4)
{
  int v5; // esi
  __int64 v6; // rax

  v5 = *a2;
  if ( v5 == 116 && a2[1] == 117 && !a2[2] )
  {
    v6 = *(_QWORD *)(a1 + 8288);
    if ( v6 )
    {
LABEL_5:
      *a3 = v6;
      return 0;
    }
  }
  else
  {
    if ( v5 != 99 || a2[1] != 117 || a2[2] )
    {
      _dwarf_error(a1, a4, 289);
      return 1;
    }
    v6 = *(_QWORD *)(a1 + 8280);
    if ( v6 )
      goto LABEL_5;
  }
  return 0xFFFFFFFFLL;
}

