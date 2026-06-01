void __fastcall sub_988FA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // edi
  __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r14
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // esi
  int v18; // r10d
  __int64 v19; // r8
  __m128i v20[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h] BYREF
  __m128i v22[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v23; // [rsp+58h] [rbp-30h]

  if ( (*(_WORD *)a2 & 0x1FF) == 0x3C && (*(_DWORD *)a2 & 0x80000) == 0 )
    a2 = *(_QWORD *)(a2 + 16);
  v5 = sub_BD7CB0(a2);
  v6 = *(unsigned int *)(a1 + 32);
  v7 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v6 )
  {
    v8 = (v6 - 1) & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
    v9 = (__int64 *)(v7 + ((unsigned __int64)v8 << 6));
    v10 = *v9;
    if ( v5 == *v9 )
    {
LABEL_6:
      sub_9885F0((__m128 *)&v21, v9, (_QWORD *)((v6 << 6) + v7), a1 + 16, 1);
      v11 = v21;
      goto LABEL_7;
    }
    v17 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v8 = (v6 - 1) & (v17 + v8);
        v9 = (__int64 *)(v7 + ((unsigned __int64)v8 << 6));
        v19 = *v9;
        if ( v5 == *v9 )
          goto LABEL_6;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
  }
  sub_9885F0(
    (__m128 *)&v21,
    (_QWORD *)(v7 + ((unsigned __int64)(unsigned int)v6 << 6)),
    (_QWORD *)(v7 + ((unsigned __int64)(unsigned int)v6 << 6)),
    a1 + 16,
    1);
  v11 = v21;
LABEL_7:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 16) + ((unsigned __int64)*(unsigned int *)(a1 + 32) << 6));
  sub_9885F0((__m128 *)&v21, v12, v12, a1 + 16, 1);
  if ( v21 != v11 )
  {
    v13 = sub_BD7CB0(a3);
    v14 = _mm_loadu_si128((const __m128i *)(v11 + 8));
    v21 = v13;
    v22[0] = v14;
    v22[1] = _mm_loadu_si128((const __m128i *)(v11 + 24));
    v22[2] = _mm_loadu_si128((const __m128i *)(v11 + 40));
    v23 = *(_QWORD *)(v11 + 56);
    sub_988660(v20, a1 + 16, &v21, v22, v15, v16);
  }
}

