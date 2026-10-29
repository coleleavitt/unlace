/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000122F4
// Address: 0x00000001000122F4

//----- (00000001000122F4) ----------------------------------------------------
void __fastcall sub_1000122F4(_QWORD **a1, __int64 a2)
{
  unsigned __int64 v4; // x21
  unsigned __int64 v5; // x9
  _QWORD *v6; // x8
  _QWORD *v7; // x0
  char v8; // [xsp+7h] [xbp-29h] BYREF

  if ( a2 )
  {
    v4 = a2 + 1;
    v5 = (unsigned __int64)a1[1];
    if ( v5 >= a2 + 1 )
    {
      if ( v5 != a2 + 1 )
      {
        v8 = 0;
        sub_10001BE58(a1, a2 + 1, &v8);
      }
    }
    else
    {
      v6 = *a1;
      if ( (unsigned __int64)a1[2] < v4 )
      {
        v6 = qvector_reserve(a1, *a1, v4, 1u);
        *a1 = v6;
        v5 = (unsigned __int64)a1[1];
      }
      bzero((char *)v6 + v5, v4 - v5);
      a1[1] = (_QWORD *)v4;
    }
    *((_BYTE *)*a1 + a2) = 0;
  }
  else
  {
    v7 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v7);
      *a1 = nullptr;
      a1[2] = nullptr;
    }
  }
}
