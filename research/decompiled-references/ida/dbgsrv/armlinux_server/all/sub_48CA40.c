/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48CA40
// Address: 0x000000000048CA40

//----- (000000000048CA40) ----------------------------------------------------
__int64 __fastcall sub_48CA40(__int64 a1, size_t a2, __int64 a3, unsigned __int64 a4)
{
  size_t v4; // x19
  void *v8; // x1
  __int64 v9; // x23
  size_t v10; // x20
  signed __int64 v11; // x21
  __int64 v12; // x0
  char v13; // w0
  void *v15; // [xsp+60h] [xbp-30h] BYREF
  signed __int64 v16; // [xsp+68h] [xbp-28h] BYREF
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v18; // [xsp+78h] [xbp-18h]
  __int64 v19; // [xsp+80h] [xbp-10h]

  v4 = a2;
  ptr = nullptr;
  v18 = 0;
  v19 = 0;
  if ( !a4 )
  {
    if ( !a2 )
      return 0;
    v8 = nullptr;
    goto LABEL_4;
  }
  ptr = sub_491288((__int64)&ptr, nullptr, a4, 1u);
  v18 = a4;
  v8 = ptr;
  if ( v4 )
  {
LABEL_4:
    v9 = 0;
    while ( 1 )
    {
      if ( a4 > v4 )
        v10 = v4;
      else
        v10 = a4;
      v11 = sub_48C160(a1, v8, v10);
      v8 = ptr;
      if ( v11 > 0 )
      {
        v12 = *(_QWORD *)(a3 + 16);
        v15 = ptr;
        v16 = v11;
        if ( !v12 )
          sub_4A0298();
        v13 = (*(__int64 (__fastcall **)(__int64, void **, signed __int64 *))(a3 + 24))(a3, &v15, &v16);
        v8 = ptr;
        if ( !v13 )
        {
          v9 = -1;
          goto LABEL_15;
        }
      }
      v9 += v11;
      if ( v10 != v11 )
        break;
      v4 -= v10;
      if ( !v4 )
        goto LABEL_15;
    }
    if ( v11 < 0 )
      v9 = -1;
    goto LABEL_15;
  }
  v9 = 0;
LABEL_15:
  if ( v8 )
  {
    v18 = 0;
    j__free(v8);
  }
  return v9;
}
