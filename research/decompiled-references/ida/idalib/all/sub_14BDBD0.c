__int64 __fastcall sub_14BDBD0(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 *v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]
  __m128i v16; // [rsp+10h] [rbp-38h] BYREF
  __int64 v17; // [rsp+20h] [rbp-28h]

LABEL_1:
  v5 = sub_14BDAD0(a1, 0, a3);
  if ( v5 == 1 )
    return 1;
  while ( 1 )
  {
    v6 = *(unsigned int *)(a2 + 8);
    v7 = v5 & 0xFFFFFFFFFFFFFFFELL;
    if ( v6 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v15 = v7;
      sub_2237220(a2, a2 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(a2 + 8);
      v7 = v15;
    }
    *(_QWORD *)(*(_QWORD *)a2 + 8 * v6) = v7;
    ++*(_DWORD *)(a2 + 8);
    if ( *(_WORD *)(a1 + 32) != 66 )
      return 0;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(_QWORD *)(v8 + 2944);
    if ( v9 >= *(unsigned int *)(v8 + 2912) )
    {
      if ( *(_WORD *)(sub_14180A0(v8, 1u) + 16) == 27 )
        return 0;
    }
    else if ( *(_WORD *)(*(_QWORD *)(v8 + 2904) + 24 * v9 + 16) == 27 )
    {
      return 0;
    }
    a3 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v10 = *(__int64 **)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 32);
    v11 = *(_DWORD *)(a1 + 16);
    v16 = a3;
    *(_DWORD *)(a1 + 40) = v11;
    sub_14634E0(v10, (int *)(a1 + 16));
    v12 = *(unsigned int *)(a1 + 2792);
    if ( !(_DWORD)v12 )
      goto LABEL_1;
    v13 = *(_QWORD *)(a1 + 2784) + 24 * v12 - 24;
    if ( *(_WORD *)(a1 + 88) != *(_WORD *)(v13 + 14) || *(_DWORD *)(v13 + 16) != *(_DWORD *)(a1 + 90) )
      goto LABEL_1;
    sub_1555D30(a1, v13, &v16);
    v5 = sub_14BDAD0(a1, 0, a3);
    if ( v5 == 1 )
      return 1;
  }
}
