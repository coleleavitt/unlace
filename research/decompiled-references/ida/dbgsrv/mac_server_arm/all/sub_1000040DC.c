/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000040DC
// Address: 0x00000001000040DC

//----- (00000001000040DC) ----------------------------------------------------
__int64 __fastcall sub_1000040DC(__int64 a1, int a2)
{
  __int64 result; // x0
  _QWORD *v4; // x21
  _QWORD *v5; // x20
  thread_read_t v7; // w0
  _QWORD *v8; // x9
  _QWORD *v9; // x8
  bool v10; // zf

  result = 1;
  *(_BYTE *)(a1 + 1930) = 1;
  v4 = *(_QWORD **)(a1 + 1904);
  v5 = (_QWORD *)(a1 + 1912);
  if ( v4 != (_QWORD *)(a1 + 1912) )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v4 + 8);
      if ( v7 != a2 )
      {
        if ( thread_suspend(v7) )
          break;
      }
      v8 = (_QWORD *)v4[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          v9 = (_QWORD *)v4[2];
          v10 = *v9 == (_QWORD)v4;
          v4 = v9;
        }
        while ( !v10 );
      }
      v4 = v9;
      if ( v9 == v5 )
        return 1;
    }
    return 0;
  }
  return result;
}
