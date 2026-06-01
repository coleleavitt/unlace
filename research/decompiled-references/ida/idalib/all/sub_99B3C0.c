__int64 __fastcall sub_99B3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // rdi
  int v18; // edi
  __int64 v19; // rdx
  int v20; // eax
  __m128i v21; // [rsp+0h] [rbp-38h] BYREF
  __int64 v22; // [rsp+10h] [rbp-28h]

  v8 = sub_999B20(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)(a1 + 16) = v8;
  *(_QWORD *)(v8 + 32) = a2 & 0xFFFFFFFFFFFFFFF9LL;
  v10 = *(unsigned int *)(a1 + 160);
  v11 = *(_QWORD *)(a2 + 8);
  v12 = *(_QWORD *)(a1 + 144);
  if ( !(_DWORD)v10 )
    goto LABEL_9;
  v13 = (unsigned int)(v10 - 1);
  LODWORD(v14) = v13 & (((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4));
  v15 = v12 + 32LL * (unsigned int)v14;
  if ( v11 == *(_QWORD *)v15 )
    goto LABEL_3;
  if ( *(_QWORD *)v15 == -4096 )
  {
LABEL_9:
    v16 = *(_QWORD *)(a1 + 16);
    goto LABEL_10;
  }
  v18 = 1;
  while ( 1 )
  {
    v14 = (unsigned int)v13 & (v18 + (_DWORD)v14);
    v15 = v12 + 32 * v14;
    v9 = *(_QWORD *)v15;
    if ( v11 == *(_QWORD *)v15 )
      break;
    ++v18;
    if ( v9 == -4096 )
      goto LABEL_9;
  }
LABEL_3:
  v16 = *(_QWORD *)(a1 + 16);
  if ( v15 != v12 + 32 * v10 )
  {
    v21 = _mm_loadu_si128((const __m128i *)(v15 + 8));
    v22 = *(_QWORD *)(v15 + 24);
    sub_999860(
      v16,
      *(_QWORD *)(v15 + 8),
      2LL * (*(_QWORD *)(v15 + 8) == 0),
      (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL),
      v13,
      v9);
    sub_99AC70(
      (_QWORD *)a1,
      *(_QWORD *)(a1 + 128),
      *(_QWORD *)(a1 + 136),
      v21.m128i_u64[1],
      v22,
      (unsigned __int64 *)a2);
    return *(_QWORD *)(a1 + 16);
  }
LABEL_10:
  v19 = *(_QWORD *)(a1 + 128);
  v20 = *(_DWORD *)(a1 + 136);
  v21.m128i_i64[0] = v16;
  v21.m128i_i64[1] = v19;
  LODWORD(v22) = v20;
  sub_994520((__m128i **)(a1 + 168), &v21);
  return *(_QWORD *)(a1 + 16);
}
