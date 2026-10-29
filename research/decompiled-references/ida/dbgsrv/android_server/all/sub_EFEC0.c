/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EFEC0
// Address: 0x00000000000EFEC0

//----- (00000000000EFEC0) ----------------------------------------------------
unsigned int *__fastcall sub_EFEC0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned __int8 v4; // w0
  int v7; // w21
  char *v8; // x27
  __int64 v9; // x0
  signed int v10; // w1
  __int64 v11; // x20
  unsigned __int64 v12; // x1
  char *v14; // x0
  unsigned int v15; // w0
  __int64 v16; // x1
  unsigned __int64 v17; // [xsp+60h] [xbp+60h] BYREF
  unsigned __int64 v18; // [xsp+68h] [xbp+68h] BYREF

  v4 = (unsigned __int64)*(unsigned __int16 *)(a1 + 32) >> 3;
  v7 = v4;
  v8 = (char *)sub_EFB84(v4, a1);
  v9 = 0;
  while ( *a2 )
  {
    v10 = a2[1];
    if ( !v10 )
    {
      v11 = v9;
      goto LABEL_16;
    }
    v11 = v9;
    if ( (*(_BYTE *)(a1 + 32) & 4) != 0 )
    {
      v11 = (__int64)a2 - v10 + 4;
      if ( v11 != v9 )
      {
        v7 = sub_EFDC4((__int64)a2 - v10 + 4);
        v8 = (char *)sub_EFB84(v7, a1);
      }
    }
    if ( v7 )
    {
      v14 = sub_EFC44(v7, v8, (char *)a2 + 8, &v17);
      sub_EFC44(v7 & 0xF, nullptr, v14, &v18);
      v15 = sub_EFB24(v7);
      v16 = -1;
      if ( v15 <= 7uLL )
        v16 = (1LL << (8 * (unsigned __int8)v15)) - 1;
      if ( (v16 & v17) == 0 )
        goto LABEL_16;
    }
    else
    {
      v12 = *((_QWORD *)a2 + 2);
      v17 = *((_QWORD *)a2 + 1);
      v18 = v12;
      if ( !v17 )
        goto LABEL_16;
    }
    if ( a3 - v17 < v18 )
      return a2;
LABEL_16:
    a2 = (unsigned int *)((char *)a2 + *a2 + 4);
    v9 = v11;
  }
  return nullptr;
}
