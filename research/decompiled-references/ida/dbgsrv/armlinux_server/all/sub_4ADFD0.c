/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ADFD0
// Address: 0x00000000004ADFD0

//----- (00000000004ADFD0) ----------------------------------------------------
__int64 __fastcall sub_4ADFD0(__int64 a1, unsigned int a2, unsigned int **a3, __int64 *a4)
{
  __int64 *v7; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  void (__fastcall *v11)(__int64, __int64, __int64); // x3
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  unsigned int *v15; // x2
  __int64 v16; // x2
  void (__fastcall *v17)(__int64, __int64, __int64); // x3
  __int64 v18; // x0
  __int64 v20; // x2
  void (__fastcall *v21)(__int64, __int64, __int64); // x3
  __int64 v22; // x0
  __int64 v23; // x2
  char *v24; // x20
  __int64 v25; // x2
  void (__fastcall *v26)(__int64, __int64, __int64); // x3
  __int64 v27; // x0
  __int64 v28; // x1
  char v29; // w24
  __int64 v30; // x0
  __int64 v31; // x2
  void (__fastcall *v32)(__int64, __int64, __int64); // x3
  __int64 v33; // x0

  if ( !a4 )
  {
    v9 = *(_QWORD *)(a1 + 256);
    goto LABEL_6;
  }
  v7 = a4;
  while ( *((_DWORD *)v7 + 4) )
  {
    v7 = (__int64 *)*v7;
    if ( !v7 )
    {
      sub_4ADC10(a1, a2, a4, 0);
      v9 = *(_QWORD *)(a1 + 256);
      goto LABEL_6;
    }
  }
  if ( *(_DWORD *)v7[1] == 42 )
  {
    sub_4ADC10(a1, a2, a4, 0);
    v13 = *(_QWORD *)(a1 + 256);
    goto LABEL_13;
  }
  v23 = *(_QWORD *)(a1 + 256);
  v24 = " (";
  do
  {
    while ( 1 )
    {
      v28 = v23;
      v29 = *v24;
      if ( v23 != 255 )
        break;
      v26 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      v25 = *(_QWORD *)(a1 + 280);
      *(_BYTE *)(a1 + 255) = 0;
      ++v24;
      v26(a1, 255, v25);
      v27 = *(_QWORD *)(a1 + 320);
      v23 = 1;
      *(_QWORD *)(a1 + 256) = 1;
      *(_QWORD *)(a1 + 320) = v27 + 1;
      *(_BYTE *)a1 = v29;
      *(_BYTE *)(a1 + 264) = v29;
      if ( "" == v24 )
        goto LABEL_22;
    }
    *(_QWORD *)(a1 + 256) = ++v23;
    *(_BYTE *)(a1 + v28) = v29;
    ++v24;
    *(_BYTE *)(a1 + 264) = v29;
  }
  while ( "" != v24 );
LABEL_22:
  sub_4ADC10(a1, a2, a4, 0);
  v30 = *(_QWORD *)(a1 + 256);
  if ( v30 != 255 )
  {
    v9 = v30 + 1;
    *(_QWORD *)(a1 + 256) = v30 + 1;
    *(_BYTE *)(a1 + v30) = 41;
    *(_BYTE *)(a1 + 264) = 41;
LABEL_6:
    if ( v9 == 255 )
    {
      v11 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
      v10 = *(_QWORD *)(a1 + 280);
      *(_BYTE *)(a1 + 255) = 0;
      v11(a1, 255, v10);
      v12 = *(_QWORD *)(a1 + 320);
      v13 = 1;
      *(_BYTE *)a1 = 32;
      *(_QWORD *)(a1 + 320) = v12 + 1;
      goto LABEL_8;
    }
    goto LABEL_24;
  }
  v32 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
  v31 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)(a1 + 255) = 0;
  v32(a1, 255, v31);
  v33 = *(_QWORD *)(a1 + 320);
  *(_BYTE *)a1 = 41;
  v9 = 1;
  *(_QWORD *)(a1 + 320) = v33 + 1;
LABEL_24:
  v13 = v9 + 1;
  *(_QWORD *)(a1 + 256) = v9 + 1;
  *(_BYTE *)(a1 + v9) = 32;
  *(_BYTE *)(a1 + 264) = 32;
LABEL_13:
  if ( v13 != 255 )
  {
LABEL_8:
    v14 = v13 + 1;
    *(_QWORD *)(a1 + 256) = v13 + 1;
    *(_BYTE *)(a1 + v13) = 91;
    *(_BYTE *)(a1 + 264) = 91;
    v15 = *a3;
    if ( !*a3 )
      goto LABEL_9;
    goto LABEL_15;
  }
  v21 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
  v20 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)(a1 + 255) = 0;
  v21(a1, 255, v20);
  *(_BYTE *)a1 = 91;
  *(_BYTE *)(a1 + 264) = 91;
  v14 = 1;
  v15 = *a3;
  v22 = *(_QWORD *)(a1 + 320) + 1LL;
  *(_QWORD *)(a1 + 256) = 1;
  *(_QWORD *)(a1 + 320) = v22;
  if ( !v15 )
    goto LABEL_17;
LABEL_15:
  def_4AD1E4(a1, a2, v15);
  v14 = *(_QWORD *)(a1 + 256);
LABEL_9:
  if ( v14 == 255 )
  {
    v17 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    v16 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 255) = 0;
    v17(a1, 255, v16);
    v18 = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 256) = 1;
    *(_QWORD *)(a1 + 320) = v18 + 1;
    *(_BYTE *)a1 = 93;
    *(_BYTE *)(a1 + 264) = 93;
    return 93;
  }
LABEL_17:
  *(_QWORD *)(a1 + 256) = v14 + 1;
  *(_BYTE *)(a1 + v14) = 93;
  *(_BYTE *)(a1 + 264) = 93;
  return 93;
}
