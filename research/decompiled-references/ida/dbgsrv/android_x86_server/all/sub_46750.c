/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46750
// Address: 0x00046750

//----- (00046750) --------------------------------------------------------
int __cdecl sub_46750(int a1, char *s2)
{
  int v2; // esi
  unsigned int v3; // edi
  const char *v4; // eax
  int v5; // ecx
  bool v6; // zf
  char v7; // al
  _BYTE *v8; // eax
  size_t v9; // esi
  int v10; // eax
  _DWORD *v11; // esi
  const char *v12; // eax
  int v13; // esi
  int v14; // eax
  int v16; // [esp+8h] [ebp-44h]
  char v17; // [esp+Ch] [ebp-40h]
  _DWORD *v18; // [esp+10h] [ebp-3Ch]
  unsigned int v19; // [esp+1Ch] [ebp-30h]
  int v20[11]; // [esp+20h] [ebp-2Ch] BYREF

  v2 = a1;
  v20[6] = __readgsdword(0x14u);
  sub_46C30((unsigned int *)(a1 + 64), 0);
  v18 = (_DWORD *)(a1 + 76);
  sub_46C30((unsigned int *)(a1 + 76), 0);
  sub_46C30((unsigned int *)(a1 + 88), 0);
  if ( *(_DWORD *)(a1 + 232) )
  {
    LOBYTE(v20[0]) = 2;
    memset(&v20[1], 0, 16);
    sub_4EB10((void **)(a1 + 228), 0, (char *)v20);
    free_idcv((char *)v20);
  }
  if ( *(_DWORD *)(a1 + 132) )
  {
    v20[0] = 0;
    sub_4EDA0((char **)(a1 + 128), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 144) )
  {
    v20[0] = 0;
    sub_4EDA0((char **)(a1 + 140), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 156) )
  {
    v20[0] = 0;
    sub_4EDA0((char **)(a1 + 152), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 168) )
  {
    v20[0] = 0;
    sub_4EDA0((char **)(a1 + 164), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 180) )
  {
    LOWORD(v20[0]) = 0;
    sub_4EE90((char **)(a1 + 176), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 192) )
  {
    v20[0] = 0;
    sub_4EF80((char **)(a1 + 188), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 204) )
  {
    *(_OWORD *)v20 = 0;
    sub_4F070((char **)(a1 + 200), 0, (char *)v20);
  }
  if ( *(_DWORD *)(a1 + 216) )
  {
    *(_OWORD *)v20 = 0;
    sub_4F070((char **)(a1 + 212), 0, (char *)v20);
  }
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 240) = -1;
  if ( !*(_DWORD *)(a1 + 100) )
  {
    v5 = sub_52EA0(*(_DWORD **)(a1 + 60), s2);
    if ( v5 != -1 )
      goto LABEL_53;
    goto LABEL_56;
  }
  sub_1B530((int)v20, s2);
  v3 = *(_DWORD *)(a1 + 100);
  if ( *(_DWORD *)(v3 + 24) )
    v4 = *(const char **)(v3 + 20);
  else
    v4 = byte_EF875;
  v6 = strcmp(v4, s2) == 0;
  v7 = *(_BYTE *)(a1 + 124);
  if ( v6 )
  {
    if ( v7 )
    {
      v8 = (_BYTE *)v20[0];
      v9 = v20[1] - 1;
      if ( !v20[1] )
        v9 = 0;
      if ( v20[2] < v9 + 2 )
      {
        v8 = qvector_reserve((int)v20, (void *)v20[0], v9 + 2, 1u);
        v20[0] = (int)v8;
      }
      v20[1] = v9 + 2;
      v8[v9 + 1] = 0;
      if ( v9 )
        memmove((void *)(v20[0] + 1), (const void *)v20[0], v9);
      *(_BYTE *)v20[0] = 126;
      v2 = a1;
      *(_DWORD *)(a1 + 120) = 2;
      v3 = *(_DWORD *)(a1 + 100);
    }
    else
    {
      *(_DWORD *)(a1 + 120) = 1;
    }
  }
  else if ( v7 )
  {
    v3 = set_qerrno(1584);
    v17 = 0;
    goto LABEL_49;
  }
  v10 = sub_53ED0(v3, *(_DWORD **)(v2 + 60), (int)v20);
  v17 = 1;
  if ( v10 == -1 )
  {
    v5 = -1;
  }
  else
  {
    v16 = v10;
    if ( *(_DWORD *)(a1 + 120) == 2 )
      *(_DWORD *)(*(_DWORD *)(a1 + 100) + 40) = v10;
    v19 = *(_DWORD *)(a1 + 80);
    if ( v19 )
    {
      v11 = (_DWORD *)(*v18 + 4);
      v3 = 0;
      while ( 1 )
      {
        v12 = byte_EF875;
        if ( *v11 )
          v12 = (const char *)*(v11 - 1);
        if ( !strcmp(v12, "this") )
          break;
        ++v3;
        v11 += 3;
        if ( v3 >= v19 )
          goto LABEL_46;
      }
      v5 = v16;
    }
    else
    {
LABEL_46:
      sub_4B430((int)v18, "this");
      v5 = v16;
    }
  }
LABEL_49:
  if ( v20[0] )
  {
    v13 = v5;
    v20[1] = 0;
    qfree((void *)v20[0]);
    v20[0] = 0;
    v20[2] = 0;
    v5 = v13;
  }
  v2 = a1;
  if ( v17 )
  {
    if ( v5 != -1 )
    {
LABEL_53:
      v14 = *(_DWORD *)(**(_DWORD **)(v2 + 60) + 4 * v5);
      *(_DWORD *)(v2 + 104) = v14;
      *(_DWORD *)(v2 + 108) = v14 + 16;
      *(_DWORD *)(v2 + 112) = 0;
      *(_BYTE *)(v2 + 116) = -90;
      v3 = 0;
      if ( *(_DWORD *)(v14 + 68) != -1 )
      {
        if ( !(_BYTE)under_debugger )
          interr(484);
        BUG();
      }
      return v3;
    }
LABEL_56:
    set_error_string(0, s2);
    return set_qerrno(40);
  }
  return v3;
}
// 46B19: variable 'v5' is possibly undefined
// 13E34C: using guessed type int under_debugger;
