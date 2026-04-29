__int64 __fastcall sub_3711F0(__int64 a1, __int64 a2)
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
  int tinfo_size; // eax
  char v17; // al
  unsigned int v18; // ecx
  __int64 v19; // rcx
  char v20; // al
  int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rbp
  int v24; // eax
  __int64 v25; // rbx
  __int64 v26; // r15
  unsigned __int64 v27; // r9
  size_t v28; // r10
  const void *v29; // r11
  void *v30; // rax
  unsigned __int64 v31; // rbx
  void *v32; // rbp
  __int64 v33; // rdi
  __m128i v34; // xmm0
  __int64 v36; // rdx
  __int64 v37; // rsi
  int v38; // ebp
  int v39; // esi
  __int64 v40; // rax
  int v41; // edx
  unsigned int v42; // ecx
  unsigned int v43; // esi
  __int64 v44; // rdx
  __m128i v45; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v46; // [rsp+10h] [rbp-B8h]
  _DWORD *v47; // [rsp+18h] [rbp-B0h]
  __int64 *v48; // [rsp+20h] [rbp-A8h]
  __int64 *v49; // [rsp+28h] [rbp-A0h]
  size_t v50; // [rsp+30h] [rbp-98h]
  const void *v51; // [rsp+38h] [rbp-90h]
  __int64 v52; // [rsp+48h] [rbp-80h] BYREF
  __int64 v53; // [rsp+50h] [rbp-78h] BYREF
  __int64 v54; // [rsp+58h] [rbp-70h]
  _DWORD v55[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v56[11]; // [rsp+70h] [rbp-58h] BYREF

  v3 = *(_DWORD *)(a1 + 400);
  v56[3] = __readfsqword(0x28u);
  *(_DWORD *)(a2 + 24) = v3 & 0x206;
  v5 = *(_QWORD *)(a1 + 464);
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL);
  v7 = v5;
  if ( v6 <= (int)v5 )
  {
    v38 = v6 - 1;
    if ( v38 >= (int)v5 )
    {
      v7 = v38;
    }
    else
    {
      do
      {
        v39 = v38++;
        v40 = sub_139080((_QWORD *)a1, v39);
        v41 = *(_DWORD *)(v40 + 24);
        BYTE1(v41) &= 0x7Eu;
        *(_DWORD *)(v40 + 24) = v41 | 0x100000;
      }
      while ( v38 < v7 );
      v7 = *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL) - 1;
    }
    v8 = v7;
    sub_7DDC0((__int64 *)(a1 + 456), v7);
  }
  else
  {
    v8 = (int)v5;
  }
  sub_E69B0((_QWORD *)a2, v8);
  v48 = &v52;
  v53 = 0;
  v54 = 0;
  v49 = &v53;
  sub_368820(&v52, a1, (__int64)&v53);
  v9 = v52;
  if ( !(_BYTE)v52 )
  {
    v56[0] = 1;
    copy_tinfo_t(&v52, v56);
    clear_tinfo_t(v56);
    v9 = v52;
  }
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v54;
  *(_QWORD *)(a2 + 32) = v9;
  v52 = v10;
  v12 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = v11;
  v54 = v12;
  LODWORD(v12) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a2 + 40) = v53;
  v13 = *(_DWORD *)(a1 + 72);
  LODWORD(v53) = v12;
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
  if ( (get_tinfo_property(v9, 2) & 0x3F) != 1 )
  {
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 32), 0);
    sub_1C1630((__int64)v56, *(_QWORD *)(a1 + 1504), a2 + 40, tinfo_size, 0);
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
      if ( !(unsigned __int8)sub_1C2420(a1, (_QWORD *)(a2 + 32), v56, v18) )
      {
        v19 = *(_QWORD *)(a1 + 1496);
        v20 = *(_BYTE *)(a2 + 88);
        LOBYTE(v21) = -16;
        if ( !*(_DWORD *)(*(_QWORD *)(v19 + 8) + 4LL) && !*(_BYTE *)(v19 + 144) )
        {
          v42 = v20 & 0xF0;
          if ( (v20 & 0xF0) == 0xC0 )
            v42 = *(_DWORD *)(a2 + 28);
          if ( v42 <= 0x10 )
          {
            v42 = getinf(99);
            v20 = *(_BYTE *)(a2 + 88);
          }
          v43 = v42 & 0xFFFFFFF0;
          if ( (v42 & 0xFFFFFFF0) > 0x70 )
          {
            LOBYTE(v21) = -32;
            if ( v43 != 224 && (v42 & 0xFFFFFFE0) != 0x80 )
              LOBYTE(v21) = -16;
          }
          else
          {
            LOBYTE(v21) = -16;
            if ( v43 > 0x4F )
            {
              v44 = 0x100010001LL;
              v21 = _bittest64(&v44, v43 - 80) == 0 ? -16 : -32;
            }
          }
        }
        *(_DWORD *)(a2 + 28) = 0;
        *(_BYTE *)(a2 + 88) = v21 | v20 & 0xF;
      }
      if ( *(_DWORD *)(a2 + 40) == 1 )
        *(_DWORD *)(a2 + 24) |= 0x200u;
      cleanup_argloc(v56);
      goto LABEL_18;
    }
    v18 = getinf(99);
    goto LABEL_11;
  }
LABEL_18:
  v22 = *(_QWORD *)(a1 + 328);
  v47 = v55;
  sub_367F60((__int64)v55, v22);
  v23 = 0;
  v45.m128i_i64[0] = v7;
  if ( v7 > 0 )
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)a2 + 80 * v23;
      v26 = sub_139080((_QWORD *)a1, v23);
      if ( v25 + 16 != v26 + 32 )
      {
        v27 = *(_QWORD *)(v26 + 40);
        if ( v27 && (v28 = v27 - 1, v27 != 1) )
        {
          v29 = *(const void **)(v26 + 32);
          v30 = *(void **)(v25 + 16);
          if ( *(_QWORD *)(v25 + 32) < v27 )
          {
            v36 = *(_QWORD *)(v26 + 40);
            v37 = *(_QWORD *)(v25 + 16);
            v51 = *(const void **)(v26 + 32);
            v50 = v27 - 1;
            v46 = v27;
            v30 = (void *)qvector_reserve(v25 + 16, v37, v36, 1);
            v29 = v51;
            v28 = v50;
            *(_QWORD *)(v25 + 16) = v30;
            v27 = v46;
          }
          *(_QWORD *)(v25 + 24) = v27;
          v46 = v27;
          memmove(v30, v29, v28);
          *(_BYTE *)(*(_QWORD *)(v25 + 16) + v46 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v25 + 24) = 0;
        }
      }
      copy_tinfo_t(v25 + 64, v26 + 80);
      if ( *(_DWORD *)v26 == 3 && *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 68LL) <= *(_DWORD *)(v26 + 8) )
        break;
      sub_1C3380(v56, a1, v26, *(_DWORD *)(v26 + 88));
      copy_argloc(v25, v56);
      cleanup_argloc(v56);
      if ( (*(_BYTE *)(v26 + 27) & 1) != 0 )
        *(_DWORD *)(v25 + 72) |= 0x10u;
      if ( v55[0]
        && (get_tinfo_property(*(_QWORD *)(v25 + 64), 2) & 0xF) == 0xA
        && !(unsigned int)compare_arglocs(v25, v47) )
      {
        *(_DWORD *)(v25 + 72) |= 2u;
        cleanup_argloc(v47);
      }
      v24 = *(_DWORD *)v25;
      if ( (*(_BYTE *)(a2 + 25) & 2) == 0 && v24 == 1 )
      {
        cleanup_argloc(v25);
        *(_DWORD *)v25 = 1;
        ++v23;
        *(_QWORD *)(v25 + 8) = 0;
        if ( v45.m128i_i64[0] == v23 )
          goto LABEL_40;
      }
      else
      {
        if ( !v24 )
        {
          if ( !under_debugger )
            sub_37E160(51049);
          goto LABEL_71;
        }
        if ( v45.m128i_i64[0] == ++v23 )
          goto LABEL_40;
      }
    }
    if ( !under_debugger )
      sub_37E160(52972);
LABEL_71:
    BUG();
  }
LABEL_40:
  if ( (*(_BYTE *)a1 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 24) |= 1u;
    if ( *(_BYTE *)(a1 + 320) )
    {
      v31 = *(_QWORD *)(a1 + 344);
      v32 = nullptr;
      if ( v31 )
      {
        v32 = (void *)qalloc_or_throw(8 * v31);
        memcpy(v32, *(const void **)(a1 + 336), 8 * v31);
      }
      v33 = *(_QWORD *)(a2 + 64);
      v34 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
      if ( v33 )
      {
        *(_QWORD *)(a2 + 72) = 0;
        v45 = v34;
        qfree(v33);
        v34 = _mm_load_si128(&v45);
      }
      *(_QWORD *)(a2 + 64) = v32;
      *(__m128i *)(a2 + 72) = v34;
    }
    else
    {
      sub_134880(*(_QWORD *)(a1 + 1504), (__int64 *)(a2 + 64), a1 + 360);
    }
  }
  cleanup_argloc(v47);
  clear_tinfo_t(v48);
  cleanup_argloc(v49);
  return 1;
}
