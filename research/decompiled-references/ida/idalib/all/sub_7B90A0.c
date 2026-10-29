__int64 __fastcall sub_7B90A0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(a1 + 53) = 10;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 56) = -1;
    *(_BYTE *)(a1 + 64) = -1;
  }
  else
  {
    v3 = swap64(-1);
    v4 = *(unsigned __int16 *)(a1 + 53);
    *(_BYTE *)(a1 + 64) = -1;
    *(_QWORD *)(a1 + 56) = v3;
    if ( v4 + 8 > 0xFFFF )
      abort();
    *(_WORD *)(a1 + 53) = v4 + 8;
    v5 = swap64(-1);
    v2 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 65) = v5;
    if ( !v2 )
      v2 = *(_QWORD *)a1;
  }
  v6 = sub_7443D0(v2, (unsigned __int16 *)(a1 + 53));
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
      goto LABEL_9;
  }
  do
  {
    v8 = sub_741450(v2);
    if ( !v8 )
      return 0;
    v7 = v8 - 1;
    if ( !v7 )
      return 0;
LABEL_9:
    ;
  }
  while ( *(_BYTE *)(v7 + 3) != 46 );
  if ( (*(_BYTE *)(v2 + 6016) & 2) != 0 )
    v10 = _byteswap_ulong(*(_DWORD *)(v7 + 4));
  else
    v10 = swap64(*(_QWORD *)(v7 + 4));
  *a2 = v10;
  return 1;
}
