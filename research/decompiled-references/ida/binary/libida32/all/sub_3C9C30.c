unsigned __int64 __fastcall sub_3C9C30(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v6; // rdx
  unsigned __int128 i; // kr00_16
  unsigned int v8; // ebp
  int v9; // r13d
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // rax
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v3 = *(unsigned int *)(a2 + 4);
  v4 = *(_QWORD *)(a1 + 1480);
  v15 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 8);
  v14 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(v6 + v3));
  for ( i = __PAIR128__(v6 + v3, v6); (unsigned __int64)i < *((_QWORD *)&i + 1); i = (unsigned __int128)v14 )
  {
    v8 = unpack_dd(&v14);
    v9 = unpack_dd(&v14);
    v10 = unpack_dd(&v14);
    *(_DWORD *)(v4 + 1016) = -1;
    v11 = v10;
    sub_3B8E40(v4, v8, 1u);
    v12 = (_DWORD *)sub_3C9940(v4, v8);
    if ( !v12 )
    {
      if ( !under_debugger )
        interr(1673);
      BUG();
    }
    if ( !a3 )
      v11 = v9;
    *v12 = v11;
    if ( *(_QWORD *)(v4 + 1024) <= 0xFFFFFFFFFFFFFFFDLL )
      continue;
    if ( (v11 & 0x1FF) == 0x100 )
    {
      if ( !*(_QWORD *)(v4 + 1160) || !rangeset_t_find_range(v4 + 1152, v8) )
        goto LABEL_14;
      BYTE1(v11) &= ~1u;
    }
    if ( !v11 )
      goto LABEL_11;
LABEL_14:
    if ( (v11 & 0xFFFFF) == 0x200 )
    {
LABEL_11:
      sub_3B95C0(v4);
      continue;
    }
  }
  return v15 - __readfsqword(0x28u);
}

