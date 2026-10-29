/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39A1C
// Address: 0x0000000000039A1C

//----- (0000000000039A1C) ----------------------------------------------------
void __fastcall sub_39A1C(_QWORD *a1)
{
  void **v1; // x8
  void **v2; // x9
  unsigned __int64 v4; // x11
  _QWORD *v5; // x21
  __int64 v6; // x20
  unsigned __int64 v7; // x22
  void **v8; // x23
  __int64 v9; // t1
  unsigned __int64 v10; // x9
  __int64 v11; // x8

  v1 = (void **)a1[1];
  v2 = (void **)a1[2];
  if ( v2 == v1 )
  {
    v5 = a1 + 5;
  }
  else
  {
    v4 = a1[4];
    v5 = a1 + 5;
    v6 = (__int64)v1[v4 / 0x38] + 72 * (v4 % 0x38);
    v7 = (unsigned __int64)v1[(a1[5] + v4) / 0x38] + 72 * ((a1[5] + v4) % 0x38);
    if ( v7 != v6 )
    {
      v8 = &v1[v4 / 0x38];
      do
      {
        free_debug_event(v6);
        v6 += 72;
        if ( v6 - (_QWORD)*v8 == 4032 )
        {
          v9 = (__int64)v8[1];
          ++v8;
          v6 = v9;
        }
      }
      while ( v7 != v6 );
      v1 = (void **)a1[1];
      v2 = (void **)a1[2];
    }
  }
  v10 = v2 - v1;
  *v5 = 0;
  if ( v10 >= 3 )
  {
    do
    {
      operator delete(*v1);
      v1 = (void **)(a1[1] + 8LL);
      v10 = (__int64)(a1[2] - (_QWORD)v1) >> 3;
      a1[1] = v1;
    }
    while ( v10 > 2 );
  }
  if ( v10 == 1 )
  {
    v11 = 28;
  }
  else
  {
    if ( v10 != 2 )
      return;
    v11 = 56;
  }
  a1[4] = v11;
}
