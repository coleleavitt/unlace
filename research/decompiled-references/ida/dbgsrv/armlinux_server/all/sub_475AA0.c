/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_475AA0
// Address: 0x0000000000475AA0

//----- (0000000000475AA0) ----------------------------------------------------
__int64 __fastcall sub_475AA0(__int64 a1, char *a2, __int64 *a3)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x2
  __int64 v7; // x3
  _QWORD *v8; // t2
  __time_t v9; // x0
  const char *v10; // x3
  unsigned int v11; // w20
  __int64 v13[4]; // [xsp+20h] [xbp-60h] BYREF
  void *ptr; // [xsp+40h] [xbp-40h] BYREF
  __int64 v15; // [xsp+48h] [xbp-38h]
  __int64 v16; // [xsp+50h] [xbp-30h]
  char v17[32]; // [xsp+58h] [xbp-28h] BYREF

  v4 = *a3;
  v5 = a3[1];
  v8 = a3 + 2;
  v6 = a3[2];
  v7 = v8[1];
  v13[0] = v4;
  v13[1] = v5;
  v13[2] = v6;
  v13[3] = v7;
  ptr = nullptr;
  v15 = 0;
  v16 = 0;
  sub_40CC60((__int64)&ptr, a2, v13);
  v9 = sub_4926B8();
  sub_477950(v17, 0x19u, v9, 0);
  v10 = (const char *)ptr;
  if ( !v15 )
    v10 = (const char *)&qword_4B2D48;
  v11 = sub_47B4D0("%s [%u] %s", v17, *(_DWORD *)(a1 + 168), v10);
  if ( ptr )
  {
    v15 = 0;
    j__free(ptr);
  }
  return v11;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4C8FE0: using guessed type __int64 qword_4C8FE0[16];
