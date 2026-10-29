void __fastcall sub_1A1D3B0(__int64 *a1, __int64 a2, unsigned __int64 a3, __int64 a4, double a5, __m128 a6)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // r9d
  _QWORD *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // [rsp+8h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+18h] [rbp-C0h] BYREF
  void *v22; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v24; // [rsp+30h] [rbp-A8h]
  int v25; // [rsp+38h] [rbp-A0h]
  __int64 v26; // [rsp+40h] [rbp-98h]

  v8 = *(_QWORD *)(a2 + 16);
  v9 = a1[29];
  v20 = 0;
  v19 = v8;
  if ( (*(_BYTE *)(v9 + 1) & 0x10) != 0 && (unsigned __int8)sub_1844E60((__int64)a1, v8, &v20) )
  {
    v15 = (_QWORD *)a1[31];
    v16 = (__int64)(*(_QWORD *)(a3 + 24) - *(_QWORD *)(a3 + 16)) >> 3;
    v17 = sub_A63CE0(v15);
    LODWORD(v23) = sub_A97D20((__int64)v15, *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL));
    if ( (unsigned int)v23 > 0x40 )
      sub_2205470(&v22, (unsigned int)v16, 0);
    else
      v22 = (void *)(unsigned int)v16;
    v18 = sub_A70F70((__int64)v15, v20 | 1, (__int64)&v22, nullptr, 0, 0);
    if ( (unsigned int)v23 > 0x40 && v22 )
      operator delete[](v22);
    v24 = v18;
    LODWORD(v22) = 9;
    v23 = 0;
    v25 = 0;
    v26 = 0;
    sub_1A1D3B0(a1, &v22, a3);
  }
  else
  {
    v10 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
      while ( 1 )
      {
        v11 = (unsigned int)*(unsigned __int8 *)(v10 + 16) - 43;
        if ( (unsigned int)v11 > 1 )
          v10 = sub_F63050(v10, v8, v11, a4);
        v12 = *(_QWORD *)(v10 + 32);
        if ( (*(_BYTE *)(v10 + 18) & 0x10) == 0 )
          break;
        v10 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
      }
      v21 = *(_QWORD *)(v10 + 32);
      v24 = v12;
      LODWORD(v22) = 9;
      v23 = 0;
      v25 = 0;
      v26 = 0;
      sub_1A1D3B0(a1, &v22, a3);
      sub_BFB1C0(a3);
      v13 = sub_1A0B620(a2);
      if ( v13 )
        v14 = *(_DWORD *)(v13 + 24);
      sub_168B9F0((__int64)&v22, a1 + 1, v14, 0x1796u, 0);
      sub_1605D30((__int64)&v22, &v21);
      sub_15F7200(&v22);
    }
    else
    {
      sub_1A1D150((__int64)&v22, (__int64)a1, (void **)a2, a3, (__int64 *)&v19, 0, a5, a6, 0, 0, 0);
    }
  }
}
