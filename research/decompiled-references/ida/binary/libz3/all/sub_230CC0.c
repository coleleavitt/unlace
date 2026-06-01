__int64 __fastcall sub_230CC0(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 72LL);
  if ( !v1 )
    return 0;
  v2 = *(_BYTE *)(v1 + 3) >> 6;
  if ( !v2 )
  {
    do
    {
      v1 = *(_QWORD *)(v1 + 16);
      v2 = *(_BYTE *)(v1 + 3) >> 6;
    }
    while ( !v2 );
    if ( v2 != 1 )
      goto LABEL_4;
    return (unsigned int)(*(_DWORD *)(v1 + 4) + 1);
  }
  if ( v2 == 1 )
    return (unsigned int)(*(_DWORD *)(v1 + 4) + 1);
LABEL_4:
  if ( v2 == 2 )
    return (unsigned int)(*(_DWORD *)(v1 + 4) - 1);
  else
    return *(unsigned int *)(v1 + 4);
}

