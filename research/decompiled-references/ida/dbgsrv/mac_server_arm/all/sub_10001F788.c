/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001F788
// Address: 0x000000010001F788

//----- (000000010001F788) ----------------------------------------------------
__int64 __fastcall sub_10001F788(_QWORD *a1, __int64 a2)
{
  __int64 v3; // x8
  bool v4; // cf
  unsigned __int64 v5; // x8
  __int64 v6; // x22
  unsigned __int64 v7; // x9
  __int128 v8; // q0
  __int64 v9; // x9
  __int64 v10; // x8
  size_t v11; // x20
  __int64 v12; // x23
  void *v13; // x8
  void *__dst[3]; // [xsp+0h] [xbp-50h] BYREF

  v3 = a1[2];
  v4 = v3 != 0;
  v5 = v3 - 1;
  if ( !v4 )
    v5 = 0;
  v6 = a1[5];
  v7 = a1[9];
  if ( v6 < 0 )
  {
    if ( ((v5 + v6 + 1) & ~((__int64)(v5 + v6 + 1) >> 63)) >= v5 )
      v6 = v5;
    else
      v6 = (v5 + v6 + 1) & ~((__int64)(v5 + v6 + 1) >> 63);
    if ( (v7 & 0x8000000000000000LL) == 0 )
      goto LABEL_5;
  }
  else if ( (v7 & 0x8000000000000000LL) == 0 )
  {
    goto LABEL_5;
  }
  v7 = (v5 + v7 + 1) & ~((__int64)(v5 + v7 + 1) >> 63);
  if ( v7 >= v5 )
    v7 = v5;
LABEL_5:
  v8 = 0u;
  memset(__dst, 0, sizeof(__dst));
  v9 = v7 - v6;
  if ( v9 < 1 || (v10 = v5 - v6, v10 < 1) )
  {
    v13 = nullptr;
  }
  else
  {
    if ( v9 >= (unsigned __int64)v10 )
      v11 = v10;
    else
      v11 = v9;
    v12 = a1[1];
    __dst[0] = qvector_reserve(__dst, nullptr, v11 + 1, 1u);
    __dst[1] = (void *)(v11 + 1);
    *((_BYTE *)__dst[0] + v11) = 0;
    memmove(__dst[0], (const void *)(v12 + v6), v11);
    v13 = __dst[0];
    v8 = *(_OWORD *)&__dst[1];
  }
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 8) = v13;
  *(_OWORD *)(a2 + 16) = v8;
  return 0;
}
