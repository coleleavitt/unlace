/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AD960
// Address: 0x00000000004AD960

//----- (00000000004AD960) ----------------------------------------------------
__int64 __fastcall sub_4AD960(__int64 a1, unsigned int a2, unsigned int **a3, __int64 *a4)
{
  __int64 *v8; // x1
  unsigned int v9; // w0
  int v10; // w0
  __int64 v11; // x1
  __int64 v12; // x2
  void (__fastcall *v13)(__int64, __int64, __int64); // x3
  __int64 v14; // x0
  __int64 v15; // x2
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x2
  void (__fastcall *v19)(__int64, __int64, __int64); // x3
  __int64 v20; // x1
  unsigned int *v21; // x2
  __int64 v22; // x0
  __int64 v23; // x2
  void (__fastcall *v24)(__int64, __int64, __int64); // x3
  __int64 v25; // x2
  __int64 result; // x0
  __int64 v27; // x2
  void (__fastcall *v28)(__int64, __int64, __int64); // x3
  __int64 v29; // x1
  __int64 v30; // x2
  void (__fastcall *v31)(__int64, __int64, __int64); // x3
  __int64 v32; // x1

  if ( !a4 || *((_DWORD *)a4 + 4) )
  {
LABEL_18:
    v16 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 296) = 0;
    sub_4ADC10(a1, a2, a4, 0);
    v17 = *(_QWORD *)(a1 + 256);
    goto LABEL_19;
  }
  v8 = a4;
  while ( 1 )
  {
    v9 = *(_DWORD *)v8[1];
    if ( v9 <= 0x24 )
      break;
    if ( v9 <= 0x26 || v9 == 43 )
    {
LABEL_9:
      v10 = *(unsigned __int8 *)(a1 + 264);
      v11 = *(_QWORD *)(a1 + 256);
      goto LABEL_10;
    }
LABEL_16:
    v8 = (__int64 *)*v8;
    if ( !v8 || *((_DWORD *)v8 + 4) )
      goto LABEL_18;
  }
  if ( v9 < 0x22 )
  {
    if ( v9 >= 0x19 && (v9 <= 0x1B || v9 == 33) )
      goto LABEL_9;
    goto LABEL_16;
  }
  v10 = *(unsigned __int8 *)(a1 + 264);
  v11 = *(_QWORD *)(a1 + 256);
  if ( (v10 & 0xFFFFFFFD) != 0x28 )
  {
LABEL_10:
    if ( v10 != 32 )
    {
      if ( v11 == 255 )
      {
        v13 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
        v12 = *(_QWORD *)(a1 + 280);
        *(_BYTE *)(a1 + 255) = 0;
        v13(a1, 255, v12);
        v14 = *(_QWORD *)(a1 + 320);
        v11 = 1;
        *(_BYTE *)a1 = 32;
        *(_QWORD *)(a1 + 320) = v14 + 1;
LABEL_13:
        v15 = v11 + 1;
        goto LABEL_28;
      }
      *(_QWORD *)(a1 + 256) = v11 + 1;
      *(_BYTE *)(a1 + v11++) = 32;
      *(_BYTE *)(a1 + 264) = 32;
    }
  }
  if ( v11 != 255 )
    goto LABEL_13;
  v28 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
  v27 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)(a1 + 255) = 0;
  v28(a1, 255, v27);
  v15 = 1;
  v11 = 0;
  ++*(_QWORD *)(a1 + 320);
LABEL_28:
  *(_QWORD *)(a1 + 256) = v15;
  *(_BYTE *)(a1 + v11) = 40;
  *(_BYTE *)(a1 + 264) = 40;
  v16 = *(_QWORD *)(a1 + 296);
  *(_QWORD *)(a1 + 296) = 0;
  sub_4ADC10(a1, a2, a4, 0);
  v29 = *(_QWORD *)(a1 + 256);
  if ( v29 != 255 )
  {
    v17 = v29 + 1;
    *(_QWORD *)(a1 + 256) = v29 + 1;
    *(_BYTE *)(a1 + v29) = 41;
    *(_BYTE *)(a1 + 264) = 41;
LABEL_19:
    if ( v17 != 255 )
      goto LABEL_30;
    v19 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
    v18 = *(_QWORD *)(a1 + 280);
    *(_BYTE *)(a1 + 255) = 0;
    v19(a1, 255, v18);
    *(_BYTE *)a1 = 40;
    *(_BYTE *)(a1 + 264) = 40;
    v20 = 1;
    v21 = *a3;
    v22 = *(_QWORD *)(a1 + 320) + 1LL;
    *(_QWORD *)(a1 + 256) = 1;
    *(_QWORD *)(a1 + 320) = v22;
    if ( v21 )
    {
LABEL_21:
      def_4AD1E4(a1, a2, v21);
      v20 = *(_QWORD *)(a1 + 256);
      goto LABEL_22;
    }
    goto LABEL_34;
  }
  v31 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
  v30 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)(a1 + 255) = 0;
  v31(a1, 255, v30);
  v32 = *(_QWORD *)(a1 + 320);
  v17 = 1;
  *(_BYTE *)a1 = 41;
  *(_QWORD *)(a1 + 320) = v32 + 1;
LABEL_30:
  v20 = v17 + 1;
  *(_QWORD *)(a1 + 256) = v17 + 1;
  *(_BYTE *)(a1 + v17) = 40;
  *(_BYTE *)(a1 + 264) = 40;
  v21 = *a3;
  if ( *a3 )
    goto LABEL_21;
LABEL_22:
  if ( v20 != 255 )
  {
LABEL_34:
    v25 = v20 + 1;
    goto LABEL_24;
  }
  v24 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 272);
  v23 = *(_QWORD *)(a1 + 280);
  *(_BYTE *)(a1 + 255) = 0;
  v24(a1, 255, v23);
  v25 = 1;
  v20 = 0;
  ++*(_QWORD *)(a1 + 320);
LABEL_24:
  *(_QWORD *)(a1 + 256) = v25;
  *(_BYTE *)(a1 + v20) = 41;
  *(_BYTE *)(a1 + 264) = 41;
  result = sub_4ADC10(a1, a2, a4, 1);
  *(_QWORD *)(a1 + 296) = v16;
  return result;
}
