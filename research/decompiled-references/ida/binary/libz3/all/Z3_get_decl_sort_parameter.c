__int64 __fastcall Z3_get_decl_sort_parameter(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
  {
    sub_29A300();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3u, "not a valid ast");
      goto LABEL_15;
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
  v5 = *(_QWORD *)(a2 + 24);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 || a3 >= *(_DWORD *)(v6 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v4 )
      return 0;
LABEL_14:
    sub_2BB620(0);
LABEL_15:
    result = 0;
LABEL_16:
    byte_1C7EBA0 = 1;
    return result;
  }
  v7 = (__int64 *)(16LL * a3 + v6);
  if ( *((_BYTE *)v7 + 8) != 1 || (result = *v7, *(_WORD *)(result + 4) != 3) )
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v4 )
      return 0;
    goto LABEL_14;
  }
  if ( v4 )
  {
    v9 = result;
    sub_2BB620(result);
    result = v9;
    goto LABEL_16;
  }
  return result;
}

