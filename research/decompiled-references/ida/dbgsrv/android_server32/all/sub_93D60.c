/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_93D60
// Address: 0x00093D60

//----- (00093D60) --------------------------------------------------------
_DWORD *__fastcall sub_93D60(__int64 *a1, int a2)
{
  __int64 v4; // r0
  void **v5; // r11
  int *v6; // r3
  _BYTE *v7; // r8
  _BYTE *v8; // r2
  _BYTE *v9; // r5
  unsigned __int64 v10; // r0
  int v11; // r9
  _DWORD *v12; // r9
  unsigned __int8 *v13; // r3
  _BYTE *v14; // r0
  unsigned int v15; // r2
  int v16; // r3
  unsigned __int8 *v17; // r1
  int v18; // r1
  int v19; // r0
  int v20; // r5
  int *v21; // r6
  int *v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r3
  int v26; // r1
  int *v27; // r2
  int v28; // r3
  int v29; // r1
  __int64 v30; // r0
  _BYTE *v31; // r10
  size_t v32; // r6
  int v33; // r5
  char *v34; // r11
  char *v35; // r0
  _DWORD *result; // r0
  unsigned __int8 *v37; // r3
  int v38; // r6
  int v39; // [sp+0h] [bp-78h]
  int v40; // [sp+Ch] [bp-6Ch]
  int v41; // [sp+10h] [bp-68h]
  int v42; // [sp+14h] [bp-64h]
  int v43; // [sp+18h] [bp-60h]
  unsigned int v44; // [sp+20h] [bp-58h]
  unsigned __int8 *v45; // [sp+28h] [bp-50h] BYREF
  unsigned __int8 *v46; // [sp+2Ch] [bp-4Ch] BYREF
  unsigned __int64 v47; // [sp+30h] [bp-48h]
  _BYTE v48[32]; // [sp+38h] [bp-40h] BYREF
  int v49; // [sp+58h] [bp-20h] BYREF

  v4 = *a1;
  if ( (_DWORD)v4 == HIDWORD(v4) || *(_BYTE *)v4 != 73 )
    return nullptr;
  LODWORD(v4) = v4 + 1;
  *(_DWORD *)a1 = v4;
  if ( a2 )
    *((_DWORD *)a1 + 73) = *((_DWORD *)a1 + 72);
  v5 = (void **)a1 + 73;
  v6 = *((int **)a1 + 3);
  v7 = (char *)a1 + 300;
  v44 = (unsigned int)(a1 + 1);
  v43 = a2;
  v39 = ((int)v6 - *((_DWORD *)a1 + 2)) >> 2;
  v40 = (int)(a1 + 46);
  v42 = (int)a1 + 332;
  v8 = v48;
  while ( 1 )
  {
    if ( (_DWORD)v4 != HIDWORD(v4) )
    {
      HIDWORD(v4) = *(unsigned __int8 *)v4;
      if ( HIDWORD(v4) == 69 )
      {
        *(_DWORD *)a1 = v4 + 1;
        sub_9392E(&v46, (int)a1, v39);
        result = sub_93AC6(v40, 16);
        v37 = v46;
        v38 = v47;
        *result = &off_DC554;
        result[1] = 16843038;
        result[2] = v37;
        result[3] = v38;
        return result;
      }
    }
    if ( a2 )
      break;
    v46 = sub_93798((int)a1, SHIDWORD(v4), (int)v8, v6);
    if ( !v46 )
      return nullptr;
    sub_938C4(__SPAIR64__(&v46, v44));
LABEL_48:
    v4 = *a1;
  }
  v46 = v48;
  LODWORD(v47) = v48;
  HIDWORD(v47) = &v49;
  v9 = *((_BYTE **)a1 + 72);
  if ( v9 == v7 )
  {
    v11 = (_BYTE *)*v5 - v9;
    HIDWORD(v10) = v48;
    if ( *v5 != v9 )
    {
      qmemcpy(v48, (char *)a1 + 300, (_BYTE *)*v5 - v9);
      HIDWORD(v10) = (char *)&v46 + (v11 & 0xFFFFFFFC) + 12;
    }
    LODWORD(v47) = HIDWORD(v10);
    *v5 = v9;
  }
  else
  {
    v46 = *((unsigned __int8 **)a1 + 72);
    v10 = *(__int64 *)((char *)a1 + 292);
    v47 = v10;
    *((_DWORD *)a1 + 72) = v7;
    *((_DWORD *)a1 + 73) = v7;
    *((_DWORD *)a1 + 74) = v42;
  }
  v45 = sub_93798((int)a1, SHIDWORD(v10), (int)v8, v6);
  v12 = v45;
  v13 = v46;
  v14 = *((_BYTE **)a1 + 72);
  if ( v46 == v48 )
  {
    if ( v14 == v7 )
    {
      v17 = v48;
    }
    else
    {
      free(v14);
      *((_DWORD *)a1 + 72) = v7;
      *((_DWORD *)a1 + 73) = v7;
      *((_DWORD *)a1 + 74) = v42;
      v14 = (char *)a1 + 300;
      v13 = v46;
      v17 = v46;
    }
    if ( (unsigned __int8 *)v47 == v13 )
    {
      v19 = 0;
      v18 = (int)a1 + 300;
    }
    else
    {
      memmove(v14, v17, v47 - (_DWORD)v13);
      v13 = v46;
      v18 = *((_DWORD *)a1 + 72);
      v19 = v47 - (_DWORD)v46;
    }
    *v5 = (void *)(v19 + v18);
    LODWORD(v47) = v13;
  }
  else
  {
    *((_DWORD *)a1 + 72) = v46;
    if ( v14 == v7 )
    {
      *(__int64 *)((char *)a1 + 292) = v47;
      v46 = v48;
      LODWORD(v47) = v48;
      HIDWORD(v47) = &v49;
    }
    else
    {
      v46 = v14;
      v15 = *((_DWORD *)a1 + 74);
      v16 = HIDWORD(v47);
      *((_DWORD *)a1 + 73) = v47;
      *((_DWORD *)a1 + 74) = v16;
      v47 = __PAIR64__(v15, (unsigned int)v14);
    }
  }
  if ( v12 )
  {
    sub_938C4(__SPAIR64__(&v45, v44));
    if ( *((_BYTE *)v12 + 4) == 28 )
    {
      v20 = v12[3];
      v21 = (int *)v12[2];
      v12 = sub_93AC6(v40, 16);
      v22 = v21;
      *v12 = &off_DC520;
      v12[1] = 33686043;
      v12[2] = v21;
      v23 = 4 * v20;
      v24 = 4 * v20;
      v12[3] = v20;
      while ( v24 )
      {
        v25 = *v22++;
        v24 -= 4;
        if ( *(_BYTE *)(v25 + 6) != 1 )
          goto LABEL_32;
      }
      *((_BYTE *)v12 + 6) = 1;
LABEL_32:
      v26 = 4 * v20;
      v27 = v21;
      do
      {
        if ( !v26 )
        {
          *((_BYTE *)v12 + 7) = 1;
          break;
        }
        v28 = *v27++;
        v26 -= 4;
      }
      while ( *(_BYTE *)(v28 + 7) == 1 );
      while ( v23 )
      {
        v29 = *v21++;
        v23 -= 4;
        if ( *(_BYTE *)(v29 + 5) != 1 )
          goto LABEL_41;
      }
      *((_BYTE *)v12 + 5) = 1;
    }
LABEL_41:
    v30 = *(__int64 *)((char *)a1 + 292);
    if ( (_DWORD)v30 == HIDWORD(v30) )
    {
      v31 = *((_BYTE **)a1 + 72);
      v32 = v30 - (_DWORD)v31;
      v33 = ((int)v30 - (int)v31) >> 1;
      v41 = ((int)v30 - (int)v31) >> 2;
      if ( v7 == v31 )
      {
        v35 = (char *)malloc(2 * (v30 - (_DWORD)v31));
        v34 = v35;
        if ( v32 )
          memmove(v35, v31, v32);
      }
      else
      {
        v34 = (char *)realloc(v31, 2 * (v30 - (_DWORD)v31));
      }
      HIDWORD(v30) = &v34[4 * v33];
      LODWORD(v30) = &v34[4 * v41];
      *((_DWORD *)a1 + 72) = v34;
      *(__int64 *)((char *)a1 + 292) = v30;
      v5 = (void **)a1 + 73;
    }
    *v5 = (void *)(v30 + 4);
    *(_DWORD *)v30 = v12;
    sub_92498((void **)&v46);
    a2 = v43;
    goto LABEL_48;
  }
  sub_92498((void **)&v46);
  return nullptr;
}
// 93E08: variable 'v8' is possibly undefined
// 93E08: variable 'v6' is possibly undefined
// DC520: using guessed type _UNKNOWN *off_DC520;
// DC554: using guessed type _UNKNOWN *off_DC554;
