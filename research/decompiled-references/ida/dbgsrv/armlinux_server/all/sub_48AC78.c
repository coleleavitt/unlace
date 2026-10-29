/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48AC78
// Address: 0x000000000048AC78

//----- (000000000048AC78) ----------------------------------------------------
__int64 __fastcall sub_48AC78(__int64 a1, char *s)
{
  bool v3; // zf
  const char *v5; // x0
  const char *i; // x19
  size_t v7; // x0
  size_t v8; // x26
  size_t v9; // x25
  char *v10; // x0
  unsigned __int64 v11; // x1
  __int64 v12; // x3
  unsigned __int64 v13; // x2
  void *v14; // x19
  void *v15; // x26
  void *v16; // x25
  char *v17; // x1
  void *v18; // x0
  void **v19; // x1
  const char *v20; // [xsp+58h] [xbp-28h] BYREF
  void *ptr; // [xsp+60h] [xbp-20h] BYREF
  void *v22; // [xsp+68h] [xbp-18h]
  void *v23; // [xsp+70h] [xbp-10h]
  __int64 v24; // [xsp+78h] [xbp-8h]

  if ( a1 )
    v3 = s == nullptr;
  else
    v3 = 1;
  if ( !v3 )
  {
    v5 = sub_4930F8(s, ":", &v20);
    for ( i = v5; i; i = sub_4930F8(nullptr, ":", &v20) )
    {
      if ( *i )
      {
        ptr = nullptr;
        v22 = nullptr;
        v23 = nullptr;
        v7 = strlen(i);
        v8 = v7 + 1;
        v9 = v7;
        ptr = sub_491288((__int64)&ptr, nullptr, v7 + 1, 1u);
        v22 = (void *)v8;
        memmove(ptr, i, v9);
        *((_BYTE *)ptr + v9) = 0;
        v10 = *(char **)a1;
        if ( *(_QWORD *)a1 > (unsigned __int64)&ptr )
        {
          v12 = *(_QWORD *)(a1 + 8);
          v11 = *(_QWORD *)(a1 + 16);
          v13 = v12 + 1;
LABEL_18:
          if ( v11 < v13 )
          {
            v10 = (char *)sub_491288(a1, *(void **)a1, v13, 0x18u);
            v12 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)a1 = v10;
          }
          v19 = (void **)&v10[24 * v12];
          *v19 = ptr;
          v19[1] = v22;
          v19[2] = v23;
          ++*(_QWORD *)(a1 + 8);
          continue;
        }
        v12 = *(_QWORD *)(a1 + 8);
        v11 = *(_QWORD *)(a1 + 16);
        v13 = v12 + 1;
        if ( &ptr >= (void **)&v10[24 * v11] )
          goto LABEL_18;
        v14 = ptr;
        v15 = v22;
        ptr = nullptr;
        v22 = nullptr;
        v16 = v23;
        v23 = nullptr;
        if ( v11 < v13 )
        {
          v10 = (char *)sub_491288(a1, v10, v13, 0x18u);
          v12 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v10;
        }
        v17 = &v10[24 * v12];
        *(_QWORD *)v17 = v14;
        *((_QWORD *)v17 + 1) = v15;
        *((_QWORD *)v17 + 2) = v16;
        v18 = ptr;
        ++*(_QWORD *)(a1 + 8);
        if ( v18 )
        {
          v22 = nullptr;
          j__free(v18);
        }
      }
    }
  }
  return v24 ^ _stack_chk_guard;
}
// 48AC78: could not find valid save-restore pair for x25
// 48AC78: could not find valid save-restore pair for x26
