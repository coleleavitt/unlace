/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431480
// Address: 0x0000000000431480

//----- (0000000000431480) ----------------------------------------------------
__int64 __fastcall sub_431480(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // x0
  FILE *v4; // x1
  __int64 v5; // x0
  void *v6; // x1
  __int64 v8; // x22
  unsigned __int64 v9; // x24
  unsigned __int64 v10; // x23
  unsigned __int64 v11; // x2
  unsigned __int64 v12; // x1
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  unsigned __int64 v14; // [xsp+48h] [xbp-18h]
  unsigned __int64 v15; // [xsp+50h] [xbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 < qword_522130 && (v4 = *(FILE **)(qword_522128 + 8 * v3)) != nullptr )
  {
    ptr = nullptr;
    v14 = 0;
    v15 = 0;
    v5 = sub_490E28((__int64)&ptr, v4);
    v6 = ptr;
    if ( v5 < 0 )
    {
      *(_QWORD *)(a2 + 8) = -1;
      if ( v6 )
      {
        v14 = 0;
        j__free(v6);
      }
    }
    else
    {
      v8 = v14;
      if ( v14 )
      {
        v9 = v14 - 1;
        v10 = v14 + 1;
      }
      else
      {
        v10 = 2;
        v8 = 1;
        v9 = 0;
      }
      if ( v10 > v15 )
      {
        v6 = sub_491288((__int64)&ptr, ptr, v10, 1u);
        ptr = v6;
      }
      v14 = v10;
      *((_BYTE *)v6 + v8) = 0;
      *((_BYTE *)ptr + v9) = 10;
      *(_BYTE *)a2 = 7;
      v11 = v14;
      *(_QWORD *)(a2 + 8) = ptr;
      v12 = v15;
      *(_QWORD *)(a2 + 16) = v11;
      *(_QWORD *)(a2 + 24) = v12;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 522128: using guessed type __int64 qword_522128;
// 522130: using guessed type __int64 qword_522130;
