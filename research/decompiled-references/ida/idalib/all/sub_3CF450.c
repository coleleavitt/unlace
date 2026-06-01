unsigned __int64 __fastcall sub_3CF450(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r12
  unsigned __int64 v6; // rdx
  unsigned __int128 i; // kr00_16
  unsigned __int64 v8; // rbp
  int v9; // r13d
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  __m128i v18; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v4 = *(_QWORD **)(a1 + 1672);
  v19 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 8);
  v18 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + v3));
  for ( i = __PAIR128__(v6 + v3, v6); (unsigned __int64)i < *((_QWORD *)&i + 1); i = (unsigned __int128)v18 )
  {
    v8 = unpack_dq(&v18);
    v9 = unpack_dd(&v18);
    v10 = unpack_dd(&v18);
    v4[128] = -1;
    v11 = v10;
    sub_3BDAC0((__int64)v4, v8, 1u);
    v16 = (_DWORD *)sub_3CF160((__int64)v4, v8, v12, v13, v14, v15);
    if ( !v16 )
    {
      if ( !under_debugger )
        interr(1673);
      BUG();
    }
    if ( !a3 )
      v11 = v9;
    *v16 = v11;
    if ( v4[129] <= 0xFFFFFFFFFFFFFFFDLL )
      continue;
    if ( (v11 & 0x1FF) == 0x100 )
    {
      if ( !v4[146] || !rangeset_t_find_range(v4 + 145, v8) )
        goto LABEL_14;
      BYTE1(v11) &= ~1u;
    }
    if ( !v11 )
      goto LABEL_11;
LABEL_14:
    if ( (v11 & 0xFFFFF) == 0x200 )
    {
LABEL_11:
      sub_3BE3F0(v4);
      continue;
    }
  }
  return v19 - __readfsqword(0x28u);
}
