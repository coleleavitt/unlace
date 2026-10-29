/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CE6C
// Address: 0x000000000009CE6C

//----- (000000000009CE6C) ----------------------------------------------------
__int64 __fastcall sub_9CE6C(_QWORD *a1)
{
  _QWORD *v1; // x23
  _QWORD *v2; // x22
  __int64 v4; // x20
  double v5; // d0
  _QWORD *v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x9
  _QWORD *v10; // t1

  v1 = (_QWORD *)a1[54];
  v2 = a1 + 55;
  v4 = (__int64)(a1 + 54);
  if ( a1 + 55 != v1 )
  {
    while ( 1 )
    {
      if ( (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD *, _QWORD, _QWORD))(*a1 + 296LL))(
             a1,
             v1[5],
             v1 + 6,
             *((unsigned __int8 *)v1 + 56),
             0) )
      {
        v6 = (_QWORD *)v1[1];
        if ( v6 )
          goto LABEL_6;
      }
      else
      {
        sub_39FA0((__int64)"Failed to restore broken breakpoint at 0x%a\n", v5);
        v6 = (_QWORD *)v1[1];
        if ( v6 )
        {
          do
          {
LABEL_6:
            v1 = v6;
            v6 = (_QWORD *)*v6;
          }
          while ( v6 );
          goto LABEL_10;
        }
      }
      v7 = (__int64)(v1 + 2);
      v8 = (_QWORD *)v1[2];
      if ( (_QWORD *)*v8 == v1 )
      {
        v1 = (_QWORD *)v1[2];
        if ( v2 == v8 )
          break;
      }
      else
      {
        do
        {
          v9 = *(_QWORD *)v7;
          v10 = *(_QWORD **)(*(_QWORD *)v7 + 16LL);
          v7 = *(_QWORD *)v7 + 16LL;
          v1 = v10;
        }
        while ( *v10 != v9 );
LABEL_10:
        if ( v2 == v1 )
          break;
      }
    }
  }
  sub_39640(v4, (_QWORD *)a1[55]);
  a1[55] = 0;
  a1[56] = 0;
  a1[54] = v2;
  return 1;
}
// 9CED0: variable 'v5' is possibly undefined
