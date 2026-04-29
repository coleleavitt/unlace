__int64 __fastcall sub_1CAC90(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r13
  const void *v7; // r14
  void *v8; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r15
  int v14; // r13d
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // [rsp+0h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+18h] [rbp-90h]
  void *dest; // [rsp+20h] [rbp-88h] BYREF
  __int128 v22; // [rsp+28h] [rbp-80h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  __int128 v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+50h] [rbp-58h]
  unsigned __int64 v26; // [rsp+58h] [rbp-50h]
  __int64 v27; // [rsp+60h] [rbp-48h]
  unsigned __int64 v28; // [rsp+68h] [rbp-40h]
  __int64 v29; // [rsp+70h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  if ( *(char *)(*(_QWORD *)(a1 + 32) + 4LL) >= 0 && *(_BYTE *)a2 == 15 )
  {
    v3 = **(_QWORD ***)(a1 + 48);
    if ( v3 )
    {
      v4 = *v3 & 0xFFFFFFFFFFFFFFFCLL;
      if ( !v4 )
        return 0;
      while ( (*(_BYTE *)v4 & 2) == 0 )
      {
        v17 = *(_QWORD *)(v4 + 24);
        if ( a2 >= v17 )
        {
          if ( v17 >= a2 )
          {
            if ( v3 != (_QWORD *)v4 )
              return 0;
            break;
          }
          v4 = *(_QWORD *)(v4 + 16);
        }
        else
        {
          v4 = *(_QWORD *)(v4 + 8);
        }
      }
    }
    v18 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
    v20 = 1;
    dest = nullptr;
    v23 = 0;
    v25 = 0;
    v26 = 0xFFFFFFFF00000000LL;
    v27 = 0;
    v22 = 0;
    v24 = 0;
    copy_argloc();
    v5 = *(_QWORD *)(a2 + 8);
    HIDWORD(v26) = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    v6 = *(_QWORD *)(v5 + 32);
    si128.m128i_i64[1] = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
    if ( v6 <= 1 )
    {
      sub_6B870((__int64 *)&dest);
      v5 = *(_QWORD *)(a2 + 8);
    }
    else if ( &dest != (void **)(v5 + 24) )
    {
      v7 = *(const void **)(v5 + 24);
      v8 = dest;
      if ( *((_QWORD *)&v22 + 1) < v6 )
      {
        v8 = (void *)qvector_reserve();
        dest = v8;
      }
      *(_QWORD *)&v22 = v6;
      memmove(v8, v7, v6 - 1);
      *((char *)dest + v6 - 1) = 0;
      v5 = *(_QWORD *)(a2 + 8);
    }
    if ( !*(_BYTE *)(v5 + 48) )
    {
      if ( !under_debugger )
        sub_383060(51152);
      BUG();
    }
    sub_1EF8F0(&v18, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL), v5 + 48, 0);
    v12 = sub_1F6560(
            *(_QWORD *)(a1 + 8),
            (unsigned int)&v18,
            0,
            v9,
            v10,
            v11,
            v18,
            si128.m128i_i32[0],
            si128.m128i_i32[2],
            v20 & 0xFFFBFFFD | 2,
            (_DWORD)dest,
            v22,
            DWORD2(v22),
            v23,
            v24,
            DWORD2(v24),
            v25,
            *(_DWORD *)(a2 + 4),
            v27,
            v28,
            v29);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = v12;
    if ( (*(_BYTE *)(v13 + 2) & 4) != 0 )
    {
      v15 = *(_QWORD *)(a2 + 8);
      if ( v15 )
      {
        clear_tinfo_t();
        if ( *(_QWORD *)(v15 + 24) )
        {
          *(_QWORD *)(v15 + 32) = 0;
          qfree();
        }
        cleanup_argloc();
        qfree();
        v13 = *(_QWORD *)(a1 + 8);
      }
      *(_BYTE *)a2 = 9;
      v16 = j__qalloc_or_throw();
      *(_QWORD *)v16 = v13;
      *(_QWORD *)(v16 + 8) = 0;
      *(_DWORD *)(v16 + 16) = v14;
      *(_QWORD *)(a2 + 8) = v16;
    }
    clear_tinfo_t();
    if ( v23 )
    {
      *(_QWORD *)&v24 = 0;
      qfree();
    }
    if ( dest )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
    cleanup_argloc();
  }
  return 0;
}
