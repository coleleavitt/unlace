unsigned __int64 __fastcall sub_10B9E0(const char *a1, __int64 a2, __int64 a3)
{
  const char *v3; // rbp
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r13
  int v14; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // rbp
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v3 = a1;
  v26 = __readfsqword(0x28u);
  v5 = qalloc_or_throw(248);
  if ( !a1 )
    v3 = "du/ud chains";
  *(_OWORD *)(v5 + 16) = -1;
  v8 = _mm_loadl_epi64(&off_4CA640);
  *(_QWORD *)v5 = &unk_4D8D28;
  *(_QWORD *)(v5 + 8) = 4278190084LL;
  *(_QWORD *)(v5 + 40) = v3;
  v9 = (_QWORD *)(v5 + 80);
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 48) = 3;
  *(_DWORD *)(v5 + 72) = -1;
  *(__m128i *)(v5 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)&off_4CA620);
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != (_QWORD *)(v5 + 176) );
  *(_DWORD *)(v5 + 176) = 0;
  v10 = *(unsigned int *)(v5 + 12);
  if ( ((*(_DWORD *)(v5 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v5 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, v10, ((*(_DWORD *)(v5 + 12) >> 19) & 0x3Fu) - 1, v6);
      BUG();
    }
    *(_BYTE *)(v5 + 11) = ((*(_DWORD *)(v5 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v5 + 12) = v10 & 0xFE07FFFF;
  }
  *(_QWORD *)(v5 + 184) = 0;
  *(_QWORD *)v5 = off_4CA420;
  *(_OWORD *)(v5 + 192) = 0;
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    v16 = qalloc_or_throw(24 * v11);
    *(_QWORD *)(v5 + 184) = v16;
    v17 = 0;
    *(_QWORD *)(v5 + 200) = v11;
    while ( 1 )
    {
      v18 = *(_QWORD *)a2 + 24 * v17;
      v24 = 24 * v17 + v16;
      sub_10B560((__int64 *)v24, v18);
      ++v17;
      *(_DWORD *)(v24 + 16) = *(_DWORD *)(v18 + 16);
      if ( v11 == v17 )
        break;
      v16 = *(_QWORD *)(v5 + 184);
    }
    *(_QWORD *)(v5 + 192) = v11;
  }
  v12 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(v5 + 216) = 0;
  *(_OWORD *)(v5 + 224) = 0;
  *(_DWORD *)(v5 + 208) = v12;
  v13 = *(_QWORD *)(a3 + 8);
  if ( v13 )
  {
    v19 = qalloc_or_throw(24 * v13);
    *(_QWORD *)(v5 + 216) = v19;
    v20 = v19;
    v21 = 0;
    *(_QWORD *)(v5 + 232) = v13;
    while ( 1 )
    {
      v22 = 24 * v21 + v20;
      v23 = *(_QWORD *)a3 + 24 * v21;
      sub_10B560((__int64 *)v22, v23);
      ++v21;
      *(_DWORD *)(v22 + 16) = *(_DWORD *)(v23 + 16);
      if ( v13 == v21 )
        break;
      v20 = *(_QWORD *)(v5 + 216);
    }
    *(_QWORD *)(v5 + 224) = v13;
  }
  v14 = *(_DWORD *)(a3 + 24);
  v25 = 0;
  *(_DWORD *)(v5 + 240) = v14;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, v5, &v25, &callui, v7);
  return v26 - __readfsqword(0x28u);
}
