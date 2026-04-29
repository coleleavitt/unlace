unsigned __int64 *__fastcall sub_1530(unsigned __int64 *a1, __int64 *a2)
{
  int v4; // r11d
  int v5; // ebx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // esi
  unsigned __int8 v11; // bp
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int8 v15; // si
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdi
  __int64 v20; // rsi
  unsigned __int64 v21; // rcx

  v4 = *((_DWORD *)a2 + 13);
  v5 = 0;
  v6 = a2[4];
  v7 = a2[1];
  if ( v4 == -1 )
    goto LABEL_13;
  if ( v6 >= v7 )
  {
LABEL_3:
    *((_DWORD *)a2 + 10) = 1;
LABEL_24:
    *((_DWORD *)a2 + 10) = 1;
    v16 = 0;
    v9 = 0;
    v17 = 0;
    v18 = 0;
    goto LABEL_25;
  }
  v14 = *a2;
  v15 = *(_BYTE *)(*a2 + v6);
  if ( v15 == 117 )
  {
    ++v6;
    v5 = 1;
    a2[4] = v6;
LABEL_13:
    if ( v6 >= v7 )
      goto LABEL_3;
    v14 = *a2;
    v15 = *(_BYTE *)(*a2 + v6);
  }
  if ( !v15 )
    goto LABEL_3;
  v13 = v6 + 1;
  a2[4] = v13;
  if ( (byte_4220[2 * v15] & 4) == 0 )
    goto LABEL_24;
  v9 = (char)v15 - 48;
  if ( v15 == 48 )
  {
    if ( v4 != -1 && v13 < v7 )
    {
      v11 = *(_BYTE *)(v14 + v13);
LABEL_21:
      ++v13;
      if ( v11 != 95 )
        v13 = a2[4];
    }
  }
  else
  {
    while ( v13 < v7 )
    {
      v10 = *(char *)(*a2 + v13);
      v11 = *(_BYTE *)(*a2 + v13);
      if ( (byte_4220[2 * v11] & 4) == 0 )
      {
        if ( v4 != -1 )
          goto LABEL_21;
        break;
      }
      v12 = 10 * v9;
      if ( (_BYTE)v10 )
      {
        a2[4] = ++v13;
        v8 = v10 - 48;
      }
      else
      {
        *((_DWORD *)a2 + 10) = 1;
        v8 = -48;
      }
      v9 = v8 + v12;
    }
  }
  a2[4] = v13 + v9;
  if ( __CFADD__(v13, v9) || v13 + v9 > v7 )
    goto LABEL_24;
  v16 = *a2 + v13;
  if ( v5 )
  {
    if ( v9 )
    {
      v20 = v9;
      v18 = 0;
      do
      {
        --v20;
        if ( *(_BYTE *)(v16 + v20) == 95 )
          break;
        ++v18;
      }
      while ( v20 );
      if ( v18 )
      {
        v21 = v9 - v18;
        v9 = v20;
        v17 = v16 + v21;
        goto LABEL_35;
      }
    }
    else
    {
      v20 = 0;
    }
    *((_DWORD *)a2 + 10) = 1;
    v9 = v20;
    v17 = 0;
    v18 = 0;
    goto LABEL_25;
  }
  v18 = 0;
  v17 = 0;
LABEL_35:
  if ( !v9 )
    v16 = 0;
LABEL_25:
  a1[1] = v9;
  *a1 = v16;
  a1[2] = v17;
  a1[3] = v18;
  return a1;
}
