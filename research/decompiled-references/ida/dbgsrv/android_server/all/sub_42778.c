/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42778
// Address: 0x0000000000042778

//----- (0000000000042778) ----------------------------------------------------
void __fastcall sub_42778(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v6; // x21
  void *v7; // x0
  void *v8; // x0

  if ( (a3 & 1) != 0 )
  {
    sub_3A868(a1, nullptr);
    v6 = sub_9A3E8((__int64)a1);
    sub_497E0(v6, (__int64)(a1 + 199));
    sub_498A4(v6 + 24, (__int64)(a1 + 202));
    v7 = (void *)a1[199];
    if ( v7 )
    {
      a1[200] = 0;
      qfree(v7);
      a1[199] = 0;
      a1[201] = 0;
    }
    v8 = (void *)a1[202];
    if ( v8 )
    {
      a1[203] = 0;
      qfree(v8);
      a1[202] = 0;
      a1[204] = 0;
    }
  }
  if ( a4 )
    JUMPOUT(0x3D694);
}
// 427FC: control flows out of bounds to 3D694
