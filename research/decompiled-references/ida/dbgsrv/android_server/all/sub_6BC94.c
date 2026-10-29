/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BC94
// Address: 0x000000000006BC94

//----- (000000000006BC94) ----------------------------------------------------
void __fastcall sub_6BC94(__int64 a1)
{
  __int64 *v1; // x20
  __int64 v3; // x22
  void *v4; // x21
  int v5; // w1
  int v6; // w2
  int v7; // w3
  int v8; // w4
  int v9; // w5
  int v10; // w6
  int v11; // w7
  _QWORD *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int v15; // w3
  int v16; // w4
  int v17; // w5
  int v18; // w6
  int v19; // w7
  __int64 v20; // [xsp+0h] [xbp-30h]
  int v21; // [xsp+8h] [xbp-28h]
  __int64 v22; // [xsp+10h] [xbp-20h]

  v1 = *(__int64 **)a1;
  v3 = 8LL * *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    do
    {
      v4 = (void *)*v1;
      if ( *v1 )
      {
        sub_6BD28(*v1);
        operator delete(v4);
      }
      v3 -= 8;
      ++v1;
    }
    while ( v3 );
    v1 = *(__int64 **)a1;
  }
  if ( v1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
  sub_6B764(a1);
  sub_6DDB0(a1 + 64);
  sub_7EEFC(*(void ***)(a1 + 24), v5, v6, v7, v8, v9, v10, v11, v20, v21, v22);
  v12 = *(_QWORD **)(a1 + 32);
  *(_QWORD *)(a1 + 24) = 0;
  destroy_lexer(v12, v13, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(a1 + 32) = 0;
}
// 6BD04: variable 'v5' is possibly undefined
// 6BD04: variable 'v6' is possibly undefined
// 6BD04: variable 'v7' is possibly undefined
// 6BD04: variable 'v8' is possibly undefined
// 6BD04: variable 'v9' is possibly undefined
// 6BD04: variable 'v10' is possibly undefined
// 6BD04: variable 'v11' is possibly undefined
// 6BD04: variable 'v20' is possibly undefined
// 6BD04: variable 'v21' is possibly undefined
// 6BD04: variable 'v22' is possibly undefined
// 6BD10: variable 'v13' is possibly undefined
// 6BD10: variable 'v14' is possibly undefined
// 6BD10: variable 'v15' is possibly undefined
// 6BD10: variable 'v16' is possibly undefined
// 6BD10: variable 'v17' is possibly undefined
// 6BD10: variable 'v18' is possibly undefined
// 6BD10: variable 'v19' is possibly undefined
// 6DDB0: using guessed type __int64 __fastcall sub_6DDB0(_QWORD);
