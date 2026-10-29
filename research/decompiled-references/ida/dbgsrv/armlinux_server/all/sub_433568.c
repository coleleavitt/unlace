/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_433568
// Address: 0x0000000000433568

//----- (0000000000433568) ----------------------------------------------------
__int64 __fastcall sub_433568(_QWORD *a1)
{
  __int64 v2; // x24
  const char *v3; // x22
  _DWORD *v4; // x21
  _QWORD *v5; // x0
  _QWORD *v6; // x19
  size_t v7; // x23
  void *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2

  v2 = *(_QWORD *)(a1[43] + 8LL * a1[44] - 8);
  if ( a1[6] )
    v3 = (const char *)a1[5];
  else
    v3 = (const char *)&qword_4B2D48;
  v4 = sub_49E050(0x20u);
  *v4 = 5;
  v4[6] = 0;
  v5 = sub_49E050(0x18u);
  *v5 = 0;
  v5[1] = 0;
  v6 = v5;
  v5[2] = 0;
  if ( v3 )
  {
    v7 = strlen(v3);
    v8 = sub_491288((__int64)v6, nullptr, v7 + 1, 1u);
    *v6 = v8;
    v6[1] = v7 + 1;
    memmove(v8, v3, v7);
    *(_BYTE *)(*v6 + v7) = 0;
  }
  v10 = a1[43];
  v9 = a1[44];
  *((_QWORD *)v4 + 1) = v6;
  *((_QWORD *)v4 + 2) = v2;
  *(_QWORD *)(v10 + 8 * v9 - 8) = v4;
  return 0;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
