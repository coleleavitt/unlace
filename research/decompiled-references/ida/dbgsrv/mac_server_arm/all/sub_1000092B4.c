/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000092B4
// Address: 0x00000001000092B4

//----- (00000001000092B4) ----------------------------------------------------
__int64 __fastcall sub_1000092B4(__int64 a1)
{
  void **v2; // x21
  void **v3; // x22
  _QWORD *v4; // x23
  unsigned __int64 v5; // x9
  void **v6; // x24
  __int64 v7; // x20
  unsigned __int64 v8; // x25
  __int64 v9; // t1
  void **v10; // x8
  unsigned __int64 v11; // x8
  __int64 v12; // x8
  void *v13; // t1
  __int64 v14; // x8
  __int64 v15; // x9

  v2 = *(void ***)(a1 + 8);
  v3 = *(void ***)(a1 + 16);
  if ( v3 == v2 )
  {
    v4 = (_QWORD *)(a1 + 40);
    v10 = *(void ***)(a1 + 8);
  }
  else
  {
    v4 = (_QWORD *)(a1 + 40);
    v5 = *(_QWORD *)(a1 + 32);
    v6 = &v2[v5 / 0x38];
    v7 = (__int64)*v6 + 72 * (v5 % 0x38);
    v8 = (unsigned __int64)v2[(*(_QWORD *)(a1 + 40) + v5) / 0x38] + 72 * ((*(_QWORD *)(a1 + 40) + v5) % 0x38);
    if ( v7 != v8 )
    {
      do
      {
        free_debug_event(v7);
        v7 += 72;
        if ( v7 - (_QWORD)*v6 == 4032 )
        {
          v9 = (__int64)v6[1];
          ++v6;
          v7 = v9;
        }
      }
      while ( v7 != v8 );
      v2 = *(void ***)(a1 + 8);
      v3 = *(void ***)(a1 + 16);
    }
    v10 = v3;
  }
  *v4 = 0;
  v11 = v10 - v2;
  if ( v11 >= 3 )
  {
    do
    {
      operator delete(*v2);
      v3 = *(void ***)(a1 + 16);
      v2 = (void **)(*(_QWORD *)(a1 + 8) + 8LL);
      *(_QWORD *)(a1 + 8) = v2;
      v11 = v3 - v2;
    }
    while ( v11 > 2 );
  }
  if ( v11 == 1 )
  {
    v12 = 28;
    goto LABEL_16;
  }
  if ( v11 == 2 )
  {
    v12 = 56;
LABEL_16:
    *(_QWORD *)(a1 + 32) = v12;
  }
  if ( v2 != v3 )
  {
    do
    {
      v13 = *v2++;
      operator delete(v13);
    }
    while ( v2 != v3 );
    v15 = *(_QWORD *)(a1 + 8);
    v14 = *(_QWORD *)(a1 + 16);
    if ( v14 != v15 )
    {
      do
        v14 -= 8;
      while ( v14 != v15 );
      *(_QWORD *)(a1 + 16) = v14;
    }
  }
  if ( *(_QWORD *)a1 )
    operator delete(*(void **)a1);
  return a1;
}
