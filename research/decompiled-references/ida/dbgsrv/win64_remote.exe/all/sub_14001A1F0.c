/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001A1F0
// Address: 0x000000014001A1F0

//----- (000000014001A1F0) ----------------------------------------------------
void __fastcall sub_14001A1F0(_QWORD *a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))a1[62];
  if ( v2 )
  {
    (**v2)(v2, 1);
    v3 = (void *)a1[63];
    if ( v3 )
    {
      a1[64] = 0;
      j_free(v3);
      a1[63] = 0;
      a1[65] = 0;
    }
    if ( a1[66] )
    {
      sub_14001A6C0(a1 + 66, 0);
      j_free((void *)a1[66]);
      a1[66] = 0;
      a1[68] = 0;
    }
    v4 = (void *)a1[69];
    if ( v4 )
    {
      a1[70] = 0;
      j_free(v4);
      a1[69] = 0;
      a1[71] = 0;
    }
    if ( a1[72] )
    {
      sub_14001A750(a1 + 72, 0);
      j_free((void *)a1[72]);
      a1[72] = 0;
      a1[74] = 0;
    }
    a1[62] = 0;
  }
  else
  {
    a1[62] = 0;
  }
}
