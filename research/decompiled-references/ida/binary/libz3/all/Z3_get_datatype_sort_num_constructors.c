__int64 __fastcall Z3_get_datatype_sort_num_constructors(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 result; // rax
  __int64 v4; // r14
  int v5; // eax
  _DWORD *v6; // rdx
  __int64 v7; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_299A90();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3, "not a valid ast");
      result = 0;
      goto LABEL_14;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 || !*(_DWORD *)(a2 + 8) )
    {
      sub_24EA30(a1, 3, "not a valid ast");
      return 0;
    }
  }
  v4 = sub_15F0110(*(_QWORD *)(a1 + 1480));
  v5 = sub_15F0200(v4);
  v6 = *(_DWORD **)(a2 + 24);
  if ( !v6 || v5 != *v6 || v6[1] )
  {
    sub_24EA30(a1, 3, 0);
LABEL_10:
    result = 0;
    goto LABEL_11;
  }
  v7 = *(_QWORD *)sub_15F6BE0(v4, a2);
  if ( !v7 )
    goto LABEL_10;
  result = *(unsigned int *)(v7 - 4);
LABEL_11:
  if ( v2 )
LABEL_14:
    byte_1C7EBA0 = 1;
  return result;
}

