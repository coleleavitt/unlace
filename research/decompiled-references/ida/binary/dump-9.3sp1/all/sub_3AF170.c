unsigned __int64 __fastcall sub_3AF170(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __m128i v6; // xmm0
  _QWORD *v7; // rax
  unsigned int v8; // ecx
  const char *v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r12
  char v20; // al
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r15
  _QWORD *v29; // r14
  __int64 v30; // rcx
  char v31; // si
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  _QWORD *v36; // r15
  __int64 v37; // rcx
  char v38; // si
  __int64 v39; // [rsp+0h] [rbp-A8h]
  __int64 v40; // [rsp+8h] [rbp-A0h]
  __int64 v41; // [rsp+18h] [rbp-90h]
  __int64 v42; // [rsp+20h] [rbp-88h]
  __int64 v43; // [rsp+20h] [rbp-88h]
  __int64 v44; // [rsp+28h] [rbp-80h]
  __int64 v45; // [rsp+28h] [rbp-80h]
  _QWORD v46[2]; // [rsp+30h] [rbp-78h] BYREF
  char v47; // [rsp+40h] [rbp-68h]
  int v48; // [rsp+44h] [rbp-64h]
  __int64 v49; // [rsp+50h] [rbp-58h]
  __int64 v50; // [rsp+58h] [rbp-50h]
  char v51; // [rsp+60h] [rbp-48h]
  int v52; // [rsp+64h] [rbp-44h]
  unsigned __int64 v53; // [rsp+68h] [rbp-40h]

  v53 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_4EBE48;
  *(_QWORD *)(a1 + 8) = 0x803FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v6 = _mm_loadl_epi64((const __m128i *)&off_4E7568);
  v7 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 6;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)&off_4E74E0);
  do
  {
    *v7 = 0;
    v7 += 3;
    *((_OWORD *)v7 - 1) = 0;
  }
  while ( v7 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v8 = *(_DWORD *)(a1 + 12);
  if ( ((v8 >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr();
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((v8 >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v8 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)a1 = off_4E7350;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_BYTE *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  sub_6B870((__int64 *)(a1 + 240));
  v9 = s1;
  if ( *(_QWORD *)(a1 + 248) )
    v9 = *(const char **)(a1 + 240);
  v10 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 40) = v9;
  if ( a4 == v10 )
  {
LABEL_20:
    if ( !a4 )
      return v53 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  v46[0] = 0;
  v47 = 0;
  v48 = 0;
  v46[1] = 0;
  if ( a4 < v10 )
  {
    v15 = a4;
    do
    {
      ++v15;
      clear_tinfo_t();
    }
    while ( v10 != v15 );
    *(_QWORD *)(a1 + 200) = a4;
    goto LABEL_19;
  }
  v11 = *(_QWORD *)(a1 + 208);
  v41 = a1 + 192;
  v12 = *(_QWORD *)(a1 + 192);
  if ( (unsigned __int64)v46 < v12 || (unsigned __int64)v46 >= v12 + 24 * v11 )
  {
    if ( v11 >= a4 )
      goto LABEL_46;
    v26 = qvector_reserve(v41, 0, a4, 24);
    v27 = *(_QWORD *)(a1 + 208);
    v42 = v26;
    *(_QWORD *)(a1 + 208) = v11;
    v28 = *(_QWORD *)(a1 + 192);
    v44 = v27;
    v39 = *(_QWORD *)(a1 + 200) - 1LL;
    if ( v39 >= 0 )
    {
      v29 = (_QWORD *)v26;
      do
      {
        v30 = *(_QWORD *)v28;
        v29[1] = 0;
        *v29 = v30;
        copy_tinfo_t();
        v31 = *(_BYTE *)(v28 + 16);
        v28 += 24;
        v29 += 3;
        *((_BYTE *)v29 - 8) = v31;
        *((_DWORD *)v29 - 1) = *(_DWORD *)(v28 - 4);
        clear_tinfo_t();
        --v39;
      }
      while ( v39 != -1 );
      v28 = *(_QWORD *)(a1 + 192);
    }
    qfree(v28);
    v12 = v42;
    v10 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 192) = v42;
    *(_QWORD *)(a1 + 208) = v44;
    if ( v10 < a4 )
    {
LABEL_46:
      while ( 1 )
      {
        v13 = v12 + 24 * v10;
        v14 = v46[0];
        *(_QWORD *)(v13 + 8) = 0;
        *(_QWORD *)v13 = v14;
        copy_tinfo_t();
        ++v10;
        *(_BYTE *)(v13 + 16) = v47;
        *(_DWORD *)(v13 + 20) = v48;
        if ( v10 >= a4 )
          break;
        v12 = *(_QWORD *)(a1 + 192);
      }
    }
    *(_QWORD *)(a1 + 200) = a4;
    clear_tinfo_t();
    goto LABEL_21;
  }
  v49 = 0;
  v50 = 0;
  copy_tinfo_t();
  v22 = *(_QWORD *)(a1 + 208);
  v51 = v47;
  v52 = v48;
  if ( v22 < a4 )
  {
    v32 = qvector_reserve(v41, 0, a4, 24);
    v33 = *(_QWORD *)(a1 + 200);
    v34 = *(_QWORD *)(a1 + 208);
    v43 = v32;
    *(_QWORD *)(a1 + 208) = v22;
    v35 = *(_QWORD *)(a1 + 192);
    v45 = v34;
    v40 = v33 - 1;
    if ( v33 - 1 >= 0 )
    {
      v36 = (_QWORD *)v32;
      do
      {
        v37 = *(_QWORD *)v35;
        v36[1] = 0;
        *v36 = v37;
        copy_tinfo_t();
        v38 = *(_BYTE *)(v35 + 16);
        v35 += 24;
        v36 += 3;
        *((_BYTE *)v36 - 8) = v38;
        *((_DWORD *)v36 - 1) = *(_DWORD *)(v35 - 4);
        clear_tinfo_t();
        --v40;
      }
      while ( v40 != -1 );
      v35 = *(_QWORD *)(a1 + 192);
    }
    qfree(v35);
    *(_QWORD *)(a1 + 192) = v43;
    *(_QWORD *)(a1 + 208) = v45;
  }
  v23 = *(_QWORD *)(a1 + 200);
  if ( v23 >= a4 )
  {
    *(_QWORD *)(a1 + 200) = a4;
    clear_tinfo_t();
LABEL_19:
    clear_tinfo_t();
    goto LABEL_20;
  }
  do
  {
    v24 = *(_QWORD *)(a1 + 192) + 24 * v23;
    v25 = v49;
    *(_QWORD *)(v24 + 8) = 0;
    *(_QWORD *)v24 = v25;
    copy_tinfo_t();
    ++v23;
    *(_BYTE *)(v24 + 16) = v51;
    *(_DWORD *)(v24 + 20) = v52;
  }
  while ( a4 != v23 );
  *(_QWORD *)(a1 + 200) = a4;
  clear_tinfo_t();
  clear_tinfo_t();
LABEL_21:
  v16 = a3 + 8;
  v17 = 0;
  v18 = -8 - a3;
  do
  {
    v19 = *(_QWORD *)(a1 + 192) + v18 + v16;
    *(_QWORD *)v19 = *(_QWORD *)(v16 - 8);
    copy_tinfo_t();
    v20 = *(_BYTE *)(v16 + 8);
    ++v17;
    v16 += 24;
    *(_BYTE *)(v19 + 16) = v20;
    *(_DWORD *)(v19 + 20) = *(_DWORD *)(v16 - 12);
  }
  while ( a4 != v17 );
  return v53 - __readfsqword(0x28u);
}
