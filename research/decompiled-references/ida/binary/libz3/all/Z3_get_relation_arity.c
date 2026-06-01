__int64 __fastcall Z3_get_relation_arity(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_299BF0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned int)Z3_get_sort_kind(a1, a2) == 7 )
  {
    v3 = *(_QWORD *)(a2 + 24);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
      {
        result = *(unsigned int *)(v4 - 4);
        if ( !v2 )
          return result;
        goto LABEL_7;
      }
    }
  }
  else
  {
    sub_24EA30(a1, 3u, "sort should be a relation");
  }
  result = 0;
  if ( v2 )
LABEL_7:
    byte_1C7EBA0 = 1;
  return result;
}

