/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46B2D0
// Address: 0x000000000046B2D0

//----- (000000000046B2D0) ----------------------------------------------------
bool __fastcall sub_46B2D0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // x0
  _QWORD *v6; // x1
  _BOOL4 v7; // w20
  unsigned __int64 v9; // x21
  const void *v10; // x24
  void *v11; // x0
  void *ptr; // [xsp+40h] [xbp-20h] BYREF
  __int64 v13; // [xsp+48h] [xbp-18h]
  __int64 v14; // [xsp+50h] [xbp-10h]

  ptr = nullptr;
  v13 = 0;
  v14 = 0;
  sub_46B060(a3, (__int64)&ptr);
  v5 = sub_46B250(a1, (const char **)&ptr);
  v6 = (_QWORD *)(a1 + 8);
  v7 = a2 != 0;
  if ( v5 == v6 )
    v7 = 0;
  if ( v7 && (_QWORD *)a2 != v5 + 7 )
  {
    v9 = v5[8];
    if ( v9 > 1 )
    {
      v10 = (const void *)v5[7];
      v11 = *(void **)a2;
      if ( v9 > *(_QWORD *)(a2 + 16) )
      {
        v11 = sub_491288(a2, *(void **)a2, v9, 1u);
        *(_QWORD *)a2 = v11;
      }
      *(_QWORD *)(a2 + 8) = v9;
      memmove(v11, v10, v9 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v9 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  if ( ptr )
  {
    v13 = 0;
    j__free(ptr);
  }
  return v7;
}
