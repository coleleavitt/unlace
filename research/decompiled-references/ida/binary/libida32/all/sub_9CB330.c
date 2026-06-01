__int64 __fastcall sub_9CB330(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ecx
  __int64 *v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdx
  int v11; // edi
  int v12; // r10d
  __int64 v13; // r8
  __m128 v14[2]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_QWORD *)a1;
  if ( (_DWORD)v3 )
  {
    v5 = (v3 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v6 = (__int64 *)(v4 + 16LL * v5);
    v7 = *v6;
    if ( a2 == *v6 )
    {
LABEL_3:
      sub_9CB2C0(v14, v6, (_QWORD *)(16 * v3 + v4), a1, 1);
      v8 = v14[0].m128_u64[0];
      goto LABEL_4;
    }
    v11 = 1;
    if ( v7 != -4096 )
    {
      do
      {
        v12 = v11 + 1;
        v5 = (v3 - 1) & (v11 + v5);
        v6 = (__int64 *)(v4 + 16LL * v5);
        v13 = *v6;
        if ( a2 == *v6 )
          goto LABEL_3;
        v11 = v12;
      }
      while ( v13 != -4096 );
    }
  }
  sub_9CB2C0(v14, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), a1, 1);
  v8 = v14[0].m128_u64[0];
LABEL_4:
  v9 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  sub_9CB2C0(v14, v9, v9, a1, 1);
  if ( v14[0].m128_u64[0] == v8 )
    return 0;
  else
    return *(unsigned int *)(v8 + 8);
}

