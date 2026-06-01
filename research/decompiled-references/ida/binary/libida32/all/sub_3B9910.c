unsigned __int64 __fastcall sub_3B9910(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // r13d
  int v8; // r14d
  int v9; // eax
  int v10; // ebp
  int v12; // r12d
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v14 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1480);
  v13 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dd(&v13);
  v8 = unpack_dd(&v13);
  v9 = unpack_dd(&v13);
  *(_DWORD *)(v6 + 1016) = -1;
  v10 = v9;
  sub_3B8E40(v6, v7, 1u);
  if ( *(_QWORD *)(v6 + 1024) <= 0xFFFFFFFFFFFFFFFDLL || v7 != *(_DWORD *)(v6 + 1016) )
  {
    if ( !under_debugger )
      interr(1761);
    BUG();
  }
  if ( !a3 )
    v10 = v8;
  *(_DWORD *)(*(_QWORD *)(v6 + 992) + 36LL) = v10;
  if ( *(_QWORD *)(v6 + 1024) == -1 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(v6 + 992) + 40LL);
    if ( (v12 & 0x1FF) == 0x100 )
    {
      if ( !*(_QWORD *)(v6 + 1160) || !rangeset_t_find_range(v6 + 1152, v7) )
        goto LABEL_11;
      v12 &= ~0x100u;
    }
    if ( !v12 )
    {
LABEL_9:
      if ( !v10 )
        sub_3B95C0(v6);
      goto LABEL_6;
    }
LABEL_11:
    if ( (v12 & 0xFFFFF) != 0x200 )
      goto LABEL_6;
    goto LABEL_9;
  }
LABEL_6:
  *(_BYTE *)(v6 + 1192) = 1;
  return v14 - __readfsqword(0x28u);
}

