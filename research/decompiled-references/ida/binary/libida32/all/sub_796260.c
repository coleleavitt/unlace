__int64 __fastcall sub_796260(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  *(_WORD *)(a1 + 45) = 10;
  v2 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 48) = -1;
  *(_BYTE *)(a1 + 56) = -1;
  v3 = sub_723E90(v2, (unsigned __int16 *)(a1 + 45));
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
      goto LABEL_5;
  }
  do
  {
    v5 = sub_720F10(v2);
    if ( !v5 )
      return 0;
    v4 = v5 - 1;
    if ( !v4 )
      return 0;
LABEL_5:
    ;
  }
  while ( *(_BYTE *)(v4 + 3) != 46 );
  *a2 = _byteswap_ulong(*(_DWORD *)(v4 + 4));
  return 1;
}

