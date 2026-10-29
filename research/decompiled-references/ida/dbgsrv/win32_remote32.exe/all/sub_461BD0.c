/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461BD0
// Address: 0x00461BD0

//----- (00461BD0) --------------------------------------------------------
int __cdecl sub_461BD0(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ecx
  unsigned __int8 *v4; // edi
  int v5; // edx
  unsigned __int8 v6; // bl
  unsigned int v7; // eax
  LPVOID v8; // eax
  unsigned __int8 v9; // ah
  unsigned int v10; // eax
  unsigned int v11; // ebx
  __int16 v12; // ax
  unsigned __int8 v13; // bh
  unsigned __int16 v14; // cx
  unsigned __int8 v15; // cl
  __int16 v16; // cx
  const CHAR *v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int8 v21; // al
  CHAR *v23; // [esp+10h] [ebp-34h] BYREF
  int v24; // [esp+14h] [ebp-30h]
  int v25; // [esp+18h] [ebp-2Ch]
  unsigned int v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h]
  int v28; // [esp+24h] [ebp-20h]
  int v29; // [esp+28h] [ebp-1Ch]
  unsigned int v30; // [esp+2Ch] [ebp-18h]
  unsigned __int16 v31[3]; // [esp+30h] [ebp-14h] BYREF
  char v32; // [esp+37h] [ebp-Dh] BYREF
  int v33; // [esp+40h] [ebp-4h]
  int v34; // [esp+54h] [ebp+10h]

  v3 = a2;
  v4 = (unsigned __int8 *)a2;
  v5 = a3;
  v26 = a2 + a3;
  if ( a2 >= a2 + a3 )
    return (int)&v4[-v3];
  while ( 1 )
  {
    v6 = *v4;
    if ( (*v4 & 0x80u) == 0 )
    {
      v7 = *(_DWORD *)(a1 + 4) + 1;
      if ( v7 > *(_DWORD *)(a1 + 8) )
      {
        v8 = sub_453B00(a1, *(void **)a1, v7, 1u);
        v5 = a3;
        *(_DWORD *)a1 = v8;
      }
      ++v4;
      *(_BYTE *)(*(_DWORD *)a1 + (*(_DWORD *)(a1 + 4))++) = v6;
      --v5;
      goto LABEL_50;
    }
    if ( (v6 & 0xE0) != 0xC0 )
      break;
    if ( v5 < 2 )
      goto LABEL_55;
    v9 = v4[1];
    if ( v6 != 0xC0 || v9 != 0x80 )
    {
      if ( (unsigned __int8)(v9 + 0x80) > 0x3Fu || (v9 & 0x3F | ((v6 & 0x1Fu) << 6)) < 0x80 )
        goto LABEL_54;
      v10 = *(_DWORD *)(a1 + 4);
      v30 = v10;
      v11 = v10 + 2;
      if ( v10 + 2 < v10 )
        v11 = 0x7FFFFFFF;
      if ( v11 <= v10 )
      {
        if ( v11 != v10 )
        {
          v32 = 0;
          if ( v11 < v10 )
            goto LABEL_21;
        }
      }
      else
      {
        if ( v11 > *(_DWORD *)(a1 + 8) )
          *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v11, 1u);
        sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v11 - *(_DWORD *)(a1 + 4));
        v5 = a3;
        v32 = 0;
LABEL_21:
        *(_DWORD *)(a1 + 4) = v11;
      }
      v12 = *(_WORD *)v4;
      v4 += 2;
      v5 -= 2;
      *(_WORD *)(v30 + *(_DWORD *)a1) = v12;
      goto LABEL_50;
    }
    v32 = 0;
    sub_461F90((char **)a1, &v32);
    v4 += 2;
    v5 = a3 - 2;
LABEL_50:
    a3 = v5;
LABEL_51:
    if ( (unsigned int)v4 >= v26 )
    {
      v3 = a2;
      return (int)&v4[-v3];
    }
  }
  if ( (v6 & 0xF0) != 0xE0 )
    goto LABEL_54;
  if ( v5 < 3 )
  {
LABEL_55:
    *sub_46B984() = 22;
    return -1;
  }
  v13 = v4[2];
  if ( (unsigned __int8)(v4[1] + 0x80) > 0x3Fu )
    goto LABEL_54;
  if ( (unsigned __int8)(v13 + 0x80) > 0x3Fu )
    goto LABEL_54;
  v14 = v13 & 0x3F | (((v6 << 6) | v4[1] & 0x3F) << 6);
  if ( v14 < 0x800u )
    goto LABEL_54;
  if ( (unsigned __int16)(v14 + 10240) > 0x3FFu )
  {
    v18 = *(_DWORD *)(a1 + 4);
    v30 = v18;
    v19 = v18 + 3;
    if ( v18 + 3 < v18 )
      v19 = 0x7FFFFFFF;
    if ( v19 <= v18 )
    {
      if ( v19 == v18 )
        goto LABEL_49;
      v32 = 0;
      if ( v19 >= v18 )
        goto LABEL_49;
    }
    else
    {
      if ( v19 > *(_DWORD *)(a1 + 8) )
        *(_DWORD *)a1 = sub_453B00(a1, *(void **)a1, v19, 1u);
      sub_464890((__m128i *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)a1), 0, v19 - *(_DWORD *)(a1 + 4));
      v5 = a3;
      v18 = v30;
      v32 = 0;
    }
    *(_DWORD *)(a1 + 4) = v19;
LABEL_49:
    v20 = v18 + *(_DWORD *)a1;
    *(_WORD *)v20 = *(_WORD *)v4;
    v21 = v4[2];
    v4 += 3;
    *(_BYTE *)(v20 + 2) = v21;
    v5 -= 3;
    goto LABEL_50;
  }
  v31[0] = v13 & 0x3F | (((v6 << 6) | v4[1] & 0x3F) << 6);
  v34 = v5 - 3;
  if ( v5 - 3 < 3 )
    goto LABEL_55;
  v15 = v4[5];
  LOBYTE(v27) = v4[3];
  LOBYTE(v28) = v4[4];
  LOBYTE(v29) = v15;
  if ( (unsigned __int8)(v28 + 0x80) > 0x3Fu
    || (unsigned __int8)(v15 + 0x80) > 0x3Fu
    || (v16 = sub_4597D0(v27, v28, v29), (unsigned __int16)v16 < 0x800u)
    || (unsigned __int16)(v16 + 9216) > 0x3FFu )
  {
LABEL_54:
    *sub_46B984() = 42;
    return -1;
  }
  v31[1] = v16;
  v23 = nullptr;
  v24 = 0;
  v25 = 0;
  v33 = 0;
  if ( sub_45A700((int)&v23, v31, 2) )
  {
    v17 = MultiByteStr;
    if ( v24 )
      v17 = v23;
    sub_401600(a1, (unsigned int)v17, v24 != 0 ? v24 - 1 : 0);
    v4 += 6;
    v5 = v34 - 3;
    a3 = v34 - 3;
    v33 = 1;
    if ( v23 )
    {
      v24 = 0;
      sub_453A20(v23);
      v5 = a3;
      v23 = nullptr;
      v25 = 0;
    }
    v33 = -1;
    goto LABEL_51;
  }
  *sub_46B984() = 42;
  sub_401400((void **)&v23);
  return -1;
}
