unsigned __int64 __fastcall sub_1B89EA0(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v8; // rbp
  __int64 v9; // r12
  unsigned int v10; // r13d
  _QWORD *v11; // rdi
  _QWORD *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rbp
  __int64 v24; // rbx
  __int16 v25; // ax
  unsigned __int8 v26; // al
  void *v28; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+8h] [rbp-40h]

  v8 = *(_QWORD *)(**(_QWORD **)a1 + 8LL * a2 + 24);
  if ( (*(_WORD *)v8 & 0x1FF) == 0x3D )
    return sub_1B7CAD0(*(__int64 **)(a1 + 8), (unsigned __int16 *)v8, a6, a7, a3, a4, a5) & 0xFFFFFFFFFFFFFFFELL;
  v9 = *(_QWORD *)(v8 + 8);
  v10 = sub_A97D20(*(_QWORD *)(a1 + 16), *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL));
  v29 = v10;
  if ( v10 > 0x40 )
  {
    sub_2205470(&v28, 0, 0);
    v12 = (_QWORD *)sub_C0C5D0(*(_QWORD **)(a1 + 16), (__int64)&v28, v9, 0);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v29 = v10;
    sub_2205470(&v28, 1, 0);
  }
  else
  {
    v11 = *(_QWORD **)(a1 + 16);
    v28 = nullptr;
    v12 = (_QWORD *)sub_C0C5D0(v11, (__int64)&v28, v9, 0);
    if ( v29 > 0x40 && v28 )
      operator delete[](v28);
    v29 = v10;
    v28 = &dword_0 + 1;
  }
  v16 = sub_C0C5D0(*(_QWORD **)(a1 + 16), (__int64)&v28, v9, 0);
  if ( v29 > 0x40 && v28 )
    operator delete[](v28);
  v17 = **(_QWORD **)(a1 + 24);
  v18 = sub_1B7CAD0(*(__int64 **)(a1 + 8), (unsigned __int16 *)v8, a6, a7, v13, v14, v15);
  v19 = sub_1929BB0(v17, **(_QWORD **)(a1 + 32), 0, 0xCu, v18 & 0xFFFFFFFFFFFFFFFELL, v12, a6, a7, 0)
      & 0xFFFFFFFFFFFFFFFELL;
  v23 = sub_1B7CAD0(*(__int64 **)(a1 + 8), (unsigned __int16 *)v8, a6, a7, v20, v21, v22) & 0xFFFFFFFFFFFFFFFELL;
  v24 = sub_EEE9A0(48, *(_QWORD **)(a1 + 16), 8u);
  v25 = *(_WORD *)v24 & 0xFE00;
  LOBYTE(v25) = 0x80;
  *(_WORD *)v24 = v25;
  if ( unk_2CD7484 )
    sub_EE9B50(128);
  *(_WORD *)(v24 + 1) &= 0xF801u;
  *(_QWORD *)(v24 + 8) = v9;
  *(_QWORD *)(v24 + 16) = 0;
  *(_QWORD *)(v24 + 24) = v19;
  *(_QWORD *)(v24 + 32) = v16;
  *(_QWORD *)(v24 + 40) = v23;
  v26 = sub_B62CD0((_DWORD **)v24);
  *(_BYTE *)(v24 + 1) = (v26 << 6) | *(_BYTE *)(v24 + 1) & 0x3F;
  *(_BYTE *)(v24 + 2) = *(_BYTE *)(v24 + 2) & 0xF8 | (v26 >> 2) & 7;
  return v24;
}
