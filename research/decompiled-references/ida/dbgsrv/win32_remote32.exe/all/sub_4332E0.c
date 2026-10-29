/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4332E0
// Address: 0x004332E0

//----- (004332E0) --------------------------------------------------------
__int8 *__usercall sub_4332E0@<eax>(__m128i a1@<xmm0>, __int8 *a2, int a3, unsigned __int8 *a4, int a5, char a6)
{
  __int8 *v6; // eax
  __int8 *v7; // esi
  char v8; // al
  char v9; // cl
  __int8 *result; // eax
  _WORD v11[130]; // [esp+Ch] [ebp-108h] BYREF

  if ( a4 )
    sub_4565E0(v11, 0x104u, a4);
  else
    sub_4566A0(a3, a1, (char *)v11, 260);
  sub_45AD20((char *)v11, 47, 92);
  v6 = sub_4569C0(a2, a3, (char *)v11, a5, 0);
  v7 = v6;
  if ( a6 )
    v8 = sub_437610(a3, a2, a3);
  else
    v8 = sub_457B00(v6);
  v9 = v8;
  result = nullptr;
  if ( v9 )
    return v7;
  return result;
}
