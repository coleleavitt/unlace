/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_981EC
// Address: 0x00000000000981EC

//----- (00000000000981EC) ----------------------------------------------------
void __fastcall sub_981EC(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v5; // x8
  __int64 v7; // x8
  size_t v8; // x22
  int v9; // w8
  size_t v10; // x22
  __int64 v11; // [xsp+8h] [xbp-1F8h] BYREF
  void *v12; // [xsp+10h] [xbp-1F0h]
  size_t v13; // [xsp+18h] [xbp-1E8h]
  size_t v14; // [xsp+20h] [xbp-1E0h]
  int v15; // [xsp+28h] [xbp-1D8h]
  void *ptr; // [xsp+30h] [xbp-1D0h]
  size_t v17; // [xsp+38h] [xbp-1C8h]
  size_t v18; // [xsp+40h] [xbp-1C0h]
  _QWORD v19[47]; // [xsp+48h] [xbp-1B8h] BYREF

  v19[46] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 <= a2 )
  {
    if ( v5 < a2 )
    {
      if ( *(_QWORD *)a1 > a3 || *(_QWORD *)a1 + 432LL * *(_QWORD *)(a1 + 16) <= a3 )
      {
        sub_983C8((char **)a1, a2, a3);
      }
      else
      {
        v7 = *(_QWORD *)a3;
        v13 = 0;
        v14 = 0;
        v11 = v7;
        v12 = nullptr;
        v8 = *(_QWORD *)(a3 + 16);
        if ( v8 )
        {
          v12 = qalloc_or_throw(*(_QWORD *)(a3 + 16));
          v14 = v8;
          memcpy(v12, *(const void **)(a3 + 8), v8);
          v13 = v8;
        }
        v9 = *(_DWORD *)(a3 + 32);
        v17 = 0;
        v18 = 0;
        ptr = nullptr;
        v15 = v9;
        v10 = *(_QWORD *)(a3 + 48);
        if ( v10 )
        {
          ptr = qalloc_or_throw(*(_QWORD *)(a3 + 48));
          v18 = v10;
          memcpy(ptr, *(const void **)(a3 + 40), v10);
          v17 = v10;
        }
        memcpy(v19, (const void *)(a3 + 64), 0x170u);
        sub_983C8((char **)a1, a2, (__int64)&v11);
        if ( ptr )
        {
          v17 = 0;
          qfree(ptr);
          ptr = nullptr;
          v18 = 0;
        }
        if ( v12 )
        {
          v13 = 0;
          qfree(v12);
          v12 = nullptr;
          v14 = 0;
        }
      }
    }
  }
  else
  {
    sub_9814C((__int64 *)a1, a2);
  }
}
