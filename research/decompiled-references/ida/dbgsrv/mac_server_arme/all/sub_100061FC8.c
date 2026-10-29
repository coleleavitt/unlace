/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100061FC8
// Address: 0x0000000100061FC8

//----- (0000000100061FC8) ----------------------------------------------------
__int64 __fastcall sub_100061FC8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x0
  _QWORD *v5; // x21
  _QWORD *v6; // x10
  _QWORD *v7; // x9
  bool v8; // zf
  _QWORD *v9; // x9
  _QWORD *v10; // x8
  _QWORD *v11; // x9
  __int64 *v12; // x8
  __int64 result; // x0
  __int64 (__fastcall *v14)(__int64); // x1
  __int64 _28; // [xsp+28h] [xbp+8h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD **)(a1 + 88);
  v5 = (_QWORD *)v4[1];
  if ( v5 != v4 + 2 )
  {
    while ( v5[4] != a2 )
    {
      v6 = (_QWORD *)v5[1];
      if ( v6 )
      {
        do
        {
          v7 = v6;
          v6 = (_QWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        do
        {
          v7 = (_QWORD *)v5[2];
          v8 = *v7 == (_QWORD)v5;
          v5 = v7;
        }
        while ( !v8 );
      }
      v5 = v7;
      if ( v7 == v4 + 2 )
        goto LABEL_22;
    }
    if ( v5[5] )
    {
      qthread_free((pthread_t)v5[5]);
      v4 = *(_QWORD **)(a1 + 88);
    }
    v9 = (_QWORD *)v5[1];
    if ( v9 )
    {
      do
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
    }
    else
    {
      v11 = v5;
      do
      {
        v10 = (_QWORD *)v11[2];
        v8 = *v10 == (_QWORD)v11;
        v11 = v10;
      }
      while ( !v8 );
    }
    if ( (_QWORD *)v4[1] == v5 )
      v4[1] = v10;
    v12 = (__int64 *)v4[2];
    --v4[3];
    sub_10000BEF0(v12, v5);
    operator delete(v5);
    v4 = *(_QWORD **)(a1 + 88);
  }
LABEL_22:
  result = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  if ( a2 )
  {
    v14 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL);
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v14(a2);
  }
  return result;
}
// 100062138: variable '_28' is possibly undefined
