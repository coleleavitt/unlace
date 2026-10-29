char __fastcall Z3_is_string_sort(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_297A80();
    v3 = *(_QWORD *)(a2 + 24);
    v5 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( v3 )
    {
      if ( v5 == *(_DWORD *)v3 && !*(_DWORD *)(v3 + 4) )
        goto LABEL_9;
      LOBYTE(v3) = 0;
    }
LABEL_11:
    byte_1C7EBA0 = 1;
    return v3;
  }
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a1 + 456);
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !v3 || v4 != *(_DWORD *)v3 || *(_DWORD *)(v3 + 4) )
  {
    LOBYTE(v3) = 0;
    return v3;
  }
LABEL_9:
  v3 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)(v3 + 8) != 1 )
    sub_A8ADA((__int64)"std::get: wrong index for variant");
  LOBYTE(v3) = *(_QWORD *)v3 == *(_QWORD *)(*(_QWORD *)(a1 + 440) + 64LL);
  if ( v2 )
    goto LABEL_11;
  return v3;
}

