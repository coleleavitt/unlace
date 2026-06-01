_DWORD *__fastcall sub_1B098F0(__int64 *a1, int a2, int a3, int a4, int a5, unsigned int a6, unsigned int a7, int a8)
{
  bool v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  _DWORD *result; // rax
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // [rsp+18h] [rbp-110h]
  void *v24[2]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v26; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v28[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( a3 || (v12 = a6 != 0, *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x32u) && a6 )
  {
    sub_168B9F0((__int64)v28, a1, a7, 0x1217u, 0);
    sub_1AEE640(v24, 76, 0, 1u, nullptr, 0);
    v22 = sub_1682AF0((__int64)v28, (__int64)v24);
    sub_1AF81E0(&v26, 0x4Cu);
    sub_1682AF0(v22, (__int64)&v26);
    if ( (_BYTE *)v26.m128i_i64[0] != v27 )
      operator delete((void *)v26.m128i_i64[0]);
    if ( v24[0] != v25 )
      operator delete(v24[0]);
    sub_15F7200(v28);
    return nullptr;
  }
  else
  {
    v13 = sub_168B6E0((__int64)a1);
    if ( v12 && a2 == 1 && *(_DWORD *)(v13 + 64) > 0x32u )
    {
      sub_168B9F0((__int64)v28, a1, a6, 0x1217u, 0);
      sub_1AEE640(v24, 76, 2u, 4u, nullptr, 0);
      v23 = sub_1682AF0((__int64)v28, (__int64)v24);
      sub_1AF81E0(&v26, 0x4Cu);
      sub_1682AF0(v23, (__int64)&v26);
      if ( (_BYTE *)v26.m128i_i64[0] != v27 )
        operator delete((void *)v26.m128i_i64[0]);
      if ( v24[0] != v25 )
        operator delete(v24[0]);
      sub_15F7200(v28);
    }
    else if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) > 0x31u )
    {
      *(_BYTE *)(sub_1AE5FF0(a1[1]) + 1080) = 1;
      v20 = sub_1AE5FF0(a1[1]);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 1008);
        if ( v21 )
          sub_15ED1C0(v21, *(_QWORD *)v21, *(_DWORD *)(v21 + 8) | 0x4000000);
      }
    }
    v14 = (_QWORD *)sub_168B6C0((__int64)a1);
    v17 = v14[294];
    v14[304] += 32LL;
    v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v14[295] >= v18 + 32 && v17 )
    {
      v14[294] = v18 + 32;
      result = (_DWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      result = (_DWORD *)sub_986170((__int64)(v14 + 294), 32, 32, 3, v15, v16);
    }
    *result = a4;
    result[2] = 76;
    result[1] = a8;
    result[3] = a5;
    result[4] = 0;
    result[5] = a7;
    result[6] = a2;
    result[7] = a6;
  }
  return result;
}
