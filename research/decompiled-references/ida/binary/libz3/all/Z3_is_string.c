char __fastcall Z3_is_string(__int64 a1, __int64 a2)
{
  char v2; // al
  _DWORD *v3; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_297BE0();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !*(_WORD *)(a2 + 4) )
    {
      v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
      if ( !v3 )
      {
LABEL_11:
        byte_1C7EBA0 = 1;
        return (char)v3;
      }
      if ( *v3 == *(_DWORD *)(a1 + 480) )
      {
        LOBYTE(v3) = v3[1] == 41;
        goto LABEL_11;
      }
    }
    LOBYTE(v3) = 0;
    goto LABEL_11;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  LOBYTE(v3) = !*(_WORD *)(a2 + 4)
            && (v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr
            && *v3 == *(_DWORD *)(a1 + 480)
            && v3[1] == 41;
  return (char)v3;
}

