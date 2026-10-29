void **__fastcall sub_9AB690(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r13
  _QWORD *v12; // rdx
  int v14; // esi
  int v15; // r9d
  __int64 v16; // rdi
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  v6 = *(unsigned int *)(a1 + 16);
  v7 = *(_QWORD *)a1;
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v9 = (__int64 *)(v7 + 16LL * v8);
    v10 = *v9;
    if ( a2 == *v9 )
    {
LABEL_3:
      sub_9A6D70(v17, v9, (_QWORD *)(16 * v6 + v7), a1, 1);
      v11 = v17[0].m128_u64[0];
      goto LABEL_4;
    }
    v14 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v15 = v14 + 1;
        v8 = (v6 - 1) & (v14 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v16 = *v9;
        if ( a2 == *v9 )
          goto LABEL_3;
        v14 = v15;
      }
      while ( v16 != -4096 );
    }
  }
  sub_9A6D70(v17, (_QWORD *)(v7 + 16LL * (unsigned int)v6), (_QWORD *)(v7 + 16LL * (unsigned int)v6), a1, 1);
  v11 = v17[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  sub_9A6D70(v17, v12, v12, a1, 1);
  if ( v17[0].m128_u64[0] == v11 )
    return sub_9AB220(a1, a2, a3);
  else
    return *(void ***)(v11 + 8);
}

