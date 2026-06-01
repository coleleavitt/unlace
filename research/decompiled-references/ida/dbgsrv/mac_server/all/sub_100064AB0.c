/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064AB0
// Address: 0x0000000100064AB0

//----- (0000000100064AB0) ----------------------------------------------------
void __fastcall sub_100064AB0(_QWORD *a1)
{
  void *v1; // rax

  *a1 = &off_1000A9D50;
  v1 = (void *)a1[14];
  if ( v1 )
  {
    a1[15] = 0;
    qfree(v1);
    a1[14] = 0;
    a1[16] = 0;
  }
  sub_100069950(a1);
}
// 1000A9D50: using guessed type __int64 (__fastcall *off_1000A9D50)();
