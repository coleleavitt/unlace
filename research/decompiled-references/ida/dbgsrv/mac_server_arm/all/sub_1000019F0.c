/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000019F0
// Address: 0x00000001000019F0

//----- (00000001000019F0) ----------------------------------------------------
__int64 __fastcall sub_1000019F0(__int64 a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // x22
  int i; // w23
  _QWORD *v10; // x1
  __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x24

  v6 = qword_10009D910;
  *(_DWORD *)qword_10009D910 = a3;
  *(_DWORD *)(v6 + 4) = a2;
  *(_DWORD *)(v6 + 8) = a4;
  if ( a6 )
  {
    for ( i = 0; i != a6; ++i )
    {
      v10 = *(_QWORD **)(v6 + 16);
      v11 = *(_QWORD *)(v6 + 24);
      v13 = *(_QWORD *)(a5 + 8LL * i);
      if ( *(_QWORD *)(v6 + 32) < (unsigned __int64)(v11 + 1) )
      {
        v10 = qvector_reserve((_QWORD *)(v6 + 16), v10, v11 + 1, 8u);
        *(_QWORD *)(v6 + 16) = v10;
        v11 = *(_QWORD *)(v6 + 24);
        v12 = qword_10009D910;
      }
      else
      {
        v12 = v6;
      }
      v10[v11] = v13;
      ++*(_QWORD *)(v6 + 24);
      v6 = v12;
    }
  }
  return 0;
}
// 10009D910: using guessed type __int64 qword_10009D910;
