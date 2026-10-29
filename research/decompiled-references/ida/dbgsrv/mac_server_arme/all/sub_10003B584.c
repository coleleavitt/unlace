/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10003B584
// Address: 0x000000010003B584

//----- (000000010003B584) ----------------------------------------------------
__int64 __fastcall sub_10003B584(unsigned __int8 *a1)
{
  unsigned int v1; // w8
  unsigned __int8 *v2; // x19
  void *v4; // x8
  unsigned __int64 v5; // x19
  unsigned __int8 *v6; // x20

  v1 = *a1;
  if ( v1 > 6 )
  {
    if ( v1 == 7 )
    {
      v4 = *((void **)a1 + 1);
      v5 = *((_QWORD *)a1 + 2);
      if ( v4 )
      {
        v6 = a1;
        *((_QWORD *)a1 + 2) = 0;
        qfree(v4);
        a1 = v6;
        *((_QWORD *)v6 + 3) = 0;
      }
      *a1 = 2;
      *((_QWORD *)a1 + 1) = v5 > 1;
    }
    else
    {
      if ( v1 != 9 )
      {
LABEL_8:
        set_qerrno();
        return 0;
      }
      *((_QWORD *)a1 + 1) = *((_QWORD *)a1 + 1) != 0;
      *a1 = 2;
    }
  }
  else if ( v1 != 2 )
  {
    if ( v1 == 5 )
    {
      v2 = a1;
      sub_10003307C(*((_QWORD *)a1 + 1), a1);
      *v2 = 2;
      *((_QWORD *)v2 + 1) = 1;
      return 1;
    }
    goto LABEL_8;
  }
  return 1;
}
