__int64 __fastcall Z3_get_decl_num_parameters(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( !v2 )
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
    if ( *(_DWORD *)(a2 + 8) )
    {
      v3 = *(_QWORD *)(a2 + 24);
      if ( v3 )
        goto LABEL_5;
    }
    else
    {
      sub_24EA30(a1, 3u, "not a valid ast");
    }
    return 0;
  }
  sub_29A1C0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || !*(_DWORD *)(a2 + 8) )
  {
    sub_24EA30(a1, 3u, "not a valid ast");
    goto LABEL_14;
  }
  v3 = *(_QWORD *)(a2 + 24);
  if ( !v3 )
  {
LABEL_14:
    result = 0;
LABEL_15:
    byte_1C7EBA0 = 1;
    return result;
  }
LABEL_5:
  v4 = *(_QWORD *)(v3 + 8);
  if ( v4 )
    result = *(unsigned int *)(v4 - 4);
  else
    result = 0;
  if ( v2 )
    goto LABEL_15;
  return result;
}

