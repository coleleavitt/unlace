unsigned __int64 __fastcall sub_10F420(const char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  const char *v5; // rbp
  __int64 v7; // rbx
  __int64 v8; // r9
  __m128i v9; // xmm0
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r13
  int v16; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  v28 = __readfsqword(0x28u);
  v7 = qalloc_or_throw(248, a2, a3, a4);
  if ( !a1 )
    v5 = "du/ud chains";
  *(_OWORD *)(v7 + 16) = -1;
  v9 = _mm_loadl_epi64(&off_4DD4E0);
  *(_QWORD *)v7 = &unk_4EBE48;
  *(_QWORD *)(v7 + 8) = 4278190084LL;
  *(_QWORD *)(v7 + 40) = v5;
  v10 = (_QWORD *)(v7 + 80);
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 48) = 3;
  *(_DWORD *)(v7 + 72) = -1;
  *(__m128i *)(v7 + 56) = _mm_unpacklo_epi64(v9, (__m128i)(unsigned __int64)&off_4DD4C0);
  do
  {
    *v10 = 0;
    v10 += 3;
    *((_OWORD *)v10 - 1) = 0;
  }
  while ( v10 != (_QWORD *)(v7 + 176) );
  *(_DWORD *)(v7 + 176) = 0;
  v11 = *(unsigned int *)(v7 + 12);
  v12 = ((*(_DWORD *)(v7 + 12) >> 19) & 0x3Fu) - 1;
  if ( ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(v7 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    v11 = (unsigned int)v11 & 0xFE07FFFF;
    *(_BYTE *)(v7 + 11) = ((*(_DWORD *)(v7 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(v7 + 12) = v11;
  }
  *(_QWORD *)(v7 + 184) = 0;
  *(_QWORD *)v7 = off_4DD2C0;
  *(_OWORD *)(v7 + 192) = 0;
  v13 = *(_QWORD *)(a2 + 8);
  if ( v13 )
  {
    v18 = qalloc_or_throw(24 * v13, a2, v11, v12);
    *(_QWORD *)(v7 + 184) = v18;
    v19 = 0;
    *(_QWORD *)(v7 + 200) = v13;
    while ( 1 )
    {
      v20 = *(_QWORD *)v4 + 24 * v19;
      a2 = v20;
      v26 = 24 * v19 + v18;
      sub_10EFA0((__int64 *)v26, v20);
      v12 = *(unsigned int *)(v20 + 16);
      ++v19;
      *(_DWORD *)(v26 + 16) = v12;
      if ( v13 == v19 )
        break;
      v18 = *(_QWORD *)(v7 + 184);
    }
    *(_QWORD *)(v7 + 192) = v13;
  }
  v14 = *(_DWORD *)(v4 + 24);
  *(_QWORD *)(v7 + 216) = 0;
  *(_OWORD *)(v7 + 224) = 0;
  *(_DWORD *)(v7 + 208) = v14;
  v15 = *(_QWORD *)(a3 + 8);
  if ( v15 )
  {
    v21 = qalloc_or_throw(24 * v15, a2, v11, v12);
    *(_QWORD *)(v7 + 216) = v21;
    v22 = v21;
    v23 = 0;
    *(_QWORD *)(v7 + 232) = v15;
    while ( 1 )
    {
      v24 = 24 * v23 + v22;
      v25 = *(_QWORD *)a3 + 24 * v23;
      sub_10EFA0((__int64 *)v24, v25);
      ++v23;
      *(_DWORD *)(v24 + 16) = *(_DWORD *)(v25 + 16);
      if ( v15 == v23 )
        break;
      v22 = *(_QWORD *)(v7 + 216);
    }
    *(_QWORD *)(v7 + 224) = v15;
  }
  v16 = *(_DWORD *)(a3 + 24);
  v27 = 0;
  *(_DWORD *)(v7 + 240) = v16;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(16, 0, v7, &v27, &callui, v8);
  return v28 - __readfsqword(0x28u);
}
