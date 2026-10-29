unsigned __int64 __fastcall sub_1E631F0(
        __int64 *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i a6,
        double a7)
{
  unsigned int v7; // r12d
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  unsigned int v16; // eax
  int v17; // [rsp+Ch] [rbp-BCh] BYREF
  int v18[46]; // [rsp+10h] [rbp-B8h] BYREF

  v7 = a3;
  v8 = (unsigned __int64)a2;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 && ((*((_BYTE *)a2 + 1) >> 3) & 7) == 1 )
  {
    v16 = sub_C00A40((unsigned __int64)a2, (__int64)a2, a3, a4, a5);
    sub_168B9F0((__int64)v18, a1 + 1, v16, 0x137Bu, 0);
    a2 = &v17;
    v17 = ((_BYTE)v7 == 1) + 2;
    sub_1587D10((__int64)v18, &v17);
    sub_15F7200(v18);
  }
  if ( (*(_DWORD *)v8 & 0x10000) == 0 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v9 + 16) - 47 <= 1
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 47 <= 1
      && (v9 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4)) != 0 )
    {
      v18[0] = sub_C00A40(v8, (__int64)a2, a3, a4, a5);
      v14 = sub_F60F10(v9, (__int64)a2, v10, v11, v12, v13);
      sub_18F5260((__int64)a1, (__int64)v14, v18, 1u, 0, 0, a6, a7, 0, 0, 0);
    }
  }
  return sub_A78A90(a1[31], v8, v7);
}
