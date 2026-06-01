__int64 __fastcall sub_1B310E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v7; // r15
  unsigned int v8; // ebx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  __int64 v16; // rax
  _QWORD *v17; // rax
  bool v18; // [rsp+1Fh] [rbp-E9h] BYREF
  __m128i v19; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v20; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v23; // [rsp+60h] [rbp-A8h] BYREF
  char v24; // [rsp+B8h] [rbp-50h]
  unsigned int v25; // [rsp+C0h] [rbp-48h]
  char v26; // [rsp+C4h] [rbp-44h]

  v7 = *(_QWORD *)(a1 + 248);
  v8 = sub_1AF8F00(a1, a3, 1, &v18);
  if ( (_BYTE)v8 )
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a5, 4452 - v18, 0);
    sub_1AF81E0(&v19, a4);
    sub_1682AF0((__int64)v21, (__int64)&v19);
    if ( (__int64 *)v19.m128i_i64[0] != &v20 )
      operator delete((void *)v19.m128i_i64[0]);
    sub_15F7200(v21);
    if ( a2 )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 && (unsigned int)sub_B74100(a2, v7) )
        v10 = 5899;
      else
        v10 = 6283;
      sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), v10, 0);
      if ( v24 )
      {
        sub_AE9DF0(&v23, a2, 0xAu);
      }
      else if ( v26 )
      {
        v15 = sub_168B9E0(v21);
        v16 = v22;
        if ( v22 )
          v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
        v19.m128i_i64[0] = v16;
        v17 = sub_1587BC0(v15, v19.m128i_i64, v11, v12, v13, v14);
        sub_AE9DF0((unsigned __int8 **)(*v17 + 32LL * v25 + 8), a2, 0xAu);
      }
      sub_15F7200(v21);
    }
  }
  return v8;
}
