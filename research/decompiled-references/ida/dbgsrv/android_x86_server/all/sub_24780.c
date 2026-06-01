/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_24780
// Address: 0x00024780

//----- (00024780) --------------------------------------------------------
unsigned int __cdecl sub_24780(int a1, int a2, int a3, char *s, char *a5)
{
  int v5; // ecx
  int v6; // edi
  size_t v7; // eax
  char *v8; // ecx
  size_t v9; // esi
  unsigned int v10; // edi
  void *v11; // eax
  const char *v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // esi
  unsigned int v16; // edx
  int v17; // ebx
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // ecx
  int v23; // esi
  char **v24; // esi
  char **v25; // edi
  unsigned int v26; // ecx
  char *v27; // ecx
  char *v28; // eax
  __int128 v29; // xmm0
  __m128i v30; // xmm0
  char *v31; // ecx
  int v32; // edx
  __int128 v33; // xmm0
  int v34; // ecx
  _DWORD *v35; // esi
  _DWORD *v36; // edi
  unsigned int v37; // ecx
  _DWORD *v38; // ecx
  _DWORD *v39; // eax
  int v40; // ecx
  int v42; // [esp+20h] [ebp-ECh] BYREF
  __int64 v43; // [esp+24h] [ebp-E8h] BYREF
  __int128 v44; // [esp+2Ch] [ebp-E0h]
  __m128i v45; // [esp+3Ch] [ebp-D0h] BYREF
  int v46; // [esp+4Ch] [ebp-C0h]
  __int128 v47; // [esp+50h] [ebp-BCh]
  int v48; // [esp+60h] [ebp-ACh]
  int v49; // [esp+64h] [ebp-A8h]
  int v50; // [esp+68h] [ebp-A4h]
  int v51[4]; // [esp+70h] [ebp-9Ch] BYREF
  _DWORD v52[18]; // [esp+80h] [ebp-8Ch] BYREF
  int v53; // [esp+C8h] [ebp-44h] BYREF
  int v54; // [esp+CCh] [ebp-40h]
  int v55; // [esp+D0h] [ebp-3Ch]
  char v56; // [esp+D4h] [ebp-38h]
  int v57; // [esp+D8h] [ebp-34h]
  int v58; // [esp+DCh] [ebp-30h] BYREF
  unsigned int v59; // [esp+E0h] [ebp-2Ch]
  unsigned int v60; // [esp+E4h] [ebp-28h]
  int v61; // [esp+E8h] [ebp-24h]
  int v62; // [esp+ECh] [ebp-20h]
  int v63; // [esp+F0h] [ebp-1Ch]
  unsigned int v64; // [esp+F8h] [ebp-14h]

  v64 = __readgsdword(0x14u);
  sub_8A3F0(a1, "%a: new dll %s (soname=%s)\n", a2, s, a5);
  v53 = -1;
  v54 = 0;
  v55 = -1;
  v56 = 0;
  v58 = 0;
  v57 = 0;
  v60 = 0;
  v59 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  set_debug_event_code(&v53, 8);
  if ( (v57 & 0xFFFFFFFu) > 0xB || (v5 = 2306, !_bittest(&v5, v57 & 0xFFFFFFF)) )
  {
    if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      interr(3295);
LABEL_67:
    BUG();
  }
  v6 = a1;
  v53 = *(_DWORD *)(a1 + 624);
  v54 = v53;
  v55 = a2;
  v56 = 1;
  if ( s && (v7 = strlen(s), v8 = s, v7) )
  {
    v9 = v7;
    v10 = v7 + 1;
    v11 = (void *)v58;
    if ( v60 < v10 )
    {
      v11 = qvector_reserve((int)&v58, (void *)v58, v10, 1u);
      v58 = (int)v11;
      v8 = s;
    }
    v59 = v10;
    memmove(v11, v8, v9);
    *(_BYTE *)(v58 + v9) = 0;
    v6 = a1;
  }
  else
  {
    v59 = 0;
  }
  v61 = a2;
  v62 = a3;
  v63 = -1;
  if ( *(_BYTE *)(v6 + 389) )
  {
    v12 = *(_DWORD *)(v6 + 252) ? *(const char **)(v6 + 248) : byte_EF875;
    if ( !strcmp(v12, s) )
      v63 = a2;
  }
  v13 = v57;
  if ( (v57 & 0xFFFFFFF) != 0 )
  {
    v14 = *(_DWORD *)(v6 + 72);
    if ( !v14 )
    {
      sub_2B960((_DWORD *)(v6 + 56));
      v6 = a1;
      v14 = *(_DWORD *)(a1 + 72);
    }
    v15 = *(_DWORD *)(v6 + 60);
    v16 = v14 / 0x5D;
    v17 = v6;
    v18 = *(_DWORD *)(v15 + 4 * (v14 / 0x5D));
    v19 = v18 + 44 * (v14 % 0x5D);
    v20 = 0;
    if ( *(_DWORD *)(v17 + 64) != v15 )
      v20 = v19;
    if ( v20 == v18 )
      v20 = *(_DWORD *)(v15 + 4 * v16 - 4) + 4092;
    *(_DWORD *)(v20 - 44) = -1;
    *(_DWORD *)(v20 - 40) = 0;
    *(_DWORD *)(v20 - 36) = -1;
    *(_BYTE *)(v20 - 32) = 0;
    *(_DWORD *)(v20 - 28) = 0;
    copy_debug_event(v20 - 44, &v53);
    --*(_DWORD *)(a1 + 72);
    ++*(_DWORD *)(a1 + 76);
    *(_BYTE *)(a1 + 676) = 0;
    v13 = v57;
  }
  v21 = v13 & 0xFFFFFFF;
  if ( v21 > 0xB || (v22 = 2306, !_bittest(&v22, v21)) )
  {
    if ( !*((_BYTE *)&qword_13ACD8 + 13940) )
      interr(3295);
    goto LABEL_67;
  }
  v23 = v62;
  sub_1B530((int)&v42, s);
  sub_1B530((int)v51, a5);
  sub_24F20(v52, a2, v23, (int)&v42, (const void **)v51);
  if ( v51[0] )
  {
    v51[1] = 0;
    qfree((void *)v51[0]);
    v51[0] = 0;
    v51[2] = 0;
  }
  if ( v42 )
  {
    LODWORD(v43) = 0;
    qfree((void *)v42);
    v42 = 0;
    HIDWORD(v43) = 0;
  }
  v42 = v52[0];
  sub_2CF50((int)&v43, (int)v52);
  v24 = *(char ***)(a1 + 560);
  if ( v24 )
  {
    v25 = (char **)(a1 + 560);
    while ( 1 )
    {
      v26 = (unsigned int)v24[4];
      if ( v42 >= v26 )
      {
        if ( v26 >= v42 || (v25 = v24 + 1, (v27 = v24[1]) == nullptr) )
        {
          if ( !*v25 )
            goto LABEL_41;
          goto LABEL_47;
        }
      }
      else
      {
        v27 = *v24;
        v25 = v24;
        if ( !*v24 )
          goto LABEL_40;
      }
      v24 = (char **)v27;
    }
  }
  v24 = (char **)(a1 + 560);
LABEL_40:
  v25 = v24;
  if ( !*v24 )
  {
LABEL_41:
    v28 = (char *)operator new(0x5Cu);
    *((_DWORD *)v28 + 4) = v42;
    *(_QWORD *)(v28 + 20) = v43;
    v29 = v44;
    *(_QWORD *)&v44 = 0;
    DWORD2(v44) = 0;
    *(_OWORD *)(v28 + 28) = v29;
    HIDWORD(v44) = 0;
    v30 = _mm_loadu_si128(&v45);
    v45.m128i_i64[0] = 0;
    v31 = v28 + 56;
    *(__m128i *)(v28 + 44) = v30;
    v32 = v46;
    *((_DWORD *)v28 + 15) = v46;
    if ( v32 )
    {
      *(_DWORD *)(_mm_cvtsi128_si32(_mm_shuffle_epi32(v30, 231)) + 8) = v31;
      v45.m128i_i32[2] = (__int32)&v45.m128i_i32[3];
      v45.m128i_i32[3] = 0;
      v46 = 0;
    }
    else
    {
      *((_DWORD *)v28 + 13) = v31;
    }
    v33 = v47;
    *(_QWORD *)&v47 = 0;
    DWORD2(v47) = 0;
    *((_OWORD *)v28 + 4) = v33;
    HIDWORD(v47) = 0;
    *((_DWORD *)v28 + 20) = v48;
    v48 = 0;
    *((_DWORD *)v28 + 21) = v49;
    v49 = 0;
    *((_DWORD *)v28 + 22) = v50;
    *(_DWORD *)v28 = 0;
    *((_DWORD *)v28 + 1) = 0;
    *((_DWORD *)v28 + 2) = v24;
    *v25 = v28;
    v34 = **(_DWORD **)(a1 + 556);
    if ( v34 )
    {
      *(_DWORD *)(a1 + 556) = v34;
      v28 = *v25;
    }
    sub_2D500(*(_DWORD *)(a1 + 560), (int)v28);
    ++*(_DWORD *)(a1 + 564);
  }
LABEL_47:
  sub_25060((int)&v43);
  v35 = *(_DWORD **)(a1 + 548);
  if ( v35 )
  {
    v36 = (_DWORD *)(a1 + 548);
    while ( 1 )
    {
      v37 = v35[4];
      if ( v52[0] >= v37 )
      {
        if ( v37 >= v52[0] || (v36 = v35 + 1, (v38 = (_DWORD *)v35[1]) == nullptr) )
        {
          if ( !*v36 )
            goto LABEL_59;
          goto LABEL_62;
        }
      }
      else
      {
        v38 = (_DWORD *)*v35;
        v36 = v35;
        if ( !*v35 )
          goto LABEL_58;
      }
      v35 = v38;
    }
  }
  v35 = (_DWORD *)(a1 + 548);
LABEL_58:
  v36 = v35;
  if ( !*v35 )
  {
LABEL_59:
    v39 = operator new(0x14u);
    v39[4] = v52[0];
    *v39 = 0;
    v39[1] = 0;
    v39[2] = v35;
    *v36 = v39;
    v40 = **(_DWORD **)(a1 + 544);
    if ( v40 )
    {
      *(_DWORD *)(a1 + 544) = v40;
      v39 = (_DWORD *)*v36;
    }
    sub_2D500(*(_DWORD *)(a1 + 548), (int)v39);
    ++*(_DWORD *)(a1 + 552);
  }
LABEL_62:
  sub_25060((int)v52);
  free_debug_event(&v53);
  return __readgsdword(0x14u);
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
