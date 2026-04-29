unsigned __int64 __fastcall sub_31DD50(__int64 a1, __m128i *a2, double a3, __m128 a4)
{
  int v5; // r12d
  int v6; // r15d
  __int64 v7; // rbx
  int v8; // r12d
  __m128i v9; // xmm0
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // r10
  int v14; // r11d
  __m128i v15; // xmm0
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r9
  __m128i v20; // xmm0
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rbx
  unsigned __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  int flags; // eax
  char v37; // al
  __m128i v38; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+28h] [rbp-A0h]
  _QWORD v41[5]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( !(_BYTE)a2 && !under_debugger && *(char *)(*(_QWORD *)(a1 + 1496) + 1337LL) >= 0 || *(int *)(a1 + 4) < 0 )
    return v45 - __readfsqword(0x28u);
  v5 = *(_DWORD *)a1;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 520);
  v40 = 0;
  v39 = 0;
  v8 = v5 & 0xC;
  memset(&v41[1], 0, 32);
  v41[0] = off_4CB538;
  v42 = 0;
  v44 = 0;
  v43 = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        a2 = (__m128i *)v41;
        sub_31AC40(v7, (__int64)v41);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v6) != v7 )
          sub_317340((__int64)v41, 0xC6BEu);
        if ( !v8 && (*(_BYTE *)(v7 + 24) & 2) == 0 && (*(_BYTE *)(a1 + 1) & 2) == 0 )
          break;
        v7 = *(_QWORD *)(v7 + 8);
        ++v6;
        if ( !v7 )
          goto LABEL_13;
      }
      v9 = _mm_unpacklo_epi64(
             (__m128i)*(unsigned __int64 *)(v7 + 32),
             (__m128i)(unsigned __int64)(*(_QWORD *)(v7 + 40) - *(_QWORD *)(v7 + 32)));
      v38 = v9;
      if ( (unsigned __int8)sub_313CF0(&v39, &v38, 0) )
        break;
      a2 = &v38;
      sub_312A30(&v39, &v38, *(double *)v9.m128i_i64, a4);
      v7 = *(_QWORD *)(v7 + 8);
      ++v6;
      if ( !v7 )
        goto LABEL_13;
    }
    if ( !under_debugger )
      sub_37EEE0(50879);
LABEL_163:
    BUG();
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 64) != v6 )
  {
    if ( !under_debugger )
      sub_37EEE0(50880);
    goto LABEL_163;
  }
  if ( *(_DWORD *)(a1 + 4) > 0x1FFFFu )
  {
    if ( !under_debugger )
      sub_37EEE0(50881);
    goto LABEL_163;
  }
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 < 0 || (v11 = *(_QWORD *)(a1 + 136), v11 < 0) || (v12 = *(_QWORD *)(a1 + 152), v12 < 0) )
  {
    if ( !under_debugger )
      sub_37EEE0(50882);
    goto LABEL_163;
  }
  v13 = *(_QWORD *)(a1 + 1480);
  v14 = *(_DWORD *)a1 & 4;
  if ( !v14 )
  {
    if ( !v13 )
    {
      if ( !under_debugger )
        sub_37EEE0(52701);
      goto LABEL_163;
    }
LABEL_20:
    a2 = *(__m128i **)(a1 + 1472);
    v15 = _mm_loadu_si128((const __m128i *)&a2->m128i_u64[1]);
    v16 = &a2->m128i_u64[1];
    if ( _mm_add_epi64(v15, _mm_srli_si128(v15, 8)).m128i_u64[0] != v11 )
    {
      if ( !under_debugger )
        sub_37EEE0(52702);
      goto LABEL_163;
    }
    if ( v12 != a2[1].m128i_i64[1] )
    {
      if ( !under_debugger )
        sub_37EEE0(52703);
      goto LABEL_163;
    }
    if ( a2[-2].m128i_i64[5 * v13] )
    {
      if ( !under_debugger )
        sub_37EEE0(52704);
      goto LABEL_163;
    }
    v17 = 0;
    while ( 1 )
    {
      ++v17;
      v16 += 5;
      if ( v17 >= v13 )
        break;
      v18 = v16[1];
      a2 = (__m128i *)(v18 + *v16);
      if ( (__m128i *)*(v16 - 5) != a2 )
      {
        if ( !under_debugger )
          sub_37EEE0(52705);
        goto LABEL_163;
      }
      v19 = v16[2];
      if ( (!v18 || v19 < *v16 || (unsigned __int64)&a2[-1].m128i_u64[1] + 7 < v19) && (__m128i *)v19 != a2 )
      {
        if ( !under_debugger )
          sub_37EEE0(52706);
        goto LABEL_163;
      }
    }
    if ( v10 >= *(_QWORD *)(a1 + 168) )
    {
      if ( v8 )
      {
LABEL_60:
        if ( !v14 )
          sub_31CF10(a1, (__int64)v41, 1);
        goto LABEL_62;
      }
LABEL_35:
      if ( v10 < v11 )
      {
        if ( !under_debugger )
          sub_37EEE0(50884);
        goto LABEL_163;
      }
      if ( v11 < v12 )
      {
        if ( !under_debugger )
          sub_37EEE0(50885);
        goto LABEL_163;
      }
      v20 = _mm_loadu_si128((const __m128i *)(a1 + 88));
      if ( v11 < _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_i64[0] )
      {
        if ( !under_debugger )
          sub_37EEE0(50886);
        goto LABEL_163;
      }
      v22 = sub_1CAFA0(a1);
      if ( v22 )
      {
        if ( v22[4] != *(_QWORD *)(a1 + 88) )
        {
          if ( !under_debugger )
            sub_37EEE0(50887);
          goto LABEL_163;
        }
        if ( *((unsigned __int16 *)v22 + 20) != *(_QWORD *)(a1 + 96) )
        {
          if ( !under_debugger )
            sub_37EEE0(50888);
          goto LABEL_163;
        }
        if ( v22[7] != *(_QWORD *)(a1 + 104) )
        {
          if ( !under_debugger )
            sub_37EEE0(51704);
          goto LABEL_163;
        }
        if ( *(_DWORD *)(a1 + 116) != (unsigned int)get_frame_retsize(v22, a2, v21) )
        {
          if ( !under_debugger )
            sub_37EEE0(50889);
          goto LABEL_163;
        }
      }
      v23 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 8) )
      {
        if ( (*(_BYTE *)(a1 + 5) & 0x20) != 0 )
        {
          if ( !v23 )
          {
            if ( !under_debugger )
              sub_37EEE0(52666);
            goto LABEL_163;
          }
        }
        else if ( v23 )
        {
          if ( !under_debugger )
            sub_37EEE0(52667);
          goto LABEL_163;
        }
      }
      else if ( !v23 )
      {
        if ( !under_debugger )
          sub_37EEE0(52620);
        goto LABEL_163;
      }
      v24 = _mm_loadu_si128((const __m128i *)(a1 + 536));
      v25 = *(_QWORD *)(a1 + 1440);
      if ( v25 != _mm_add_epi64(v24, _mm_srli_si128(v24, 8)).m128i_u64[0] )
      {
        if ( !under_debugger )
          sub_37EEE0(52098);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 568) != v25 )
      {
        if ( !under_debugger )
          sub_37EEE0(52099);
        goto LABEL_163;
      }
      v26 = *(_QWORD *)(a1 + 136);
      if ( *(_QWORD *)(a1 + 576) != v26 )
      {
        if ( !under_debugger )
          sub_37EEE0(52100);
        goto LABEL_163;
      }
      v27 = v25 + v26;
      if ( *(_QWORD *)(a1 + 600) != v27 )
      {
        if ( !under_debugger )
          sub_37EEE0(52101);
        goto LABEL_163;
      }
      v28 = *(int *)(a1 + 116);
      if ( *(_QWORD *)(a1 + 608) != v28 )
      {
        if ( !under_debugger )
          sub_37EEE0(52102);
        goto LABEL_163;
      }
      v29 = v27 + v28;
      if ( *(_QWORD *)(a1 + 632) != v29 )
      {
        if ( !under_debugger )
          sub_37EEE0(52103);
        goto LABEL_163;
      }
      v30 = *(int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 640) != v30 )
      {
        if ( !under_debugger )
          sub_37EEE0(52104);
        goto LABEL_163;
      }
      v31 = v29 + v30;
      if ( (*(_BYTE *)(a1 + 1) & 1) == 0 || (v37 = sub_60E40((_QWORD *)(a1 + 296)), v25 = *(_QWORD *)(a1 + 1440), v37) )
      {
        if ( v25 + *(_QWORD *)(a1 + 144) != v31 )
        {
          if ( !under_debugger )
            sub_37EEE0(52108);
          goto LABEL_163;
        }
      }
      else if ( v31 < v25 + *(_QWORD *)(a1 + 144) )
      {
        if ( !under_debugger )
          sub_37EEE0(52109);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 664) != v31 )
      {
        if ( !under_debugger )
          sub_37EEE0(52105);
        goto LABEL_163;
      }
      v32 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL) * *(_DWORD *)(*(_QWORD *)(a1 + 1496) + 656LL)
          - (__int64)*(int *)(a1 + 120);
      if ( *(_QWORD *)(a1 + 672) != v32 )
      {
        if ( !under_debugger )
          sub_37EEE0(52106);
        goto LABEL_163;
      }
      v33 = *(_QWORD *)(a1 + 128) + v25;
      if ( v33 != v31 + v32 )
      {
        if ( !under_debugger )
          sub_37EEE0(52112);
        goto LABEL_163;
      }
      if ( *(_QWORD *)(a1 + 696) != v33 )
      {
        if ( !under_debugger )
          sub_37EEE0(52107);
        goto LABEL_163;
      }
      v14 = *(_DWORD *)a1 & 4;
      goto LABEL_60;
    }
LABEL_159:
    if ( !under_debugger )
      sub_37EEE0(50883);
    goto LABEL_163;
  }
  if ( v13 )
    goto LABEL_20;
  if ( v10 < *(_QWORD *)(a1 + 168) )
    goto LABEL_159;
  if ( !v8 )
    goto LABEL_35;
LABEL_62:
  sub_317470(a1, (__int64)v41);
  v34 = *(int *)(a1 + 480);
  if ( (_DWORD)v34 != -1 && ((v34 & 0x80000000) != 0LL || v34 >= *(_QWORD *)(a1 + 440)) )
  {
    if ( !under_debugger )
      sub_37EEE0(50911);
    goto LABEL_163;
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    if ( !under_debugger )
      sub_37EEE0(50912);
    goto LABEL_163;
  }
  if ( *(_BYTE *)(a1 + 320) && (unsigned int)verify_tinfo(*(_QWORD *)(a1 + 328)) )
  {
    if ( !under_debugger )
      sub_37EEE0(50913);
    goto LABEL_163;
  }
  if ( !v8 )
  {
    if ( sub_1CAFA0(a1) )
    {
      flags = get_flags_ex(*(_QWORD *)(a1 + 40), 4);
      if ( (~(_WORD)flags & 0x600) != 0 || (flags & 0x10000000) == 0 )
      {
        if ( !under_debugger )
          sub_37EEE0(50914);
        goto LABEL_163;
      }
    }
  }
  v41[0] = off_4CB538;
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v45 - __readfsqword(0x28u);
}
