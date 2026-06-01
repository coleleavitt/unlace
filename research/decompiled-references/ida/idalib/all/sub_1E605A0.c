__int64 __fastcall sub_1E605A0(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int8 v4; // cl
  int v5; // eax
  __int64 v7; // rdi
  _DWORD *v8; // rdi
  unsigned int v9; // esi
  int v10; // ebx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // r12
  __int64 v15; // rax
  _QWORD *v16; // r13
  char v17; // dl
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  _BYTE v20[41]; // [rsp+1Fh] [rbp-29h] BYREF

  v3 = a1[68];
  if ( v3 )
  {
    while ( 1 )
    {
      v4 = *(_BYTE *)(v3 + 8) & 0x7F;
      if ( v4 > 0x12u )
      {
        if ( ((v4 + 94) & 0x7Fu) <= 5 )
          return 0;
        v5 = v4;
      }
      else
      {
        v5 = v4;
        if ( ((1LL << v4) & 0x40182) != 0 )
          return 0;
      }
      if ( v5 == 24 || !v5 )
        break;
      v7 = *(_QWORD *)(sub_B8C1B0(v3) + 16);
      if ( (v7 & 4) != 0 )
      {
        v3 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
        if ( !v3 )
          break;
      }
      else
      {
        v3 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v3 )
          break;
      }
    }
  }
  v8 = (_DWORD *)a1[34];
  if ( a2 < 0 )
  {
    v13 = sub_10212A0((__int64)v8, a2);
    v8 = (_DWORD *)a1[34];
    a2 = v13;
  }
  v9 = a2 & 0x7FFFFFFF;
  if ( v9 >= v8[119] && v9 < v8[120] )
    v10 = v8[118];
  else
    v10 = sub_101D590((__int64)v8, v9);
  if ( !v10 )
    return 0;
  v20[0] = 0;
  v11 = (_QWORD *)a1[34];
  if ( (unsigned int)(v10 + 1) <= 1 )
    return 0;
  if ( v10 < 0 )
  {
    v14 = (unsigned int)(-2 - v10);
    v15 = *(_QWORD *)(v11[40] + 8LL * ((unsigned int)(-2 - v10) >> 6));
    if ( _bittest64(&v15, v14) )
    {
      v16 = (_QWORD *)(v11[34] + 8 * ((unsigned __int64)(int)v14 >> 5));
      if ( *v16 )
      {
        v12 = *v16 + 24LL * ((-2 - (_BYTE)v10) & 0x1F);
        goto LABEL_20;
      }
      v18 = (_DWORD *)sub_9C3B30((__int64 *)(v11[36] & 0xFFFFFFFFFFFFFFF8LL), 768, 3u);
      *v16 = v18;
      v19 = v18 + 192;
      do
      {
        *v18 = 0;
        v18 += 6;
        *((_OWORD *)v18 - 1) = 0;
        *((_QWORD *)v18 - 1) = 0;
      }
      while ( v18 != v19 );
      v17 = v20[0];
      v12 = *v16 + 24LL * ((-2 - (_BYTE)v10) & 0x1F);
    }
    else
    {
      v12 = sub_101F930((__int64)v11, v14, v20);
      v17 = v20[0];
    }
    if ( v17 )
      return 0;
  }
  else
  {
    v12 = v11[23] + 24LL * (unsigned int)v10;
  }
LABEL_20:
  if ( *(char *)(v12 + 3) < 0
    || !*(_DWORD *)(v12 + 8)
    || (*(_BYTE *)(v12 + 16) & 7) != 0 && (*(_BYTE *)(*(_QWORD *)(a1[33] + 152LL) + 24LL) & 0x10) != 0 )
  {
    return 0;
  }
  return (unsigned int)v10;
}
