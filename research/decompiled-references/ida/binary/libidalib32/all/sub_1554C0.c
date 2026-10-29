unsigned __int64 __fastcall sub_1554C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  __m128i v3; // xmm0
  unsigned int v4; // edx
  unsigned int ordinal_limit; // r13d
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v10; // rax
  struct _Unwind_Exception *v11; // rbx
  __int64 v12; // [rsp+28h] [rbp-68h] BYREF
  __int128 v13; // [rsp+30h] [rbp-60h]
  __int64 v14; // [rsp+40h] [rbp-50h]
  __int128 v15; // [rsp+48h] [rbp-48h]
  int v16; // [rsp+58h] [rbp-38h]
  char v17; // [rsp+5Ch] [rbp-34h]
  unsigned __int64 v18; // [rsp+60h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &stru_235898;
  *(_QWORD *)(a1 + 8) = 0x3FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v2 = (_QWORD *)(a1 + 80);
  v3 = _mm_loadl_epi64((const __m128i *)&off_234510);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 6;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v3, (__m128i)(unsigned __int64)&off_2344E0);
  do
  {
    *v2 = 0;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v2 );
  *(_DWORD *)(a1 + 176) = 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( ((v4 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v11 = (struct _Unwind_Exception *)interr();
        sub_14DEE0(&v12);
        clear_tinfo_t();
        if ( *(_QWORD *)(a1 + 184) )
        {
          *(_QWORD *)(a1 + 192) = 0;
          qfree();
        }
        *(_QWORD *)a1 = &unk_235B00;
        sub_BEE60((_QWORD *)a1);
        _Unwind_Resume(v11);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v4 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v4 & 0xFE07FFFF;
  }
  *(_DWORD *)(a1 + 72) = 63;
  *(_QWORD *)a1 = off_2341C0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  ordinal_limit = get_ordinal_limit();
  v6 = 1;
  if ( ordinal_limit > 1 )
  {
    do
    {
      while ( 1 )
      {
        v16 = 0;
        v12 = 0;
        v14 = 0;
        v17 = 0x80;
        v13 = 0;
        v15 = 0;
        if ( (unsigned __int8)is_type_choosable() )
        {
          get_idati();
          if ( (unsigned __int8)create_tinfo() )
          {
            if ( (get_tinfo_property() & 0x3F) == 0x2D )
              break;
          }
        }
        ++v6;
        clear_tinfo_t();
        if ( v6 == ordinal_limit )
          return v18 - __readfsqword(0x28u);
      }
      v7 = *(_QWORD *)(a1 + 192);
      v8 = *(_QWORD *)(a1 + 184);
      if ( *(_QWORD *)(a1 + 200) < (unsigned __int64)(v7 + 1) )
      {
        v10 = qvector_reserve();
        *(_QWORD *)(a1 + 184) = v10;
        v8 = v10;
        v7 = *(_QWORD *)(a1 + 192);
      }
      *(_DWORD *)(v8 + 4 * v7) = v6++;
      ++*(_QWORD *)(a1 + 192);
      clear_tinfo_t();
    }
    while ( v6 != ordinal_limit );
  }
  return v18 - __readfsqword(0x28u);
}

