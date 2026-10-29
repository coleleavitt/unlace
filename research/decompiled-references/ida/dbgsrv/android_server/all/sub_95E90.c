/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_95E90
// Address: 0x0000000000095E90

//----- (0000000000095E90) ----------------------------------------------------
__int64 __fastcall sub_95E90(__int64 a1, __int64 *a2)
{
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x10
  void **v6; // x0
  unsigned __int64 v7; // x21
  __int64 v8; // x22
  unsigned __int64 v9; // x23
  void *v10; // x8
  void **v11; // x24
  __int64 v13; // [xsp+0h] [xbp-60h]
  __int64 v14; // [xsp+8h] [xbp-58h]
  __int64 v15; // [xsp+10h] [xbp-50h]
  __int64 v16; // [xsp+18h] [xbp-48h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = *a2;
  v4 = a2[1];
  v13 = *a2;
  v14 = v4;
  v5 = a2[2];
  *a2 = 0;
  a2[1] = 0;
  v15 = v5;
  a2[2] = 0;
  v6 = *(void ***)a1;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      v8 = 0;
      v9 = 1;
      v10 = *v6;
      if ( *v6 )
        goto LABEL_6;
      while ( v9 < v7 )
      {
        v6 = *(void ***)a1;
        ++v9;
        v8 += 3;
        v10 = *(void **)(*(_QWORD *)a1 + v8 * 8);
        if ( v10 )
        {
LABEL_6:
          v11 = &v6[v8];
          v6[v8 + 1] = nullptr;
          qfree(v10);
          *v11 = nullptr;
          v11[2] = nullptr;
        }
      }
      v6 = *(void ***)a1;
    }
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v6);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    v3 = v13;
    v4 = v14;
    v5 = v15;
  }
  *(_QWORD *)a1 = v3;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 16) = v5;
  return a1;
}
