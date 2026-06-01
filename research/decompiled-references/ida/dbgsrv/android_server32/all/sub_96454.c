/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96454
// Address: 0x00096454

//----- (00096454) --------------------------------------------------------
_DWORD *__fastcall sub_96454(unsigned __int8 **a1, int a2, int a3)
{
  __int64 v6; // r0
  unsigned __int8 *v7; // r4
  unsigned __int8 *v8; // r5
  bool v9; // zf
  _DWORD *result; // r0
  unsigned __int8 *v11; // [sp+4h] [bp-24h] BYREF
  unsigned __int8 *v12; // [sp+8h] [bp-20h]

  LODWORD(v6) = sub_92AAC(&v11, a1, 1);
  v8 = v11;
  v7 = v12;
  v9 = v11 == v12;
  if ( v11 != v12 )
  {
    v6 = *(_QWORD *)a1;
    v9 = (_DWORD)v6 == HIDWORD(v6);
  }
  if ( v9 || *(_BYTE *)v6 != 69 )
    return nullptr;
  *a1 = (unsigned __int8 *)(v6 + 1);
  result = sub_93AC6((int)(a1 + 92), 24);
  *result = &off_DBCF4;
  result[1] = 16843050;
  result[2] = a2;
  result[3] = a3;
  result[4] = v8;
  result[5] = v7;
  return result;
}
// DBCF4: using guessed type _UNKNOWN *off_DBCF4;
