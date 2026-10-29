__int64 __fastcall sub_156A150(__int64 a1, int a2, _BYTE *a3, signed __int64 a4, __m128i a5, double a6)
{
  __int16 v7; // ax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  int v12; // eax
  __int64 *v13; // rdi
  _BYTE *v14; // [rsp+0h] [rbp-E8h]
  signed __int64 v15; // [rsp+8h] [rbp-E0h]
  void *v16[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v17; // [rsp+20h] [rbp-C8h] BYREF
  _DWORD v18[2]; // [rsp+30h] [rbp-B8h] BYREF
  char v19; // [rsp+38h] [rbp-B0h]
  __int64 v20; // [rsp+3Ch] [rbp-ACh]
  char v21; // [rsp+44h] [rbp-A4h]
  void *v22; // [rsp+48h] [rbp-A0h]
  __int64 v23; // [rsp+50h] [rbp-98h]
  _BYTE v24[24]; // [rsp+58h] [rbp-90h] BYREF
  unsigned __int8 *v25[15]; // [rsp+70h] [rbp-78h] BYREF

  v7 = *(_WORD *)(a1 + 32);
  if ( v7 == 63 )
  {
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    return 0;
  }
  else if ( v7 == 3 )
  {
    sub_1566D30(a1);
    return 0;
  }
  else if ( (v7 & 0xFFFD) == 0x15
         && ((v8 = *(_QWORD *)(a1 + 8), v9 = *(_QWORD *)(v8 + 2944), v9 >= *(unsigned int *)(v8 + 2912))
           ? (v15 = a4, v14 = a3, v10 = sub_14180A0(v8, 1u), a4 = v15, a3 = v14)
           : (_BYTE *)(v10 = *(_QWORD *)(v8 + 2904) + 24 * v9),
             *(_WORD *)(v10 + 16) == 63) )
  {
    sub_FC70B0((__int64)v25, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 16), 1670);
    sub_13D35F0(
      (__int64)v16,
      a1 + 16,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
      nullptr);
    sub_AEC220(v25, (_BYTE *)v16[0], (signed __int64)v16[1]);
    v12 = *(_DWORD *)(a1 + 16);
    v20 = 0;
    v21 = 0;
    v22 = v24;
    v23 = 0;
    v24[0] = 0;
    v24[16] = 0;
    v18[0] = v12;
    v18[1] = v12;
    v19 = 1;
    if ( v12 )
    {
      sub_1569180((__int64 *)v25, (unsigned __int64)v18);
      if ( v22 != v24 )
        operator delete(v22);
    }
    if ( v16[0] != &v17 )
      operator delete(v16[0]);
    sub_AEA040((__int64)v25);
    sub_149F520(a1, 0);
    v13 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v13, (int *)(a1 + 16));
    return 0;
  }
  else
  {
    return sub_1569A00(a1, 0x3Fu, a2, a3, a4, a5, a6);
  }
}
