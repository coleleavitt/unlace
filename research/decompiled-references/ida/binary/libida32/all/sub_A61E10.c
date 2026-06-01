__int64 __fastcall sub_A61E10(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rdi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  int v12; // edi
  int v13; // r10d
  __int64 v14; // r8
  __m128 v15[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 1192;
  v4 = *(unsigned int *)(a1 + 1208);
  v5 = *(_QWORD *)(a1 + 1192);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v7 = (__int64 *)(v5 + 16LL * v6);
    v8 = *v7;
    if ( a2 == *v7 )
    {
LABEL_3:
      sub_A61C70(v15, v7, (_QWORD *)(16 * v4 + v5), v2, 1);
      v9 = v15[0].m128_u64[0];
      goto LABEL_4;
    }
    v12 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v13 = v12 + 1;
        v6 = (v4 - 1) & (v12 + v6);
        v7 = (__int64 *)(v5 + 16LL * v6);
        v14 = *v7;
        if ( a2 == *v7 )
          goto LABEL_3;
        v12 = v13;
      }
      while ( v14 != -4096 );
    }
  }
  sub_A61C70(v15, (_QWORD *)(v5 + 16LL * (unsigned int)v4), (_QWORD *)(v5 + 16LL * (unsigned int)v4), v2, 1);
  v9 = v15[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 1192) + 16LL * *(unsigned int *)(a1 + 1208));
  sub_A61C70(v15, v10, v10, v2, 1);
  if ( v15[0].m128_u64[0] == v9 )
    return 0;
  else
    return *(_QWORD *)(v9 + 8);
}

