__int64 __fastcall sub_98C560(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r13
  _QWORD *v10; // rdx
  __int64 result; // rax
  int v12; // edx
  __int64 v13; // rdi
  int v14; // esi
  int v15; // r10d
  __int64 v16; // r8
  __m128 v17[3]; // [rsp+0h] [rbp-38h] BYREF

  if ( (*(_WORD *)a2 & 0x1FF) == 0x3C && (*(_DWORD *)a2 & 0x80000) == 0 )
    a2 = *(_QWORD *)(a2 + 16);
  v3 = sub_BD7CB0(a2);
  v4 = *(unsigned int *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v4 )
  {
    v6 = (v4 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
    v7 = (__int64 *)(v5 + ((unsigned __int64)v6 << 6));
    v8 = *v7;
    if ( v3 == *v7 )
    {
LABEL_6:
      sub_9885F0(v17, v7, (_QWORD *)((v4 << 6) + v5), a1 + 16, 1);
      v9 = v17[0].m128_u64[0];
      goto LABEL_7;
    }
    v14 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v15 = v14 + 1;
        v6 = (v4 - 1) & (v14 + v6);
        v7 = (__int64 *)(v5 + ((unsigned __int64)v6 << 6));
        v16 = *v7;
        if ( v3 == *v7 )
          goto LABEL_6;
        v14 = v15;
      }
      while ( v16 != -4096 );
    }
  }
  sub_9885F0(
    v17,
    (_QWORD *)(v5 + ((unsigned __int64)(unsigned int)v4 << 6)),
    (_QWORD *)(v5 + ((unsigned __int64)(unsigned int)v4 << 6)),
    a1 + 16,
    1);
  v9 = v17[0].m128_u64[0];
LABEL_7:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9885F0(v17, v10, v10, a1 + 16, 1);
  result = 0;
  if ( v17[0].m128_u64[0] != v9 )
  {
    v12 = *(_DWORD *)(v9 + 8);
    v13 = *(_QWORD *)(a1 + 8);
    switch ( v12 )
    {
      case 4:
        return sub_98A100(v13, *(_QWORD *)(v9 + 16));
      case 5:
        return sub_98C240(v13, *(_QWORD *)(v9 + 16));
      case 1:
        return *(unsigned int *)(v9 + 16);
    }
  }
  return result;
}

