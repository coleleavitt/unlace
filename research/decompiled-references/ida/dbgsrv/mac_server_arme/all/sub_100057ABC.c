/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100057ABC
// Address: 0x0000000100057ABC

//----- (0000000100057ABC) ----------------------------------------------------
void __fastcall sub_100057ABC(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x8
  unsigned __int64 v6; // x22
  __int64 v7; // x21
  unsigned __int64 v8; // x24
  _QWORD *v9; // x23
  void *v10; // x0
  void *v11; // x0
  unsigned __int64 v12; // x24
  size_t v14; // x22
  size_t v15; // x22
  __int64 v16; // [xsp+8h] [xbp-1F8h] BYREF
  void *v17; // [xsp+10h] [xbp-1F0h]
  size_t v18; // [xsp+18h] [xbp-1E8h]
  size_t v19; // [xsp+20h] [xbp-1E0h]
  int v20; // [xsp+28h] [xbp-1D8h]
  void *v21; // [xsp+30h] [xbp-1D0h]
  size_t v22; // [xsp+38h] [xbp-1C8h]
  size_t v23; // [xsp+40h] [xbp-1C0h]
  _BYTE v24[368]; // [xsp+48h] [xbp-1B8h] BYREF
  __int64 vars8; // [xsp+208h] [xbp+8h]

  v5 = a1[1];
  v6 = v5 - a2;
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *a1 > a3 || *a1 + 432 * a1[2] <= a3 )
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        sub_100057D1C((__int64)a1, a2, (__int64 *)a3);
      }
      else
      {
        v16 = *(_QWORD *)a3;
        v17 = nullptr;
        v18 = 0;
        v19 = 0;
        v14 = *(_QWORD *)(a3 + 16);
        if ( v14 )
        {
          v17 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          v19 = v14;
          memcpy(v17, *(const void **)(a3 + 8), v14);
          v18 = v14;
        }
        v20 = *(_DWORD *)(a3 + 32);
        v22 = 0;
        v23 = 0;
        v21 = nullptr;
        v15 = *(_QWORD *)(a3 + 48);
        if ( v15 )
        {
          v21 = qalloc_or_throw(*(_QWORD *)(a3 + 48));
          v23 = v15;
          memcpy(v21, *(const void **)(a3 + 40), v15);
          v22 = v15;
        }
        memcpy(v24, (const void *)(a3 + 64), sizeof(v24));
        sub_100057D1C((__int64)a1, a2, &v16);
        if ( v21 )
        {
          v22 = 0;
          qfree(v21);
          v21 = nullptr;
          v23 = 0;
        }
        if ( v17 )
        {
          v18 = 0;
          qfree(v17);
        }
      }
    }
  }
  else
  {
    v7 = 432 * a2;
    do
    {
      v8 = *a1;
      v9 = (_QWORD *)(*a1 + v7);
      v10 = (void *)v9[5];
      if ( v10 )
      {
        v9[6] = 0;
        qfree(v10);
        v9[5] = 0;
        *(_QWORD *)(v8 + v7 + 56) = 0;
      }
      v11 = (void *)v9[1];
      if ( v11 )
      {
        v12 = v8 + v7;
        *(_QWORD *)(v12 + 16) = 0;
        qfree(v11);
        v9[1] = 0;
        *(_QWORD *)(v12 + 24) = 0;
      }
      v7 += 432;
      --v6;
    }
    while ( v6 );
    a1[1] = a2;
  }
}
