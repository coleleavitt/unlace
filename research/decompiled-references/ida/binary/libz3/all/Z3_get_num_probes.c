__int64 __fastcall Z3_get_num_probes(__int64 a1)
{
  char v1; // al
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
  {
    sub_29D200();
    *(_DWORD *)(a1 + 1520) = 0;
    v4 = *(_QWORD *)(a1 + 88);
    if ( v4 )
      result = *(unsigned int *)(v4 - 4);
    else
      result = 0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    v2 = *(_QWORD *)(a1 + 88);
    if ( v2 )
      return *(unsigned int *)(v2 - 4);
    else
      return 0;
  }
  return result;
}

