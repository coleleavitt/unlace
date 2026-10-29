/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100032880
// Address: 0x0000000100032880

//----- (0000000100032880) ----------------------------------------------------
void __fastcall sub_100032880(__int64 a1)
{
  unsigned __int64 v2; // x8
  unsigned __int64 v3; // x9
  int v4; // w21
  __int64 v5; // x24
  int v6; // w9
  int v7; // w8
  __int64 v8; // x21
  void *v9; // x0
  __int64 v11; // x20
  void *v12; // x0

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v3 = 0;
    v4 = 1;
    do
    {
      v5 = *(_QWORD *)(a1 + 24) + 56 * v3;
      v6 = *(unsigned __int8 *)(v5 + 24);
      if ( v6 == 5 )
      {
        sub_10003307C(*(_QWORD *)(v5 + 32), (unsigned __int8 *)(v5 + 24));
      }
      else if ( v6 != 6 || qword_1000A4A00 > (unsigned __int64)-*(_DWORD *)(v5 + 32) )
      {
        goto LABEL_5;
      }
      *(_BYTE *)(v5 + 24) = 2;
      *(_QWORD *)(v5 + 32) = 0;
      v2 = *(_QWORD *)(a1 + 32);
LABEL_5:
      v3 = v4++;
    }
    while ( v2 > v3 );
  }
  if ( off_1000A4A28 )
    ((void (*)(void))off_1000A4A28)();
  v7 = *(_DWORD *)(a1 + 8);
  v8 = (unsigned int)(v7 - 1);
  if ( v7 - 1 >= 0 )
  {
    do
    {
      v11 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v8);
      if ( v11 )
      {
        v12 = *(void **)(v11 + 32);
        if ( v12 )
        {
          *(_QWORD *)(v11 + 40) = 0;
          qfree(v12);
          *(_QWORD *)(v11 + 32) = 0;
          *(_QWORD *)(v11 + 48) = 0;
        }
        sub_10003E334(v11, *(_QWORD **)(v11 + 8));
        operator delete((void *)v11);
      }
    }
    while ( v8-- > 0 );
  }
  v9 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v9);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}
// 1000A4A00: using guessed type __int64 qword_1000A4A00;
// 1000A4A28: using guessed type _UNKNOWN *off_1000A4A28;
