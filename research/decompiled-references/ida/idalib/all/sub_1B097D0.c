unsigned __int64 __fastcall sub_1B097D0(__int64 *a1, _WORD *a2, int a3, int a4, int a5, double a6)
{
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 result; // rax
  unsigned int v15; // eax
  __m128i v16; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v18[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (*a2 & 0x1FF) == 9 )
  {
    v9 = (_QWORD *)sub_168B6C0((__int64)a1);
    v12 = v9[294];
    v9[304] += 24LL;
    v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v9[295] >= v13 + 24 && v12 )
    {
      v9[294] = v13 + 24;
      result = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_986170((__int64)(v9 + 294), 24, 24, 3, v10, v11);
    }
    *(_DWORD *)result = a3;
    *(_DWORD *)(result + 4) = a5;
    *(_DWORD *)(result + 8) = 59;
    *(_DWORD *)(result + 12) = a4;
    *(_QWORD *)(result + 16) = a2;
  }
  else
  {
    v15 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a6);
    sub_168B9F0((__int64)v18, a1, v15, 0x81Au, 0);
    sub_1AF81E0(&v16, 0x3Bu);
    sub_1682AF0((__int64)v18, (__int64)&v16);
    if ( (__int64 *)v16.m128i_i64[0] != &v17 )
      operator delete((void *)v16.m128i_i64[0]);
    sub_15F7200(v18);
    return 0;
  }
  return result;
}
