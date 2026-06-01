unsigned __int64 __fastcall sub_E0AC20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 *v8; // rdi
  __int64 v9; // r8
  unsigned __int64 v10; // r13
  __int64 *v11; // rdx
  __int64 v12; // rax
  int v14; // edi
  int v15; // r10d
  __int64 v16; // r8
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a1 + 248;
  v5 = *(unsigned int *)(a1 + 264);
  v6 = *(_QWORD *)(a1 + 248);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_E09990(v17, v8, (__int64 *)(16 * v5 + v6), v3, 1);
      v10 = v17[0].m128_u64[0];
      goto LABEL_4;
    }
    v14 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v15 = v14 + 1;
        v7 = (v5 - 1) & (v14 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v16 = *v8;
        if ( a2 == *v8 )
          goto LABEL_3;
        v14 = v15;
      }
      while ( v16 != -4096 );
    }
  }
  sub_E09990(v17, (__int64 *)(v6 + 16LL * (unsigned int)v5), (__int64 *)(v6 + 16LL * (unsigned int)v5), v3, 1);
  v10 = v17[0].m128_u64[0];
LABEL_4:
  v11 = (__int64 *)(*(_QWORD *)(a1 + 248) + 16LL * *(unsigned int *)(a1 + 264));
  sub_E09990(v17, v11, v11, v3, 1);
  v12 = 0;
  if ( v17[0].m128_u64[0] != v10 )
  {
    v2 = *(unsigned int *)(v10 + 8);
    v12 = 1;
  }
  return v2 & 0xFFFFFF00FFFFFFFFLL | (v12 << 32);
}

