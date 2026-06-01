/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_614DC
// Address: 0x000614DC

//----- (000614DC) --------------------------------------------------------
_BYTE *__fastcall sub_614DC(int a1, _DWORD *a2)
{
  _BYTE *result; // r0
  size_t v5; // r4
  int v6; // r8
  unsigned int *v7; // r4
  _BYTE *v8; // r0
  size_t v9; // r6
  const char *v10; // r11
  size_t v11; // r6
  int v12; // r4
  unsigned int v13; // r7
  char *v14; // r0
  int v15; // r2
  int v16; // r7
  unsigned int v17; // r11
  char *v18; // r0
  int v19; // r2
  int v20; // r6
  unsigned int v21; // r7
  char *v22; // r0
  int v23; // r2
  unsigned int v24; // [sp+0h] [bp-2Ch]
  _BYTE v25[5]; // [sp+1Ch] [bp-10h] BYREF
  _BYTE v26[3]; // [sp+21h] [bp-Bh] BYREF

  v24 = a2[1];
  result = sub_75FB0(v25, (unsigned int)v26, v24);
  v5 = result - v25;
  if ( result != v25 )
  {
    v20 = *(_DWORD *)(a1 + 4);
    v21 = v5 + v20;
    if ( __CFADD__(v5, v20) )
    {
      if ( (unsigned int)v20 > 0x7FFFFFFE )
      {
        if ( v20 < 0 )
          *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
        goto LABEL_45;
      }
      v21 = 0x7FFFFFFF;
    }
    else if ( v20 >= v21 )
    {
LABEL_45:
      result = memcpy((void *)(*(_DWORD *)a1 + v20), v25, v5);
      goto LABEL_2;
    }
    v22 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v21 )
    {
      v22 = (char *)sub_77EB0(a1, *(void **)a1, v21, 1u);
      v23 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)a1 = v22;
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 4);
    }
    memset(&v22[v23], 0, v21 - v23);
    *(_DWORD *)(a1 + 4) = v21;
    goto LABEL_45;
  }
LABEL_2:
  if ( v24 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (unsigned int *)(16 * v6 + *a2);
      v8 = sub_75FB0(v25, (unsigned int)v26, *v7);
      v9 = v8 - v25;
      if ( v8 == v25 )
        goto LABEL_5;
      v16 = *(_DWORD *)(a1 + 4);
      v17 = v9 + v16;
      if ( __CFADD__(v9, v16) )
        break;
      if ( v16 < v17 )
      {
        v18 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) >= v17 )
        {
          v19 = *(_DWORD *)(a1 + 4);
LABEL_32:
          memset(&v18[v19], 0, v17 - v19);
          *(_DWORD *)(a1 + 4) = v17;
          goto LABEL_27;
        }
LABEL_34:
        v18 = (char *)sub_77EB0(a1, v18, v17, 1u);
        v19 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v18;
        goto LABEL_32;
      }
LABEL_27:
      memcpy((void *)(*(_DWORD *)a1 + v16), v25, v9);
LABEL_5:
      if ( v7[2] )
      {
        v10 = (const char *)v7[1];
        if ( v10 )
          goto LABEL_7;
      }
      else
      {
        v10 = (const char *)&dword_8DA5C;
        if ( &dword_8DA5C )
        {
LABEL_7:
          v11 = strlen(v10) + 1;
          goto LABEL_8;
        }
      }
      v11 = 1;
      v10 = &byte_8DEAC;
LABEL_8:
      v12 = *(_DWORD *)(a1 + 4);
      v13 = v12 + v11;
      if ( __CFADD__(v12, v11) )
      {
        if ( (unsigned int)v12 > 0x7FFFFFFE )
        {
          if ( v12 < 0 )
            *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
          goto LABEL_13;
        }
        v13 = 0x7FFFFFFF;
LABEL_16:
        v14 = *(char **)a1;
        if ( *(_DWORD *)(a1 + 8) < v13 )
        {
          v14 = (char *)sub_77EB0(a1, *(void **)a1, v13, 1u);
          v15 = *(_DWORD *)(a1 + 4);
          *(_DWORD *)a1 = v14;
        }
        else
        {
          v15 = *(_DWORD *)(a1 + 4);
        }
        memset(&v14[v15], 0, v13 - v15);
        *(_DWORD *)(a1 + 4) = v13;
        goto LABEL_13;
      }
      if ( v12 < v13 )
        goto LABEL_16;
LABEL_13:
      ++v6;
      result = memcpy((void *)(*(_DWORD *)a1 + v12), v10, v11);
      if ( v6 == v24 )
        return result;
    }
    if ( (unsigned int)v16 > 0x7FFFFFFE )
    {
      if ( v16 < 0 )
        *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
      goto LABEL_27;
    }
    v17 = 0x7FFFFFFF;
    v18 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) >= 0x7FFFFFFFu )
    {
      v19 = *(_DWORD *)(a1 + 4);
      goto LABEL_32;
    }
    goto LABEL_34;
  }
  return result;
}
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
