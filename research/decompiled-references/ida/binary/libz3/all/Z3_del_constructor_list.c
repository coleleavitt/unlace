char __fastcall Z3_del_constructor_list(__int64 a1, __int64 *a2)
{
  char v2; // r12
  __int64 v3; // rdi
  char result; // al

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_295800();
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
LABEL_9:
      result = byte_1C7EBA0;
      byte_1C7EBA0 = 1;
      return result;
    }
    v3 = *a2;
    if ( !*a2 )
    {
      sub_186B220(a2);
      goto LABEL_9;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
      return result;
    v3 = *a2;
    if ( !*a2 )
      return sub_186B220(a2);
  }
  sub_186B220((void *)(v3 - 8));
  result = sub_186B220(a2);
  if ( v2 )
    goto LABEL_9;
  return result;
}

