/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D538
// Address: 0x000000000044D538

//----- (000000000044D538) ----------------------------------------------------
__int64 __fastcall sub_44D538(__int64 *a1)
{
  unsigned int v2; // w23
  __int64 v3; // x0
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  const char *v8; // x22
  int v9; // w4
  int v10; // w5
  int v11; // w6
  int v12; // w7
  size_t v13; // x0
  size_t v14; // x24
  char v16; // [xsp+0h] [xbp-70h]
  char v17; // [xsp+0h] [xbp-70h]
  char v18[8]; // [xsp+48h] [xbp-28h] BYREF
  void *v19; // [xsp+50h] [xbp-20h] BYREF
  size_t v20; // [xsp+58h] [xbp-18h]
  __int64 v21; // [xsp+60h] [xbp-10h]
  __int64 v22; // [xsp+68h] [xbp-8h]

  v2 = sub_4869A0();
  v3 = sub_43E668("exception");
  sub_449F40(a1, v3);
  v18[0] = 2;
  v19 = (void *)(int)v2;
  v20 = 0;
  v21 = 0;
  sub_44D010((__int64)a1, "qerrno", (__int64 *)v18, 0, v4, v5, v6, v7, v16);
  v8 = sub_493840(-1);
  sub_448310((__int64 *)v18);
  if ( v8 )
  {
    v13 = strlen(v8);
    v19 = nullptr;
    v20 = 0;
    v14 = v13;
    v21 = 0;
    v18[0] = 7;
    if ( v13 )
    {
      v19 = sub_491288((__int64)&v19, nullptr, v13 + 1, 1u);
      v20 = v14 + 1;
      memmove(v19, v8, v14);
      *((_BYTE *)v19 + v14) = 0;
    }
  }
  else
  {
    v18[0] = 7;
    v19 = nullptr;
    v20 = 0;
    v21 = 0;
  }
  sub_44D010((__int64)a1, "description", (__int64 *)v18, 0, v9, v10, v11, v12, v17);
  sub_4869C8(v2);
  sub_448310((__int64 *)v18);
  return v22 ^ _stack_chk_guard;
}
// 44D538: could not find valid save-restore pair for x24
// 44D5AC: variable 'v4' is possibly undefined
// 44D5AC: variable 'v5' is possibly undefined
// 44D5AC: variable 'v6' is possibly undefined
// 44D5AC: variable 'v7' is possibly undefined
// 44D5AC: variable 'v16' is possibly undefined
// 44D638: variable 'v9' is possibly undefined
// 44D638: variable 'v10' is possibly undefined
// 44D638: variable 'v11' is possibly undefined
// 44D638: variable 'v12' is possibly undefined
// 44D638: variable 'v17' is possibly undefined
