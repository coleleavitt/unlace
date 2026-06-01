unsigned __int64 __fastcall sub_1B1BBD0(
        __int64 *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        int a9)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  char v16; // al
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r13
  void *v32[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v34; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v35; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v36[23]; // [rsp+40h] [rbp-B8h] BYREF

  if ( a2 == 1 && a6 )
  {
    sub_1AEE640(v32, 70, 0, 1u, nullptr, 0);
    sub_168B9F0((__int64)v36, a1, a6, 0x1217u, 0);
    v31 = sub_1682A40((__int64)v36, (__int64)v32);
    sub_1AF81E0(&v34, 0x46u);
    sub_1682AF0(v31, (__int64)&v34);
    if ( (__int64 *)v34.m128i_i64[0] != &v35 )
      operator delete((void *)v34.m128i_i64[0]);
    sub_15F7200(v36);
    if ( v32[0] != &v33 )
      operator delete(v32[0]);
    return 0;
  }
  else
  {
    v34.m128i_i64[0] = a3;
    v13 = a1[1];
    v14 = 103;
    v36[0] = 0;
    v15 = *(unsigned int *)(v13 + 344);
    LODWORD(v32[0]) = 103;
    if ( (_DWORD)v15 )
    {
      v26 = *(_QWORD *)(v13 + 336) + 6776 * v15 - 6776;
      if ( *(_QWORD *)(v26 + 6768) == *(_QWORD *)(v13 + 328) )
      {
        v27 = *(unsigned int *)(v26 + 8);
        v28 = *(unsigned int *)(v13 + 27504);
        if ( (unsigned int)v27 > (unsigned int)v28 )
        {
          v29 = v27 - v28;
          if ( v29 )
          {
            v30 = *(_QWORD *)v26 + 1688 * (v29 - 1);
            if ( v30 )
              v14 = *(unsigned int *)(v30 + 976);
          }
        }
      }
    }
    v16 = sub_1B12200((unsigned __int64 *)&v34, *a1, 70, 1, v14, v32, a7, a8, v36);
    v17 = 0;
    if ( v16 )
    {
      v18 = (_QWORD *)sub_168B6C0((__int64)a1);
      v21 = v18[294];
      v18[304] += 48LL;
      v17 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18[295] >= v17 + 48 && v21 )
        v18[294] = v17 + 48;
      else
        v17 = sub_986170((__int64)(v18 + 294), 48, 48, 3, v19, v20);
      v22 = (int)v32[0];
      v23 = v36[0];
      v24 = v34.m128i_i64[0];
      *(_DWORD *)v17 = a4;
      *(_DWORD *)(v17 + 8) = 70;
      *(_DWORD *)(v17 + 4) = a9;
      *(_DWORD *)(v17 + 28) = a5;
      *(_DWORD *)(v17 + 32) = a2;
      *(_DWORD *)(v17 + 36) = a6;
      *(_QWORD *)(v17 + 40) = v24;
      *(_QWORD *)(v17 + 16) = v23;
      *(_DWORD *)(v17 + 24) = v22;
    }
  }
  return v17;
}
