void __fastcall sub_1606AE0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  __int64 v8; // r14
  __m128 *v9; // r14
  __int64 v10; // rax
  _BYTE *v11; // rsi
  _BYTE *v12; // rsi
  __int64 v13; // r14
  bool v14; // zf
  __int64 v15; // rax
  void *v16; // rdi
  int v17; // [rsp+Ch] [rbp-ECh] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-E8h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-E0h]
  __int64 v20; // [rsp+20h] [rbp-D8h]
  void *v21; // [rsp+30h] [rbp-C8h]
  _BYTE v22[16]; // [rsp+40h] [rbp-B8h] BYREF
  __int16 v23; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v24; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v25; // [rsp+68h] [rbp-90h]
  int v26; // [rsp+70h] [rbp-88h]
  __int64 v27; // [rsp+A8h] [rbp-50h]
  unsigned int v28; // [rsp+B0h] [rbp-48h]

  *(_QWORD *)a1 = a6;
  v17 = a3;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a4;
  *(_QWORD *)(a1 + 16) = a5;
  *(_BYTE *)(a1 + 24) = a2 - 2 <= 1;
  *(_BYTE *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 132) = 0;
  if ( !a2 )
    return;
  v6 = a4;
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
    {
      v8 = a6 + 520;
      if ( a5 )
        a5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 32LL))(a5);
      v24 = a5;
      v9 = (__m128 *)sub_1587BC0(v8, (__int64 *)&v24, a3, a4, a5, a6);
      v10 = v9->m128_u64[1] - v9->m128_u64[0];
      *(_BYTE *)(a1 + 132) = 1;
      *(_DWORD *)(a1 + 128) = v10 >> 5;
      sub_168B9B0(&v24, a6 + 8, v6);
      v11 = (_BYTE *)v9->m128_u64[1];
      if ( v11 == (_BYTE *)v9[1].m128_u64[0] )
      {
        sub_15F8200(v9, v11, &v17, (__int64 *)&v24);
        if ( v24 )
        {
          if ( v25 )
            sub_1580C40(v25, v24);
        }
      }
      else
      {
        v12 = v11 + 32;
        *((_DWORD *)v12 - 8) = v17;
        *((_DWORD *)v12 - 2) = v26;
        *((_QWORD *)v12 - 2) = v25;
        *((_QWORD *)v12 - 3) = v24;
        v9->m128_u64[1] = (unsigned __int64)v12;
      }
    }
    return;
  }
  v13 = a1 + 32;
  sub_FC70B0((__int64)&v18, *(_QWORD *)(a6 + 264), a3, a4);
  sub_FC70F0((__int64)&v24, (__int64)&v18);
  v14 = *(_BYTE *)(a1 + 120) == 0;
  v27 = a6;
  v28 = v6;
  if ( !v14 )
  {
    *(_BYTE *)(a1 + 120) = 0;
    sub_168B700(v13);
  }
  sub_FC70F0(v13, (__int64)&v24);
  v15 = v27;
  *(_BYTE *)(a1 + 120) = 1;
  *(_QWORD *)(a1 + 104) = v15;
  *(_DWORD *)(a1 + 112) = v28;
  sub_168B700(&v24);
  if ( (_BYTE)v23 )
  {
    sub_FC7790(v20, (__int64 *)&v18, SHIBYTE(v23));
    v16 = v21;
    v20 = 0;
    v23 = 0;
    if ( v21 == v22 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v16 = v21;
  if ( v21 != v22 )
LABEL_13:
    operator delete(v16);
LABEL_14:
  if ( v18 && v19 )
    sub_1580C40(v19, v18);
}
