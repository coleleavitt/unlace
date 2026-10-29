/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000A120
// Address: 0x000000010000A120

//----- (000000010000A120) ----------------------------------------------------
void __fastcall sub_10000A120(__int64 a1, _QWORD *a2)
{
  void *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r15

  if ( a2 )
  {
    sub_10000A120(a1, *a2);
    sub_10000A120(a1, a2[1]);
    v2 = (void *)a2[5];
    if ( v2 )
    {
      v3 = a2[6];
      if ( v3 )
      {
        v4 = 0;
        do
        {
          sub_10000A1B0((char **)(v4 + a2[5]));
          v4 += 48;
          --v3;
        }
        while ( v3 );
        v2 = (void *)a2[5];
      }
      a2[6] = 0;
      qfree(v2);
    }
    operator delete(a2);
  }
}
