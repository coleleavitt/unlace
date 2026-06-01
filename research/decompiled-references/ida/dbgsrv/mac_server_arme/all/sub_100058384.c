/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100058384
// Address: 0x0000000100058384

//----- (0000000100058384) ----------------------------------------------------
void __fastcall sub_100058384(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x8
  size_t v7; // x22
  size_t v8; // x22
  __int64 v9; // x23
  void *v10; // [xsp+8h] [xbp-88h] BYREF
  size_t v11; // [xsp+10h] [xbp-80h]
  size_t v12; // [xsp+18h] [xbp-78h]
  void *v13; // [xsp+20h] [xbp-70h]
  size_t v14; // [xsp+28h] [xbp-68h]
  size_t v15; // [xsp+30h] [xbp-60h]
  void *v16; // [xsp+38h] [xbp-58h]
  __int64 v17; // [xsp+40h] [xbp-50h]
  __int64 v18; // [xsp+48h] [xbp-48h]
  int v19; // [xsp+50h] [xbp-40h]
  __int64 vars8; // [xsp+98h] [xbp+8h]

  v5 = a1[1];
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *a1 > a3 || *a1 + 80 * a1[2] <= a3 )
      {
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        sub_1000585F4(a1, a2, a3);
      }
      else
      {
        v10 = nullptr;
        v11 = 0;
        v12 = 0;
        v7 = *(_QWORD *)(a3 + 8);
        if ( v7 )
        {
          v10 = qalloc_or_throw(*(_QWORD *)(a3 + 8));
          v12 = v7;
          memcpy(v10, *(const void **)a3, v7);
          v11 = v7;
        }
        v13 = nullptr;
        v14 = 0;
        v15 = 0;
        v8 = *(_QWORD *)(a3 + 32);
        if ( v8 )
        {
          v13 = qalloc_or_throw(*(_QWORD *)(a3 + 32));
          v15 = v8;
          memcpy(v13, *(const void **)(a3 + 24), v8);
          v14 = v8;
        }
        v16 = nullptr;
        v17 = 0;
        v18 = 0;
        v9 = *(_QWORD *)(a3 + 56);
        if ( v9 )
        {
          v16 = qalloc_or_throw(16 * v9);
          v18 = v9;
          memcpy(v16, *(const void **)(a3 + 48), 16 * v9);
          v17 = v9;
        }
        v19 = *(_DWORD *)(a3 + 72);
        sub_1000585F4(a1, a2, (__int64)&v10);
        if ( v16 )
        {
          v17 = 0;
          qfree(v16);
          v16 = nullptr;
          v18 = 0;
        }
        if ( v13 )
        {
          v14 = 0;
          qfree(v13);
          v13 = nullptr;
          v15 = 0;
        }
        if ( v10 )
        {
          v11 = 0;
          qfree(v10);
        }
      }
    }
  }
  else
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    sub_100057478(a1, a2);
  }
}
