/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D700
// Address: 0x000000000004D700

//----- (000000000004D700) ----------------------------------------------------
void __fastcall sub_4D700(_QWORD *a1)
{
  __int64 v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi

  v2 = a1[75];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (void *)a1[72];
  if ( v3 )
  {
    a1[73] = 0;
    qfree(v3);
    a1[72] = 0;
    a1[74] = 0;
  }
  if ( a1[36] )
  {
    sub_5BEB0(a1 + 36, 0);
    qfree((void *)a1[36]);
    a1[36] = 0;
    a1[38] = 0;
  }
  v4 = (void *)a1[14];
  if ( v4 )
  {
    a1[15] = 0;
    qfree(v4);
    a1[14] = 0;
    a1[16] = 0;
  }
  v5 = (void *)a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    qfree(v5);
    a1[4] = 0;
    a1[6] = 0;
  }
}
