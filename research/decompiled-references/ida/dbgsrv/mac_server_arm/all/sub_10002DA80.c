/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002DA80
// Address: 0x000000010002DA80

//----- (000000010002DA80) ----------------------------------------------------
void __fastcall sub_10002DA80(__int64 a1)
{
  void *v2; // x0
  void *v3; // x0
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x23
  void *v8; // x0
  void *v9; // x0
  void *v10; // x0
  __int64 v11; // x20
  __int64 v12; // x21

  v2 = *(void **)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      v5 = 0;
      do
      {
        v6 = *(_QWORD *)(a1 + 88);
        v7 = v6 + v5;
        v8 = *(void **)(v6 + v5 + 8);
        if ( v8 )
        {
          *(_QWORD *)(v7 + 16) = 0;
          qfree(v8);
          *(_QWORD *)(v7 + 8) = 0;
          *(_QWORD *)(v6 + v5 + 24) = 0;
        }
        v5 += 32;
        --v4;
      }
      while ( v4 );
      v3 = *(void **)(a1 + 88);
    }
    *(_QWORD *)(a1 + 96) = 0;
    qfree(v3);
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
  }
  v9 = *(void **)(a1 + 112);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 120) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 112) = 0;
    *(_QWORD *)(a1 + 128) = 0;
  }
  v10 = *(void **)(a1 + 64);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 72);
    if ( v11 )
    {
      v12 = 0;
      do
      {
        free_idcv((unsigned __int8 *)(*(_QWORD *)(a1 + 64) + v12));
        v12 += 32;
        --v11;
      }
      while ( v11 );
      v10 = *(void **)(a1 + 64);
    }
    *(_QWORD *)(a1 + 72) = 0;
    qfree(v10);
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
  }
  *(_DWORD *)(a1 + 24) = 0;
}
