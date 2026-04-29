__int64 __fastcall sub_1C7250(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r13
  const void *v10; // r14
  void *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // eax
  __int64 v16; // r15
  int v17; // r13d
  __int64 v18; // r14
  __int64 v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int64 v24; // [rsp+18h] [rbp-90h]
  void *dest; // [rsp+20h] [rbp-88h] BYREF
  __int128 v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int128 v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]
  __int64 v33; // [rsp+70h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) >= 0 && *(_BYTE *)a2 == 15 )
  {
    v5 = **(_QWORD ***)(a1 + 48);
    if ( v5 )
    {
      v6 = *v5 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v6 )
        return 0;
      while ( (*(_BYTE *)v6 & 2) == 0 )
      {
        v21 = *(_QWORD *)(v6 + 24);
        if ( a2 >= v21 )
        {
          if ( v21 >= a2 )
          {
            if ( v5 != (_QWORD *)v6 )
              return 0;
            break;
          }
          v6 = *(_QWORD *)(v6 + 16);
        }
        else
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
      }
    }
    v7 = *(_QWORD *)(a2 + 8);
    v22 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
    v24 = 1;
    dest = nullptr;
    v27 = 0;
    v29 = 0;
    v30 = 0xFFFFFFFF00000000LL;
    v31 = 0;
    v26 = 0;
    v28 = 0;
    copy_argloc(&v22, v7);
    v8 = *(_QWORD *)(a2 + 8);
    HIDWORD(v30) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    v9 = *(_QWORD *)(v8 + 32);
    si128.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    if ( v9 <= 1 )
    {
      sub_67E30((__int64 *)&dest, (__int64)"scv_%a", 0.0);
      v8 = *(_QWORD *)(a2 + 8);
    }
    else if ( &dest != (void **)(v8 + 24) )
    {
      v10 = *(const void **)(v8 + 24);
      v11 = dest;
      if ( *((_QWORD *)&v26 + 1) < v9 )
      {
        v11 = (void *)qvector_reserve(&dest, dest, v9, 1);
        dest = v11;
      }
      *(_QWORD *)&v26 = v9;
      memmove(v11, v10, v9 - 1);
      *((char *)dest + v9 - 1) = 0;
      v8 = *(_QWORD *)(a2 + 8);
    }
    if ( !*(_BYTE *)(v8 + 48) )
    {
      if ( !under_debugger )
        sub_37EEE0(51152);
      BUG();
    }
    sub_1EBC70(&v22, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v8 + 48, 0);
    v15 = sub_1F28E0(
            *(_QWORD *)(a1 + 8),
            (unsigned int)&v22,
            0,
            v12,
            v13,
            v14,
            v22,
            si128.m128i_i32[0],
            si128.m128i_i32[2],
            v24 & 0xFFFBFFFD | 2,
            (_DWORD)dest,
            v26,
            DWORD2(v26),
            v27,
            v28,
            DWORD2(v28),
            v29,
            *(_DWORD *)(a2 + 4),
            v31,
            v32,
            v33);
    v16 = *(_QWORD *)(a1 + 8);
    v17 = v15;
    if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
    {
      v18 = *(_QWORD *)(a2 + 8);
      if ( v18 )
      {
        clear_tinfo_t(v18 + 48);
        v19 = *(_QWORD *)(v18 + 24);
        if ( v19 )
        {
          *(_QWORD *)(v18 + 32) = 0;
          qfree(v19);
        }
        cleanup_argloc(v18);
        qfree(v18);
        v16 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)a2 = 9;
      v20 = j__qalloc_or_throw(24);
      *(_QWORD *)v20 = v16;
      *(_QWORD *)(v20 + 8) = 0;
      *(_DWORD *)(v20 + 16) = v17;
      *(_QWORD *)(a2 + 8) = v20;
    }
    clear_tinfo_t(&v29);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    if ( dest )
    {
      *(_QWORD *)&v26 = 0;
      qfree(dest);
    }
    cleanup_argloc(&v22);
  }
  return 0;
}
