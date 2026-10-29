__int64 __fastcall Z3_constructor_num_fields(__int64 a1, __int64 a2)
{
  char v2; // al
  char v3; // r13
  __int64 v4; // rax
  __int64 result; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v3 = v2;
  if ( v2 )
    sub_295670();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_24FC40(a1);
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
    {
      result = *(unsigned int *)(v4 - 4);
      if ( !v3 )
        return result;
LABEL_9:
      byte_1C7EBA0 = 1;
      return result;
    }
  }
  else
  {
    sub_24EA30(a1, 3, 0);
  }
  result = 0;
  if ( v3 )
    goto LABEL_9;
  return result;
}

