__int64 __fastcall sub_553260(__int64 *a1, double a2, __m128i a3)
{
  int v4; // r12d
  char v5; // dl
  __int64 v6; // rbx
  __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rdx
  int v13; // ecx
  __int64 *v14; // r8
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int8 v19; // r13
  int v20; // ebx
  __int64 v21; // r12
  int v22; // eax
  char v23; // dl
  __int16 v24; // ax
  __int64 v25; // r13
  int v27; // esi
  int v28; // ecx
  unsigned __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rdi
  __m128i v32; // xmm0
  int v33; // r12d
  __int64 v34; // rax
  int v35; // r14d
  void *v36; // rdi
  void *v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 v39; // rbx
  unsigned __int64 v40; // rdi
  __int64 v41; // rax
  unsigned __int8 scalar_bt; // al
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // rax
  void *v47; // rsi
  bool v48; // cc
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+4h] [rbp-54h] BYREF
  __int64 v53; // [rsp+8h] [rbp-50h] BYREF
  __int64 v54; // [rsp+10h] [rbp-48h] BYREF
  int v55; // [rsp+18h] [rbp-40h]
  int v56; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v57; // [rsp+28h] [rbp-30h]

  v57 = __readfsqword(0x28u);
  if ( !a1[1] )
    return 1;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *a1 + (v6 << 7);
    if ( (*(_BYTE *)(v7 + 64) & 0xF) == 0xE )
    {
      v8 = 8 * *(_DWORD *)(v7 + 112);
      if ( !(*(_QWORD *)v7 % (unsigned __int64)(unsigned int)v8) && v8 == *(_QWORD *)(v7 + 8) )
      {
        v17 = v8 - 8LL;
        if ( v17 <= 0x38 )
        {
          v18 = 0x100000001000101LL;
          if ( _bittest64(&v18, v17) )
          {
            v19 = 5;
            if ( v17 <= 0x18 )
              v19 = byte_238B140[v8 - 8];
            if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v7 + 64), 3) == 2 )
              v19 |= 0x20u;
            v54 = v19;
            copy_tinfo_t(v7 + 64);
            clear_tinfo_t(&v54);
          }
        }
      }
      v5 = 1;
    }
    ++v4;
    v9 = a1[1];
    v6 = v4;
  }
  while ( v4 < v9 );
  if ( !v5 )
    return 1;
  if ( *((_BYTE *)a1 + 51) )
  {
    v52 = 0;
    LODWORD(v53) = 0;
    if ( v9 )
    {
      v10 = *a1;
      v11 = 0;
      v12 = 0;
      do
      {
        v16 = v10 + (v12 << 7);
        if ( (*(_BYTE *)(v16 + 64) & 0xF) == 0xE )
        {
          v13 = v53;
          v14 = &v53;
        }
        else
        {
          v13 = v52;
          v14 = (__int64 *)&v52;
        }
        v15 = *(_QWORD *)(v16 + 8);
        if ( v13 < v15 )
          *(_DWORD *)v14 = v15;
        v12 = ++v11;
      }
      while ( v11 < v9 );
      v33 = 0;
      v34 = 0;
      while ( 1 )
      {
        v39 = (v34 << 7) + v10;
        if ( (*(_BYTE *)(v39 + 64) & 0xF) == 0xE )
        {
          v35 = v53;
          if ( *(_QWORD *)(v39 + 8) == (int)v53 && (int)v53 > v52 )
          {
            v40 = (int)((v53 + 7) & 0xFFFFFFF8);
            if ( (v40 & (v40 - 1)) != 0 )
            {
              do
                v41 = v40++;
              while ( (v41 & v40) != 0 );
            }
            *(_QWORD *)(v39 + 8) = v40;
            scalar_bt = get_scalar_bt(v40 >> 3);
            if ( !scalar_bt )
            {
              if ( !under_debugger )
                interr(1776);
              goto LABEL_79;
            }
            v54 = scalar_bt;
            copy_tinfo_t(v39 + 64);
            ++v33;
            clear_tinfo_t(&v54);
            LODWORD(v53) = v35 + 1;
            v38 = a1[1];
          }
          else
          {
            clear_tinfo_t(v39 + 64);
            v36 = *(void **)(v39 + 40);
            if ( v36 )
            {
              *(_QWORD *)(v39 + 48) = 0;
              qfree(v36);
            }
            v37 = *(void **)(v39 + 16);
            if ( v37 )
            {
              *(_QWORD *)(v39 + 24) = 0;
              qfree(v37);
            }
            memmove((void *)v39, (const void *)(v39 + 128), *a1 + (a1[1] << 7) - v39 - 128);
            v38 = a1[1] - 1;
            a1[1] = v38;
          }
        }
        else
        {
          v38 = a1[1];
          ++v33;
        }
        v34 = v33;
        if ( v33 >= v38 )
          break;
        v10 = *a1;
      }
    }
  }
  else
  {
    v27 = 0;
    v28 = -1;
    v29 = 0;
LABEL_36:
    v30 = v28;
    v28 = v27;
    if ( v29 < v9 )
    {
LABEL_37:
      v31 = *a1;
      goto LABEL_38;
    }
    while ( 1 )
    {
      if ( (_DWORD)v30 == -1 )
        goto LABEL_42;
LABEL_40:
      sub_552AC0(a1, v30, v28);
      v28 = v30 + 1;
      v9 = a1[1];
      v29 = (int)v30 + 1;
      if ( v29 >= v9 )
        break;
      v31 = *a1;
      v32 = _mm_loadu_si128((const __m128i *)(*a1 + (v30 << 7)));
      v30 = -1;
      a3 = _mm_srli_si128(v32, 8);
      *(_QWORD *)&a2 = _mm_add_epi64(v32, a3).m128i_u64[0];
      if ( *(_QWORD *)(*a1 + ((__int64)v28 << 7)) < *(_QWORD *)&a2 )
      {
        if ( !under_debugger )
          interr(866);
LABEL_79:
        BUG();
      }
LABEL_38:
      while ( (*(_BYTE *)(v31 + (v29 << 7) + 64) & 0xF) == 0xE )
      {
        v27 = v28 + 1;
        v29 = v28 + 1;
        if ( (_DWORD)v30 == -1 )
        {
          if ( v9 >= v27 )
            goto LABEL_36;
          goto LABEL_26;
        }
        if ( v9 < v27 )
          goto LABEL_26;
        ++v28;
        if ( v27 >= v9 )
          goto LABEL_40;
      }
    }
    if ( v9 >= v28 )
    {
LABEL_42:
      while ( 1 )
      {
        v29 = ++v28;
        if ( v9 < v28 )
          break;
        v30 = -1;
        if ( v28 < v9 )
          goto LABEL_37;
      }
    }
  }
LABEL_26:
  v20 = *((_DWORD *)a1 + 10);
  v21 = a1[3];
  if ( (unsigned __int8)sub_5501A0(a1, a2, *(double *)a3.m128i_i64) )
  {
    if ( v20 == *((_DWORD *)a1 + 10) )
      goto LABEL_32;
    v22 = v20 >> 1;
    if ( v20 >> 1 )
    {
      v23 = 1;
      do
      {
        ++v23;
        v22 >>= 1;
      }
      while ( v22 );
    }
    else
    {
      v23 = 1;
    }
    LOBYTE(v24) = v23;
    HIBYTE(v24) = v23;
    *(_WORD *)((char *)a1 + 49) = v24;
    if ( (unsigned __int8)sub_5501A0(a1, a2, *(double *)a3.m128i_i64) )
    {
LABEL_32:
      v25 = (unsigned int)v21 - a1[3];
      if ( v25 < 0 )
      {
        if ( !under_debugger )
          interr(1007);
        goto LABEL_79;
      }
      if ( (unsigned int)v21 != a1[3] )
      {
        v43 = a1[1];
        v44 = *a1;
        if ( a1[2] < (unsigned __int64)(v43 + 1) )
        {
          v51 = qvector_reserve(a1, v44, v43 + 1, 128);
          *a1 = v51;
          v44 = v51;
          v43 = a1[1];
        }
        v45 = v44 + (v43 << 7);
        *(_OWORD *)v45 = 0;
        *(_QWORD *)(v45 + 16) = 0;
        *(_OWORD *)(v45 + 24) = 0;
        *(_QWORD *)(v45 + 40) = 0;
        *(_QWORD *)(v45 + 96) = 1;
        *(_DWORD *)(v45 + 104) = -1;
        *(_QWORD *)(v45 + 112) = 0;
        *(_BYTE *)(v45 + 120) = 0;
        *(_OWORD *)(v45 + 48) = 0;
        *(_OWORD *)(v45 + 64) = 0;
        v46 = a1[3];
        ++a1[1];
        v47 = *(void **)(v45 + 16);
        v48 = *(_QWORD *)(v45 + 32) <= 0xBu;
        *(_QWORD *)v45 = 8 * v46;
        *(_QWORD *)(v45 + 8) = 8 * v25;
        if ( v48 )
        {
          v50 = qvector_reserve(v45 + 16, v47, 12, 1);
          *(_QWORD *)(v45 + 16) = v50;
          v47 = (void *)v50;
        }
        *(_QWORD *)(v45 + 24) = 12;
        v49 = v45 + 64;
        qmemcpy(v47, "_bf_padding", 11);
        *(_BYTE *)(*(_QWORD *)(v49 - 48) + 11LL) = 0;
        v55 = 0;
        v56 = v25;
        v53 = 17;
        v54 = 0;
        copy_tinfo_t(&v54);
        create_tinfo(v49, 11, 11, &v54);
        clear_tinfo_t(&v54);
        clear_tinfo_t(&v53);
        a1[3] = (unsigned int)v21;
      }
      return 1;
    }
  }
  return 0;
}

