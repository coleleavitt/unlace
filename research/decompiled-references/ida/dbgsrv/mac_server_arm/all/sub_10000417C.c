/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000417C
// Address: 0x000000010000417C

//----- (000000010000417C) ----------------------------------------------------
__int64 __fastcall sub_10000417C(__int64 a1, int a2)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x22
  thread_read_t v6; // w0
  kern_return_t v7; // w0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  _QWORD *v14; // x9
  _QWORD *v15; // x8
  bool v16; // zf
  char *v18; // x1

  *(_BYTE *)(a1 + 1930) = 0;
  v2 = *(_QWORD **)(a1 + 1904);
  v3 = (_QWORD *)(a1 + 1912);
  if ( v2 == (_QWORD *)(a1 + 1912) )
    return 1;
  while ( 1 )
  {
    v6 = *((_DWORD *)v2 + 8);
    if ( v6 != a2 )
    {
      v7 = thread_resume(v6);
      if ( v7 )
        break;
    }
    v14 = (_QWORD *)v2[1];
    if ( v14 )
    {
      do
      {
        v15 = v14;
        v14 = (_QWORD *)*v14;
      }
      while ( v14 );
    }
    else
    {
      do
      {
        v15 = (_QWORD *)v2[2];
        v16 = *v15 == (_QWORD)v2;
        v2 = v15;
      }
      while ( !v16 );
    }
    v2 = v15;
    if ( v15 == v3 )
      return 1;
  }
  if ( v7 == 4 )
  {
    v18 = "Invalid thread id %d passed\n";
    goto LABEL_17;
  }
  if ( v7 == 5 )
  {
    v18 = "Thread %d has suspend count of 0!\n";
LABEL_17:
    sub_1000560A0(a1, v18, v8, v9, v10, v11, v12, v13, *((_DWORD *)v2 + 8));
  }
  return 0;
}
// 100004238: variable 'v8' is possibly undefined
// 100004238: variable 'v9' is possibly undefined
// 100004238: variable 'v10' is possibly undefined
// 100004238: variable 'v11' is possibly undefined
// 100004238: variable 'v12' is possibly undefined
// 100004238: variable 'v13' is possibly undefined
