void __fastcall sub_1F4A730(_QWORD *a1, __m128 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  bool v9; // zf
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i v24[3]; // [rsp+0h] [rbp-38h] BYREF

  sub_1F4A660((__int64)a1, (__int64)a2);
  v4 = a1[2];
  v5 = *(unsigned int *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v5 + 1;
  LOBYTE(v5) = (*(_QWORD *)(*(_QWORD *)(v4 + 32) + 8 * v5) != 0) | a2[3].m128_i8[12] & 0xFE;
  a2[3].m128_i8[12] = v5;
  v6 = a1[2];
  if ( (v5 & 2) != 0 )
  {
    v7 = *(unsigned int *)(v6 + 24);
    v8 = *(_QWORD *)(v6 + 32);
    v9 = *(_QWORD *)(v8 + 8 * v7) == 0;
    v10 = *(_DWORD *)(v6 + 24);
    v11 = (unsigned int)(v7 + 1);
    *(_DWORD *)(v6 + 24) = v11;
    v12 = *(_QWORD *)(v8 + 8 * v11);
    if ( v9 )
    {
      *(_DWORD *)(v6 + 24) = v7 + 2;
      if ( !v12 )
        return;
LABEL_9:
      sub_1F18E50(v24, v6);
      sub_BC48F0((__int64)a2, *(_QWORD **)(*a1 + 144LL), v24, v21, v22, v23);
      return;
    }
    v13 = 0;
    *(_DWORD *)(v6 + 24) = v10 + 2;
    if ( v12 )
    {
      v14 = sub_1F19070(v6);
      v6 = a1[2];
      v13 = v14;
    }
    v15 = sub_1F6A0A0(*(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
    v16 = a1[2];
    v17 = *(unsigned int *)(v16 + 24);
    *(_DWORD *)(v16 + 24) = v17 + 1;
    sub_BBE5F0(a2, v13, v15, *(_QWORD *)(*(_QWORD *)(v16 + 32) + 8 * v17));
    v18 = a1[2];
    v19 = *(unsigned int *)(v18 + 24);
    *(_DWORD *)(v18 + 24) = v19 + 1;
    a2[4].m128_i32[0] = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 8 * v19);
    v6 = a1[2];
  }
  if ( *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL * (unsigned int)(*(_DWORD *)(v6 + 24))++) )
    goto LABEL_9;
}
