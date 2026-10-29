/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AE438
// Address: 0x00000000004AE438

//----- (00000000004AE438) ----------------------------------------------------
__int64 __fastcall sub_4AE438(__int64 a1, unsigned int a2, __int64 a3, __int64 *a4)
{
  _BYTE *v4; // x2
  __int64 v6; // x3
  unsigned int *v7; // x24
  __int64 v8; // x23
  __int64 v9; // x26
  int v12; // w22
  unsigned int v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  void (__fastcall *v17)(__int64, __int64, __int64); // x3
  const char *v18; // x20
  __int64 v19; // x2
  __int64 v20; // x2
  void (__fastcall *v21)(__int64, __int64, __int64); // x3
  __int64 v22; // x1
  char v23; // w21
  __int64 v24; // x2
  const char *v25; // x20
  __int64 v26; // x2
  void (__fastcall *v27)(__int64, __int64, __int64); // x3
  __int64 v28; // x1
  char v29; // w24
  unsigned int *v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x2
  void (__fastcall *v34)(__int64, __int64, __int64); // x3
  __int64 v35; // x1
  __int64 v36; // x2
  void (__fastcall *v37)(__int64, __int64, __int64); // x3
  const char *v38; // x20
  __int64 v39; // x2
  __int64 v40; // x2
  void (__fastcall *v41)(__int64, __int64, __int64); // x3
  __int64 v42; // x1
  char v43; // w26

  v4 = **(_BYTE ***)(a3 + 8);
  if ( *v4 != 102 )
    return 0;
  v6 = *a4;
  v7 = nullptr;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_QWORD *)(v6 + 16);
  if ( *(_DWORD *)v9 == 59 )
  {
    v7 = *(unsigned int **)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
  }
  v12 = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 312) = -1;
  v13 = (unsigned __int8)v4[1];
  if ( v13 == 82 )
    goto LABEL_28;
  if ( v13 > 0x52 )
  {
    if ( v13 != 108 )
    {
      if ( v13 == 114 )
      {
        v14 = *(_QWORD *)(a1 + 256);
        v15 = v14 + 1;
        if ( v14 == 255 )
        {
          v17 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
          v16 = *(_QWORD *)(a1 + 280);
          *(_BYTE *)(a1 + 255) = 0;
          v17(a1, 255, v16);
          v15 = 1;
          v14 = 0;
          ++*(_QWORD *)(a1 + 320);
        }
        *(_QWORD *)(a1 + 256) = v15;
        *(_BYTE *)(a1 + v14) = 40;
        *(_BYTE *)(a1 + 264) = 40;
        sub_4AE350(a1, a2, (unsigned int *)v9);
        v18 = "...)";
        sub_4AE290(a1, a2, v8);
        v19 = *(_QWORD *)(a1 + 256);
        do
        {
          v22 = v19;
          v23 = *v18;
          if ( v19 == 255 )
          {
            v21 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
            v20 = *(_QWORD *)(a1 + 280);
            *(_BYTE *)(a1 + 255) = 0;
            v21(a1, 255, v20);
            v19 = 1;
            v22 = 0;
            ++*(_QWORD *)(a1 + 320);
          }
          else
          {
            ++v19;
          }
          *(_QWORD *)(a1 + 256) = v19;
          ++v18;
          *(_BYTE *)(a1 + v22) = v23;
          *(_BYTE *)(a1 + 264) = v23;
        }
        while ( "" != v18 );
      }
      goto LABEL_25;
    }
    v24 = *(_QWORD *)(a1 + 256);
    v25 = "(...";
    do
    {
      v28 = v24;
      v29 = *v25;
      if ( v24 == 255 )
      {
        v27 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v26 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        v27(a1, 255, v26);
        v24 = 1;
        v28 = 0;
        ++*(_QWORD *)(a1 + 320);
      }
      else
      {
        ++v24;
      }
      *(_QWORD *)(a1 + 256) = v24;
      ++v25;
      *(_BYTE *)(a1 + v28) = v29;
      *(_BYTE *)(a1 + 264) = v29;
    }
    while ( "" != v25 );
    sub_4AE290(a1, a2, v8);
    v30 = (unsigned int *)v9;
LABEL_22:
    sub_4AE350(a1, a2, v30);
    v31 = *(_QWORD *)(a1 + 256);
    v32 = v31 + 1;
    if ( v31 == 255 )
    {
      v34 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      v33 = *(_QWORD *)(a1 + 280);
      *(_BYTE *)(a1 + 255) = 0;
      v34(a1, 255, v33);
      v32 = 1;
      v31 = 0;
      ++*(_QWORD *)(a1 + 320);
    }
    *(_QWORD *)(a1 + 256) = v32;
    *(_BYTE *)(a1 + v31) = 41;
    *(_BYTE *)(a1 + 264) = 41;
    goto LABEL_25;
  }
  if ( v13 == 76 )
  {
LABEL_28:
    v35 = *(_QWORD *)(a1 + 256);
    if ( v35 == 255 )
    {
      v37 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      v36 = *(_QWORD *)(a1 + 280);
      *(_BYTE *)(a1 + 255) = 0;
      v37(a1, 255, v36);
      *(_QWORD *)(a1 + 256) = 0;
      v35 = 0;
      ++*(_QWORD *)(a1 + 320);
    }
    *(_QWORD *)(a1 + 256) = v35 + 1;
    *(_BYTE *)(a1 + v35) = 40;
    *(_BYTE *)(a1 + 264) = 40;
    sub_4AE350(a1, a2, (unsigned int *)v9);
    v38 = "...";
    sub_4AE290(a1, a2, v8);
    v39 = *(_QWORD *)(a1 + 256);
    do
    {
      v42 = v39;
      v43 = *v38;
      if ( v39 == 255 )
      {
        v41 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v40 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        v41(a1, 255, v40);
        v39 = 1;
        v42 = 0;
        ++*(_QWORD *)(a1 + 320);
      }
      else
      {
        ++v39;
      }
      *(_QWORD *)(a1 + 256) = v39;
      ++v38;
      *(_BYTE *)(a1 + v42) = v43;
      *(_BYTE *)(a1 + 264) = v43;
    }
    while ( v38 != "" );
    sub_4AE290(a1, a2, v8);
    v30 = v7;
    goto LABEL_22;
  }
LABEL_25:
  *(_DWORD *)(a1 + 312) = v12;
  return 1;
}
