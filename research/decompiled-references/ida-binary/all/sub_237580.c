__int64 __fastcall sub_237580(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h]
  int v12; // [rsp+10h] [rbp-38h]
  int v13[2]; // [rsp+18h] [rbp-30h]
  int v14; // [rsp+20h] [rbp-28h]
  int v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  *(_QWORD *)v13 = __readfsqword(0x28u);
  if ( !dbg )
    return 0;
  v2 = qalloc_or_throw(184);
  *(_QWORD *)v2 = &stru_86F6A0;
  *(_QWORD *)(v2 + 8) = 0x200840E000004LL;
  *(_QWORD *)(v2 + 40) = "@0:1423[]\nNOMAINMENU\nNOSTATUSBAR\nThreads";
  *(_OWORD *)(v2 + 16) = -1;
  v3 = (_QWORD *)(v2 + 80);
  v4 = _mm_loadl_epi64((const __m128i *)&off_8602B0);
  *(_QWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 4;
  *(_DWORD *)(v2 + 72) = -1;
  *(__m128i *)(v2 + 56) = _mm_unpacklo_epi64(v4, (__m128i)(unsigned __int64)&off_8600A0);
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
  *(_DWORD *)(v2 + 72) = 121;
  *(_QWORD *)v2 = threads_chooser_t___vtable;
  LODWORD(v10) = dword_8CC428;
  *(_DWORD *)(v2 + 180) = dword_8CC428;
  if ( sub_4AED50(v2, &v10, v5, v6) )
    return 0;
  v8 = sub_4A0300(*(void **)(v2 + 40), v10, v11, v12, v13[0], v14, v15, v16);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 2488);
    v11 = 0;
    v10 = v9;
    sub_534250(&v10, 0, 0, 0.0);
    sub_534250(&v10, unk_8CA830, 0, 0.0);
    sub_534250(&v10, unk_8CA838, 0, 0.0);
  }
  return 1;
}
