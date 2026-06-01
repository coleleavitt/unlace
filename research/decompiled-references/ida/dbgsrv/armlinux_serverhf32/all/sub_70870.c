/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70870
// Address: 0x00070870

//----- (00070870) --------------------------------------------------------
int __fastcall sub_70870(int a1, unsigned __int8 *a2, signed int a3)
{
  int v3; // r9
  unsigned int v5; // r3
  int v6; // r8
  unsigned int i; // r0
  int v8; // r6
  __int16 v9; // r5
  int v10; // r7
  unsigned int v11; // r6
  int v12; // r11
  char *v13; // r1
  __int16 v15; // r5
  int v16; // r11
  unsigned int v17; // r10
  unsigned int v18; // r7
  char *v19; // r1
  int v20; // r10
  __int16 v21; // r5
  unsigned int v22; // r7
  int v23; // r6
  char *v24; // r1
  _BOOL4 v26; // [sp+8h] [bp-Ch]
  unsigned __int8 *v27[2]; // [sp+Ch] [bp-8h] BYREF

  v3 = a3;
  v27[0] = a2;
  v5 = *(_DWORD *)(a1 + 8);
  if ( a3 <= 0 )
  {
    if ( v5 > 0xF )
      goto LABEL_32;
    a3 = 16;
LABEL_31:
    *(_DWORD *)a1 = sub_77EB0(a1, *(void **)a1, a3, 2u);
LABEL_32:
    v26 = v3 >= 0;
    if ( !v3 )
      return 1;
    goto LABEL_4;
  }
  if ( v5 < a3 )
    goto LABEL_31;
  v26 = 1;
LABEL_4:
  v6 = 0;
  for ( i = sub_70124(v27); ; i = sub_70124(v27) )
  {
    if ( !i )
    {
      if ( v3 < 0 )
        return 1;
      v8 = *(_DWORD *)(a1 + 4);
      ++v27[0];
      goto LABEL_7;
    }
    if ( i == -1 )
      break;
    v8 = *(_DWORD *)(a1 + 4);
    if ( i >= 0x10000 )
    {
      v15 = i;
      v16 = 2;
      v17 = 2;
      v18 = ((i - 0x10000) >> 10) & 0x3FF | 0xD800;
      if ( v8 )
      {
        v17 = v8 + 1;
        v8 = 2 * (v8 - 1);
        v16 = v8 + 2;
      }
      v19 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v17 )
      {
        v19 = (char *)sub_77EB0(a1, v19, v17, 2u);
        *(_DWORD *)a1 = v19;
      }
      *(_DWORD *)(a1 + 4) = v17;
      *(_WORD *)&v19[v8] = v18;
      v20 = 2;
      v21 = v15 & 0x3FF | 0xDC00;
      v22 = 2;
      *(_WORD *)(*(_DWORD *)a1 + v16) = 0;
      v23 = *(_DWORD *)(a1 + 4);
      if ( v23 )
      {
        v22 = v23 + 1;
        v23 = 2 * (v23 - 1);
        v20 = v23 + 2;
      }
      v24 = *(char **)a1;
      if ( *(_DWORD *)(a1 + 8) < v22 )
      {
        v24 = (char *)sub_77EB0(a1, v24, v22, 2u);
        *(_DWORD *)a1 = v24;
      }
      *(_DWORD *)(a1 + 4) = v22;
      *(_WORD *)&v24[v23] = v21;
      *(_WORD *)(*(_DWORD *)a1 + v20) = 0;
      goto LABEL_12;
    }
LABEL_7:
    v9 = i;
    if ( v8 )
    {
      v10 = 2 * (v8 - 1);
      v11 = v8 + 1;
      v12 = v10 + 2;
    }
    else
    {
      v12 = 2;
      v10 = 0;
      v11 = 2;
    }
    v13 = *(char **)a1;
    if ( *(_DWORD *)(a1 + 8) < v11 )
    {
      v13 = (char *)sub_77EB0(a1, v13, v11, 2u);
      *(_DWORD *)a1 = v13;
    }
    *(_DWORD *)(a1 + 4) = v11;
    *(_WORD *)&v13[v10] = v9;
    *(_WORD *)(*(_DWORD *)a1 + v12) = 0;
LABEL_12:
    if ( v3 <= ++v6 && v26 )
      return 1;
  }
  return 0;
}
// 708EC: masking with 0x1 was optimized away because %var_C.4 <= 0x1
