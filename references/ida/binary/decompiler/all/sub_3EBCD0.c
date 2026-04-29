__int64 __fastcall sub_3EBCD0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // r12
  const char *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 result; // rax
  char v9; // dl
  __int64 v10; // r12
  __int64 v11; // r13
  int v12; // ecx
  int v13; // edx
  __int64 v14; // r12
  __int64 v15; // rbp
  int v16; // ecx
  int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rbp
  int v20; // ecx
  int v21; // edx
  __int64 v22; // r12
  __int64 v23; // rbp
  int v24; // ecx
  int v25; // ebp
  unsigned __int8 v26; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v27; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-39h]
  _QWORD v29[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(const char **)(a2 + 40);
  v29[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 144) )
  {
    if ( strncmp(v3, "__readfs", 8u) && strncmp(v3, "__writefs", 9u) )
    {
      v5 = "__addfs";
LABEL_5:
      if ( strncmp(v3, v5, 7u) )
        return 0;
    }
  }
  else if ( strncmp(v3, "__readgs", 8u) )
  {
    v5 = "__addgs";
    if ( !strncmp(v3, "__writegs", 9u) )
    {
      v6 = *(_QWORD *)(a2 + 72);
      v7 = *(_QWORD *)(v6 + 24);
      if ( *(_BYTE *)v7 != 4 )
        return 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a2 + 72);
  v7 = *(_QWORD *)(v6 + 24);
  if ( *(_BYTE *)v7 != 4 )
    return 0;
LABEL_12:
  if ( **(_DWORD **)(v7 + 8) != 13 )
    return 0;
  result = sub_327490(v29);
  if ( !(_BYTE)result )
    return 0;
  v9 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 2LL);
  switch ( v9 )
  {
    case 'r':
      *(_DWORD *)a2 = 4;
      v28 = result;
      sub_11A960(a2 + 48);
      v22 = v29[0];
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11A960(a2 + 32);
      *(_BYTE *)(a2 + 32) = 6;
      v24 = 8 * *(_DWORD *)(v23 + 84);
      if ( (unsigned __int64)v24 <= 0x3F )
        v22 &= ~(-1LL << v24);
      v25 = *(_DWORD *)(a2 + 68);
      *(_QWORD *)(a2 + 40) = v22;
      *(_DWORD *)(a2 + 36) = v25;
      sub_11A960(a2 + 64);
      *(_DWORD *)(a2 + 68) = v25;
      return v28;
    case 'w':
      *(_DWORD *)a2 = 4;
      v27 = result;
      sub_11A960(a2 + 48);
      sub_11A5D0((char *)(a2 + 32), (char *)(*(_QWORD *)(v6 + 24) + 80LL));
      v18 = v29[0];
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11A960(a2 + 64);
      *(_BYTE *)(a2 + 64) = 6;
      result = v27;
      v20 = 8 * *(_DWORD *)(v19 + 84);
      if ( (unsigned __int64)v20 <= 0x3F )
        v18 &= ~(-1LL << v20);
      v21 = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(a2 + 72) = v18;
      *(_DWORD *)(a2 + 68) = v21;
      break;
    case 'a':
      *(_DWORD *)a2 = 12;
      v26 = result;
      sub_11A5D0((char *)(a2 + 48), (char *)(*(_QWORD *)(v6 + 24) + 80LL));
      v10 = v29[0];
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11A960(a2 + 32);
      *(_BYTE *)(a2 + 32) = 6;
      v12 = 8 * *(_DWORD *)(v11 + 84);
      if ( (unsigned __int64)v12 <= 0x3F )
        v10 &= ~(-1LL << v12);
      v13 = *(_DWORD *)(a2 + 52);
      *(_QWORD *)(a2 + 40) = v10;
      v14 = v29[0];
      *(_DWORD *)(a2 + 36) = v13;
      v15 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11A960(a2 + 64);
      *(_BYTE *)(a2 + 64) = 6;
      result = v26;
      v16 = 8 * *(_DWORD *)(v15 + 84);
      if ( (unsigned __int64)v16 <= 0x3F )
        v14 &= ~(-1LL << v16);
      v17 = *(_DWORD *)(a2 + 52);
      *(_QWORD *)(a2 + 72) = v14;
      *(_DWORD *)(a2 + 68) = v17;
      break;
  }
  return result;
}
