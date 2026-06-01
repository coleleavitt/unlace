char __fastcall Z3_is_seq_sort(__int64 a1, __int64 a2)
{
  char v2; // al
  _DWORD *v3; // rax
  int v4; // edx
  int v5; // edx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_297900();
    v3 = *(_DWORD **)(a2 + 24);
    v5 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( v3 )
      LOBYTE(v3) = v5 == *v3 && v3[1] == 0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    v3 = *(_DWORD **)(a2 + 24);
    v4 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 1520) = 0;
    LOBYTE(v3) = v3 && v4 == *v3 && v3[1] == 0;
  }
  return (char)v3;
}

