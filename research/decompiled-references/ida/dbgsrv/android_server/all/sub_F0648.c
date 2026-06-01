/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_F0648
// Address: 0x00000000000F0648

//----- (00000000000F0648) ----------------------------------------------------
__int64 __fastcall sub_F0648(__int64 a1, __int64 *a2, unsigned int *a3)
{
  unsigned __int8 v4; // w0
  int v6; // w21
  char *v8; // x26
  __int64 result; // x0
  signed int v10; // w1
  __int64 v11; // x20
  unsigned int v12; // w0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  unsigned __int64 v16; // [xsp+68h] [xbp+68h] BYREF

  v4 = (unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3;
  v6 = v4;
  v8 = (char *)sub_EFB84(v4, a1);
  result = 0;
  while ( *a3 )
  {
    v10 = a3[1];
    v11 = result;
    if ( !v10 )
      goto LABEL_15;
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    {
      v11 = (__int64)a3 - v10 + 4;
      if ( v11 != result )
      {
        v6 = sub_EFDC4((__int64)a3 - v10 + 4);
        v8 = (char *)sub_EFB84(v6, a1);
      }
    }
    if ( !v6 )
    {
      if ( !*((_QWORD *)a3 + 1) )
        goto LABEL_15;
LABEL_13:
      v14 = *a2;
      if ( *a2 )
      {
        v15 = *(_QWORD *)(v14 + 8);
        *(_QWORD *)(v14 + 8) = v15 + 1;
        *(_QWORD *)(v14 + 8 * (v15 + 2)) = a3;
      }
      goto LABEL_15;
    }
    sub_EFC44(v6, v8, (char *)a3 + 8, &v16);
    v12 = sub_EFB24(v6);
    v13 = -1;
    if ( v12 <= 7uLL )
      v13 = (1LL << (8 * (unsigned __int8)v12)) - 1;
    if ( (v13 & v16) != 0 )
      goto LABEL_13;
LABEL_15:
    a3 = (unsigned int *)((char *)a3 + *a3 + 4);
    result = v11;
  }
  return result;
}
