__int64 __fastcall sub_1B30E70(unsigned __int64 a1, unsigned __int64 a2, double a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r13
  _BYTE *v7; // r12
  __int64 v8; // rdx
  unsigned int v9; // r12d
  __int64 *v11; // rsi
  __int64 v12; // r14
  __int64 *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // r14
  unsigned __int64 v21; // rbx
  unsigned __int64 *v22; // r15
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // [rsp+8h] [rbp-F0h] BYREF
  __m128i v26; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v28[25]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = sub_BFD550(*(_QWORD *)(a2 + 16));
  v6 = v4;
  if ( (*(_WORD *)v4 & 0x1FF) == 0x62 )
  {
    *(_QWORD *)(a1 + 32) = a2;
    v6 = a2;
  }
  v7 = *(_BYTE **)(a2 + 24);
  v8 = (v7[28] & 0x7Fu) - 49;
  if ( (unsigned int)v8 > 2 )
  {
    v9 = *(unsigned __int8 *)(a1 + 25);
    if ( !(_BYTE)v9 )
    {
      v13 = (__int64 *)(*(_QWORD *)a1 + 8LL);
      sub_168B9F0((__int64)v28, v13, *(_DWORD *)(a1 + 44), 0x1182u, 0);
      v26.m128i_i64[0] = sub_EEC8C0(a2, (__int64)v13, a3);
      sub_1587DB0((__int64)v28, v26.m128i_i64);
      sub_15F7200(v28);
      return v9;
    }
    goto LABEL_5;
  }
  if ( (v7[68] & 1) == 0 )
  {
    v28[0] = *(_QWORD *)(v4 + 8);
    v14 = sub_C1BEF0((__int64)v28, a2, v8, v5);
    if ( sub_F61420(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v16, v17, v18) )
    {
      v9 = *(unsigned __int8 *)(a1 + 25);
      if ( !(_BYTE)v9 )
      {
        v24 = (__int64 *)(*(_QWORD *)a1 + 8LL);
        sub_168B9F0((__int64)v28, v24, *(_DWORD *)(a1 + 44), 0x1219u, 0);
        v26.m128i_i64[0] = sub_EEC8C0(a2, (__int64)v24, a3);
        sub_1587DB0((__int64)v28, v26.m128i_i64);
        sub_15F7200(v28);
        return v9;
      }
    }
    else
    {
      v19 = *(unsigned __int8 *)(a1 + 24);
      v20 = *(_QWORD *)(a1 + 16);
      *(_WORD *)(a1 + 40) = 0;
      v21 = (2 * v19) | a2 & 0xFFFFFFFFFFFFFFFDLL;
      if ( *(_DWORD *)(v20 + 12) <= *(_DWORD *)(v20 + 8) )
      {
        v23 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 32LL))(v7);
        sub_1AF6AE0(v20, v21, v23);
      }
      else
      {
        v22 = (unsigned __int64 *)(*(_QWORD *)v20 + 16LL * *(unsigned int *)(v20 + 8));
        *v22 = v21;
        v22[1] = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 32LL))(v7);
        ++*(_DWORD *)(v20 + 8);
      }
    }
    if ( *(_QWORD *)(a1 + 32) )
      return 1;
    return (unsigned int)sub_1B2FFC0(a1, v6);
  }
  v9 = *(unsigned __int8 *)(a1 + 25);
  if ( (_BYTE)v9 )
  {
LABEL_5:
    v9 = 0;
    if ( *(_QWORD *)(a1 + 32) )
      return v9;
    return (unsigned int)sub_1B2FFC0(a1, v6);
  }
  v11 = (__int64 *)(*(_QWORD *)a1 + 8LL);
  sub_168B9F0((__int64)v28, v11, *(_DWORD *)(a1 + 44), 0x115Cu, 0);
  v25 = sub_EEC8C0(a2, (__int64)v11, a3);
  v12 = sub_1587DB0((__int64)v28, &v25);
  sub_1AF81E0(&v26, *(_DWORD *)(a1 + 8));
  sub_1682AF0(v12, (__int64)&v26);
  if ( (__int64 *)v26.m128i_i64[0] != &v27 )
    operator delete((void *)v26.m128i_i64[0]);
  sub_15F7200(v28);
  return v9;
}
