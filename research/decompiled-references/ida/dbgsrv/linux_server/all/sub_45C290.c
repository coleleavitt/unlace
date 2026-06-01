/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C290
// Address: 0x000000000045C290

//----- (000000000045C290) ----------------------------------------------------
__int64 __fastcall sub_45C290(
        __int64 a1,
        __int64 a2,
        void *a3,
        _DWORD *a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  unsigned int v14; // ebp
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  char v22; // [rsp+0h] [rbp-18h]

  v14 = *(_DWORD *)(a2 + 8);
  v15 = sub_47F6E0(a1, a3, v14, (__int64)a4, a5);
  if ( v14 == v15 )
  {
    if ( qword_4C8250 && *(_BYTE *)(qword_4C8250 + 184) )
    {
      sub_410EA0(
        (int)"Section loaded (%d bytes).\n",
        v14,
        qword_4C8250,
        v16,
        v17,
        v18,
        a6,
        a7,
        a8,
        a9,
        v19,
        v20,
        a12,
        a13,
        v22);
      return 0;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( qword_4C8250 )
    {
      if ( *(_BYTE *)(qword_4C8250 + 184) )
        sub_410EA0(
          (int)"Couldn't read %d bytes of data (read %d).\n",
          v14,
          v15,
          v16,
          v17,
          v18,
          a6,
          a7,
          a8,
          a9,
          v19,
          v20,
          a12,
          a13,
          v22);
    }
    *a4 = 10;
    return 1;
  }
}
// 45C30D: variable 'v16' is possibly undefined
// 45C30D: variable 'v17' is possibly undefined
// 45C30D: variable 'v18' is possibly undefined
// 45C30D: variable 'v19' is possibly undefined
// 45C30D: variable 'v20' is possibly undefined
// 45C30D: variable 'v22' is possibly undefined
// 4C8250: using guessed type __int64 qword_4C8250;
