char __fastcall sub_12E96C0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  size_t v4; // rdx
  char result; // al
  _BYTE v6[16]; // [rsp+10h] [rbp-58h] BYREF
  int v7; // [rsp+20h] [rbp-48h]
  __int128 v8; // [rsp+24h] [rbp-44h]
  __int128 v9; // [rsp+34h] [rbp-34h]
  __int128 v10; // [rsp+44h] [rbp-24h]
  int v11; // [rsp+54h] [rbp-14h]

  v2 = *a1;
  v3 = *a2;
  if ( *a2 == v2 )
    return 1;
  if ( !v3 )
    return *(_QWORD *)(v2 + 16) == 0;
  v4 = *(_QWORD *)(v3 + 16);
  if ( v2 )
  {
    result = 0;
    if ( v4 == *(_QWORD *)(v2 + 16) )
      return sub_9B48C0(*(const void **)(v2 + 8), *(const void **)(v3 + 8), v4) == 0;
  }
  else
  {
    v6[0] = 0;
    result = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v7 = 9;
    LOBYTE(v8) = 1;
    v11 = 0xFFFF;
    if ( !v4 )
      return sub_9B48C0(*(const void **)(v3 + 8), v6, 0) == 0;
  }
  return result;
}
