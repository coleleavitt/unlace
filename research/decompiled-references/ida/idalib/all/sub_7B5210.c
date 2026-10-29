__int64 __fastcall sub_7B5210(__int64 a1, unsigned __int8 a2, __int64 a3, char a4)
{
  __int64 v5; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  unsigned int *v14; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( !v5 )
    v5 = *(_QWORD *)a1;
  sub_7443D0(v5, (unsigned __int16 *)(a1 + 53));
  if ( a4 )
  {
    sub_741460(v5);
    v8 = v7 - 1;
    if ( !v7 )
      return -1;
  }
  else
  {
    v11 = sub_741450(v5);
    if ( !v11 )
      return -1;
    v8 = v11 - 1;
  }
  v9 = *(_BYTE *)(v5 + 5881);
  if ( !v8 )
    return -1;
  if ( *(unsigned __int16 *)(v8 + 1) != 2 * *(unsigned __int8 *)(v5 + 5881) + 2 )
    return -1;
  v12 = v9;
  if ( *(char *)(v8 + v9 + 4) != a2 )
    return -1;
  if ( (*(_BYTE *)(v5 + 6016) & 2) != 0 )
  {
    if ( *(_DWORD *)(v8 + 4) == _byteswap_ulong(a3) )
    {
      v14 = (unsigned int *)(v8 + v9 + 5);
      return _byteswap_ulong(*v14);
    }
    return -1;
  }
  v13 = *(_QWORD *)(v8 + 4);
  if ( v13 != swap64(a3) )
    return -1;
  v14 = (unsigned int *)(v8 + v12 + 5);
  if ( (*(_BYTE *)(v5 + 6016) & 2) == 0 )
    return swap64(*(_QWORD *)v14);
  return _byteswap_ulong(*v14);
}
