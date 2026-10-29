/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B550
// Address: 0x0003B550

//----- (0003B550) --------------------------------------------------------
int __fastcall sub_3B550(int a1, char *a2, signed int a3)
{
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // r6
  int v9; // r10
  int v10; // r3
  _BYTE *v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r4
  const char **v15; // r0
  int v17; // r6
  int v18; // r3
  _BYTE *v19; // r0
  int v20; // r0
  unsigned __int16 v21; // r4
  int (__fastcall ***v22)(_DWORD, char *); // r0
  unsigned int v23; // r4
  int v24; // r4
  int v25; // r3
  _BYTE *v26; // r0
  unsigned int v27; // r2
  unsigned int v28; // [sp+0h] [bp-8h] BYREF

  sub_3ADD8((_DWORD *)a1, a2, (int *)&v28);
  if ( !v28 )
    goto LABEL_13;
  if ( v28 <= 3 )
  {
    v14 = sub_3B33C(a1, a2, 0, 0);
    if ( v14 )
      return v14;
    v17 = *(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 120) = -92;
    v18 = *(_DWORD *)(v17 + 4);
    if ( (unsigned int)(v18 + 1) > *(_DWORD *)(v17 + 8) )
    {
      v19 = sub_77EB0(v17, *(void **)v17, v18 + 1, 1u);
      v18 = *(_DWORD *)(v17 + 4);
      *(_DWORD *)v17 = v19;
    }
    else
    {
      v19 = *(_BYTE **)v17;
    }
    goto LABEL_22;
  }
  if ( v28 != 5 )
  {
LABEL_13:
    v15 = sub_3EEF4((const char **)a2);
    if ( v15 )
    {
      if ( *(_BYTE *)(a1 + 248) || ((unsigned int)v15[5] & 4) != 0 )
      {
        v14 = 0;
        sub_3A4B0(a1, 0, (unsigned __int16)(-21845 * (((char *)v15 - (char *)off_D2CCC) >> 3)));
      }
      else
      {
        sub_70A98(0, *v15);
        return sub_70A2C(143);
      }
      return v14;
    }
    v20 = sub_3ED68(*(_DWORD **)(a1 + 64), a2);
    v21 = v20;
    if ( v20 != -1 )
    {
      if ( sub_3B4B8(*(_DWORD **)(a1 + 64), v20, a3) )
      {
        v27 = v21;
        v14 = 0;
        sub_3A4B0(a1, 0x10u, v27);
      }
      else
      {
LABEL_12:
        sub_70A98(0, a2);
        return sub_70A2C(56);
      }
      return v14;
    }
    v22 = *(int (__fastcall ****)(_DWORD, char *))(a1 + 228);
    if ( v22 && (v23 = (**v22)(v22, a2), v23 != -1) && (sub_6AD20() & 0x800) != 0 )
    {
      sub_3A6E4(a1, v23);
    }
    else
    {
      sub_3A2A4(a1, a2, 0);
      v24 = *(_DWORD *)(a1 + 112);
      *(_BYTE *)(a1 + 120) = -82;
      v25 = *(_DWORD *)(v24 + 4);
      if ( (unsigned int)(v25 + 1) > *(_DWORD *)(v24 + 8) )
      {
        v26 = sub_77EB0(v24, *(void **)v24, v25 + 1, 1u);
        v25 = *(_DWORD *)(v24 + 4);
        *(_DWORD *)v24 = v26;
      }
      else
      {
        v26 = *(_BYTE **)v24;
      }
      v26[v25] = -82;
      ++*(_DWORD *)(v24 + 4);
      ++*(_DWORD *)(a1 + 116);
    }
    v17 = *(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 120) = -92;
    v18 = *(_DWORD *)(v17 + 4);
    if ( (unsigned int)(v18 + 1) > *(_DWORD *)(v17 + 8) )
    {
      v19 = sub_77EB0(v17, *(void **)v17, v18 + 1, 1u);
      v18 = *(_DWORD *)(v17 + 4);
      *(_DWORD *)v17 = v19;
    }
    else
    {
      v19 = *(_BYTE **)v17;
    }
    v14 = 0;
LABEL_22:
    v19[v18] = -92;
    ++*(_DWORD *)(v17 + 4);
    ++*(_DWORD *)(a1 + 116);
    return v14;
  }
  v6 = sub_3F1F8(*(_DWORD *)(a1 + 64), a2);
  v7 = (_DWORD *)v6;
  if ( !v6 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(272);
  }
  v8 = *(_DWORD *)(a1 + 112);
  v9 = *(_DWORD *)(v6 + 28);
  *(_BYTE *)(a1 + 120) = -16;
  v10 = *(_DWORD *)(v8 + 4);
  if ( (unsigned int)(v10 + 1) > *(_DWORD *)(v8 + 8) )
  {
    v11 = sub_77EB0(v8, *(void **)v8, v10 + 1, 1u);
    v10 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)v8 = v11;
  }
  else
  {
    v11 = *(_BYTE **)v8;
  }
  v11[v10] = -16;
  ++*(_DWORD *)(v8 + 4);
  ++*(_DWORD *)(a1 + 116);
  sub_39B10(a1, (unsigned __int16)v9);
  while ( 1 )
  {
    v13 = sub_42798(v7, (int)(v7 + 8));
    if ( v13 != -1 )
    {
      if ( !sub_3B4B8(*(_DWORD **)(a1 + 64), v13, a3 + 1) )
        goto LABEL_12;
      return 0;
    }
    v12 = v7[6];
    if ( !v12 )
      break;
    v7 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 64) + 40) + 4 * v12);
  }
  if ( a3 )
    goto LABEL_12;
  return 0;
}
// D2CCC: using guessed type _UNKNOWN **off_D2CCC;
// D5C00: using guessed type char under_debugger;
