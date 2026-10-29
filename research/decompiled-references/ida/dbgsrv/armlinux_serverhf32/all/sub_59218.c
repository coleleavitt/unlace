/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59218
// Address: 0x00059218

//----- (00059218) --------------------------------------------------------
int __fastcall sub_59218(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r3
  unsigned int v8; // r0
  char *v9; // r1
  char *v10; // r0
  void **v11; // r0
  _BYTE *v12; // r0
  int v13; // r6
  int v14; // r8
  unsigned int *v15; // r5
  _BYTE *v16; // r0
  size_t v17; // r9
  size_t v18; // r9
  size_t v19; // r8
  const char *v20; // r10
  size_t v21; // r8
  int v22; // r5
  unsigned int v23; // r9
  char *v25; // r0
  int v26; // r2
  int v27; // r9
  unsigned int v28; // r10
  int v29; // r10
  unsigned int v30; // r11
  int v31; // r10
  unsigned int v32; // r11
  char *v33; // r0
  int v34; // r2
  char *v35; // r0
  int v36; // r2
  char *v37; // r0
  int v38; // r2
  int v40; // [sp+14h] [bp-40h]
  _BYTE v41[3]; // [sp+30h] [bp-24h] BYREF
  char v42; // [sp+33h] [bp-21h] BYREF
  _BYTE v43[10]; // [sp+34h] [bp-20h] BYREF
  char v44[2]; // [sp+3Eh] [bp-16h] BYREF
  _BYTE v45[10]; // [sp+40h] [bp-14h] BYREF
  _BYTE v46[2]; // [sp+4Ah] [bp-Ah] BYREF

  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 8);
  v9 = *(char **)a2;
  if ( v7 + 1 > v8 )
  {
    v10 = (char *)sub_77EB0(a2, v9, v7 + 1, 1u);
    v7 = *(_DWORD *)(a2 + 4);
    v9 = v10;
    *(_DWORD *)a2 = v10;
  }
  v9[v7] = 1;
  ++*(_DWORD *)(a2 + 4);
  sub_57FBC(a2, *(unsigned __int8 *)(a4 + 96));
  sub_57FBC(a2, *(unsigned __int8 *)(a4 + 97));
  v11 = sub_59148((int *)a5);
  v12 = sub_760FC(v45, (unsigned int)v46, (unsigned int)v11, 0);
  if ( v12 != v45 )
    sub_57F50(a2, v45, v12 - v45);
  sub_57FBC(a2, *(_DWORD *)(a5 + 12));
  sub_57FBC(a2, a6[1]);
  v40 = a6[1];
  if ( v40 > 0 )
  {
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_DWORD *)(*a6 + 4 * v13);
      v15 = (unsigned int *)(*(_DWORD *)(a4 + 52) + 104 * v14);
      v16 = sub_760FC(v45, (unsigned int)v46, *v15, v15[1]);
      v17 = v16 - v45;
      if ( v16 == v45 )
        goto LABEL_8;
      v29 = *(_DWORD *)(a2 + 4);
      v30 = v17 + v29;
      if ( __CFADD__(v17, v29) )
        break;
      if ( v29 < v30 )
      {
        v35 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) >= v30 )
        {
          v36 = *(_DWORD *)(a2 + 4);
LABEL_54:
          memset(&v35[v36], 0, v30 - v36);
          *(_DWORD *)(a2 + 4) = v30;
          goto LABEL_38;
        }
LABEL_62:
        v35 = (char *)sub_77EB0(a2, v35, v30, 1u);
        v36 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)a2 = v35;
        goto LABEL_54;
      }
LABEL_38:
      memcpy((void *)(*(_DWORD *)a2 + v29), v45, v17);
LABEL_8:
      v18 = sub_760FC(v43, (unsigned int)v44, v15[2], 0) - v43;
      if ( !v18 )
        goto LABEL_9;
      v31 = *(_DWORD *)(a2 + 4);
      v32 = v18 + v31;
      if ( __CFADD__(v18, v31) )
      {
        if ( (unsigned int)v31 > 0x7FFFFFFE )
        {
          if ( v31 < 0 )
            *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
          goto LABEL_44;
        }
        v32 = 0x7FFFFFFF;
        v37 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) >= 0x7FFFFFFFu )
        {
          v38 = *(_DWORD *)(a2 + 4);
          goto LABEL_59;
        }
LABEL_61:
        v37 = (char *)sub_77EB0(a2, v37, v32, 1u);
        v38 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)a2 = v37;
LABEL_59:
        memset(&v37[v38], 0, v32 - v38);
        *(_DWORD *)(a2 + 4) = v32;
        goto LABEL_44;
      }
      if ( v31 < v32 )
      {
        v37 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) < v32 )
          goto LABEL_61;
        v38 = *(_DWORD *)(a2 + 4);
        goto LABEL_59;
      }
LABEL_44:
      memcpy((void *)(*(_DWORD *)a2 + v31), v43, v18);
LABEL_9:
      v19 = sub_75F30(v41, (unsigned int)&v42, (unsigned __int16)v14) - v41;
      if ( !v19 )
        goto LABEL_10;
      v27 = *(_DWORD *)(a2 + 4);
      v28 = v19 + v27;
      if ( __CFADD__(v19, v27) )
      {
        if ( (unsigned int)v27 > 0x7FFFFFFE )
        {
          if ( v27 < 0 )
            *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
          goto LABEL_32;
        }
        v28 = 0x7FFFFFFF;
        v33 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) >= 0x7FFFFFFFu )
        {
          v34 = *(_DWORD *)(a2 + 4);
          goto LABEL_49;
        }
LABEL_63:
        v33 = (char *)sub_77EB0(a2, v33, v28, 1u);
        v34 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)a2 = v33;
LABEL_49:
        memset(&v33[v34], 0, v28 - v34);
        *(_DWORD *)(a2 + 4) = v28;
        goto LABEL_32;
      }
      if ( v27 < v28 )
      {
        v33 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) < v28 )
          goto LABEL_63;
        v34 = *(_DWORD *)(a2 + 4);
        goto LABEL_49;
      }
LABEL_32:
      memcpy((void *)(*(_DWORD *)a2 + v27), v41, v19);
LABEL_10:
      if ( v15[4] )
      {
        v20 = (const char *)v15[3];
        if ( v20 )
          goto LABEL_12;
      }
      else
      {
        v20 = (const char *)&dword_8DA5C;
        if ( &dword_8DA5C )
        {
LABEL_12:
          v21 = strlen(v20) + 1;
          goto LABEL_13;
        }
      }
      v21 = 1;
      v20 = &byte_8DEAC;
LABEL_13:
      v22 = *(_DWORD *)(a2 + 4);
      v23 = v22 + v21;
      if ( __CFADD__(v22, v21) )
      {
        if ( (unsigned int)v22 > 0x7FFFFFFE )
        {
          if ( v22 < 0 )
            *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
          goto LABEL_18;
        }
        v23 = 0x7FFFFFFF;
LABEL_21:
        v25 = *(char **)a2;
        if ( *(_DWORD *)(a2 + 8) < v23 )
        {
          v25 = (char *)sub_77EB0(a2, *(void **)a2, v23, 1u);
          v26 = *(_DWORD *)(a2 + 4);
          *(_DWORD *)a2 = v25;
        }
        else
        {
          v26 = *(_DWORD *)(a2 + 4);
        }
        memset(&v25[v26], 0, v23 - v26);
        *(_DWORD *)(a2 + 4) = v23;
        goto LABEL_18;
      }
      if ( v22 < v23 )
        goto LABEL_21;
LABEL_18:
      ++v13;
      memcpy((void *)(*(_DWORD *)a2 + v22), v20, v21);
      if ( v40 == v13 )
        return 0;
    }
    if ( (unsigned int)v29 > 0x7FFFFFFE )
    {
      if ( v29 < 0 )
        *(_DWORD *)(a2 + 4) = 0x7FFFFFFF;
      goto LABEL_38;
    }
    v30 = 0x7FFFFFFF;
    v35 = *(char **)a2;
    if ( *(_DWORD *)(a2 + 8) >= 0x7FFFFFFFu )
    {
      v36 = *(_DWORD *)(a2 + 4);
      goto LABEL_54;
    }
    goto LABEL_62;
  }
  return 0;
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
