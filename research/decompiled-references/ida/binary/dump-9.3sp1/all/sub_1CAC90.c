__int64 __fastcall sub_1CAC90(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r13
  const void *v8; // r14
  void *v9; // rax
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
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
  __int64 v29; // [rsp+50h] [rbp-58h]
  unsigned __int64 v30; // [rsp+58h] [rbp-50h]
  __int64 v31; // [rsp+60h] [rbp-48h]
  unsigned __int64 v32; // [rsp+68h] [rbp-40h]
  __int64 v33; // [rsp+70h] [rbp-38h]

  v32 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) >= 0 && *(_BYTE *)a2 == 15 )
  {
    v4 = **(_QWORD ***)(a1 + 48);
    if ( v4 )
    {
      v5 = *v4 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v5 )
        return 0;
      while ( (*(_BYTE *)v5 & 2) == 0 )
      {
        v21 = *(_QWORD *)(v5 + 24);
        if ( a2 >= v21 )
        {
          if ( v21 >= a2 )
          {
            if ( v4 != (_QWORD *)v5 )
              return 0;
            break;
          }
          v5 = *(_QWORD *)(v5 + 16);
        }
        else
        {
          v5 = *(_QWORD *)(v5 + 8);
        }
      }
    }
    v22 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v24 = 1;
    dest = nullptr;
    v27 = 0;
    v29 = 0;
    v30 = 0xFFFFFFFF00000000LL;
    v31 = 0;
    v26 = 0;
    v28 = 0;
    copy_argloc();
    v6 = *(_QWORD *)(a2 + 8);
    HIDWORD(v30) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    v7 = *(_QWORD *)(v6 + 32);
    si128.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    if ( v7 <= 1 )
    {
      sub_6B870((__int64 *)&dest);
      v6 = *(_QWORD *)(a2 + 8);
    }
    else if ( &dest != (void **)(v6 + 24) )
    {
      v8 = *(const void **)(v6 + 24);
      v9 = dest;
      if ( *((_QWORD *)&v26 + 1) < v7 )
      {
        v9 = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v7, 1);
        dest = v9;
      }
      *(_QWORD *)&v26 = v7;
      memmove(v9, v8, v7 - 1);
      *((char *)dest + v7 - 1) = 0;
      v6 = *(_QWORD *)(a2 + 8);
    }
    if ( !*(_BYTE *)(v6 + 48) )
    {
      if ( !under_debugger )
        sub_383060(51152);
      BUG();
    }
    sub_1EF8F0(&v22, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v6 + 48, 0);
    v13 = sub_1F6560(
            *(_QWORD *)(a1 + 8),
            (unsigned int)&v22,
            0,
            v10,
            v11,
            v12,
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
    v17 = v13;
    if ( (*(_BYTE *)(v16 + 2) & 4) != 0 )
    {
      v18 = *(_QWORD *)(a2 + 8);
      if ( v18 )
      {
        clear_tinfo_t();
        v19 = *(_QWORD *)(v18 + 24);
        if ( v19 )
        {
          *(_QWORD *)(v18 + 32) = 0;
          qfree(v19);
        }
        cleanup_argloc();
        qfree(v18);
        v16 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)a2 = 9;
      v20 = j__qalloc_or_throw(24, (__int64)&v22, v14, v15);
      *(_QWORD *)v20 = v16;
      *(_QWORD *)(v20 + 8) = 0;
      *(_DWORD *)(v20 + 16) = v17;
      *(_QWORD *)(a2 + 8) = v20;
    }
    clear_tinfo_t();
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    if ( dest )
    {
      *(_QWORD *)&v26 = 0;
      qfree((__int64)dest);
    }
    cleanup_argloc();
  }
  return 0;
}
