unsigned __int64 __fastcall sub_4F5C90(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // r12
  char *v11; // rdi
  char *v12; // rdx
  __m128i v14; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v3 = *(unsigned int *)(a2 + 4);
  v15 = __readfsqword(0x28u);
  v14 = _mm_unpacklo_epi64(
          (__m128i)*(unsigned __int64 *)(a2 + 8),
          (__m128i)(unsigned __int64)(*(_QWORD *)(a2 + 8) + v3));
  v5 = unpack_dd(&v14);
  v6 = unpack_dd(&v14);
  v7 = unpack_dd(&v14);
  v8 = v7;
  if ( !a3 )
  {
    v8 = v6;
    v6 = v7;
  }
  v9 = *(_QWORD *)(a1 + 1568);
  if ( v5 <= 0 || (unsigned __int64)(unsigned int)v5 >= *(_QWORD *)(v9 + 144) )
  {
    if ( !under_debugger )
      interr(1770);
LABEL_15:
    BUG();
  }
  v10 = *(_QWORD *)(v9 + 136) + 56LL * (unsigned int)v5;
  v11 = *(char **)(v10 + 24);
  v12 = &v11[4 * *(_QWORD *)(v10 + 32)];
  if ( v11 == v12 )
    goto LABEL_11;
  while ( *(_DWORD *)v11 != v6 )
  {
    v11 += 4;
    if ( v12 == v11 )
      goto LABEL_11;
  }
  if ( v11 == v12 )
  {
LABEL_11:
    if ( !under_debugger )
      interr(1771);
    goto LABEL_15;
  }
  memmove(v11, v11 + 4, v12 - v11 - 4);
  --*(_QWORD *)(v10 + 32);
  sub_4F5950((__int64 *)(v10 + 24), v8);
  return v15 - __readfsqword(0x28u);
}

