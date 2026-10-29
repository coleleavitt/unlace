char __fastcall Z3_del_context(_DWORD *ptr)
{
  char v1; // al
  char result; // al

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
  {
    sub_294B60();
    ptr[380] = 0;
    sub_251920((__int64)ptr);
    sub_186B220(ptr);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    ptr[380] = 0;
    sub_251920((__int64)ptr);
    return sub_186B220(ptr);
  }
  return result;
}

