/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400350B0
// Address: 0x00000001400350B0

//----- (00000001400350B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400350B0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rdi
  size_t v10; // rbp
  void *v11; // rax

  if ( a2 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 0x18u);
  result = *(_QWORD *)(a1 + 8);
  if ( result < a2 )
  {
    v7 = 24 * result;
    v8 = a2 - result;
    do
    {
      v9 = (_QWORD *)(v7 + *(_QWORD *)a1);
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v10 = *(_QWORD *)(a3 + 8);
      if ( v10 )
      {
        v11 = sub_14005AAA0(*(_QWORD *)(a3 + 8));
        *v9 = v11;
        v9[2] = v10;
        result = (unsigned __int64)memcpy(v11, *(const void **)a3, v10);
        v9[1] = v10;
      }
      v7 += 24;
      --v8;
    }
    while ( v8 );
  }
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
