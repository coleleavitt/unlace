__int64 __fastcall Z3_model_get_num_consts(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29B580();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( a2 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 80LL);
      if ( v5 )
      {
        result = *(unsigned int *)(v5 - 4);
LABEL_8:
        byte_1C7EBA0 = 1;
        return result;
      }
    }
    else
    {
      sub_24EA30(a1, 3u, "ast is null");
    }
    result = 0;
    goto LABEL_8;
  }
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 80LL);
    if ( v3 )
      return *(unsigned int *)(v3 - 4);
  }
  else
  {
    sub_24EA30(a1, 3u, "ast is null");
  }
  return 0;
}

