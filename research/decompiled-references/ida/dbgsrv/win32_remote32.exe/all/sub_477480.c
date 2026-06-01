/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477480
// Address: 0x00477480

//----- (00477480) --------------------------------------------------------
double __usercall sub_477480@<st0>(int a1@<ebp>, unsigned int a2, int a3, int a4, int a5, double a6, __int16 a7)
{
  __int16 v7; // fps
  int v8; // edi
  int v10; // [esp+2Ch] [ebp-8Ch] BYREF
  int v11; // [esp+6Ch] [ebp-4Ch]
  int v12; // [esp+ACh] [ebp-Ch]
  void *v13; // [esp+B0h] [ebp-8h]
  void *retaddr; // [esp+B8h] [ebp+0h]

  v12 = a1;
  v13 = retaddr;
  if ( !sub_47754E(a2, &a6, a7) )
  {
    v11 &= ~1u;
    sub_47775C(v7, (ULONG_PTR)&v10, (unsigned int *)&a7, a2, a3, (float *)&a4, (float *)&a6, 0);
  }
  v8 = sub_47744C(a2);
  if ( sub_477B72() && v8 )
    return sub_477A81(v8, a3, a4, a5, COERCE_UNSIGNED_INT64(0.0), HIDWORD(COERCE_UNSIGNED_INT64(0.0)), a6);
  sub_477A52(v8);
  sub_47E160();
  return a6;
}
// 477480: could not find valid save-restore pair for ebp
