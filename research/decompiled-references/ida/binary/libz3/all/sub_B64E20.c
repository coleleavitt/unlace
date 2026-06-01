__int64 __fastcall sub_B64E20(__int64 a1, signed int *a2, signed int a3)
{
  int v4; // edi
  unsigned int v5; // eax
  unsigned int v6; // r11d
  unsigned int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char v10; // cl

  v4 = *a2;
  if ( *a2 <= a3 )
    return 0xFFFFFFFFLL;
  v5 = a3;
  v6 = -1;
  v7 = -1;
  v8 = -1;
  do
  {
    while ( 1 )
    {
      v9 = (unsigned int)a2[v5 + 2];
      v10 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + v9);
      if ( v10 )
        break;
      v8 = v5;
LABEL_7:
      if ( v4 == ++v5 )
        goto LABEL_14;
    }
    if ( v10 != 1 )
    {
      if ( v10 == -1 )
      {
        if ( v6 == -1 )
        {
          v6 = v5;
        }
        else if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * ((unsigned int)a2[v6 + 2] >> 1) + 8) & 0xFFFFFFu) < (*(_DWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * ((unsigned int)v9 >> 1) + 8) & 0xFFFFFFu) )
        {
          v6 = v5;
        }
      }
      goto LABEL_7;
    }
    if ( v7 == -1 )
    {
      v7 = v5;
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * ((unsigned int)v9 >> 1) + 8) & 0xFFFFFFu) < (*(_DWORD *)(*(_QWORD *)(a1 + 8872) + 16LL * ((unsigned int)a2[v7 + 2] >> 1) + 8)
                                                                                                 & 0xFFFFFFu) )
      v7 = v5;
    ++v5;
  }
  while ( v4 != v5 );
LABEL_14:
  if ( v7 == -1 )
  {
    if ( v8 != -1 )
      return v8;
    return v6;
  }
  return v7;
}

