unsigned __int64 __fastcall sub_F5B760(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  void (__fastcall *v4)(__int64, unsigned __int64); // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int v8; // ecx
  _QWORD *v9; // rsi
  unsigned __int64 v10; // r13
  _QWORD *v11; // rdx
  unsigned __int64 result; // rax
  int v13; // edx
  __m128 v14[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) + 32LL))(a2 & 0xFFFFFFFFFFFFFFF8LL);
  v4 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 16LL);
  v5 = sub_B4E950(v3 + 72);
  if ( v5 )
    v5 -= 64LL;
  v4(a1, v5);
  v6 = *(unsigned int *)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
    v9 = (_QWORD *)(v7 + 80LL * v8);
    if ( v3 == *v9 )
    {
LABEL_5:
      sub_F5B6B0(v14, v9, (_QWORD *)(v7 + 80 * v6), a1 + 8, 1);
      v10 = v14[0].m128_u64[0];
      goto LABEL_6;
    }
    if ( *v9 != -4096 )
    {
      v13 = 1;
      do
      {
        v8 = (v6 - 1) & (v13 + v8);
        v9 = (_QWORD *)(v7 + 80LL * v8);
        if ( v3 == *v9 )
          goto LABEL_5;
        ++v13;
      }
      while ( *v9 != -4096 );
    }
  }
  sub_F5B6B0(v14, (_QWORD *)(v7 + 80 * v6), (_QWORD *)(v7 + 80 * v6), a1 + 8, 1);
  v10 = v14[0].m128_u64[0];
LABEL_6:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL * *(unsigned int *)(a1 + 24));
  sub_F5B6B0(v14, v11, v11, a1 + 8, 1);
  result = v10 + 8;
  if ( v14[0].m128_u64[0] == v10 )
    return 0;
  return result;
}

