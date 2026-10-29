/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4325D0
// Address: 0x00000000004325D0

//----- (00000000004325D0) ----------------------------------------------------
_BYTE *__fastcall sub_4325D0(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  _BYTE *result; // rax
  void **v4; // r12
  char v5; // bl
  void *v6; // rsi
  void *v7; // rax

  if ( a3 > 0xFu )
    return sub_431490(a1, a2, a3);
  v4 = *(void ***)(a1 + 200);
  v5 = a2 + a3;
  *(_BYTE *)(a1 + 212) = a2 + a3;
  result = v4[1];
  v6 = *v4;
  if ( v4[2] < result + 1 )
  {
    v7 = sub_481540((__int64)v4, v6, (unsigned __int64)(result + 1), 1u);
    *v4 = v7;
    v6 = v7;
    result = v4[1];
  }
  result[(_QWORD)v6] = v5;
  v4[1] = (char *)v4[1] + 1;
  ++*(_DWORD *)(a1 + 208);
  return result;
}
