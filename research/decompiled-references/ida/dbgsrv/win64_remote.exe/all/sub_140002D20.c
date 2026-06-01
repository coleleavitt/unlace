/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140002D20
// Address: 0x0000000140002D20

//----- (0000000140002D20) ----------------------------------------------------
_BYTE *__fastcall sub_140002D20(_QWORD *a1, unsigned int a2)
{
  _BYTE *v3; // rdi
  _BYTE *result; // rax
  size_t v5; // rdi
  size_t v6; // rbx
  unsigned __int64 v7; // rdx
  _BYTE Src[5]; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v9[3]; // [rsp+25h] [rbp-13h] BYREF

  v3 = sub_14005B4D0(Src, (unsigned __int64)v9, a2);
  result = Src;
  v5 = v3 - Src;
  if ( v5 )
  {
    v6 = a1[1];
    v7 = v6 + v5;
    if ( v6 + v5 < v6 )
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    sub_140002EF0((__int64)a1, v7);
    return memcpy((void *)(v6 + *a1), Src, v5);
  }
  return result;
}
