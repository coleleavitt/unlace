unsigned __int64 __fastcall sub_1BAB850(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v8; // rsi
  _WORD *v9; // r12
  __int64 *v10; // r13
  __int64 v11; // rbp
  int v12; // ebx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 result; // rax
  unsigned int v19; // eax
  __m128i v20; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v22[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = a2[2];
  if ( sub_1B73BE0(a1, v8, a3, a6, a7, a4, a5) == 1 )
    return 0;
  v9 = (_WORD *)a2[2];
  v10 = *(__int64 **)(*a1 + 760);
  if ( (*v9 & 0x1FF) == 9 )
  {
    v11 = *a2;
    v12 = *((_DWORD *)a2 + 3);
    v13 = (_QWORD *)sub_168B6C0(*(_QWORD *)(*a1 + 760));
    v16 = v13[294];
    v13[304] += 24LL;
    v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v13[295] >= v17 + 24 && v16 )
    {
      v13[294] = v17 + 24;
      result = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      result = sub_986170((__int64)(v13 + 294), 24, 24, 3, v14, v15);
    }
    *(_QWORD *)result = v11;
    *(_DWORD *)(result + 8) = 59;
    *(_DWORD *)(result + 12) = v12;
    *(_QWORD *)(result + 16) = v9;
  }
  else
  {
    v19 = sub_EEB7E0(a2[2], v8, *(double *)a6.m128_u64);
    sub_168B9F0((__int64)v22, v10, v19, 0x81Au, 0);
    sub_1AF81E0(&v20, 0x3Bu);
    sub_1682AF0((__int64)v22, (__int64)&v20);
    if ( (__int64 *)v20.m128i_i64[0] != &v21 )
      operator delete((void *)v20.m128i_i64[0]);
    sub_15F7200(v22);
    return 0;
  }
  return result;
}
