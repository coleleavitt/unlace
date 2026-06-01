/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000133A0
// Address: 0x00000001000133A0

//----- (00000001000133A0) ----------------------------------------------------
char *__fastcall sub_1000133A0(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
{
  char *v5; // rbx
  void **v6; // r14
  void *v7; // rdi

  v5 = (char *)operator new(0x38u);
  v6 = (void **)(v5 + 8);
  *(_OWORD *)(v5 + 8) = 0;
  *((_QWORD *)v5 + 3) = 0;
  v5[48] = 0;
  if ( a4 )
  {
    *(_QWORD *)v5 = &off_1000A7810;
    *((_QWORD *)v5 + 4) = a1;
    *((_QWORD *)v5 + 5) = a2;
    sub_100012FB0((__int64)v6, a3);
    if ( !(unsigned __int8)sub_100013130(
                             v6,
                             *((_QWORD *)v5 + 4),
                             *((_QWORD *)v5 + 5),
                             a3,
                             -1,
                             (__int64)"strings table",
                             1) )
    {
      v7 = *v6;
      if ( *v6 )
      {
        *((_QWORD *)v5 + 2) = 0;
        qfree(v7);
        *((_QWORD *)v5 + 1) = 0;
        *((_QWORD *)v5 + 3) = 0;
      }
    }
  }
  else
  {
    *(_QWORD *)v5 = &off_1000A77E8;
    *((_QWORD *)v5 + 4) = a1;
    *((_QWORD *)v5 + 5) = a2;
    sub_100012FB0((__int64)v6, a3);
  }
  return v5;
}
// 1000A77E8: using guessed type __int64 (__fastcall *off_1000A77E8)();
// 1000A7810: using guessed type __int64 (__fastcall *off_1000A7810)();
