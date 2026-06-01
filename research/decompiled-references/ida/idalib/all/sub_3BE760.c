unsigned __int64 __fastcall sub_3BE760(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  int v12; // r12d
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v14 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1672);
  v13 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dq(&v13);
  v8 = unpack_dq(&v13);
  v9 = unpack_dq(&v13);
  *(_QWORD *)(v6 + 1024) = -1;
  v10 = v9;
  sub_3BDAC0(v6, v7, 1u);
  if ( *(_QWORD *)(v6 + 1032) <= 0xFFFFFFFFFFFFFFFDLL || v7 != *(_QWORD *)(v6 + 1024) )
  {
    if ( !under_debugger )
      interr(1761);
    BUG();
  }
  if ( !a3 )
    v10 = v8;
  *(_QWORD *)(*(_QWORD *)(v6 + 1000) + 40LL) = v10;
  if ( *(_QWORD *)(v6 + 1032) == -1 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(v6 + 1000) + 48LL);
    if ( (v12 & 0x1FF) == 0x100 )
    {
      if ( !*(_QWORD *)(v6 + 1168) || !rangeset_t_find_range(v6 + 1160, v7) )
        goto LABEL_11;
      v12 &= ~0x100u;
    }
    if ( !v12 )
    {
LABEL_9:
      if ( !v10 )
        sub_3BE3F0((_QWORD *)v6);
      goto LABEL_6;
    }
LABEL_11:
    if ( (v12 & 0xFFFFF) != 0x200 )
      goto LABEL_6;
    goto LABEL_9;
  }
LABEL_6:
  *(_BYTE *)(v6 + 1200) = 1;
  return v14 - __readfsqword(0x28u);
}
