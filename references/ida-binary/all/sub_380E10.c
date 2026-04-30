unsigned __int64 __fastcall sub_380E10(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  __int64 v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __m128i v9; // xmm0
  double v10; // xmm0_8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v14; // [rsp+10h] [rbp-98h] BYREF
  __int128 v15; // [rsp+18h] [rbp-90h]
  __int64 v16; // [rsp+30h] [rbp-78h] BYREF
  __int128 v17; // [rsp+38h] [rbp-70h]
  __int64 v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v19 = 0;
  v18 = 0;
  v2 = qvector_reserve(&v18, 0, 25, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD370);
  v18 = v2;
  *(_QWORD *)&v19 = 25;
  *(_QWORD *)(v2 + 16) = 0x656C696620657275LL;
  *(__m128i *)v2 = si128;
  v16 = 0;
  *(_BYTE *)(v18 + 24) = 0;
  v17 = 0;
  v4 = qvector_reserve(&v16, 0, 6, 1);
  v16 = v4;
  *(_QWORD *)&v17 = 6;
  *(_DWORD *)v4 = 1769156138;
  *(_BYTE *)(v4 + 4) = 103;
  *(_BYTE *)(v16 + 5) = 0;
  v14 = 0;
  v15 = 0;
  v5 = qvector_reserve(&v14, 0, 19, 1);
  v14 = v5;
  v6 = _mm_load_si128((const __m128i *)&xmmword_5DD380);
  *(_QWORD *)&v15 = 19;
  *(_WORD *)(v5 + 16) = 11822;
  *(__m128i *)v5 = v6;
  *(_BYTE *)(v14 + 18) = 0;
  v7 = qalloc_or_throw(216);
  *(_QWORD *)v7 = &stru_86F6A0;
  *(_QWORD *)(v7 + 8) = 0x3FF000004LL;
  *(_QWORD *)(v7 + 40) = "List of available library modules";
  *(_OWORD *)(v7 + 16) = -1;
  v8 = (_QWORD *)(v7 + 80);
  v9 = _mm_loadl_epi64((const __m128i *)&off_867B40);
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 48) = 3;
  *(_DWORD *)(v7 + 72) = -1;
  *(__m128i *)(v7 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_867B20);
  v10 = 0.0;
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( (_QWORD *)(v7 + 176) != v8 );
  *(_DWORD *)(v7 + 176) = 0;
  v11 = *(unsigned int *)(v7 + 12);
  v12 = ((*(_DWORD *)(v7 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v7 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        interr(3449, 0, v11, v12, 0.0);
        if ( v16 )
        {
          *(_QWORD *)&v17 = 0;
          v10 = qfree(v16, nullptr);
        }
        if ( v18 )
        {
          *(_QWORD *)&v19 = 0;
          qfree(v18, nullptr, v10);
        }
        _Unwind_Resume((struct _Unwind_Exception *)v7);
      }
      BUG();
    }
    v11 = (unsigned int)v11 & 0xFE07FFFF;
    *(_BYTE *)(v7 + 11) = ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v7 + 12) = v11;
  }
  *(_QWORD *)(v7 + 184) = a1;
  *(_QWORD *)v7 = avlsgn_chooser_t___vtable;
  *(_QWORD *)(v7 + 192) = 0;
  *(_DWORD *)(v7 + 72) = 47;
  *(_OWORD *)(v7 + 200) = 0;
  sub_1C76F0((int)"HIDECANCEL\nBuilding list of the signatures", 0, v11, v12);
  sub_380830((__int64 *)v7);
  sub_1C78D0();
  sub_3BF3E0(a1, a2, v7, &v14, &v16, &v18);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, a2);
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, a2);
  }
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree(v18, a2);
  }
  *a1 = &signatures_dialog_t___vtable;
  return v20 - __readfsqword(0x28u);
}
