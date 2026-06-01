__int64 __fastcall sub_4E2610(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // rdi
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( !v2 )
    return v3;
  v4 = *a2;
  v5 = a1 + 8;
  do
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v2 + 32);
      if ( v8 < v4 )
      {
LABEL_9:
        v2 = *(_QWORD *)(v2 + 24);
        goto LABEL_10;
      }
      if ( v4 >= v8 )
        break;
LABEL_7:
      v5 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_11;
    }
    v6 = *(_DWORD *)(v2 + 36);
    v7 = a2[1];
    if ( v6 != 0x10000 )
    {
      if ( v7 != 0x10000 && v6 < v7 )
        goto LABEL_9;
      goto LABEL_7;
    }
    if ( v7 == 0x10000 )
      goto LABEL_7;
    v2 = *(_QWORD *)(v2 + 24);
LABEL_10:
    ;
  }
  while ( v2 );
LABEL_11:
  if ( v3 == v5 )
    return v5;
  v9 = *(_DWORD *)(v5 + 32);
  if ( v4 < v9 )
    return v3;
  if ( v9 >= v4 )
  {
    v10 = a2[1];
    v11 = *(_DWORD *)(v5 + 36);
    if ( (v10 == 0x10000 || v10 < v11) && v11 != 0x10000 )
      return v3;
  }
  return v5;
}

