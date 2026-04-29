unsigned __int64 __fastcall sub_3A7870(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, const char *a5)
{
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // edi
  const char *v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // r12
  char v24; // al
  unsigned __int64 v26; // r15
  unsigned __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 *v32; // r15
  _QWORD *v33; // r14
  __int64 v34; // rcx
  char v35; // si
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // r14
  _QWORD *v40; // r15
  __int64 v41; // rcx
  char v42; // si
  __int64 v43; // [rsp+0h] [rbp-A8h]
  __int64 *v44; // [rsp+8h] [rbp-A0h]
  __int64 v45; // [rsp+8h] [rbp-A0h]
  __int64 *v46; // [rsp+10h] [rbp-98h]
  __int64 v47; // [rsp+18h] [rbp-90h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+28h] [rbp-80h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  __int64 v52; // [rsp+30h] [rbp-78h] BYREF
  __int64 v53; // [rsp+38h] [rbp-70h] BYREF
  char v54; // [rsp+40h] [rbp-68h]
  int v55; // [rsp+44h] [rbp-64h]
  __int64 v56; // [rsp+50h] [rbp-58h]
  __int64 v57; // [rsp+58h] [rbp-50h] BYREF
  char v58; // [rsp+60h] [rbp-48h]
  int v59; // [rsp+64h] [rbp-44h]
  unsigned __int64 v60; // [rsp+68h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  *(_QWORD *)a1 = &unk_4B7C88;
  *(_QWORD *)(a1 + 8) = 0x803FF000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v8 = _mm_loadl_epi64((const __m128i *)&off_4B3D68);
  v9 = (_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 6;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v8, (__m128i)(unsigned __int64)&off_4B3CE0);
  do
  {
    *v9 = 0;
    v9 += 3;
    *((_OWORD *)v9 - 1) = 0;
  }
  while ( v9 != (_QWORD *)(a1 + 176) );
  *(_DWORD *)(a1 + 176) = 0;
  v10 = *(unsigned int *)(a1 + 12);
  v11 = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
        interr(3449, a2, a5, v10, a5);
      BUG();
    }
    *(_BYTE *)(a1 + 11) = v11;
    *(_DWORD *)(a1 + 12) = v10 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)a1 = off_4B3B50;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_BYTE *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  *(_OWORD *)(a1 + 248) = 0;
  sub_652F0((__int64 *)(a1 + 240), (__int64)"Global cross references to %s", a5);
  v12 = s1;
  if ( *(_QWORD *)(a1 + 248) )
    v12 = *(const char **)(a1 + 240);
  v13 = *(_QWORD *)(a1 + 200);
  *(_QWORD *)(a1 + 40) = v12;
  if ( a4 == v13 )
  {
LABEL_20:
    if ( !a4 )
      return v60 - __readfsqword(0x28u);
    goto LABEL_21;
  }
  v52 = 0;
  v54 = 0;
  v55 = 0;
  v53 = 0;
  if ( a4 < v13 )
  {
    v18 = a4;
    do
    {
      v19 = 3 * v18++;
      clear_tinfo_t(*(_QWORD *)(a1 + 192) + 8 * v19 + 8);
    }
    while ( v13 != v18 );
    *(_QWORD *)(a1 + 200) = a4;
    goto LABEL_19;
  }
  v14 = *(_QWORD *)(a1 + 208);
  v47 = a1 + 192;
  v15 = *(_QWORD *)(a1 + 192);
  if ( (unsigned __int64)&v52 < v15 || (unsigned __int64)&v52 >= v15 + 24 * v14 )
  {
    if ( v14 >= a4 )
      goto LABEL_46;
    v30 = qvector_reserve(v47, 0, a4, 24);
    v31 = *(_QWORD *)(a1 + 208);
    v48 = v30;
    *(_QWORD *)(a1 + 208) = v14;
    v32 = *(__int64 **)(a1 + 192);
    v50 = v31;
    v43 = *(_QWORD *)(a1 + 200) - 1LL;
    if ( v43 >= 0 )
    {
      v33 = (_QWORD *)v30;
      do
      {
        v34 = *v32;
        v33[1] = 0;
        *v33 = v34;
        v44 = v32 + 1;
        copy_tinfo_t(v33 + 1, v32 + 1);
        v35 = *((_BYTE *)v32 + 16);
        v32 += 3;
        v33 += 3;
        *((_BYTE *)v33 - 8) = v35;
        *((_DWORD *)v33 - 1) = *((_DWORD *)v32 - 1);
        clear_tinfo_t(v44);
        --v43;
      }
      while ( v43 != -1 );
      v32 = *(__int64 **)(a1 + 192);
    }
    qfree(v32);
    v15 = v48;
    v13 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 192) = v48;
    *(_QWORD *)(a1 + 208) = v50;
    if ( v13 < a4 )
    {
LABEL_46:
      while ( 1 )
      {
        v16 = v15 + 24 * v13;
        v17 = v52;
        *(_QWORD *)(v16 + 8) = 0;
        *(_QWORD *)v16 = v17;
        copy_tinfo_t(v16 + 8, &v53);
        ++v13;
        *(_BYTE *)(v16 + 16) = v54;
        *(_DWORD *)(v16 + 20) = v55;
        if ( v13 >= a4 )
          break;
        v15 = *(_QWORD *)(a1 + 192);
      }
    }
    *(_QWORD *)(a1 + 200) = a4;
    clear_tinfo_t(&v53);
    goto LABEL_21;
  }
  v56 = 0;
  v57 = 0;
  copy_tinfo_t(&v57, &v53);
  v26 = *(_QWORD *)(a1 + 208);
  v58 = v54;
  v59 = v55;
  if ( v26 < a4 )
  {
    v36 = qvector_reserve(v47, 0, a4, 24);
    v37 = *(_QWORD *)(a1 + 200);
    v38 = *(_QWORD *)(a1 + 208);
    v49 = v36;
    *(_QWORD *)(a1 + 208) = v26;
    v39 = *(__int64 **)(a1 + 192);
    v51 = v38;
    v45 = v37 - 1;
    if ( v37 - 1 >= 0 )
    {
      v40 = (_QWORD *)v36;
      do
      {
        v41 = *v39;
        v40[1] = 0;
        *v40 = v41;
        v46 = v39 + 1;
        copy_tinfo_t(v40 + 1, v39 + 1);
        v42 = *((_BYTE *)v39 + 16);
        v39 += 3;
        v40 += 3;
        *((_BYTE *)v40 - 8) = v42;
        *((_DWORD *)v40 - 1) = *((_DWORD *)v39 - 1);
        clear_tinfo_t(v46);
        --v45;
      }
      while ( v45 != -1 );
      v39 = *(__int64 **)(a1 + 192);
    }
    qfree(v39);
    *(_QWORD *)(a1 + 192) = v49;
    *(_QWORD *)(a1 + 208) = v51;
  }
  v27 = *(_QWORD *)(a1 + 200);
  if ( v27 >= a4 )
  {
    *(_QWORD *)(a1 + 200) = a4;
    clear_tinfo_t(&v57);
LABEL_19:
    clear_tinfo_t(&v53);
    goto LABEL_20;
  }
  do
  {
    v28 = *(_QWORD *)(a1 + 192) + 24 * v27;
    v29 = v56;
    *(_QWORD *)(v28 + 8) = 0;
    *(_QWORD *)v28 = v29;
    copy_tinfo_t(v28 + 8, &v57);
    ++v27;
    *(_BYTE *)(v28 + 16) = v58;
    *(_DWORD *)(v28 + 20) = v59;
  }
  while ( a4 != v27 );
  *(_QWORD *)(a1 + 200) = a4;
  clear_tinfo_t(&v57);
  clear_tinfo_t(&v53);
LABEL_21:
  v20 = a3 + 8;
  v21 = 0;
  v22 = -8 - a3;
  do
  {
    v23 = *(_QWORD *)(a1 + 192) + v22 + v20;
    *(_QWORD *)v23 = *(_QWORD *)(v20 - 8);
    copy_tinfo_t(v23 + 8, v20);
    v24 = *(_BYTE *)(v20 + 8);
    ++v21;
    v20 += 24;
    *(_BYTE *)(v23 + 16) = v24;
    *(_DWORD *)(v23 + 20) = *(_DWORD *)(v20 - 12);
  }
  while ( a4 != v21 );
  return v60 - __readfsqword(0x28u);
}
