/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009B00
// Address: 0x0000000100009B00

//----- (0000000100009B00) ----------------------------------------------------
void __fastcall sub_100009B00(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi

  if ( a2 )
  {
    sub_100009B00(a1, *a2);
    sub_100009B00(a1, a2[1]);
    v2 = a2[5];
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    operator delete(a2);
  }
}
