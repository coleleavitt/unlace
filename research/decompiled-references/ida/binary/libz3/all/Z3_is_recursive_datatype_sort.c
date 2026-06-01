__int64 __fastcall Z3_is_recursive_datatype_sort(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // r13
  int v4; // eax
  _DWORD *v5; // rdx
  unsigned int v6; // ecx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_299A50();
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v4 = sub_15F0200(v3);
  v5 = *(_DWORD **)(a2 + 24);
  v6 = 0;
  if ( v5 && v4 == *v5 && !v5[1] )
  {
    v6 = sub_15FD0A0(v3, a2, v5, 0);
    if ( v2 )
      goto LABEL_9;
    return v6;
  }
  if ( !v2 )
    return v6;
LABEL_9:
  byte_1C7EBA0 = 1;
  return v6;
}

