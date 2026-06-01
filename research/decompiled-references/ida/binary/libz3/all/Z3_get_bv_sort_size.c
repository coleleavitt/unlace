__int64 __fastcall Z3_get_bv_sort_size(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  unsigned int *v5; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_299810();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      result = 0;
LABEL_14:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      return 0;
    }
  }
  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 && *(_DWORD *)v3 == *(_DWORD *)(a1 + 1444) && !*(_DWORD *)(v3 + 4) )
  {
    v5 = *(unsigned int **)(v3 + 8);
    if ( *((_BYTE *)v5 + 8) )
      sub_A8ADA((__int64)"std::get: wrong index for variant");
    result = *v5;
  }
  else
  {
    sub_24EA30(a1, 3u, "sort is not a bit-vector");
    result = 0;
  }
  if ( v2 )
    goto LABEL_14;
  return result;
}

