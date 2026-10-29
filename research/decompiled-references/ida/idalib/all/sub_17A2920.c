__int64 __fastcall sub_17A2920(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbp
  unsigned __int8 v14; // al
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v18; // rax
  __int64 v19; // [rsp+20h] [rbp-E8h] BYREF
  _OWORD *v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h]
  _OWORD v22[5]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  unsigned int v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-58h]
  __int64 v29; // [rsp+C0h] [rbp-48h]

  if ( sub_15F1670(a1) && (!*(_DWORD *)a3 || !*(_DWORD *)(a3 + 4)) && !*(_QWORD *)(a3 + 8) )
  {
    v18 = sub_16C47B0(a4);
    if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x32 )
      return sub_19E6BD0(*(_QWORD *)(a1 + 736), a2, a5, v18);
  }
  v10 = *(_QWORD *)(a4 + 40);
  v21 = 0x800000000LL;
  v20 = v22;
  v22[4] = 0;
  v25 = v10;
  v19 = 0;
  v23 = 0;
  v24 = a1;
  v26 = a5;
  sub_B85890(&v27, v10);
  v29 = 0x101010000LL;
  v28 = 0;
  sub_1A395A0(&v19);
  v11 = (unsigned int)v21;
  v12 = (unsigned int)v21 + 1LL;
  v13 = (*(_BYTE *)(a4 + 29) >> 5) & 3 | (unsigned __int64)a4;
  if ( v12 > HIDWORD(v21) )
  {
    sub_2237220(&v20, v22, v12, 8);
    v11 = (unsigned int)v21;
  }
  *((_QWORD *)v20 + v11) = v13;
  LODWORD(v19) = 2;
  LODWORD(v21) = v21 + 1;
  sub_1A43500(&v19);
  v14 = sub_18C19C0(a1, a3, &v19, *(_WORD *)(a6 + 16) == 22);
  v16 = sub_190B490(a1, a3, &v19, v14, 1, v15);
  sub_169D230((__int64)&v19);
  return v16;
}
