unsigned __int64 __fastcall sub_9C0140(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  __int64 *v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  __int64 v11; // rax
  int v13; // edi
  int v14; // r10d
  __int64 v15; // r8
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(unsigned int *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (__int64 *)(v5 + 16LL * v6);
    v8 = *v7;
    if ( a2 == *v7 )
    {
LABEL_3:
      sub_9C00D0(v16, v7, (_QWORD *)(16 * v4 + v5), a1, 1);
      v9 = v16[0].m128_u64[0];
      goto LABEL_4;
    }
    v13 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v6 = (v4 - 1) & (v13 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v15 = *v7;
        if ( a2 == *v7 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
  }
  sub_9C00D0(v16, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), a1, 1);
  v9 = v16[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  sub_9C00D0(v16, v10, v10, a1, 1);
  v11 = 0;
  if ( v16[0].m128_u64[0] != v9 )
  {
    v2 = *(unsigned int *)(v9 + 8);
    v11 = 1;
  }
  return v2 & 0xFFFFFF00FFFFFFFFLL | (v11 << 32);
}

