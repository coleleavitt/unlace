__m128i *__fastcall sub_1FB0C90(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _BYTE *a7,
        __int64 a8,
        char a9)
{
  __int64 v13; // rax
  unsigned __int64 v14; // r11
  unsigned __int64 v15; // r15
  __int64 v16; // rdi
  _BYTE *v17; // rdx
  __int64 v19; // rbp
  __int64 v20; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v24[32]; // [rsp+40h] [rbp-68h] BYREF
  __int16 v25; // [rsp+60h] [rbp-48h]

  v13 = sub_224A990("WriteAST", 8, a4, a5);
  v14 = 0;
  *(_BYTE *)(a2 + 154) = 1;
  v20 = v13;
  v15 = a3 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a3 & 4) == 0 )
  {
    v14 = a3 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v15 )
      v15 = *(_QWORD *)(v15 + 240);
  }
  v16 = *(_QWORD *)(a2 + 16);
  v22 = v14;
  *(_BYTE *)(a2 + 156) = *(_BYTE *)(*(_QWORD *)(v15 + 48) + 193LL);
  sub_A1FEC0(v16, 0x43u, 8);
  sub_A1FEC0(*(_QWORD *)(a2 + 16), 0x50u, 8);
  sub_A1FEC0(*(_QWORD *)(a2 + 16), 0x43u, 8);
  sub_A1FEC0(*(_QWORD *)(a2 + 16), 0x48u, 8);
  sub_1F70600(a2);
  *(_QWORD *)(a2 + 40) = v15;
  *(_QWORD *)(a2 + 56) = a6;
  sub_1FAF3F0(a1, a2, v22, a7, a8, a6);
  v17 = *(_BYTE **)(a2 + 120);
  *(_QWORD *)(a2 + 40) = 0;
  *(_QWORD *)(a2 + 56) = 0;
  *(_QWORD *)(a2 + 128) = 0;
  *v17 = 0;
  *(_BYTE *)(a2 + 154) = 0;
  if ( a6 && (*(_BYTE *)(**(_QWORD **)(v15 + 104) + 624LL) & 0x20) != 0 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a2 + 32) + 24LL))(*(_QWORD *)(a2 + 32), a4, a5);
  if ( a9 )
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 32) + 32LL))(*(_QWORD *)(a2 + 32));
    v25 = 257;
    sub_22307C0(&v23, **(_QWORD **)(a2 + 24), *(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL), v24);
    sub_1FD8C30(v19, a4, a5, &v23);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  }
  if ( v20 )
    sub_224D6D0(v20);
  return a1;
}
