/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B900
// Address: 0x000000000003B900

//----- (000000000003B900) ----------------------------------------------------
void __fastcall sub_3B900(__int64 a1)
{
  void *v2; // rdi

  v2 = *(void **)(a1 + 824);
  if ( v2 )
  {
    sub_36570(v2);
    *(_QWORD *)(a1 + 824) = 0;
    sub_489D0((__int64)&qword_155708, (_QWORD *)xmmword_155710);
    qword_155708 = (__int64)&xmmword_155710;
    xmmword_155710 = 0;
  }
}
// 155708: using guessed type __int64 qword_155708;
// 155710: using guessed type __int128 xmmword_155710;
