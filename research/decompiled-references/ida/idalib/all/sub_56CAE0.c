__int64 __fastcall sub_56CAE0(__int64 *a1, double a2, __m128i a3)
{
  __int64 v3; // rax
  int v5; // r12d
  char v6; // cl
  __int64 v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  int v13; // ecx
  __int64 *v14; // r8
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
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
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rsi
  __m128i v34; // xmm0
  int v35; // r12d
  __int64 v36; // rax
  int v37; // r14d
  void *v38; // rdi
  void *v39; // rdi
  unsigned __int64 v40; // rdx
  __int64 v41; // rbx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int8 scalar_bt; // al
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // rax
  void *v49; // rsi
  bool v50; // cc
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // [rsp+4h] [rbp-54h] BYREF
  __int64 v55; // [rsp+8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+10h] [rbp-48h] BYREF
  int v57; // [rsp+18h] [rbp-40h]
  int v58; // [rsp+1Ch] [rbp-3Ch]
  unsigned __int64 v59; // [rsp+28h] [rbp-30h]

  v59 = __readfsqword(0x28u);
  v3 = 0;
  if ( !a1[1] )
    return 1;
  v5 = 0;
  v6 = 0;
  do
  {
    v7 = *a1 + 144 * v3;
    if ( (*(_BYTE *)(v7 + 64) & 0xF) == 0xE )
    {
      v8 = 8 * *(_DWORD *)(v7 + 128);
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
              v19 = byte_23AF2A0[v8 - 8];
            if ( (unsigned int)get_tinfo_property(*(_QWORD *)(v7 + 64), 3) == 2 )
              v19 |= 0x20u;
            v56 = v19;
            copy_tinfo_t(v7 + 64);
            clear_tinfo_t(&v56);
          }
        }
      }
      v6 = 1;
    }
    ++v5;
    v9 = a1[1];
    v3 = v5;
  }
  while ( v5 < v9 );
  if ( !v6 )
    return 1;
  if ( *((_BYTE *)a1 + 51) )
  {
    v54 = 0;
    LODWORD(v55) = 0;
    if ( v9 )
    {
      v10 = *a1;
      v11 = 0;
      v12 = 0;
      do
      {
        v16 = v10 + 144 * v12;
        if ( (*(_BYTE *)(v16 + 64) & 0xF) == 0xE )
        {
          v13 = v55;
          v14 = &v55;
        }
        else
        {
          v13 = v54;
          v14 = (__int64 *)&v54;
        }
        v15 = *(_QWORD *)(v16 + 8);
        if ( v13 < v15 )
          *(_DWORD *)v14 = v15;
        v12 = ++v11;
      }
      while ( v11 < v9 );
      v35 = 0;
      v36 = 0;
      while ( 1 )
      {
        v41 = 144 * v36 + v10;
        if ( (*(_BYTE *)(v41 + 64) & 0xF) == 0xE )
        {
          v37 = v55;
          if ( *(_QWORD *)(v41 + 8) == (int)v55 && (int)v55 > v54 )
          {
            v42 = (int)((v55 + 7) & 0xFFFFFFF8);
            if ( (v42 & (v42 - 1)) != 0 )
            {
              do
                v43 = v42++;
              while ( (v43 & v42) != 0 );
            }
            *(_QWORD *)(v41 + 8) = v42;
            scalar_bt = get_scalar_bt(v42 >> 3);
            if ( !scalar_bt )
            {
              if ( !under_debugger )
                interr(1776);
              goto LABEL_79;
            }
            v56 = scalar_bt;
            copy_tinfo_t(v41 + 64);
            ++v35;
            clear_tinfo_t(&v56);
            LODWORD(v55) = v37 + 1;
            v40 = a1[1];
          }
          else
          {
            clear_tinfo_t(v41 + 64);
            v38 = *(void **)(v41 + 40);
            if ( v38 )
            {
              *(_QWORD *)(v41 + 48) = 0;
              qfree(v38);
            }
            v39 = *(void **)(v41 + 16);
            if ( v39 )
            {
              *(_QWORD *)(v41 + 24) = 0;
              qfree(v39);
            }
            memmove((void *)v41, (const void *)(v41 + 144), *a1 + 144 * a1[1] - v41 - 144);
            v40 = a1[1] - 1;
            a1[1] = v40;
          }
        }
        else
        {
          v40 = a1[1];
          ++v35;
        }
        v36 = v35;
        if ( v35 >= v40 )
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
      v32 = 8 * v29;
      goto LABEL_38;
    }
    while ( 1 )
    {
      if ( (_DWORD)v30 == -1 )
        goto LABEL_42;
LABEL_40:
      sub_56C300(a1, v30, v28);
      v28 = v30 + 1;
      v9 = a1[1];
      v29 = (int)v30 + 1;
      if ( v29 >= v9 )
        break;
      v33 = 9 * v30;
      v31 = *a1;
      v30 = -1;
      v34 = _mm_loadu_si128((const __m128i *)(*a1 + 16 * v33));
      v32 = 8LL * v28;
      a3 = _mm_srli_si128(v34, 8);
      *(_QWORD *)&a2 = _mm_add_epi64(v34, a3).m128i_u64[0];
      if ( *(_QWORD *)(*a1 + 144LL * v28) < *(_QWORD *)&a2 )
      {
        if ( !under_debugger )
          interr(866);
LABEL_79:
        BUG();
      }
LABEL_38:
      while ( (*(_BYTE *)(v31 + 16 * (v29 + v32) + 64) & 0xF) == 0xE )
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
        v32 = 8LL * v27;
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
  if ( (unsigned __int8)sub_569960(a1, a2, *(double *)a3.m128i_i64) )
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
    if ( (unsigned __int8)sub_569960(a1, a2, *(double *)a3.m128i_i64) )
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
        v45 = a1[1];
        v46 = *a1;
        if ( a1[2] < (unsigned __int64)(v45 + 1) )
        {
          v53 = qvector_reserve(a1, v46, v45 + 1, 144);
          *a1 = v53;
          v46 = v53;
          v45 = a1[1];
        }
        v47 = v46 + 144 * v45;
        *(_OWORD *)v47 = 0;
        *(_QWORD *)(v47 + 16) = 0;
        *(_OWORD *)(v47 + 24) = 0;
        *(_QWORD *)(v47 + 40) = 0;
        *(_QWORD *)(v47 + 112) = 1;
        *(_DWORD *)(v47 + 120) = -1;
        *(_QWORD *)(v47 + 128) = 0;
        *(_BYTE *)(v47 + 136) = 0;
        *(_OWORD *)(v47 + 48) = 0;
        *(_OWORD *)(v47 + 64) = 0;
        v48 = a1[3];
        ++a1[1];
        v49 = *(void **)(v47 + 16);
        v50 = *(_QWORD *)(v47 + 32) <= 0xBu;
        *(_QWORD *)v47 = 8 * v48;
        *(_QWORD *)(v47 + 8) = 8 * v25;
        if ( v50 )
        {
          v52 = qvector_reserve(v47 + 16, v49, 12, 1);
          *(_QWORD *)(v47 + 16) = v52;
          v49 = (void *)v52;
        }
        *(_QWORD *)(v47 + 24) = 12;
        v51 = v47 + 64;
        qmemcpy(v49, "_bf_padding", 11);
        *(_BYTE *)(*(_QWORD *)(v51 - 48) + 11LL) = 0;
        v57 = 0;
        v58 = v25;
        v55 = 17;
        v56 = 0;
        copy_tinfo_t(&v56);
        create_tinfo(v51, 11, 11, &v56);
        clear_tinfo_t(&v56);
        clear_tinfo_t(&v55);
        a1[3] = (unsigned int)v21;
      }
      return 1;
    }
  }
  return 0;
}
