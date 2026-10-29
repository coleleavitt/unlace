/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100022F74
// Address: 0x0000000100022F74

//----- (0000000100022F74) ----------------------------------------------------
void __fastcall sub_100022F74(__int64 a1, char *__s, unsigned int a3)
{
  __int64 v3; // x21
  int v7; // w22
  size_t v8; // x24
  void *v9; // x0
  void *v10; // [xsp+0h] [xbp-60h] BYREF
  size_t v11; // [xsp+8h] [xbp-58h]
  __int64 v12; // [xsp+10h] [xbp-50h]

  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
  {
    v7 = *(_DWORD *)(a1 + 208);
    v10 = nullptr;
    v11 = 0;
    v12 = 0;
    if ( __s )
    {
      v8 = strlen(__s);
      if ( v8 == -1 )
      {
        v9 = nullptr;
      }
      else
      {
        v9 = qvector_reserve(&v10, nullptr, v8 + 1, 1u);
        v10 = v9;
      }
      v11 = v8 + 1;
      memmove(v9, __s, v8);
      *((_BYTE *)v10 + v8) = 0;
    }
    sub_10002E530(v3, v7, (__int64)&v10);
    if ( v10 )
    {
      v11 = 0;
      qfree(v10);
    }
    sub_10002E84C(*(_QWORD *)(a1 + 192), *(_DWORD *)(a1 + 208), a3);
  }
}
