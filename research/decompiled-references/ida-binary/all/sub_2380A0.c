__int64 __fastcall sub_2380A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r13d
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __m128i v5; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  double v8; // xmm0_8
  __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-48h] BYREF
  int v14[4]; // [rsp+8h] [rbp-40h]
  int v15[2]; // [rsp+18h] [rbp-30h]
  int v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

  *(_QWORD *)v15 = __readfsqword(0x28u);
  v3 = qalloc_or_throw(184);
  *(_QWORD *)v3 = &stru_86F6A0;
  *(_QWORD *)(v3 + 8) = 0x200040F000004LL;
  *(_QWORD *)(v3 + 40) = "@0:1457[]\nModules";
  *(_OWORD *)(v3 + 16) = -1;
  v4 = (_QWORD *)(v3 + 80);
  v5 = _mm_loadl_epi64((const __m128i *)off_8602C0);
  *(_QWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 48) = 3;
  *(_DWORD *)(v3 + 72) = -1;
  *(__m128i *)(v3 + 56) = _mm_unpacklo_epi64(v5, (__m128i)(unsigned __int64)&off_860070);
  do
  {
    *v4 = 0;
    v4 += 3;
    *((_OWORD *)v4 - 1) = 0;
  }
  while ( v4 != (_QWORD *)(v3 + 176) );
  *(_DWORD *)(v3 + 176) = 0;
  v6 = *(unsigned int *)(v3 + 12);
  v7 = ((*(_DWORD *)(v3 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v3 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v3 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v6, v7, 0.0);
      BUG();
    }
    v6 = (unsigned int)v6 & 0xFE07FFFF;
    *(_BYTE *)(v3 + 11) = ((*(_DWORD *)(v3 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v3 + 12) = v6;
  }
  *(_QWORD *)v3 = modules_chooser_t___vtable;
  v8 = 0.0;
  *(_DWORD *)(v3 + 72) = 150;
  v13 = 0;
  *(_OWORD *)v14 = 0;
  v9 = sub_4AED50(v3, &v13, v6, v7);
  if ( v13 )
  {
    *(_QWORD *)v14 = 0;
    v8 = qfree(v13, (const char *)&v13);
  }
  if ( !v9 )
  {
    v11 = sub_4A0300(*(void **)(v3 + 40), v13, v14[0], v14[2], v15[0], v16, v17, v18);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 2488);
      *(_QWORD *)v14 = 0;
      v13 = v12;
      sub_534250(&v13, 0, 0, v8);
      sub_534250(&v13, unk_8CA840, 0, v8);
      sub_534250(&v13, unk_8CA848, 0, v8);
      sub_534250(&v13, unk_8CA850, 0, v8);
      sub_534250(&v13, unk_8CA858, 0, v8);
    }
  }
  LOBYTE(v2) = v9 == 0;
  return v2;
}
