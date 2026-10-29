/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67928
// Address: 0x00067928

//----- (00067928) --------------------------------------------------------
void __fastcall sub_67928(int a1, int a2, int a3)
{
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r8
  int v11; // r6
  int *v12; // r4
  int v13; // r5
  int v14; // r2
  int *v15; // r3
  int v16; // r1
  _DWORD *v17; // r0
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  char *v22; // r5
  char *v23; // r3
  _BOOL4 v24; // [sp+4h] [bp-38h]
  int v25; // [sp+8h] [bp-34h]
  int v26; // [sp+10h] [bp-2Ch]
  int v27; // [sp+14h] [bp-28h]
  int v28; // [sp+18h] [bp-24h]
  char v29[4]; // [sp+1Ch] [bp-20h] BYREF
  int v30; // [sp+20h] [bp-1Ch] BYREF
  int *v31; // [sp+24h] [bp-18h]
  int *v32; // [sp+28h] [bp-14h]
  int *v33; // [sp+2Ch] [bp-10h]
  int v34; // [sp+30h] [bp-Ch]

  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 44) + a3;
  v30 = 0;
  v31 = nullptr;
  v34 = 0;
  v8 = a1 + 40;
  v25 = v8;
  v32 = &v30;
  v33 = &v30;
  if ( v7 > v6 )
    *(_DWORD *)(a1 + 40) = sub_77EB0(v8, *(void **)(a1 + 40), v7, 0xCu);
  if ( a3 )
  {
    v9 = *(_DWORD *)(a2 + 4);
    v10 = 0;
    v11 = a2 + 12;
    if ( !v9 )
    {
LABEL_26:
      if ( !under_debugger )
        sub_78AFC(1619);
      goto LABEL_15;
    }
    while ( 1 )
    {
      v12 = v31;
      v13 = *(unsigned __int8 *)(v11 - 12);
      if ( v31 )
      {
        while ( 1 )
        {
          v14 = v12[4];
          if ( v13 >= v14 )
          {
            v15 = (int *)v12[3];
            v16 = 0;
          }
          else
          {
            v15 = (int *)v12[2];
            v16 = 1;
          }
          if ( !v15 )
            break;
          v12 = v15;
        }
        if ( !v16 )
        {
          if ( v13 <= v14 )
            goto LABEL_14;
          goto LABEL_18;
        }
      }
      else
      {
        v12 = &v30;
      }
      if ( v32 == v12 )
        goto LABEL_19;
      if ( v13 <= *(_DWORD *)(sub_812CC(v12) + 16) )
        goto LABEL_14;
LABEL_18:
      if ( !v12 )
      {
LABEL_14:
        if ( !under_debugger )
          sub_78AFC(1620);
LABEL_15:
        __und(0xFFu);
      }
LABEL_19:
      v24 = v12 == &v30 || v13 < v12[4];
      v17 = sub_805CC(0x14u);
      v17[4] = v13;
      sub_8132C((_DWORD *)v24, v17, v12, &v30);
      v18 = *(_DWORD *)(v11 - 12);
      v19 = *(_DWORD *)(v11 - 8);
      v20 = *(_DWORD *)(v11 - 4);
      v21 = *(_DWORD *)(a1 + 44);
      ++v34;
      v26 = v18;
      v27 = v19;
      v28 = v20;
      if ( (unsigned int)(v21 + 1) > *(_DWORD *)(a1 + 48) )
      {
        v22 = (char *)sub_77EB0(v25, *(void **)(a1 + 40), v21 + 1, 0xCu);
        v21 = *(_DWORD *)(a1 + 44);
        *(_DWORD *)(a1 + 40) = v22;
      }
      else
      {
        v22 = *(char **)(a1 + 40);
      }
      ++v10;
      v23 = &v22[12 * v21];
      *(_DWORD *)v23 = v26;
      *((_DWORD *)v23 + 1) = v27;
      *((_DWORD *)v23 + 2) = v28;
      ++*(_DWORD *)(a1 + 44);
      if ( a3 == v10 )
        break;
      v11 += 12;
      if ( !*(_DWORD *)(v11 - 8) )
        goto LABEL_26;
    }
  }
  sub_67904((int)v29, v31);
}
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
// D5C00: using guessed type char under_debugger;
