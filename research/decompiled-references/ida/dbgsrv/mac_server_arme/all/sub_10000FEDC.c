/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000FEDC
// Address: 0x000000010000FEDC

//----- (000000010000FEDC) ----------------------------------------------------
__int64 __fastcall sub_10000FEDC(unsigned __int64 a1, unsigned __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 *v7; // x2
  unsigned __int64 *v8; // x22
  __int64 result; // x0
  bool v10; // zf
  unsigned __int64 *v11; // x2
  int v12; // w22
  unsigned __int64 v13; // x8
  unsigned __int64 *v14; // x23
  unsigned __int64 v15; // x9
  unsigned __int64 v16; // [xsp+8h] [xbp-58h] BYREF
  _BYTE v17[24]; // [xsp+10h] [xbp-50h] BYREF

  if ( (unsigned __int64)a2 <= a1 || (unsigned __int64)a2 - a1 <= 0x17 )
  {
    memset(v17, 0, sizeof(v17));
    v7 = a2;
    if ( !a4 )
      goto LABEL_7;
    goto LABEL_6;
  }
  *(_OWORD *)v17 = *(_OWORD *)a1;
  *(_QWORD *)&v17[16] = *(_QWORD *)(a1 + 16);
  v7 = (unsigned __int64 *)(a1 + 24);
  if ( a4 )
  {
LABEL_6:
    *(_DWORD *)v17 = bswap32(*(unsigned int *)v17);
    *(int8x16_t *)&v17[8] = vrev32q_s8(*(int8x16_t *)&v17[8]);
  }
LABEL_7:
  v8 = v7;
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 216LL))(a3, v17);
  if ( (_DWORD)result )
    v10 = 1;
  else
    v10 = *(_DWORD *)&v17[20] == 0;
  if ( !v10 )
  {
    if ( v8 < a2 )
    {
      v11 = v8;
      v12 = 0;
      while ( (unsigned __int64)((char *)a2 - (char *)v11) > 7 )
      {
        v14 = v11 + 1;
        v13 = *v11;
        v16 = v13;
        v15 = HIDWORD(v13);
        if ( a4 )
          goto LABEL_17;
LABEL_18:
        result = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)a3 + 224LL))(a3, &v16);
        if ( (_DWORD)result )
          return result;
        if ( (unsigned int)++v12 >= *(_DWORD *)&v17[20] )
          return 0;
        v11 = v14;
        if ( v14 >= a2 )
          goto LABEL_21;
      }
      LODWORD(v15) = 0;
      LODWORD(v13) = 0;
      v16 = 0;
      v14 = a2;
      if ( !a4 )
        goto LABEL_18;
LABEL_17:
      v16 = _byteswap_uint64(__PAIR64__(v13, v15));
      goto LABEL_18;
    }
LABEL_21:
    if ( (byte_1000A5919 & 1) == 0 )
      sub_10000F540();
    byte_1000A5919 = 1;
    return 0;
  }
  return result;
}
// 1000A5919: using guessed type char byte_1000A5919;
