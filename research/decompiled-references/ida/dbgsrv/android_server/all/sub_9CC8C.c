/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CC8C
// Address: 0x000000000009CC8C

//----- (000000000009CC8C) ----------------------------------------------------
__int64 __fastcall sub_9CC8C(__int64 result, char a2)
{
  _QWORD *v2; // x21
  _QWORD *v3; // x22
  __int64 v4; // x19
  unsigned int v5; // w20
  _QWORD *v6; // x8
  __int64 v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x9
  _QWORD *v10; // t1

  v2 = *(_QWORD **)(result + 504);
  v3 = (_QWORD *)(result + 512);
  if ( (_QWORD *)(result + 512) != v2 )
  {
    v4 = result;
    v5 = a2 & 1;
    do
    {
      while ( 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v4 + 344LL))(v4, v2, v5);
        v6 = (_QWORD *)v2[1];
        if ( !v6 )
          break;
        do
        {
          v2 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
LABEL_8:
        if ( v3 == v2 )
          return result;
      }
      v7 = (__int64)(v2 + 2);
      v8 = (_QWORD *)v2[2];
      if ( (_QWORD *)*v8 != v2 )
      {
        do
        {
          v9 = *(_QWORD *)v7;
          v10 = *(_QWORD **)(*(_QWORD *)v7 + 16LL);
          v7 = *(_QWORD *)v7 + 16LL;
          v2 = v10;
        }
        while ( *v10 != v9 );
        goto LABEL_8;
      }
      v2 = (_QWORD *)v2[2];
    }
    while ( v3 != v8 );
  }
  return result;
}
