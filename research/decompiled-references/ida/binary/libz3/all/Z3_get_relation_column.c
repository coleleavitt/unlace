__int64 __fastcall Z3_get_relation_column(__int64 a1, __int64 a2, unsigned int a3)
{
  char v4; // r12
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 *v8; // rax
  __int64 v9; // [rsp+8h] [rbp-30h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_299C30();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned int)Z3_get_sort_kind(a1, a2) != 7 )
  {
    sub_24EA30(a1, 3u, "sort should be a relation");
    goto LABEL_8;
  }
  v5 = *(_QWORD *)(a2 + 24);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 || a3 >= *(_DWORD *)(v6 - 4) )
  {
    sub_24EA30(a1, 2u, nullptr);
LABEL_8:
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    result = 0;
LABEL_16:
    byte_1C7EBA0 = 1;
    return result;
  }
  v8 = (__int64 *)(16LL * a3 + v6);
  if ( *((_BYTE *)v8 + 8) != 1 || (result = *v8, *(_WORD *)(result + 4) != 3) )
  {
    sub_1872CE0("");
    sub_1873130(114, 182);
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

