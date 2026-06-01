/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B90AC
// Address: 0x00000000000B90AC

//----- (00000000000B90AC) ----------------------------------------------------
__int64 __fastcall sub_B90AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // x23
  __int64 result; // x0
  __int64 v8; // x22
  size_t v9; // x2
  size_t v10; // x0
  __int64 v11; // x8
  int v12; // w0

  if ( *(_QWORD *)(a1 + 32) != a2 )
    return -1;
  v4 = (_BYTE *)(a1 + 32928);
  if ( *(_BYTE *)(a1 + 32929) )
    return 0;
  *(_QWORD *)(a1 + 72) = a3;
  *(_DWORD *)(a1 + 80) = a4;
  if ( !(_DWORD)a4 )
    goto LABEL_28;
  v8 = a1 + 160;
  while ( 1 )
  {
    LODWORD(v10) = *(_DWORD *)(a1 + 56);
    if ( !(_DWORD)v10 )
    {
      if ( *(_QWORD *)(a1 + 40) >= 0x8000u )
        v9 = 0x8000;
      else
        v9 = *(_QWORD *)(a1 + 40);
      v10 = qlread(*(_QWORD *)(a1 + 24), (void *)(a1 + 160), v9);
      if ( (v10 & 0x8000000000000000LL) != 0 )
        return -1;
      v11 = *(_QWORD *)(a1 + 40);
      if ( v11 != -1 )
        *(_QWORD *)(a1 + 40) = v11 - v10;
      *(_DWORD *)(a1 + 56) = v10;
      *(_QWORD *)(a1 + 48) = v8;
      if ( *v4 )
      {
        *v4 = 0;
        if ( byte_167DCC )
        {
          sub_CCEA0(a1 + 48);
          LODWORD(v10) = *(_DWORD *)(a1 + 56);
        }
      }
    }
    v12 = sub_CCEAC(a1 + 48, 4 * (unsigned int)((_DWORD)v10 == 0));
    if ( v12 < 0 || v12 == 1 )
      break;
    if ( !*(_DWORD *)(a1 + 80) )
      goto LABEL_24;
  }
  if ( v12 == -5 && byte_167DCC )
  {
    if ( *(_DWORD *)(a1 + 56) )
      return -1;
    goto LABEL_25;
  }
LABEL_24:
  if ( v12 != 1 )
    goto LABEL_26;
LABEL_25:
  v4[1] = 1;
  v12 = sub_CE950((_QWORD *)(a1 + 48));
LABEL_26:
  if ( v12 )
    return -1;
LABEL_28:
  result = a4 - *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 32) += result;
  return result;
}
// 166D80: using guessed type __int64[512];
// 167DCC: using guessed type char byte_167DCC;
