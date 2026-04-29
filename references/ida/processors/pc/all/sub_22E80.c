__int64 __fastcall sub_22E80(_QWORD *a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax

  v1 = a1[2];
  if ( !v1 )
  {
    v4 = 0;
    goto LABEL_8;
  }
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v5 = a1[1] + 32 * v2;
    if ( (*(_BYTE *)(v5 + 26) & 1) == 0 )
      break;
    v2 = ++v3;
    v4 = v3;
    if ( v3 >= v1 )
      goto LABEL_8;
  }
  if ( v2 >= v1 || *(_WORD *)(v5 + 24) != 5 )
  {
    v4 = v3;
LABEL_8:
    a1[4] = v4;
    return 0;
  }
  a1[4] = v3 + 1;
  return *(_QWORD *)(v5 + 16);
}
