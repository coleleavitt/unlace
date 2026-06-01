/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA20C
// Address: 0x000DA20C

//----- (000DA20C) --------------------------------------------------------
int __usercall sub_DA20C@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v3; // ecx
  int v5; // esi
  _BYTE *v6; // eax
  int v7; // edx
  _BYTE *v8; // eax
  unsigned __int8 *v9; // ecx
  int v10; // edx
  char *v11; // eax
  char *v12; // ecx
  char v13; // dl
  char v14; // di
  _BYTE *v15; // eax
  char v16; // al
  unsigned __int8 v17; // al
  int v18; // edx
  unsigned __int8 *v19; // edi
  unsigned __int8 *v20; // esi
  _BYTE *v21; // eax
  char *v22; // [esp+0h] [ebp-44h]
  _BYTE *v23; // [esp+8h] [ebp-3Ch]
  _BYTE *v24; // [esp+Ch] [ebp-38h]
  _BYTE *i; // [esp+Ch] [ebp-38h]
  char v26; // [esp+Ch] [ebp-38h]
  _DWORD *FDE; // [esp+10h] [ebp-34h]
  int v30; // [esp+20h] [ebp-24h] BYREF
  int v31; // [esp+24h] [ebp-20h] BYREF
  _DWORD v32[7]; // [esp+28h] [ebp-1Ch] BYREF

  memset((void *)a2, 0, 0xC0u);
  v3 = a1[19];
  a1[26] = 0;
  a1[20] = 0;
  if ( !v3 )
    return 5;
  FDE = (_DWORD *)Unwind_Find_FDE(v3 + (a1[24] >> 31) - 1, a1 + 21);
  if ( !FDE )
    return 5;
  *(_DWORD *)(a2 + 164) = a1[23];
  v5 = (int)FDE - FDE[1] + 4;
  v24 = (_BYTE *)(v5 + 9);
  v6 = (_BYTE *)(strlen((const char *)(v5 + 9)) + 1 + v5 + 9);
  if ( *(_BYTE *)(v5 + 9) == 101 && *(_BYTE *)(v5 + 10) == 104 )
  {
    v7 = *(_DWORD *)v6;
    v6 += 4;
    *(_DWORD *)(a2 + 188) = v7;
    v24 = (_BYTE *)(v5 + 11);
  }
  if ( *(_BYTE *)(v5 + 8) > 3u )
  {
    if ( *v6 != 4 || v6[1] )
      return 3;
    v6 += 2;
  }
  v8 = sub_D9016(v6, &v30);
  *(_DWORD *)(a2 + 176) = v30;
  v9 = sub_D9041(v8, &v31);
  *(_DWORD *)(a2 + 172) = v31;
  if ( *(_BYTE *)(v5 + 8) == 1 )
  {
    v10 = *v9;
    v11 = (char *)(v9 + 1);
  }
  else
  {
    v11 = sub_D9016(v9, &v30);
    v10 = v30;
  }
  v12 = nullptr;
  *(_DWORD *)(a2 + 180) = v10;
  *(_BYTE *)(a2 + 185) = -1;
  if ( *v24 == 122 )
  {
    v11 = sub_D9016(v11, &v30);
    ++v24;
    v12 = &v11[v30];
    *(_BYTE *)(a2 + 186) = 1;
  }
  for ( i = v24 + 1; ; ++i )
  {
    v13 = *(i - 1);
    if ( !v13 )
      break;
    switch ( v13 )
    {
      case 'L':
        *(_BYTE *)(a2 + 185) = *v11;
LABEL_22:
        ++v11;
        continue;
      case 'R':
        *(_BYTE *)(a2 + 184) = *v11;
        goto LABEL_22;
      case 'P':
        v22 = v12;
        v23 = v11 + 1;
        v14 = *v11;
        v15 = (_BYTE *)sub_D93ED(*v11, (int)a1);
        v11 = sub_D9080(v14, v15, v23, v32);
        *(_DWORD *)(a2 + 168) = v32[0];
        v12 = v22;
        break;
      case 'S':
        *(_BYTE *)(a2 + 187) = 1;
        break;
      default:
        v11 = v12;
        goto LABEL_32;
    }
  }
  if ( v12 )
    v11 = v12;
LABEL_32:
  if ( !v11 )
    return 3;
  sub_D9450((unsigned __int8 *)v11, v5 + *(_DWORD *)v5 + 4, a1, a2);
  v16 = *(_BYTE *)(a2 + 184);
  if ( v16 == -1 )
  {
    v18 = 0;
  }
  else
  {
    v17 = v16 & 7;
    if ( v17 == 2 )
    {
      v18 = 1;
    }
    else if ( v17 > 2u )
    {
      if ( v17 == 3 )
        goto LABEL_44;
      v18 = 4;
      if ( v17 != 4 )
LABEL_42:
        abort();
    }
    else
    {
      if ( v17 )
        goto LABEL_42;
LABEL_44:
      v18 = 2;
    }
  }
  v19 = nullptr;
  v20 = (unsigned __int8 *)&FDE[v18 + 2];
  if ( *(_BYTE *)(a2 + 186) )
  {
    v20 = sub_D9016(&FDE[v18 + 2], v32);
    v19 = &v20[v32[0]];
  }
  if ( *(_BYTE *)(a2 + 185) != 0xFF )
  {
    v26 = *(_BYTE *)(a2 + 185);
    v21 = (_BYTE *)sub_D93ED(v26, (int)a1);
    v20 = sub_D9080(v26, v21, v20, v32);
    a1[20] = v32[0];
  }
  if ( !v19 )
    v19 = v20;
  sub_D9450(v19, (unsigned int)FDE + *FDE + 4, a1, a2);
  return 0;
}
