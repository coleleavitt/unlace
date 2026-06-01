__int64 __fastcall sub_EEF330(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int a9,
        int a10)
{
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  double v20[9]; // [rsp+0h] [rbp-48h] BYREF

  *(_QWORD *)&v20[0] = a6;
  sub_EE9650((_WORD *)a1, 243);
  *(_QWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 48) = a9;
  *(_DWORD *)(a1 + 52) = a10;
  if ( a5 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 16LL))(a5);
    a2[304] += 24LL;
    v16 = v13;
    v17 = a2[294];
    v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= v18 + 24 && v17 )
      a2[294] = v18 + 24;
    else
      v18 = sub_986170((__int64)(a2 + 294), 24, 24, 3, v14, v15);
    sub_EE9650((_WORD *)v18, 245);
    *(_QWORD *)(v18 + 8) = a5;
    *(_QWORD *)(v18 + 16) = v16;
    *(_QWORD *)(a1 + 16) = v18;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0;
  }
  *(_QWORD *)&v20[1] = a4;
  *(_QWORD *)(a1 + 40) = a7;
  *(__m128 *)(a1 + 24) = _mm_loadh_ps(v20);
  *(_DWORD *)(a1 + 4) = a8;
  return a8;
}
