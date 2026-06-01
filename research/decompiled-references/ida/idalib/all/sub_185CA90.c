__int64 __fastcall sub_185CA90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 *v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  int v19; // esi
  int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // [rsp+8h] [rbp-C0h] BYREF
  __m128 v23[11]; // [rsp+10h] [rbp-B8h] BYREF

  v3 = *(_QWORD *)(a1 + 232);
  v22 = a2;
  if ( *(char *)(v3 + 1) >= 0 )
    return 1;
  if ( !sub_B749D0(v22) )
    return 1;
  v8 = v22;
  v4 = (*(_BYTE *)(a3 + 10) & 0x10) != 0;
  *(_BYTE *)(v22 + 84) = (4 * v4) | *(_BYTE *)(v22 + 84) & 0xFB;
  if ( !(_BYTE)v4 )
    return 1;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
  v10 = *(unsigned int *)(a1 + 4232);
  v11 = *(_QWORD *)(a1 + 4216);
  if ( (_DWORD)v10 )
  {
    v12 = (v10 - 1) & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
    v13 = (__int64 *)(v11 + 16LL * v12);
    v14 = *v13;
    if ( v9 == *v13 )
    {
LABEL_8:
      sub_17AC880(v23, v13, (_QWORD *)(16 * v10 + v11), a1 + 4216, 1);
      v15 = v23[0].m128_u64[0];
      goto LABEL_9;
    }
    v19 = 1;
    if ( v14 != -4096 )
    {
      do
      {
        v20 = v19 + 1;
        v12 = (v10 - 1) & (v19 + v12);
        v13 = (__int64 *)(v11 + 16LL * v12);
        v21 = *v13;
        if ( v9 == *v13 )
          goto LABEL_8;
        v19 = v20;
      }
      while ( v21 != -4096 );
    }
  }
  sub_17AC880(v23, (_QWORD *)(v11 + 16LL * (unsigned int)v10), (_QWORD *)(v11 + 16LL * (unsigned int)v10), a1 + 4216, 1);
  v15 = v23[0].m128_u64[0];
LABEL_9:
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 4216) + 16LL * *(unsigned int *)(a1 + 4232));
  sub_17AC880(v23, v16, v16, a1 + 4216, 1);
  if ( v23[0].m128_u64[0] == v15 )
    return v4;
  v17 = *(_QWORD *)(a1 + 4240);
  v18 = v17 + 16LL * *(unsigned int *)(v15 + 8);
  if ( v18 == 16LL * *(unsigned int *)(a1 + 4248) + v17 )
    return 1;
  sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), *(_DWORD *)(v18 + 8), 0xF64u, 0);
  sub_17BA610((__int64)v23, (__int64 *)v18);
  sub_15F7200(v23);
  sub_168B9F0((__int64)v23, (__int64 *)(a1 + 8), *(_DWORD *)(v22 + 24), 0x170Bu, 0);
  sub_1795A40((__int64)v23, &v22);
  sub_15F7200(v23);
  v4 = sub_B7D7F0(v22);
  if ( (_BYTE)v4 )
  {
    v4 = 0;
    if ( (*(_BYTE *)(v22 + 84) & 3) != 2 )
      sub_183B810(a1, v22);
  }
  return v4;
}
