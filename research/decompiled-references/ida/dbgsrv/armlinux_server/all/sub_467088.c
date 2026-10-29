/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467088
// Address: 0x0000000000467088

//----- (0000000000467088) ----------------------------------------------------
__int64 __fastcall sub_467088(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // x0
  __int64 v7; // x2
  char *v8; // x1
  _BYTE *v9; // x3
  __int64 v10; // x2
  void *v11; // x0
  __int64 v12; // x4
  __int64 v13; // x1
  __int64 v14; // x5
  int v16; // w0
  __int64 v17; // x2
  _BYTE *v18; // [xsp+30h] [xbp-20h] BYREF
  __int64 v19; // [xsp+38h] [xbp-18h]
  __int64 v20; // [xsp+40h] [xbp-10h]
  __int64 v21; // [xsp+48h] [xbp-8h]

  v18 = nullptr;
  v19 = 0;
  v20 = 0;
  v6 = sub_491288((__int64)&v18, nullptr, 9u, 1u);
  v7 = *a2;
  v18 = v6;
  v19 = 9;
  *v6 = v7;
  v8 = &byte_522118;
  v9 = v18;
  v18[8] = 0;
  v10 = v19;
  if ( v19 )
    v8 = v9;
  if ( *v8 == 47 )
  {
    v16 = strtol(v9 + 1, nullptr, 10);
    if ( v16 > 0 )
    {
      v17 = a3[1];
      if ( v17 )
      {
        if ( v16 < (unsigned __int64)(v17 - 1) )
          sub_466FE8((__int64)&v18, (char *)(*a3 + v16));
      }
    }
    v9 = v18;
    v10 = v19;
  }
  v12 = a1[1];
  v18 = (_BYTE *)*a1;
  v11 = v18;
  v19 = v12;
  v13 = a1[2];
  v14 = v20;
  *a1 = v9;
  a1[1] = v10;
  a1[2] = v14;
  v20 = v13;
  if ( v11 )
  {
    v19 = 0;
    j__free(v11);
  }
  return v21 ^ _stack_chk_guard;
}
// 522118: using guessed type char byte_522118;
