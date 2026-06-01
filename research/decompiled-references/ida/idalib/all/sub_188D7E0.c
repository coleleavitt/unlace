__int64 __fastcall sub_188D7E0(__int64 *a1, __int64 a2, __m128 a3)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r14
  __int64 v12; // rax
  __m128 *v13; // rdx
  __m128 *v14; // rax
  __m128 *v15; // r13
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64); // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v25[7]; // [rsp+0h] [rbp-38h] BYREF

  v25[0] = **(_QWORD **)(a2 + 16);
  v4 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_6D5440(v25) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v4 + 16) != 48 )
    return 0;
  v9 = sub_F60F10(*v4, a2, v5, v6, v7, v8);
  v10 = a1[3];
  v11 = (__int64)v9;
  if ( v10 )
  {
    v12 = a1[1];
    v13 = nullptr;
    if ( (*(_BYTE *)(v12 + 87) & 0x20) != 0 )
      v13 = *(__m128 **)(v12 + 184);
    v14 = sub_1887770(v10, v11, v13);
    v15 = v14;
    if ( v14 )
    {
      v16 = (__int64)v14;
      v17 = *(__int64 (__fastcall **)(__int64))(v14->m128_u64[0] + 32);
      if ( v17 == sub_B94CC0 )
        sub_B709C0(v16);
      else
        v17(v16);
      v18 = (unsigned __int64)v15 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v18 )
      {
        v19 = (__int64)(a1 + 5);
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v18 + 32LL))(v18);
        if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v21 = *(__int64 **)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
          v22 = *v21;
          v25[1] = (__int64)(v21 + 1);
          v25[0] = v22;
          v23 = (unsigned int)sub_F6CCB0(v25, a3);
        }
        else
        {
          v23 = 0;
        }
        sub_183AC70(v19, v23, v18, v20);
        return 0;
      }
    }
  }
  sub_183B060(a1, v11, a2 & 0xFFFFFFFFFFFFFFFBLL, 0, a3);
  return 0;
}
