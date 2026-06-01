__int64 __fastcall Z3_get_string_length(__int64 a1, __int64 a2)
{
  char v2; // bp
  unsigned int v3; // ebx
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int64 v6; // [rsp+8h] [rbp-80h]
  _BYTE v7[120]; // [rsp+10h] [rbp-78h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_297CA0();
  *(_DWORD *)(a1 + 1520) = 0;
  ptr = v7;
  v6 = 0x1000000000LL;
  if ( !(unsigned __int8)sub_163BAA0(a1 + 464, a2, &ptr) )
    sub_24EA30(a1, 3u, "expression is not a string literal");
  v3 = v6;
  if ( ptr && ptr != v7 )
    sub_186B220(ptr);
  if ( v2 )
    byte_1C7EBA0 = 1;
  return v3;
}

