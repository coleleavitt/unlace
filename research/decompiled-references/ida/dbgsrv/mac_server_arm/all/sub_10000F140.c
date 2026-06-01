/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F140
// Address: 0x000000010000F140

//----- (000000010000F140) ----------------------------------------------------
void __fastcall sub_10000F140(_QWORD **a1, unsigned __int64 a2)
{
  _QWORD *v4; // x9
  _QWORD *v5; // x8
  char v6; // [xsp+7h] [xbp-19h] BYREF

  v4 = a1[1];
  if ( (unsigned __int64)v4 >= a2 )
  {
    if ( v4 != (_QWORD *)a2 )
    {
      v6 = 0;
      sub_100019CE4(a1, a2, &v6);
    }
  }
  else
  {
    v5 = *a1;
    if ( (unsigned __int64)a1[2] < a2 )
    {
      v5 = qvector_reserve(a1, *a1, a2, 1u);
      *a1 = v5;
      v4 = a1[1];
    }
    bzero((char *)v4 + (_QWORD)v5, a2 - (_QWORD)v4);
    a1[1] = (_QWORD *)a2;
  }
}
