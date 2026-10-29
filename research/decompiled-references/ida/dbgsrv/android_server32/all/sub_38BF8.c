/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_38BF8
// Address: 0x00038BF8

//----- (00038BF8) --------------------------------------------------------
int __fastcall sub_38BF8(int a1, char *a2)
{
  int v4; // r6
  int v5; // r5
  const char *v6; // r0
  size_t v7; // r5
  void *v8; // r1
  int v9; // r7
  int v10; // r5
  const char *v11; // r0
  int v12; // r0
  int *v14; // [sp+Ch] [bp-34h]
  char *s2; // [sp+10h] [bp-30h]
  int v16; // [sp+14h] [bp-2Ch]
  int v17; // [sp+18h] [bp-28h]
  unsigned int v18; // [sp+20h] [bp-20h]
  void *ptr; // [sp+24h] [bp-1Ch] BYREF
  size_t v20; // [sp+28h] [bp-18h]
  unsigned int v21; // [sp+2Ch] [bp-14h]
  int v22; // [sp+30h] [bp-10h]
  int v23; // [sp+34h] [bp-Ch]
  int v24; // [sp+38h] [bp-8h]

  sub_38EEC(a1 + 68, 0);
  v14 = (int *)(a1 + 80);
  sub_38EEC(a1 + 80, 0);
  sub_38EEC(a1 + 92, 0);
  if ( *(_DWORD *)(a1 + 236) )
  {
    LOBYTE(ptr) = 2;
    v24 = 0;
    v23 = 0;
    v22 = 0;
    v21 = 0;
    sub_3DE8C((void **)(a1 + 232), 0, (unsigned __int8 *)&ptr);
    free_idcv((unsigned __int8 *)&ptr);
  }
  if ( *(_DWORD *)(a1 + 136) )
  {
    ptr = nullptr;
    sub_3DFF4((void **)(a1 + 132), 0, &ptr);
  }
  if ( *(_DWORD *)(a1 + 148) )
  {
    ptr = nullptr;
    sub_3DFF4((void **)(a1 + 144), 0, &ptr);
  }
  if ( *(_DWORD *)(a1 + 160) )
  {
    ptr = nullptr;
    sub_3DFF4((void **)(a1 + 156), 0, &ptr);
  }
  if ( *(_DWORD *)(a1 + 172) )
  {
    ptr = nullptr;
    sub_3DFF4((void **)(a1 + 168), 0, &ptr);
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    LOWORD(ptr) = 0;
    sub_3E08E((void **)(a1 + 180), 0, &ptr);
  }
  if ( *(_DWORD *)(a1 + 196) )
  {
    ptr = nullptr;
    sub_3E128((void **)(a1 + 192), 0, &ptr);
  }
  if ( *(_DWORD *)(a1 + 208) )
  {
    v22 = 0;
    v21 = 0;
    v20 = 0;
    ptr = nullptr;
    sub_3E1C4((char **)(a1 + 204), 0, (char *)&ptr);
  }
  if ( *(_DWORD *)(a1 + 220) )
  {
    v22 = 0;
    v21 = 0;
    v20 = 0;
    ptr = nullptr;
    sub_3E1C4((char **)(a1 + 216), 0, (char *)&ptr);
  }
  v4 = -1;
  *(_DWORD *)(a1 + 244) = -1;
  v16 = 0;
  *(_DWORD *)(a1 + 124) = 0;
  if ( !*(_DWORD *)(a1 + 104) )
  {
    v17 = sub_409E4(*(_DWORD *)(a1 + 64), a2);
LABEL_50:
    if ( v17 == -1 )
    {
      set_error_string(0, a2);
      return set_qerrno(40);
    }
    else
    {
      v12 = *(_DWORD *)(**(_DWORD **)(a1 + 64) + 4 * v17);
      *(_BYTE *)(a1 + 120) = -90;
      v4 = 0;
      *(_DWORD *)(a1 + 108) = v12;
      *(_DWORD *)(a1 + 112) = v12 + 16;
      *(_DWORD *)(a1 + 116) = 0;
      if ( *(_DWORD *)(v12 + 68) != -1 )
      {
        if ( !under_debugger )
          interr(484);
        __debugbreak();
      }
    }
    return v4;
  }
  s2 = a2;
  sub_1B09C((int)&ptr, a2);
  v5 = *(_DWORD *)(a1 + 104);
  if ( *(_DWORD *)(v5 + 24) )
    v6 = *(const char **)(v5 + 20);
  else
    v6 = &byte_B3CBE;
  if ( !strcmp(v6, s2) )
  {
    if ( *(_BYTE *)(a1 + 128) )
    {
      v7 = v20 - 1;
      if ( !v20 )
        v7 = 0;
      v8 = ptr;
      if ( v21 < v7 + 2 )
      {
        v8 = qvector_reserve((int)&ptr, ptr, v7 + 2, 1u);
        ptr = v8;
      }
      v20 = v7 + 2;
      *((_BYTE *)v8 + v7 + 1) = 0;
      if ( v7 )
        memmove((char *)ptr + 1, ptr, v7);
      *(_BYTE *)ptr = 126;
      *(_DWORD *)(a1 + 124) = 2;
      v5 = *(_DWORD *)(a1 + 104);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = 1;
    }
  }
  else if ( *(_BYTE *)(a1 + 128) )
  {
    v4 = set_qerrno(1584);
    goto LABEL_47;
  }
  v17 = sub_41348(v5, *(_DWORD **)(a1 + 64), (int)&ptr);
  v16 = 1;
  if ( v17 == -1 )
  {
    v17 = -1;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 124) == 2 )
      *(_DWORD *)(*(_DWORD *)(a1 + 104) + 40) = v17;
    v18 = *(_DWORD *)(a1 + 84);
    if ( v18 )
    {
      v9 = *v14;
      v10 = 0;
      v4 = (int)"this";
      while ( 1 )
      {
        v11 = &byte_B3CBE;
        if ( *(_DWORD *)(v9 + 4) )
          v11 = *(const char **)v9;
        if ( !strcmp(v11, "this") )
          break;
        v9 += 12;
        if ( ++v10 >= v18 )
          goto LABEL_45;
      }
    }
    else
    {
LABEL_45:
      sub_3BBC0((int)v14, "this");
    }
  }
LABEL_47:
  a2 = s2;
  if ( ptr )
  {
    v20 = 0;
    qfree(ptr);
    v21 = 0;
    ptr = nullptr;
  }
  if ( v16 )
    goto LABEL_50;
  return v4;
}
// 38E3E: variable 'v17' is possibly undefined
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
