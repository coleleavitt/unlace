/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100007580
// Address: 0x0000000100007580

//----- (0000000100007580) ----------------------------------------------------
__int64 __fastcall sub_100007580(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // w20
  int *v11; // x0
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x5
  __int64 v16; // x6
  __int64 v17; // x7
  _QWORD *v18; // x21
  _QWORD *v19; // x9
  _QWORD *v20; // x8
  bool v21; // zf

  if ( *(_DWORD *)(a1 + 1556) == 4 )
  {
    sub_1000560A0(a1, "%d: already exited\n", a3, a4, a5, a6, a7, a8, *(_DWORD *)(a1 + 528));
    return 1;
  }
  *(_DWORD *)(a1 + 1556) = 3;
  sub_1000560A0(a1, "%d: sending SIGKILL\n", a3, a4, a5, a6, a7, a8, *(_DWORD *)(a1 + 528));
  if ( !kill(*(_DWORD *)(a1 + 528), 9) )
  {
    v18 = *(_QWORD **)(a1 + 1904);
    if ( v18 != (_QWORD *)(a1 + 1912) )
    {
      do
      {
        if ( *((_BYTE *)v18 + 2152) == 1 )
          *((_DWORD *)v18 + 12) = 0;
        if ( *((_DWORD *)v18 + 14) == 2 )
          sub_100002A3C(a1, (int *)v18 + 10);
        sub_100002B58(a1, (__int64)(v18 + 5));
        v19 = (_QWORD *)v18[1];
        if ( v19 )
        {
          do
          {
            v20 = v19;
            v19 = (_QWORD *)*v19;
          }
          while ( v19 );
        }
        else
        {
          do
          {
            v20 = (_QWORD *)v18[2];
            v21 = *v20 == (_QWORD)v18;
            v18 = v20;
          }
          while ( !v21 );
        }
        v18 = v20;
      }
      while ( v20 != (_QWORD *)(a1 + 1912) );
    }
    return 1;
  }
  v10 = *(_DWORD *)(a1 + 528);
  v11 = __error();
  strerror(*v11);
  sub_1000560A0(a1, "SIGKILL %d failed: %s\n", v12, v13, v14, v15, v16, v17, v10);
  return 0xFFFFFFFFLL;
}
// 100007614: variable 'v12' is possibly undefined
// 100007614: variable 'v13' is possibly undefined
// 100007614: variable 'v14' is possibly undefined
// 100007614: variable 'v15' is possibly undefined
// 100007614: variable 'v16' is possibly undefined
// 100007614: variable 'v17' is possibly undefined
