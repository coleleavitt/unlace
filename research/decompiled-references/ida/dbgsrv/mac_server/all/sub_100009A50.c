/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100009A50
// Address: 0x0000000100009A50

//----- (0000000100009A50) ----------------------------------------------------
void __fastcall sub_100009A50(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *(_QWORD *)a1 = &off_1000A7878;
  v2 = *(void **)(a1 + 184);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 192) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 184) = 0;
    *(_QWORD *)(a1 + 200) = 0;
  }
  v3 = *(void **)(a1 + 144);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  *(_QWORD *)a1 = &off_1000A7838;
  sub_100009B00(a1 + 32, *(_QWORD **)(a1 + 40));
}
// 1000A7838: using guessed type __int64 (__fastcall *off_1000A7838)();
// 1000A7878: using guessed type __int64 (__fastcall *off_1000A7878)();
