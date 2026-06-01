/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46E240
// Address: 0x000000000046E240

//----- (000000000046E240) ----------------------------------------------------
void __fastcall sub_46E240(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  *a1 = qword_4C4C18;
  sub_46F0A0(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 0xFFFFFFFFLL);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    j__free(v4);
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    j__free(v5);
  }
}
// 4C4C18: using guessed type __int64 qword_4C4C18[2];
