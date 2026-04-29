__int64 __fastcall sub_3760F0(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rsi
  int v6; // ebp
  int v7; // ebx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  char v14; // al
  char v15; // al
  unsigned int tinfo_size; // eax
  char v17; // al
  unsigned int v18; // ecx
  __int64 v19; // rcx
  char v20; // al
  int v21; // edx
  _QWORD *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbp
  int v26; // eax
  __int64 v27; // rbx
  __int64 v28; // r15
  unsigned __int64 v29; // r9
  size_t v30; // r10
  const void *v31; // r11
  void *v32; // rax
  unsigned __int64 v33; // rbx
  void *v34; // rbp
  __int64 v35; // rdi
  __m128i v36; // xmm0
  __int64 v38; // rdx
  __int64 v39; // rsi
  int v40; // ebp
  int v41; // esi
  __int64 v42; // rax
  int v43; // edx
  unsigned int v44; // ecx
  unsigned int v45; // esi
  __int64 v46; // rdx
  __m128i v47; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+10h] [rbp-B8h]
  _DWORD *v49; // [rsp+18h] [rbp-B0h]
  __int64 *v50; // [rsp+20h] [rbp-A8h]
  __int64 *v51; // [rsp+28h] [rbp-A0h]
  size_t v52; // [rsp+30h] [rbp-98h]
  const void *v53; // [rsp+38h] [rbp-90h]
  __int64 v54; // [rsp+48h] [rbp-80h] BYREF
  __int64 v55; // [rsp+50h] [rbp-78h] BYREF
  __int64 v56; // [rsp+58h] [rbp-70h]
  _DWORD v57[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v58[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a1 + 400);
  v58[3] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 24) = v3 & 0x206;
  v5 = *(_QWORD *)(a1 + 464);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL);
  v7 = v5;
  if ( v6 <= (int)v5 )
  {
    v40 = v6 - 1;
    if ( v40 >= (int)v5 )
    {
      v7 = v40;
    }
    else
    {
      do
      {
        v41 = v40++;
        v42 = sub_13D280((_QWORD *)a1, v41);
        v43 = *(_DWORD *)(v42 + 24);
        BYTE1(v43) &= 0x7Eu;
        *(_DWORD *)(v42 + 24) = v43 | 0x100000;
      }
      while ( v40 < v7 );
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) - 1;
    }
    v8 = v7;
    sub_81FC0((__int64 *)(a1 + 456), v7);
  }
  else
  {
    v8 = (int)v5;
  }
  sub_EABB0((__int64 *)a2, v8);
  v50 = &v54;
  v55 = 0;
  v56 = 0;
  v51 = &v55;
  sub_36D720(&v54, a1, (__int64)&v55);
  v9 = v54;
  if ( !(_BYTE)v54 )
  {
    v58[0] = 1;
    copy_tinfo_t();
    clear_tinfo_t();
    v9 = v54;
  }
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v56;
  *(_QWORD *)(a2 + 32) = v9;
  v54 = v10;
  v12 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v11;
  v56 = v12;
  LODWORD(v12) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v55;
  v13 = *(_DWORD *)(a1 + 72);
  LODWORD(v55) = v12;
  v14 = *(_BYTE *)(a2 + 88) & 0xF;
  if ( (v13 & 0xFFFFFF0F) != 0 || v13 == 192 )
  {
    v15 = v14 | 0xC0;
  }
  else
  {
    v15 = v13 | v14;
    v13 = 0;
  }
  *(_DWORD *)(a2 + 28) = v13;
  *(_BYTE *)(a2 + 88) = v15;
  if ( (get_tinfo_property() & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size();
    sub_1C59F0((__int64)v58, *(_QWORD *)(a1 + 1504), a2 + 40, tinfo_size, 0);
    v17 = *(_BYTE *)(a2 + 88);
    v18 = v17 & 0xF0;
    if ( (v17 & 0xF0) == 0xC0 )
    {
      v18 = *(_DWORD *)(a2 + 28);
      if ( v18 > 0x10 )
        goto LABEL_11;
    }
    else if ( v18 > 0x10 )
    {
LABEL_11:
      if ( !(unsigned __int8)sub_1C67E0(a1, a2 + 32, v58, v18) )
      {
        v19 = *(_QWORD *)(a1 + 1496);
        v20 = *(_BYTE *)(a2 + 88);
        LOBYTE(v21) = -16;
        if ( !*(_DWORD *)(*(_QWORD *)(v19 + 8) + 4LL) && !*(_BYTE *)(v19 + 144) )
        {
          v44 = v20 & 0xF0;
          if ( (v20 & 0xF0) == 0xC0 )
            v44 = *(_DWORD *)(a2 + 28);
          if ( v44 <= 0x10 )
          {
            v44 = getinf();
            v20 = *(_BYTE *)(a2 + 88);
          }
          v45 = v44 & 0xFFFFFFF0;
          if ( (v44 & 0xFFFFFFF0) > 0x70 )
          {
            LOBYTE(v21) = -32;
            if ( v45 != 224 && (v44 & 0xFFFFFFE0) != 0x80 )
              LOBYTE(v21) = -16;
          }
          else
          {
            LOBYTE(v21) = -16;
            if ( v45 > 0x4F )
            {
              v46 = 0x100010001LL;
              v21 = _bittest64(&v46, v45 - 80) == 0 ? -16 : -32;
            }
          }
        }
        *(_DWORD *)(a2 + 28) = 0;
        *(_BYTE *)(a2 + 88) = v21 | v20 & 0xF;
      }
      if ( *(_DWORD *)(a2 + 40) == 1 )
        *(_DWORD *)(a2 + 24) |= 0x200u;
      cleanup_argloc();
      goto LABEL_18;
    }
    v18 = getinf();
    goto LABEL_11;
  }
LABEL_18:
  v22 = *(_QWORD **)(a1 + 328);
  v49 = v57;
  sub_36CE60((__int64)v57);
  v25 = 0;
  v47.m128i_i64[0] = v7;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)a2 + 80 * v25;
      v28 = sub_13D280((_QWORD *)a1, v25);
      if ( v27 + 16 != v28 + 32 )
      {
        v29 = *(_QWORD *)(v28 + 40);
        if ( v29 && (v30 = v29 - 1, v29 != 1) )
        {
          v31 = *(const void **)(v28 + 32);
          v32 = *(void **)(v27 + 16);
          if ( *(_QWORD *)(v27 + 32) < v29 )
          {
            v38 = *(_QWORD *)(v28 + 40);
            v39 = *(_QWORD *)(v27 + 16);
            v53 = *(const void **)(v28 + 32);
            v52 = v29 - 1;
            v48 = v29;
            v32 = (void *)qvector_reserve(v27 + 16, v39, v38, 1);
            v31 = v53;
            v30 = v52;
            *(_QWORD *)(v27 + 16) = v32;
            v29 = v48;
          }
          *(_QWORD *)(v27 + 24) = v29;
          v48 = v29;
          memmove(v32, v31, v30);
          *(_BYTE *)(*(_QWORD *)(v27 + 16) + v48 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v27 + 24) = 0;
        }
      }
      copy_tinfo_t();
      if ( *(_DWORD *)v28 == 3 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) <= *(_DWORD *)(v28 + 8) )
        break;
      sub_1C7740(v58, a1, v28, *(unsigned int *)(v28 + 88));
      v22 = v58;
      copy_argloc();
      cleanup_argloc();
      if ( (*(_BYTE *)(v28 + 27) & 1) != 0 )
        *(_DWORD *)(v27 + 72) |= 0x10u;
      if ( v57[0] )
      {
        v22 = (_QWORD *)&word_2;
        if ( (get_tinfo_property() & 0xF) == 0xA )
        {
          v22 = v49;
          if ( !(unsigned int)compare_arglocs() )
          {
            *(_DWORD *)(v27 + 72) |= 2u;
            cleanup_argloc();
          }
        }
      }
      v26 = *(_DWORD *)v27;
      if ( (*(_BYTE *)(a2 + 25) & 2) == 0 && v26 == 1 )
      {
        cleanup_argloc();
        *(_DWORD *)v27 = 1;
        ++v25;
        *(_QWORD *)(v27 + 8) = 0;
        if ( v47.m128i_i64[0] == v25 )
          goto LABEL_40;
      }
      else
      {
        if ( !v26 )
        {
          if ( !under_debugger )
            sub_383060(51049);
          goto LABEL_71;
        }
        if ( v47.m128i_i64[0] == ++v25 )
          goto LABEL_40;
      }
    }
    if ( !under_debugger )
      sub_383060(52972);
LABEL_71:
    BUG();
  }
LABEL_40:
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 24) |= 1u;
    if ( *(_BYTE *)(a1 + 320) )
    {
      v33 = *(_QWORD *)(a1 + 344);
      v34 = nullptr;
      if ( v33 )
      {
        v34 = (void *)qalloc_or_throw(8 * v33, (__int64)v22, v23, v24);
        memcpy(v34, *(const void **)(a1 + 336), 8 * v33);
      }
      v35 = *(_QWORD *)(a2 + 64);
      v36 = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
      if ( v35 )
      {
        *(_QWORD *)(a2 + 72) = 0;
        v47 = v36;
        qfree(v35);
        v36 = _mm_load_si128(&v47);
      }
      *(_QWORD *)(a2 + 64) = v34;
      *(__m128i *)(a2 + 72) = v36;
    }
    else
    {
      sub_138A80(*(_QWORD *)(a1 + 1504), (__int64 *)(a2 + 64), a1 + 360);
    }
  }
  cleanup_argloc();
  clear_tinfo_t();
  cleanup_argloc();
  return 1;
}
