__int64 __fastcall sub_17CAA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rbp
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // cc
  _OWORD *v8; // rsi
  __m128i si128; // xmm0
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  v2 = qalloc_or_throw(224);
  *(_QWORD *)v2 = &stru_86F6A0;
  *(_QWORD *)(v2 + 8) = 0x20C0236000004LL;
  *(_QWORD *)(v2 + 40) = "@0:1714[]\nUndo history";
  v3 = (_QWORD *)(v2 + 80);
  *(_OWORD *)(v2 + 16) = -1;
  v4 = _mm_loadl_epi64((const __m128i *)&off_85C2D0);
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 2;
  *(_DWORD *)(v2 + 72) = -1;
  *(__m128i *)(v2 + 56) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_85C2C0);
  do
  {
    *v3 = 0;
    v3 += 3;
    *((_OWORD *)v3 - 1) = 0;
  }
  while ( v3 != (_QWORD *)(v2 + 176) );
  *(_DWORD *)(v2 + 176) = 0;
  v5 = *(unsigned int *)(v2 + 12);
  v6 = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v2 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v5, v6, 0.0);
      BUG();
    }
    v5 = (unsigned int)v5 & 0xFE07FFFF;
    *(_BYTE *)(v2 + 11) = ((*(_DWORD *)(v2 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v2 + 12) = v5;
  }
  v7 = *(_QWORD *)(v2 + 144) <= 0x10u;
  *(_QWORD *)(v2 + 184) = 0;
  *(_QWORD *)v2 = undo_chooser_t___vtable;
  v8 = *(_OWORD **)(v2 + 128);
  *(_OWORD *)(v2 + 192) = 0;
  *(_OWORD *)(v2 + 208) = 0;
  if ( v7 )
  {
    v11 = qvector_reserve(v2 + 128, v8, 17, 1);
    *(_QWORD *)(v2 + 128) = v11;
    v8 = (_OWORD *)v11;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC350);
  *(_QWORD *)(v2 + 136) = 17;
  v12[0] = -1;
  *v8 = si128;
  *(_BYTE *)(*(_QWORD *)(v2 + 128) + 16LL) = 0;
  sub_4AED50(v2, v12, v5, v6);
  return 1;
}
