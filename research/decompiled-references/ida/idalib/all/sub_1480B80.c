__int64 __fastcall sub_1480B80(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebp
  __int64 v7; // r12
  __int64 v9; // r14
  __int16 v10; // dx
  unsigned __int64 v11; // r14
  __int64 result; // rax
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 *v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  bool v19; // al
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v25; // [rsp+10h] [rbp-98h]
  __m128i v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+30h] [rbp-78h]

  v6 = 0;
  v7 = (a4 >> 31) & 1;
  while ( 1 )
  {
    v19 = v7;
    if ( v6 <= 0x1F )
      v19 = (a4 & (1LL << v6)) != 0;
    if ( !v19 )
      break;
    v20 = sub_1480A50(a1, a2);
    v10 = *(_WORD *)(a1 + 32);
    v9 = v20;
    if ( v10 != 27 )
      goto LABEL_6;
LABEL_19:
    v21 = *(_QWORD *)(a1 + 96);
    v22 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    v25 = v21;
    sub_14634E0(v22, (int *)(a1 + 16));
    v9 = sub_1E53840(v25, v9 & 0xFFFFFFFFFFFFFFFELL, *(unsigned int *)(a1 + 40));
    if ( v9 == 1 )
      return 1;
LABEL_8:
    v11 = v9 & 0xFFFFFFFFFFFFFFFELL;
    result = sub_1E534E0(*(_QWORD *)(a1 + 96), v11, 0);
    if ( (_BYTE)result )
      return 1;
    v13 = *(unsigned int *)(a3 + 8);
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v13 + 1, 8);
      v13 = *(unsigned int *)(a3 + 8);
      result = 0;
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v13) = v11;
    ++*(_DWORD *)(a3 + 8);
    if ( *(_WORD *)(a1 + 32) != 66 )
      return result;
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v15 = *(__int64 **)(a1 + 8);
    v27 = *(_QWORD *)(a1 + 32);
    v16 = *(_DWORD *)(a1 + 16);
    v26 = v14;
    *(_DWORD *)(a1 + 40) = v16;
    sub_14634E0(v15, (int *)(a1 + 16));
    v17 = *(unsigned int *)(a1 + 2792);
    if ( (_DWORD)v17 )
    {
      v18 = *(_QWORD *)(a1 + 2784) + 24 * v17 - 24;
      if ( *(_WORD *)(a1 + 88) == *(_WORD *)(v18 + 14) && *(_DWORD *)(v18 + 16) == *(_DWORD *)(a1 + 90) )
        sub_1555D30(a1, v18, &v26);
    }
    ++v6;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) != 0 && *(_WORD *)(a1 + 32) == 24 )
  {
    sub_1564840(&v26, a1, a1 + 16, 2118);
    sub_AEA040((__int64)&v26);
    v9 = sub_14EE310(a1);
  }
  else
  {
    v9 = sub_14BDAD0(a1, 0);
  }
  v10 = *(_WORD *)(a1 + 32);
  if ( v10 == 27 )
    goto LABEL_19;
LABEL_6:
  if ( v10 != 3 )
  {
    if ( v9 == 1 )
      return 1;
    goto LABEL_8;
  }
  v23 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v23 + 760) )
  {
    *(_BYTE *)(v23 + 968) = 1;
    *(_BYTE *)(*(_QWORD *)(v23 + 48) + 6LL) = 1;
  }
  *(_WORD *)(a1 + 32) = 1;
  return 1;
}
