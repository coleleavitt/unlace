/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52994
// Address: 0x00052994

//----- (00052994) --------------------------------------------------------
int __fastcall sub_52994(int a1, int a2, unsigned int a3, unsigned int a4, _DWORD *a5, int a6, int a7)
{
  _DWORD *v11; // r6
  unsigned int v12; // r4
  int v13; // r4
  int *v15; // r11
  void **v16; // r10
  unsigned int v17; // r3
  int v18; // r3
  void *v19; // r1
  void **v20; // r10
  unsigned int v21; // r3
  int v22; // r3
  void *v23; // r1
  int v24; // r1
  int v25; // r0
  int v26; // r5
  int v27; // r1
  int v28; // r3
  void *v29; // r1
  int v30; // r3
  void *v31; // r1
  void *v32; // r0
  void *v33; // r0
  double v34; // [sp+0h] [bp-2Ch]
  int v35; // [sp+4h] [bp-28h]
  unsigned int v36; // [sp+8h] [bp-24h]
  int v37; // [sp+8h] [bp-24h]
  unsigned int v38; // [sp+8h] [bp-24h]
  void **v39; // [sp+Ch] [bp-20h]
  void **v40; // [sp+Ch] [bp-20h]
  int v41; // [sp+10h] [bp-1Ch]

  v11 = a5;
  v12 = dword_D2D4C;
  LODWORD(v34) = &_stack_chk_guard;
  HIDWORD(v34) = a7;
  if ( dword_D2D4C == -1 )
  {
    v12 = sub_7A72C("IDA_IDB_BIN_SEARCH", 0);
    dword_D2D4C = v12;
    if ( v12 )
      return 0;
  }
  else if ( dword_D2D4C )
  {
    return 0;
  }
  sub_53D50(a1, "dbg_bin_search %a..%a\n", COERCE_DOUBLE(__PAIR64__(a4, a3)), v34);
  if ( a3 >= a4 || !a5[1] || !*(_DWORD *)(a1 + 240) )
    return 0;
  v36 = a6 & 0x10;
  if ( (a6 & 0x10) != 0 )
  {
    v15 = (int *)sub_805CC(0x104Cu);
    v37 = a5[1];
    v15[1] = a2;
    v16 = (void **)(v15 + 1038);
    v15[2] = a1;
    v15[3] = (int)a5;
    *v15 = (int)&dword_D17F0[2];
    v15[4] = a6;
    v15[5] = v35;
    v15[1030] = -1;
    v15[1031] = (int)(v15 + 1031);
    v15[1032] = (int)(v15 + 1031);
    v15[1033] = v12;
    v15[1034] = -1;
    v15[1035] = v12;
    v39 = (void **)(v15 + 1035);
    v15[1036] = v12;
    v15[1037] = v12;
    v15[1038] = v12;
    v15[1039] = v12;
    v15[1040] = v12;
    if ( v37 )
    {
      v38 = v12;
      do
      {
        v17 = *v11 + v38;
        if ( *(_DWORD *)(v17 + 4) )
        {
          if ( (v15[4] & 1) != 0 && !*(_DWORD *)(v17 + 16) )
          {
            v28 = v15[1036];
            v29 = *v39;
            if ( v28 + 1 > (unsigned int)v15[1037] )
            {
              v32 = sub_77EB0((int)v39, v29, v28 + 1, 4u);
              v28 = v15[1036];
              v29 = v32;
              *v39 = v32;
            }
            *((_DWORD *)v29 + v28) = v12;
            ++v15[1036];
          }
          else
          {
            v18 = v15[1039];
            v19 = *v16;
            if ( v18 + 1 > (unsigned int)v15[1040] )
            {
              v19 = sub_77EB0((int)v16, v19, v18 + 1, 4u);
              v18 = v15[1039];
              *v16 = v19;
            }
            *((_DWORD *)v19 + v18) = v12;
            ++v15[1039];
          }
        }
        ++v12;
        v11 = (_DWORD *)v15[3];
        v38 += 40;
      }
      while ( v11[1] > v12 );
    }
    memset(v15 + 6, 0, 0x1000u);
    sub_78DE0();
    v15[1041] = v24;
    v15[1042] = 0;
    *v15 = (int)&off_CFDBC;
    v25 = sub_51D08(v15, a3, a4);
  }
  else
  {
    v15 = (int *)sub_805CC(0x104Cu);
    v41 = a5[1];
    v15[1] = a2;
    v20 = (void **)(v15 + 1038);
    v15[2] = a1;
    v15[3] = (int)a5;
    *v15 = (int)&dword_D17F0[2];
    v15[4] = a6;
    v15[5] = v35;
    v15[1030] = -1;
    v15[1031] = (int)(v15 + 1031);
    v15[1032] = (int)(v15 + 1031);
    v15[1033] = v12;
    v15[1034] = -1;
    v15[1035] = v12;
    v40 = (void **)(v15 + 1035);
    v15[1036] = v12;
    v15[1037] = v12;
    v15[1038] = v12;
    v15[1039] = v12;
    v15[1040] = v12;
    if ( v41 )
    {
      do
      {
        v21 = *v11 + v12;
        if ( *(_DWORD *)(v21 + 4) )
        {
          if ( (v15[4] & 1) != 0 && !*(_DWORD *)(v21 + 16) )
          {
            v30 = v15[1036];
            v31 = *v40;
            if ( v30 + 1 > (unsigned int)v15[1037] )
            {
              v33 = sub_77EB0((int)v40, v31, v30 + 1, 4u);
              v30 = v15[1036];
              v31 = v33;
              *v40 = v33;
            }
            *((_DWORD *)v31 + v30) = v36;
            ++v15[1036];
          }
          else
          {
            v22 = v15[1039];
            v23 = *v20;
            if ( v22 + 1 > (unsigned int)v15[1040] )
            {
              v23 = sub_77EB0((int)v20, v23, v22 + 1, 4u);
              v22 = v15[1039];
              *v20 = v23;
            }
            *((_DWORD *)v23 + v22) = v36;
            ++v15[1039];
          }
        }
        v12 += 40;
        v11 = (_DWORD *)v15[3];
        ++v36;
      }
      while ( v11[1] > v36 );
    }
    memset(v15 + 6, 0, 0x1000u);
    sub_78DE0();
    v15[1041] = v27;
    v15[1042] = 4096;
    *v15 = (int)&off_CFDA4;
    v25 = sub_519BC(v15, a3, a4);
  }
  v13 = v25;
  if ( v25 == -7 )
  {
    v26 = v15[1034];
    if ( v26 != -1
      && (sub_53D50(a1, "dbg_bin_search failed to read memory at %a\n", v15[1034], v26 + 1), v35)
      && *(_DWORD *)(v35 + 4) <= 1u )
    {
      sub_1873C(v35, "Failed to read memory at %a\n", v26);
    }
    else
    {
      return -7;
    }
  }
  return v13;
}
// 52A5A: variable 'v35' is possibly undefined
// 52BE6: variable 'v24' is possibly undefined
// 52C50: variable 'v27' is possibly undefined
// CFDA4: using guessed type _UNKNOWN *;
// CFDBC: using guessed type _UNKNOWN *;
// D17F0: using guessed type int dword_D17F0[4];
// D2D4C: using guessed type int dword_D2D4C;
