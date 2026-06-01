_BOOL8 __fastcall sub_1CCBBD0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned __int8 a5, __m128 a6)
{
  int v10; // edi
  unsigned __int64 v12; // rbp
  __int16 v13; // cx
  unsigned __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // edx
  __int64 *v18; // rbx
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-D0h] BYREF
  _BYTE v23[200]; // [rsp+10h] [rbp-C8h] BYREF

  v10 = *(_DWORD *)a4 & 0x7FFFFFFF;
  if ( v10 == 9 )
    return (unsigned __int8)sub_1CC7120(a1, a2, a3, *(_QWORD *)(a4 + 8), *(_DWORD *)(a4 + 4), a5, a6) != 0;
  if ( v10 != 8 )
    return 0;
  v12 = *(_QWORD *)(a4 + 8);
  v13 = *(_WORD *)v12 & 0x1FF;
  if ( v13 == 22 )
  {
    v12 = *(_QWORD *)(v12 + 24);
    v13 = *(_WORD *)v12 & 0x1FF;
  }
  for ( ; v13 == 79; v13 = *(_WORD *)v12 & 0x1FF )
    v12 = *(_QWORD *)(v12 + 16);
  if ( v13 == 71 && (*(_BYTE *)(*(_QWORD *)(v12 + 16) + 28LL) & 0x7F) == 0x2F )
    return 0;
  v14 = sub_1CB0730(*(_DWORD *)(a3 + 68) & 0xFFFFF, (_DWORD *)v12, *(double *)a6.m128_u64);
  v22 = v14;
  if ( !(_DWORD)v14 || !HIDWORD(v22) )
  {
    v15 = (__int64 *)(*(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
      v15 = (__int64 *)v15[4];
    v16 = *v15;
    v22 = sub_1CB0B00(*(_DWORD *)(a3 + 68) & 0xFFFFF, *v15, (__int64)(v15 + 1), a6);
    if ( (_DWORD)v22 && HIDWORD(v22) )
    {
      v17 = a2;
      if ( !a5 )
        v17 = sub_EEB7E0(v12, v16, *(double *)a6.m128_u64);
      sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), v17, 0xE57u, 0);
      v21 = *(_QWORD *)(a3 + 48);
      sub_162B6D0((__int64)v23, &v21);
      sub_15F7200(v23);
      sub_1CC6E20(a1, a3);
      return 1;
    }
    return 0;
  }
  v18 = (__int64 *)(a1 + 8);
  v19 = v14;
  v20 = 3669;
  if ( a5 )
  {
    sub_168B9F0((__int64)v23, v18, a2, 0xE55u, 0);
    sub_15F7200(v23);
    v19 = v22;
    v20 = 5912;
  }
  sub_168B9F0((__int64)v23, v18, v19, v20, 0);
  sub_15884C0((__int64)v23, (__int64 *)&v22);
  sub_15F7200(v23);
  return 1;
}
