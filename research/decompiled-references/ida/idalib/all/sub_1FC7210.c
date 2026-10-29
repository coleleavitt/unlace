void __fastcall sub_1FC7210(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rbp
  _QWORD *i; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __m128i v13; // [rsp+0h] [rbp-48h]

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 4));
  sub_1FC23C0((unsigned int *)(a1 + 232));
  v2 = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a1 + 232) |= ((*(_QWORD *)a2 >> 19) & 1) << v2;
  *(_DWORD *)(a1 + 236) = v2 + 1;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v3 = 8LL * *(unsigned int *)(a2 + 4);
    v4 = a2 + v3 + 80;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
      v4 = a2 + v3 + 64;
    sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(v4 + 12));
    v5 = *(unsigned int *)(a2 + 4);
    v6 = *(_QWORD *)a2;
    if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
      v7 = ((v6 >> 15) & 0x10) + 8 * v5 + 64;
    else
      v7 = ((v6 >> 15) & 0x10) + 8 * v5 + 80;
    sub_1FC2440(a1, v4, a2 + v7);
  }
  v8 = (_QWORD *)(a2 + 80);
  if ( (*(_WORD *)a2 & 0x1FF) == 0x18 )
    v8 = (_QWORD *)(a2 + 64);
  for ( i = &v8[*(unsigned int *)(a2 + 4)]; i != v8; ++*(_DWORD *)(v10 + 8) )
  {
    while ( 1 )
    {
      sub_1F92A90(*(_QWORD *)(a1 + 16), *v8 & 0xFFFFFFFFFFFFFFF8LL, *(_QWORD *)(a1 + 24));
      v10 = *(_QWORD *)(a1 + 24);
      v11 = *(unsigned int *)(v10 + 8);
      v12 = *v8 & 3LL;
      if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 12) )
        break;
      ++v8;
      *(_QWORD *)(*(_QWORD *)v10 + 8 * v11) = v12;
      ++*(_DWORD *)(v10 + 8);
      if ( i == v8 )
        goto LABEL_14;
    }
    ++v8;
    sub_2237220(*(_QWORD *)(a1 + 24), v10 + 16, v11 + 1, 8);
    *(_QWORD *)(*(_QWORD *)v10 + 8LL * *(unsigned int *)(v10 + 8)) = v12;
  }
LABEL_14:
  sub_1F9E200(a1 + 8, a2 + 16);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  sub_1F9A420((__int64 *)(a1 + 8), v13.m128i_i64[0], v13.m128i_i64[1]);
}
