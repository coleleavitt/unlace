__int64 __fastcall sub_1F75670(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // edx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // ecx
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( *(char *)(v3 + 29) < 0 )
    return v3;
  v4 = *(unsigned int *)(a1 + 12984);
  v5 = *(_QWORD *)(a1 + 12968);
  if ( !(_DWORD)v4 )
    goto LABEL_13;
  v6 = (v4 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
  v7 = (_QWORD *)(v5 + 40LL * v6);
  if ( v3 != *v7 )
  {
    if ( *v7 != -4096 )
    {
      v15 = 1;
      do
      {
        v6 = (v4 - 1) & (v15 + v6);
        v7 = (_QWORD *)(v5 + 40LL * v6);
        if ( v3 == *v7 )
          goto LABEL_4;
        ++v15;
      }
      while ( *v7 != -4096 );
    }
LABEL_13:
    sub_1F75600(v16, (_QWORD *)(v5 + 40 * v4), (_QWORD *)(v5 + 40 * v4), a1 + 12968, 1);
    v8 = v16[0].m128_u64[0];
    goto LABEL_5;
  }
LABEL_4:
  sub_1F75600(v16, v7, (_QWORD *)(v5 + 40 * v4), a1 + 12968, 1);
  v8 = v16[0].m128_u64[0];
LABEL_5:
  v9 = (_QWORD *)(*(_QWORD *)(a1 + 12968) + 40LL * *(unsigned int *)(a1 + 12984));
  sub_1F75600(v16, v9, v9, a1 + 12968, 1);
  if ( v16[0].m128_u64[0] != v8 && *(_DWORD *)(v8 + 16) )
    return sub_1EDB740(a1, **(_QWORD **)(v8 + 8), v10, v11, v12, v13);
  return v3;
}
