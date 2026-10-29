/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62764
// Address: 0x00062764

//----- (00062764) --------------------------------------------------------
void *__fastcall sub_62764(void *result, unsigned int *a2, int a3)
{
  int v3; // r4
  unsigned int *v4; // r5
  _BYTE *v5; // r0
  size_t v6; // r6
  _BYTE *v7; // r0
  size_t v8; // r6
  const char *v9; // r11
  size_t v10; // r7
  int v11; // r6
  unsigned int v12; // r10
  const char *v13; // r11
  size_t v14; // r7
  int v15; // r6
  unsigned int v16; // r10
  char *v17; // r0
  int v18; // r2
  char *v19; // r0
  int v20; // r2
  int v21; // r7
  unsigned int v22; // r10
  int v23; // r7
  unsigned int v24; // r10
  char *v25; // r0
  int v26; // r2
  char *v27; // r0
  int v28; // r2
  unsigned int *v29; // [sp+Ch] [bp-30h]
  _BYTE v30[5]; // [sp+24h] [bp-18h] BYREF
  _BYTE v31[3]; // [sp+29h] [bp-13h] BYREF
  _BYTE v32[5]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v33[3]; // [sp+31h] [bp-Bh] BYREF

  if ( a3 > 0 )
  {
    v3 = (int)result;
    v4 = a2;
    v29 = &a2[8 * a3];
    while ( 1 )
    {
      v5 = sub_76118(v32, (unsigned int)v33, *v4);
      v6 = v5 - v32;
      if ( v5 == v32 )
        goto LABEL_4;
      v21 = *(_DWORD *)(v3 + 4);
      v22 = v6 + v21;
      if ( __CFADD__(v6, v21) )
        break;
      if ( v21 < v22 )
      {
        v25 = *(char **)v3;
        if ( *(_DWORD *)(v3 + 8) >= v22 )
        {
          v26 = *(_DWORD *)(v3 + 4);
LABEL_53:
          memset(&v25[v26], 0, v22 - v26);
          *(_DWORD *)(v3 + 4) = v22;
          goto LABEL_42;
        }
LABEL_62:
        v25 = (char *)sub_78018(v3, v25, v22, 1u);
        v26 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)v3 = v25;
        goto LABEL_53;
      }
LABEL_42:
      memcpy((void *)(*(_DWORD *)v3 + v21), v32, v6);
LABEL_4:
      v7 = sub_76118(v30, (unsigned int)v31, v4[1]);
      v8 = v7 - v30;
      if ( v7 == v30 )
        goto LABEL_5;
      v23 = *(_DWORD *)(v3 + 4);
      v24 = v8 + v23;
      if ( __CFADD__(v8, v23) )
      {
        if ( (unsigned int)v23 > 0x7FFFFFFE )
        {
          if ( v23 < 0 )
            *(_DWORD *)(v3 + 4) = 0x7FFFFFFF;
          goto LABEL_48;
        }
        v24 = 0x7FFFFFFF;
        v27 = *(char **)v3;
        if ( *(_DWORD *)(v3 + 8) >= 0x7FFFFFFFu )
        {
          v28 = *(_DWORD *)(v3 + 4);
          goto LABEL_58;
        }
LABEL_61:
        v27 = (char *)sub_78018(v3, v27, v24, 1u);
        v28 = *(_DWORD *)(v3 + 4);
        *(_DWORD *)v3 = v27;
LABEL_58:
        memset(&v27[v28], 0, v24 - v28);
        *(_DWORD *)(v3 + 4) = v24;
        goto LABEL_48;
      }
      if ( v23 < v24 )
      {
        v27 = *(char **)v3;
        if ( *(_DWORD *)(v3 + 8) < v24 )
          goto LABEL_61;
        v28 = *(_DWORD *)(v3 + 4);
        goto LABEL_58;
      }
LABEL_48:
      memcpy((void *)(*(_DWORD *)v3 + v23), v30, v8);
LABEL_5:
      if ( v4[3] )
      {
        v9 = (const char *)v4[2];
        if ( v9 )
          goto LABEL_7;
      }
      else
      {
        v9 = (const char *)&dword_8DB98;
        if ( &dword_8DB98 )
        {
LABEL_7:
          v10 = strlen(v9) + 1;
          goto LABEL_8;
        }
      }
      v10 = 1;
      v9 = &byte_8DFE8;
LABEL_8:
      v11 = *(_DWORD *)(v3 + 4);
      v12 = v11 + v10;
      if ( !__CFADD__(v11, v10) )
      {
        if ( v11 >= v12 )
          goto LABEL_13;
        goto LABEL_31;
      }
      if ( (unsigned int)v11 <= 0x7FFFFFFE )
      {
        v12 = 0x7FFFFFFF;
LABEL_31:
        v19 = *(char **)v3;
        if ( *(_DWORD *)(v3 + 8) < v12 )
        {
          v19 = (char *)sub_78018(v3, *(void **)v3, v12, 1u);
          v20 = *(_DWORD *)(v3 + 4);
          *(_DWORD *)v3 = v19;
        }
        else
        {
          v20 = *(_DWORD *)(v3 + 4);
        }
        memset(&v19[v20], 0, v12 - v20);
        *(_DWORD *)(v3 + 4) = v12;
        goto LABEL_13;
      }
      if ( v11 < 0 )
        *(_DWORD *)(v3 + 4) = 0x7FFFFFFF;
LABEL_13:
      memcpy((void *)(*(_DWORD *)v3 + v11), v9, v10);
      if ( v4[6] )
      {
        v13 = (const char *)v4[5];
        if ( v13 )
          goto LABEL_15;
      }
      else
      {
        v13 = (const char *)&dword_8DB98;
        if ( &dword_8DB98 )
        {
LABEL_15:
          v14 = strlen(v13) + 1;
          goto LABEL_16;
        }
      }
      v14 = 1;
      v13 = &byte_8DFE8;
LABEL_16:
      v15 = *(_DWORD *)(v3 + 4);
      v16 = v14 + v15;
      if ( __CFADD__(v14, v15) )
      {
        if ( (unsigned int)v15 > 0x7FFFFFFE )
        {
          if ( v15 < 0 )
            *(_DWORD *)(v3 + 4) = 0x7FFFFFFF;
          goto LABEL_21;
        }
        v16 = 0x7FFFFFFF;
LABEL_24:
        v17 = *(char **)v3;
        if ( *(_DWORD *)(v3 + 8) < v16 )
        {
          v17 = (char *)sub_78018(v3, *(void **)v3, v16, 1u);
          v18 = *(_DWORD *)(v3 + 4);
          *(_DWORD *)v3 = v17;
        }
        else
        {
          v18 = *(_DWORD *)(v3 + 4);
        }
        memset(&v17[v18], 0, v16 - v18);
        *(_DWORD *)(v3 + 4) = v16;
        goto LABEL_21;
      }
      if ( v15 < v16 )
        goto LABEL_24;
LABEL_21:
      v4 += 8;
      result = memcpy((void *)(*(_DWORD *)v3 + v15), v13, v14);
      if ( v29 == v4 )
        return result;
    }
    if ( (unsigned int)v21 > 0x7FFFFFFE )
    {
      if ( v21 < 0 )
        *(_DWORD *)(v3 + 4) = 0x7FFFFFFF;
      goto LABEL_42;
    }
    v22 = 0x7FFFFFFF;
    v25 = *(char **)v3;
    if ( *(_DWORD *)(v3 + 8) >= 0x7FFFFFFFu )
    {
      v26 = *(_DWORD *)(v3 + 4);
      goto LABEL_53;
    }
    goto LABEL_62;
  }
  return result;
}
// 8DB98: using guessed type int dword_8DB98;
// 8DFE8: using guessed type char byte_8DFE8;
