__int64 __fastcall sub_15013F0(__int64 a1, __m128i a2, __m128 a3)
{
  int *v3; // r12
  unsigned __int16 v5; // bp
  __int64 v6; // rax
  int v7; // r15d
  __int64 v8; // rbp
  __int16 v9; // ax
  int v11; // eax
  __int64 *v12; // rdi
  _BYTE *v13; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v14[2]; // [rsp+10h] [rbp-F8h] BYREF
  __m128 v15; // [rsp+20h] [rbp-E8h]
  int v16; // [rsp+30h] [rbp-D8h]
  const char *v17; // [rsp+38h] [rbp-D0h]
  _DWORD v18[2]; // [rsp+40h] [rbp-C8h] BYREF
  char v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+4Ch] [rbp-BCh]
  char v21; // [rsp+54h] [rbp-B4h]
  void *v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h]
  _BYTE v24[24]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25[17]; // [rsp+80h] [rbp-88h] BYREF

  v3 = (int *)(a1 + 16);
  v5 = *(_WORD *)(a1 + 32);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v6 = sub_14FFE40(a1, *(_DWORD *)(a1 + 40), v5, 0, 1u, a2, a3);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = v6;
  sub_2233820(v14);
  v16 = v7;
  v13 = (_BYTE *)v8;
  v14[0] = &off_2B4A628;
  v17 = "parsing Objective-C method";
  v9 = *(_WORD *)(a1 + 32);
  v15 = _mm_loadh_ps((const double *)&v13);
  if ( v9 == 63 )
  {
    if ( *(_QWORD *)(a1 + 2072) )
    {
      sub_1564840(v25, a1, v3, 2224);
      v11 = *(_DWORD *)(a1 + 16);
      v20 = 0;
      v21 = 0;
      v22 = v24;
      v13 = v24;
      v23 = 0;
      v24[0] = 0;
      v24[16] = 0;
      v18[0] = v11;
      v18[1] = v11;
      v19 = 1;
      if ( v11 )
      {
        sub_14FA6F0(v25, (unsigned __int64)v18);
        if ( v22 != v13 )
          operator delete(v22);
      }
      sub_AEA040((__int64)v25);
    }
    v12 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v12, v3);
    v9 = *(_WORD *)(a1 + 32);
  }
  if ( v9 == 24
    || (sub_1564840(v25, a1, v3, 1630),
        sub_AEA040((__int64)v25),
        LOWORD(v25[0]) = 24,
        sub_15680D0(a1, v25, 1, 3),
        *(_WORD *)(a1 + 32) == 24) )
  {
    if ( v8 )
    {
      sub_1898D20(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v8);
      sub_14FA250(a1, v8);
    }
    else
    {
      sub_1478A90(a1);
      LOWORD(v25[0]) = 25;
      sub_15680D0(a1, v25, 1, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  v14[0] = &off_2B4A628;
  sub_22338A0(v14);
  return v8;
}
