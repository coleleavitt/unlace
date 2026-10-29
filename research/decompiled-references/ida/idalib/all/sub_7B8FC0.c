__int64 __fastcall sub_7B8FC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 56) = 0;
    *(_WORD *)(a1 + 53) = 6;
    *(_BYTE *)(a1 + 60) = 0;
  }
  else
  {
    *(_WORD *)(a1 + 53) = 10;
    v3 = swap64(0);
    v2 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 56) = v3;
    if ( !v2 )
      v2 = *(_QWORD *)a1;
  }
  v4 = sub_7443D0(v2, (unsigned __int16 *)(a1 + 53));
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
      goto LABEL_8;
  }
  do
  {
    sub_741460(v2);
    if ( !v6 )
      return 0;
    v5 = v6 - 1;
    if ( !v5 )
      return 0;
LABEL_8:
    ;
  }
  while ( *(_BYTE *)(v5 + 3) != 46 );
  if ( (*(_BYTE *)(v2 + 6016) & 2) != 0 )
    v8 = _byteswap_ulong(*(_DWORD *)(v5 + 4));
  else
    v8 = swap64(*(_QWORD *)(v5 + 4));
  *a2 = v8;
  return 1;
}
