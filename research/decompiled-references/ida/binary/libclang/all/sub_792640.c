__int64 __fastcall sub_792640(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        int a8,
        __int64 *a9)
{
  int v9; // eax
  __int64 *v10; // r14
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-A80h] BYREF
  unsigned __int128 v15; // [rsp+10h] [rbp-A78h] BYREF
  void *v16[2]; // [rsp+20h] [rbp-A68h] BYREF
  __int64 v17; // [rsp+30h] [rbp-A58h] BYREF
  _QWORD v18[108]; // [rsp+40h] [rbp-A48h] BYREF
  _QWORD v19[11]; // [rsp+3A0h] [rbp-6E8h] BYREF
  char v20; // [rsp+3F9h] [rbp-68Fh]
  _QWORD v21[113]; // [rsp+700h] [rbp-388h] BYREF

  sub_C8D5A0(v18);
  sub_C8D5A0(v19);
  v15 = (unsigned __int64)v15 & 0xFFFF000000000000LL
      | (unsigned __int128)(((unsigned __int64)(v20 & 1) << 47)
                          | ((unsigned __int64)((v19[0] & 0x10000080) == 128) << 34)
                          | ((unsigned __int64)((v19[0] & 0x8000000LL) != 0) << 33)
                          | ((unsigned __int64)((v19[0] & 0x1000LL) == 0) << 30)
                          | ((unsigned __int64)((v19[0] & 0x800LL) == 0) << 29)
                          | ((unsigned __int64)((v19[0] & 2) != 0) << 28)
                          | ((unsigned __int64)((v19[0] & 0x1000LL) != 0) << 27)
                          | ((unsigned __int64)(v19[0] & 1) << 26)
                          | ((unsigned __int64)((v19[0] & 0x800LL) != 0) << 25)
                          | ((unsigned __int64)((v19[0] & 0x1008) != 0) << 24)
                          | ((unsigned __int64)((v19[0] & 0x800LL) != 0) << 9)
                          | 0x660800442002LL
                          | ((unsigned __int64)((v19[0] & 0x4000000LL) != 0) << 23));
  v9 = a7 & 7;
  if ( (unsigned int)(v9 - 3) <= 2 && (v10 = a9) != nullptr )
  {
    if ( v9 == 4 )
    {
      v12 = *(_BYTE **)(a1 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(a1 + 24) )
      {
        sub_26239D0(a1, 126);
      }
      else
      {
        *(_QWORD *)(a1 + 32) = v12 + 1;
        *v12 = 126;
      }
    }
    else if ( v9 == 5 )
    {
      v13 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(a1 + 24) - v13) <= 8 )
      {
        sub_26240F0(a1, "operator ", 9);
      }
      else
      {
        *(_BYTE *)(v13 + 8) = 32;
        *(_QWORD *)v13 = 0x726F74617265706FLL;
        *(_QWORD *)(a1 + 32) += 9LL;
      }
    }
    sub_C8D5A0(v21);
    LODWORD(v15) = v15 & 0xDF7FF5FF | 0x800A00;
    v14 = *v10;
    sub_B2AE60(v16, &v14, &v15);
    sub_26240F0(a1, v16[0], v16[1]);
    if ( v16[0] != &v17 )
      operator delete(v16[0], v17 + 1);
    sub_7916D0(v21);
  }
  else
  {
    sub_790FC0(&a7, a1, (const __m128i *)&v15);
  }
  sub_7916D0(v19);
  sub_7916D0(v18);
  return a1;
}

