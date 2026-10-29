unsigned __int64 __fastcall sub_50D550(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  int v7; // ebx
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rbx
  char *v12; // rdi
  char *v13; // rdx
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 4);
  v15 = __readfsqword(0x28u);
  v14 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)(v4 + v5));
  v7 = unpack_dd(&v14);
  v8 = unpack_dq(&v14);
  v9 = *(_QWORD *)(a1 + 1760);
  v10 = *(_QWORD *)(v9 + 144) + 56LL * v7;
  if ( *(_DWORD *)a2 - 127 == a3 )
  {
    v12 = *(char **)(v10 + 24);
    v13 = &v12[8 * *(_QWORD *)(v10 + 32)];
    if ( v12 == v13 )
      goto LABEL_10;
    while ( v8 != *(_QWORD *)v12 )
    {
      v12 += 8;
      if ( v13 == v12 )
        goto LABEL_10;
    }
    if ( v13 == v12 )
    {
LABEL_10:
      if ( !under_debugger )
        interr(1768);
      BUG();
    }
    memmove(v12, v12 + 8, v13 - v12 - 8);
    --*(_QWORD *)(v10 + 32);
  }
  else
  {
    sub_50D070((__int64 *)(v10 + 24), v8);
  }
  *(_BYTE *)(v9 + 168) = 1;
  return v15 - __readfsqword(0x28u);
}
