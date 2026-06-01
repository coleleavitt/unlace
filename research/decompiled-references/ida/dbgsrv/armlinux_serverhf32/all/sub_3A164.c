/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A164
// Address: 0x0003A164

//----- (0003A164) --------------------------------------------------------
int __fastcall sub_3A164(int a1)
{
  _DWORD *v2; // r1
  int v3; // r3
  int v4; // r5
  int v5; // r7
  int v6; // r6
  _DWORD *v7; // r0
  __int64 v8; // kr08_8
  int v9; // r3
  _DWORD *v10; // r0
  int v12; // r7
  int v13; // r3
  _BYTE *v14; // r2
  int v15; // r3
  unsigned int v16; // r6
  _BYTE *v17; // r0

  v3 = *(_DWORD *)(a1 + 172);
  v2 = *(_DWORD **)(a1 + 168);
  v4 = v2[v3 - 1];
  v5 = v4;
  v6 = v4;
  if ( v3 )
  {
    *(_DWORD *)(a1 + 172) = v3 - 1;
    v5 = v2[v3 - 2];
    if ( v3 == 1 )
    {
      v3 = 0;
      v6 = v5;
    }
    else
    {
      *(_DWORD *)(a1 + 172) = v3 - 2;
      v6 = v2[v3 - 3];
      if ( v3 == 2 )
      {
        v3 = 0;
      }
      else
      {
        v3 -= 3;
        *(_DWORD *)(a1 + 172) = v3;
      }
    }
  }
  if ( (unsigned int)(v3 + 1) > *(_DWORD *)(a1 + 176) )
  {
    v7 = sub_77EB0(a1 + 168, v2, v3 + 1, 4u);
    v3 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = v7;
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 168);
  }
  v7[v3] = v4 + 4;
  v8 = *(_QWORD *)(a1 + 172);
  v9 = v8 + 1;
  *(_DWORD *)(a1 + 172) = v8 + 1;
  if ( (unsigned int)(v8 + 2) > HIDWORD(v8) )
  {
    v10 = sub_77EB0(a1 + 168, *(void **)(a1 + 168), v8 + 2, 4u);
    v9 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 168) = v10;
  }
  else
  {
    v10 = *(_DWORD **)(a1 + 168);
  }
  v10[v9] = v5;
  ++*(_DWORD *)(a1 + 172);
  if ( v5 )
  {
    v12 = *(_DWORD *)(a1 + 112);
    *(_BYTE *)(a1 + 120) = -85;
    v13 = *(_DWORD *)(v12 + 4);
    if ( (unsigned int)(v13 + 1) > *(_DWORD *)(v12 + 8) )
    {
      v17 = sub_77EB0(v12, *(void **)v12, v13 + 1, 1u);
      v13 = *(_DWORD *)(v12 + 4);
      v14 = v17;
      *(_DWORD *)v12 = v17;
    }
    else
    {
      v14 = *(_BYTE **)v12;
    }
    v14[v13] = -85;
    ++*(_DWORD *)(v12 + 4);
    v15 = *(_DWORD *)(a1 + 116) + 1;
    *(_DWORD *)(a1 + 116) = v15;
    v16 = v6 - v15 - 4;
    sub_39B10(a1, (unsigned __int16)v16);
    sub_39B10(a1, HIWORD(v16));
  }
  sub_3E5A4(*(int **)(a1 + 112), v4, *(_DWORD *)(a1 + 116) - 4 - v4);
  return 0;
}
