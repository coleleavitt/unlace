unsigned __int64 __fastcall sub_1AB230(__int64 a1, const char *a2)
{
  __int64 v2; // r12
  _QWORD *v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int ordinal_limit; // r13d
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v13; // rax
  struct _Unwind_Exception *v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // [rsp+0h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+8h] [rbp-88h] BYREF
  __int16 v18; // [rsp+18h] [rbp-78h]
  __int64 v19; // [rsp+28h] [rbp-68h] BYREF
  __int128 v20; // [rsp+30h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-50h]
  __int128 v22; // [rsp+48h] [rbp-48h]
  int v23; // [rsp+58h] [rbp-38h]
  char v24; // [rsp+5Ch] [rbp-34h]
  unsigned __int64 v25; // [rsp+60h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 8) = 0x3FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v4 = (_QWORD *)(a1 + 80);
  v5 = _mm_loadl_epi64((const __m128i *)&off_85CAD0);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_DWORD *)(a1 + 48) = 6;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)&off_85CAA0);
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v4 );
  *(_DWORD *)(a1 + 176) = 0;
  v6 = *(unsigned int *)(a1 + 12);
  v7 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v14 = (struct _Unwind_Exception *)interr(3449, a2, v6, v7, 0.0);
        sub_1AB190(&v19, a2);
        clear_tinfo_t(v2);
        v15 = *(_QWORD *)(a1 + 184);
        if ( v15 )
        {
          *(_QWORD *)(a1 + 192) = 0;
          qfree(v15, a2);
        }
        *(_QWORD *)a1 = &unk_870060;
        sub_1AB100((_QWORD *)a1, a2);
        _Unwind_Resume(v14);
      }
      BUG();
    }
    v6 = (unsigned int)v6 & 0xFE07FFFF;
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v6;
  }
  *(_DWORD *)(a1 + 72) = 63;
  *(_QWORD *)a1 = enum_chooser_t___vtable;
  *(_QWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  ordinal_limit = get_ordinal_limit(0, a2, v6, v7);
  v9 = 1;
  if ( ordinal_limit > 1 )
  {
    do
    {
      while ( 1 )
      {
        v23 = 0;
        v16 = 0;
        v19 = 0;
        v21 = 0;
        v24 = 0x80;
        v20 = 0;
        v22 = 0;
        if ( (unsigned __int8)is_type_choosable(0, v9) )
        {
          v18 = 257;
          v17[1] = v9;
          v17[0] = get_idati();
          if ( (unsigned __int8)create_tinfo(&v16, 61, 189, v17) )
          {
            if ( (get_tinfo_property(v16, 2) & 0x3F) == 0x2D )
              break;
          }
        }
        ++v9;
        clear_tinfo_t(&v16);
        if ( v9 == ordinal_limit )
          return v25 - __readfsqword(0x28u);
      }
      v10 = *(_QWORD *)(a1 + 192);
      v11 = *(_QWORD *)(a1 + 184);
      if ( *(_QWORD *)(a1 + 200) < (unsigned __int64)(v10 + 1) )
      {
        v13 = qvector_reserve(a1 + 184, v11, v10 + 1, 4);
        *(_QWORD *)(a1 + 184) = v13;
        v11 = v13;
        v10 = *(_QWORD *)(a1 + 192);
      }
      *(_DWORD *)(v11 + 4 * v10) = v9++;
      ++*(_QWORD *)(a1 + 192);
      clear_tinfo_t(&v16);
    }
    while ( v9 != ordinal_limit );
  }
  return v25 - __readfsqword(0x28u);
}
