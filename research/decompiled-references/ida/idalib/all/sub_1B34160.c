unsigned __int64 __fastcall sub_1B34160(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        double a7,
        double a8)
{
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 result; // rax
  __int64 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // r12
  __int64 v21; // rdx
  _QWORD v22[2]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v23; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v25[200]; // [rsp+30h] [rbp-C8h] BYREF

  if ( a2 )
  {
    if ( !(unsigned __int8)sub_1B33C80(*a1, a2, a5, 24, a7, a8) )
      return 0;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(sub_168B6E0((__int64)a1) + 64) <= 0x33u
    || (v18 = sub_1AE5FF0(a1[1])) == 0
    || *(_DWORD *)(v18 + 976) != 17 )
  {
LABEL_3:
    v12 = (_QWORD *)sub_168B6C0((__int64)a1);
    v15 = v12[294];
    v12[304] += 32LL;
    v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v12[295] >= v16 + 32 && v15 )
    {
      v12[294] = v16 + 32;
      result = (v15 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_986170((__int64)(v12 + 294), 32, 32, 3, v13, v14);
    }
    *(_DWORD *)result = a3;
    *(_DWORD *)(result + 4) = a6;
    *(_DWORD *)(result + 8) = 24;
    *(_DWORD *)(result + 12) = a4;
    *(_DWORD *)(result + 16) = a5;
    *(_QWORD *)(result + 24) = a2;
    return result;
  }
  v19 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
  sub_168B9F0((__int64)v25, a1, a3, 0x704u, 0);
  sub_1AF81E0(&v23, 0x18u);
  v20 = sub_1682AF0((__int64)v25, (__int64)&v23);
  v22[0] = sub_20EAB70(17, v19);
  v22[1] = v21;
  sub_166BAF0(v20, (__int64)v22);
  if ( (__int64 *)v23.m128i_i64[0] != &v24 )
    operator delete((void *)v23.m128i_i64[0]);
  sub_15F7200(v25);
  return 0;
}
