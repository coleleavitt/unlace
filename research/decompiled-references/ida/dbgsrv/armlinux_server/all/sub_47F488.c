/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F488
// Address: 0x000000000047F488

//----- (000000000047F488) ----------------------------------------------------
__int64 __fastcall sub_47F488(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x2
  unsigned __int64 v5; // x2
  unsigned __int8 *v6; // x0
  unsigned __int8 *i; // x23
  __int64 v8; // x26
  unsigned __int64 v9; // x21
  _BYTE *v10; // x0
  int v11; // w22
  __int64 v12; // x20
  unsigned __int8 *v14[2]; // [xsp+50h] [xbp-10h] BYREF

  *(_QWORD *)(a1 + 8) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 > *(_QWORD *)(a1 + 16) )
  {
    *(_QWORD *)a1 = sub_491288(a1, *(void **)a1, v4, 1u);
    v4 = *(_QWORD *)(a2 + 8);
  }
  if ( v4 )
  {
    v5 = v4 - 1;
    v6 = *(unsigned __int8 **)a2;
    v14[0] = v6;
    for ( i = &v6[v5]; v14[0] != i; v6 = v14[0] )
    {
      v14[0] = v6 + 1;
      v11 = *v6;
      if ( v11 == 92 )
        LOBYTE(v11) = sub_47F168(v14);
      v12 = *(_QWORD *)(a1 + 8);
      if ( v12 )
      {
        v8 = v12 - 1;
        v9 = v12 + 1;
      }
      else
      {
        v12 = 1;
        v9 = 2;
        v8 = 0;
      }
      v10 = *(_BYTE **)a1;
      if ( *(_QWORD *)(a1 + 16) < v9 )
      {
        v10 = sub_491288(a1, *(void **)a1, v9, 1u);
        *(_QWORD *)a1 = v10;
      }
      *(_QWORD *)(a1 + 8) = v9;
      v10[v8] = v11;
      *(_BYTE *)(*(_QWORD *)a1 + v12) = 0;
    }
  }
  return (__int64)v14[1] ^ _stack_chk_guard;
}
// 47F488: could not find valid save-restore pair for x21
// 47F488: could not find valid save-restore pair for x22
// 47F488: could not find valid save-restore pair for x26
