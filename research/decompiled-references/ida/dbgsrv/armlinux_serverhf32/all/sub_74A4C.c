/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74A4C
// Address: 0x00074A4C

//----- (00074A4C) --------------------------------------------------------
int __fastcall sub_74A4C(int a1, __int64 a2, char *ptr, unsigned int a4)
{
  unsigned int v5; // r9
  __int64 v6; // r10
  int v9; // r5
  __int64 v10; // kr20_8
  int v11; // r3
  int v12; // r6
  int v14; // r0
  signed int v15; // r6
  size_t v16; // r0
  int v17; // r0
  __int64 v18; // kr10_8
  unsigned int v19; // r5
  void *v20; // r8
  signed int v21; // r2
  int v22; // r11
  int v23; // r0
  __int64 v24; // kr28_8
  void *v25; // r0

  v5 = a4;
  if ( a2 < 0 )
    goto LABEL_46;
  v6 = *(_QWORD *)(a1 + 32);
  if ( a2 >= v6 )
  {
    if ( v6 >= a2 )
    {
      v9 = 0;
      v10 = *(_QWORD *)(a1 + 8);
LABEL_5:
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 32);
        if ( v5 >= (int)v10 - v11 )
          v5 = v10 - v11;
      }
      v12 = sub_74A28(*(_DWORD *)(a1 + 20), ptr, v5);
      if ( v12 <= 0 )
        goto LABEL_9;
      v17 = *(_DWORD *)(a1 + 24);
      v18 = *(_QWORD *)(a1 + 32);
      if ( v17 )
      {
        if ( sub_7771C(v17) || v12 != sub_7768C(*(FILE **)(a1 + 24), ptr, v12) )
        {
          v12 = -1;
LABEL_9:
          if ( v9 <= 0 )
            return v12;
          return v9;
        }
        v18 = *(_QWORD *)(a1 + 32);
      }
      *(_QWORD *)(a1 + 32) = v18 + v12;
      return v9 + v12;
    }
    goto LABEL_26;
  }
  v14 = *(_DWORD *)(a1 + 24);
  if ( !v14 )
  {
LABEL_46:
    v9 = -1;
    sub_70A2C(3);
    return v9;
  }
  if ( v6 >= a2 )
  {
    v15 = v6 - a2;
    if ( (int)v6 - (int)a2 >= a4 )
      v15 = a4;
    if ( !sub_7771C(v14) )
    {
      v16 = sub_77620(*(FILE **)(a1 + 24), ptr, v15);
      v9 = v16;
      if ( v16 == a4 )
        return v9;
      if ( v16 == v15 )
      {
        v5 = a4 - v16;
        ptr += v16;
        v10 = *(_QWORD *)(a1 + 8);
        goto LABEL_5;
      }
    }
    return -1;
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 48) < 0x40000u )
  {
    v25 = sub_77EB0(a1 + 40, *(void **)(a1 + 40), 0x40000u, 1u);
    v6 = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 40) = v25;
  }
  *(_DWORD *)(a1 + 44) = 0x40000;
  v10 = *(_QWORD *)(a1 + 8);
  if ( a2 == v6 )
  {
LABEL_44:
    v9 = 0;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v19 = a2 - v6;
    v20 = *(void **)(a1 + 40);
    if ( (unsigned int)(a2 - v6) >= 0x40000 )
      v19 = 0x40000;
    if ( v10 )
    {
      v21 = v10 - v6;
      if ( (int)v10 - (int)v6 >= v19 )
        v21 = v19;
    }
    else
    {
      v21 = v19;
    }
    v22 = sub_74A28(*(_DWORD *)(a1 + 20), *(void **)(a1 + 40), v21);
    if ( v22 > 0 )
      break;
LABEL_42:
    if ( v22 != v19 )
      return 0;
    v6 = *(_QWORD *)(a1 + 32);
    v10 = *(_QWORD *)(a1 + 8);
    if ( a2 == v6 )
      goto LABEL_44;
  }
  v23 = *(_DWORD *)(a1 + 24);
  v24 = *(_QWORD *)(a1 + 32);
  if ( !v23 )
  {
LABEL_41:
    *(_QWORD *)(a1 + 32) = v24 + v22;
    goto LABEL_42;
  }
  if ( !sub_7771C(v23) && v22 == sub_7768C(*(FILE **)(a1 + 24), v20, v22) )
  {
    v24 = *(_QWORD *)(a1 + 32);
    goto LABEL_41;
  }
  return 0;
}
