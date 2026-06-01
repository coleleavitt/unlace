/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058F88
// Address: 0x0000000100058F88

//----- (0000000100058F88) ----------------------------------------------------
__int64 __fastcall sub_100058F88(_QWORD *a1)
{
  _QWORD *v2; // x22
  _QWORD *v3; // x21
  _QWORD *v4; // x9
  _QWORD *v5; // x8
  bool v6; // zf

  v2 = (_QWORD *)a1[54];
  v3 = a1 + 55;
  if ( v2 != a1 + 55 )
  {
    do
    {
      if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD))(*a1 + 296LL))(
             a1,
             v2[5],
             v2 + 6,
             *((unsigned __int8 *)v2 + 56),
             0) )
      {
        v4 = (_QWORD *)v2[1];
        if ( v4 )
          goto LABEL_8;
      }
      else
      {
        sub_100000AA0();
        v4 = (_QWORD *)v2[1];
        if ( v4 )
        {
          do
          {
LABEL_8:
            v5 = v4;
            v4 = (_QWORD *)*v4;
          }
          while ( v4 );
          goto LABEL_3;
        }
      }
      do
      {
        v5 = (_QWORD *)v2[2];
        v6 = *v5 == (_QWORD)v2;
        v2 = v5;
      }
      while ( !v6 );
LABEL_3:
      v2 = v5;
    }
    while ( v5 != v3 );
  }
  sub_100009004((__int64)(a1 + 54), (_QWORD *)a1[55]);
  a1[55] = 0;
  a1[56] = 0;
  a1[54] = v3;
  return 1;
}
