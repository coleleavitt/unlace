/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4345C0
// Address: 0x004345C0

//----- (004345C0) --------------------------------------------------------
int __userpurge sub_4345C0@<eax>(const CHAR **a1@<ecx>, void **a2@<ebx>, int a3)
{
  const CHAR **v3; // esi
  const CHAR *v4; // ecx
  CHAR v5; // al
  unsigned int v6; // edi
  const CHAR *v7; // edx
  void **v8; // edi
  bool v9; // zf
  _DWORD *v10; // edi
  int v11; // eax
  const CHAR *v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // eax
  CHAR *v18; // ecx
  unsigned int v19; // edx
  const CHAR *v20; // eax
  unsigned int v21; // edi
  _DWORD *v22; // ecx
  int v23; // edx
  unsigned int v24; // eax
  LPVOID v25; // eax
  _DWORD *v26; // eax
  __int16 *v27; // ecx
  char v28; // cl
  _DWORD *v29; // edx
  __int16 *v30; // ecx
  int v31; // eax
  const CHAR *v32; // eax
  int v34; // [esp-8h] [ebp-68h]
  void *v35; // [esp+Ch] [ebp-54h] BYREF
  int v36; // [esp+10h] [ebp-50h]
  int v37; // [esp+14h] [ebp-4Ch]
  unsigned __int16 v38; // [esp+18h] [ebp-48h]
  int v39; // [esp+1Ch] [ebp-44h]
  char v40; // [esp+20h] [ebp-40h]
  __int128 v41; // [esp+24h] [ebp-3Ch]
  CHAR *v42; // [esp+34h] [ebp-2Ch]
  unsigned int v43; // [esp+38h] [ebp-28h]
  const CHAR *v44; // [esp+3Ch] [ebp-24h]
  const CHAR *v45; // [esp+40h] [ebp-20h]
  const CHAR *v46; // [esp+44h] [ebp-1Ch]
  const CHAR **v47; // [esp+48h] [ebp-18h]
  int v48; // [esp+4Ch] [ebp-14h]
  char v49; // [esp+53h] [ebp-Dh]
  int v50; // [esp+5Ch] [ebp-4h]
  const CHAR *v51; // [esp+68h] [ebp+8h]

  v3 = a1;
  v47 = a1;
  v35 = nullptr;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v50 = 0;
  v49 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = v3[1];
        v5 = *v4;
        if ( *v4 != 32 && v5 != 9 && v5 != 10 )
          break;
        v3[1] = v4 + 1;
      }
      if ( v5 )
        break;
      v6 = (unsigned int)v3[8];
      if ( v6 <= 1 )
        goto LABEL_51;
      v7 = v3[7];
      *v3 = *(const CHAR **)&v7[28 * v6 - 16];
      v3[1] = *(const CHAR **)&v7[28 * v6 - 12];
      v3[10] = *(const CHAR **)&v7[28 * v6 - 4];
      v3[8] = (const CHAR *)(v6 - 1);
      v8 = (void **)&v7[28 * v6 - 28];
      v9 = *v8 == nullptr;
      LOBYTE(v50) = 1;
      if ( !v9 )
      {
        sub_415F90(v8, 0);
        sub_453A20(*v8);
        *v8 = nullptr;
        v8[2] = nullptr;
      }
      LOBYTE(v50) = 0;
    }
    if ( v5 != 35 || v4[1] != 35 )
    {
LABEL_51:
      v10 = (_DWORD *)a3;
      goto LABEL_52;
    }
    v42 = nullptr;
    v43 = 0;
    v44 = nullptr;
    v10 = (_DWORD *)a3;
    LOBYTE(v50) = 2;
    v11 = *(unsigned __int16 *)(a3 + 12);
    if ( v11 == 3 || v11 == 7 || v11 == 8 )
    {
      v42 = (CHAR *)v3[4];
      v43 = (unsigned int)v3[5];
      v44 = v3[6];
      v3[4] = nullptr;
      v3[5] = nullptr;
      v3[6] = nullptr;
    }
    v12 = v3[2];
    v3[1] += 2;
    v34 = (int)v3[8];
    v46 = v12;
    v13 = sub_4360F0((int)v3, a2, (__m128i)0LL, (int)&v35, v34, nullptr);
    v48 = v13;
    if ( v13 )
      goto LABEL_43;
    if ( v38 == 1 )
    {
      LOBYTE(v50) = 5;
LABEL_48:
      if ( v42 )
        sub_453A20(v42);
      LOBYTE(v50) = 0;
LABEL_52:
      if ( !v49 )
        goto LABEL_68;
      v26 = v10 + 1;
      v27 = &word_4B69CE;
      if ( v10[1] )
        v27 = (__int16 *)*v10;
      v28 = *(_BYTE *)v27;
      v29 = v10 + 1;
      if ( v28 >= 0 )
      {
        v9 = sub_46B760((int)a2, (unsigned __int8)v28) == 0;
        v26 = v10 + 1;
        if ( !v9 )
          goto LABEL_65;
        v29 = v10 + 1;
      }
      v30 = &word_4B69CE;
      if ( *v26 )
        v30 = (__int16 *)*v10;
      v26 = v29;
      if ( *(_BYTE *)v30 != 46 )
      {
        v31 = sub_4373C0(v3, (int)a2, (__m128i)0LL, 1, (int)v10);
        if ( v31 == -1 )
        {
          v13 = sub_45C9E0();
          goto LABEL_69;
        }
        if ( v31 == 1 )
        {
          v13 = sub_431F50((int)v3, a2, (__m128i)0LL, (int)v10, nullptr);
LABEL_69:
          v48 = v13;
          goto LABEL_70;
        }
LABEL_68:
        v13 = 0;
        goto LABEL_69;
      }
LABEL_65:
      v9 = *v26 == 0;
      v32 = MultiByteStr;
      v51 = *v3;
      v45 = v3[1];
      v46 = v3[2];
      if ( !v9 )
        v32 = (const CHAR *)*v10;
      v3[1] = v32;
      *v3 = v32;
      v13 = sub_4360F0((int)v3, a2, (__m128i)0LL, (int)v10, 0, nullptr);
      *v3 = v51;
      v3[1] = v45;
      v48 = v13;
      v3[2] = v46;
      if ( v13 )
        goto LABEL_70;
      goto LABEL_68;
    }
    if ( v38 != 47 )
      break;
    if ( *(_WORD *)(a3 + 12) == 47 )
    {
      v14 = (unsigned int)v3[81] >> 2;
      goto LABEL_24;
    }
LABEL_25:
    v15 = (unsigned int)v3[3];
    switch ( v38 )
    {
      case 2u:
        goto LABEL_30;
      case 3u:
      case 6u:
      case 7u:
      case 8u:
        if ( !v15 )
          goto LABEL_46;
        v16 = (unsigned int)v3[1];
        if ( v16 <= v15 )
          goto LABEL_46;
        v36 = 0;
        sub_4043A0((int)&v35, v15, v16 - v15);
LABEL_30:
        v17 = *(unsigned __int16 *)(a3 + 12);
        if ( v17 == 2 || (unsigned __int16)v17 >= 0x80u )
          goto LABEL_34;
        if ( v43 <= 1 )
        {
          v13 = sub_45CC20(29);
          goto LABEL_42;
        }
        v18 = *(CHAR **)a3;
        v19 = *(_DWORD *)(a3 + 4);
        v20 = *(const CHAR **)(a3 + 8);
        *(_DWORD *)a3 = v42;
        *(_DWORD *)(a3 + 4) = v43;
        *(_DWORD *)(a3 + 8) = v44;
        v3 = v47;
        v42 = v18;
        v43 = v19;
        v44 = v20;
LABEL_34:
        v21 = v36 != 0 ? v36 - 1 : 0;
        if ( v21 )
        {
          v22 = (_DWORD *)a3;
          v23 = *(_DWORD *)(a3 + 4) != 0 ? *(_DWORD *)(a3 + 4) - 1 : 0;
          v24 = v23 + v21 + 1;
          v48 = v23;
          v45 = (const CHAR *)v24;
          if ( v24 > *(_DWORD *)(a3 + 8) )
          {
            v25 = sub_453B00(a3, *(void **)a3, v23 + v21 + 1, 1u);
            v22 = (_DWORD *)a3;
            v23 = v48;
            *(_DWORD *)a3 = v25;
            v24 = (unsigned int)v45;
          }
          v22[1] = v24;
          *(_BYTE *)(v23 + v21 + *v22) = 0;
          sub_464310(v23 + *v22, (unsigned int)v35, v21);
          v3 = v47;
        }
        v49 = 1;
        v3[2] = v46;
        LOBYTE(v50) = 11;
        if ( v42 )
        {
          v43 = 0;
          sub_453A20(v42);
          v42 = nullptr;
          v44 = nullptr;
        }
        LOBYTE(v50) = 0;
        break;
      default:
        if ( v38 >= 0x80u )
          goto LABEL_30;
LABEL_46:
        v3[2] = v46;
        v3[1] = (const CHAR *)v15;
        LOBYTE(v50) = 8;
        goto LABEL_48;
    }
  }
  if ( v38 != 59 )
    goto LABEL_25;
  v14 = (unsigned int)v3[81] >> 3;
LABEL_24:
  if ( (v14 & 1) == 0 )
    goto LABEL_25;
  sub_4378A0(v3);
  v13 = 0;
  *(_WORD *)(a3 + 12) = 1;
LABEL_42:
  v48 = v13;
LABEL_43:
  LOBYTE(v50) = 9;
  if ( v42 )
  {
    sub_453A20(v42);
    v13 = v48;
  }
LABEL_70:
  v50 = 15;
  if ( !v35 )
    return v13;
  v36 = 0;
  sub_453A20(v35);
  return v48;
}
// 4B69CE: using guessed type __int16 word_4B69CE;
