_BOOL8 __fastcall sub_219E00(__int64 a1)
{
  __int64 v2; // rdi
  int v4; // r13d
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  int v9; // eax
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbp
  int v12; // r13d
  unsigned __int64 v13; // rax
  int *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // r12d
  __int64 v19; // rdi
  int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // rax
  signed int v23; // eax
  int v24; // eax
  __int64 v25; // r12
  _QWORD *v26; // r14
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // r12
  _QWORD *v32; // r15
  __int64 v33; // rdi
  __int64 v34; // rdi
  unsigned __int64 v35; // r8
  __int64 v36; // rdi
  unsigned int v37; // r12d
  int v38; // eax
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // [rsp+Ch] [rbp-CCh]
  unsigned int v42; // [rsp+10h] [rbp-C8h]
  int v43; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+10h] [rbp-C8h]
  char v45; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v46; // [rsp+18h] [rbp-C0h]
  __int64 v47; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+28h] [rbp-B0h]
  __int64 v49; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v50; // [rsp+38h] [rbp-A0h]
  __int64 v51; // [rsp+48h] [rbp-90h]
  __int64 v52; // [rsp+50h] [rbp-88h] BYREF
  __int64 v53; // [rsp+58h] [rbp-80h] BYREF
  __int128 v54; // [rsp+60h] [rbp-78h]
  __int64 v55; // [rsp+70h] [rbp-68h]
  __int128 v56; // [rsp+78h] [rbp-60h]
  char v57; // [rsp+88h] [rbp-50h]
  unsigned __int64 v58; // [rsp+98h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v2 + 320) )
  {
    if ( !*(_QWORD *)(a1 + 32) )
    {
      if ( *(_DWORD *)(a1 + 144) )
        return (*(_BYTE *)(v2 + 400) & 2) == 0;
      return 0;
    }
    return 1;
  }
  v7 = sub_1D0B30(v2);
  sub_60380((__int64 *)(a1 + 48), (__int64 *)(v7 + 160));
  sub_312FC0(a1 + 64, v7 + 176);
  LODWORD(v7) = sub_605E0((_QWORD *)(a1 + 48), 0);
  v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
          (unsigned int)v7);
  v8 = (int)sub_60820((_QWORD *)(a1 + 48), v7);
  v9 = sub_605E0((_QWORD *)(a1 + 48), 0);
  v10 = sub_605E0((_QWORD *)(a1 + 48), (int)v8 + v9);
  v11 = v8 + (int)v7 - v41;
  v12 = -1;
  if ( v10 != *(_DWORD *)(a1 + 56) )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
            v10);
    v13 = (int)(v10 + sub_60820((_QWORD *)(a1 + 48), v12) - v12);
    if ( v13 < v11 )
      v13 = v11;
    v11 = 2 * v13;
  }
  v14 = *(int **)(a1 + 16);
  v15 = v14[18];
  if ( v15 <= 0x10 )
  {
    v15 = getinf(99);
    v14 = *(int **)(a1 + 16);
  }
  if ( v15 == 176 || v15 == 256 )
  {
    if ( ((v26 = *((_QWORD **)v14 + 118), v26[1] != -1) || (unsigned __int8)sub_219B60(*((__int64 **)v14 + 118)))
      && (v27 = v26[2]) != 0 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v26 + 1496LL) + 24LL) + 16LL) & (v26[1] + *(_QWORD *)(*v26 + 1440LL));
      v50 = 0;
      v49 = 0;
      if ( v27 + v35 - 1 >= v35 )
      {
        v46 = v35;
        v44 = v27;
        v49 = qvector_reserve(&v49, 0, 1, 16);
        *(__m128i *)(v49 + 16 * v50) = _mm_unpacklo_epi64((__m128i)v46, (__m128i)v44);
        *(_QWORD *)&v50 = v50 + 1;
      }
    }
    else
    {
      v49 = 0;
      v50 = 0;
    }
    sub_312FC0(a1 + 64, &v49);
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    v14 = *(int **)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) > 1u || *(int *)(*((_QWORD *)v14 + 188) + 80LL) < v11 || *(_QWORD *)(a1 + 72) )
    {
      if ( (unsigned __int8)sub_2192C0(v14, (__int64 *)(a1 + 136), a1 + 120, (__int64 *)(a1 + 48)) )
      {
        *(_DWORD *)(a1 + 144) = get_tinfo_size(0, *(_QWORD *)(a1 + 136), 0);
        return 1;
      }
      v14 = *(int **)(a1 + 16);
    }
  }
  v16 = *(_DWORD *)(a1 + 148);
  v42 = *v14;
  if ( v16 <= 0x10 )
  {
    v16 = getinf(99);
    if ( v16 <= 0x10 )
      v16 = getinf(99);
  }
  if ( v16 == 176 )
  {
    if ( (unsigned __int64)getinf(88) > 0x397 )
      goto LABEL_20;
    if ( (unsigned __int8)getinf_flag(3, 4) )
    {
      netnode_check(&v49, "$ golang", 0, 0);
      v36 = v49;
      v37 = netnode_altval(v49, 0, 65);
      if ( v37 > 0x74 )
      {
        v38 = *(_DWORD *)(get_ph(v36) + 4);
        if ( !v38 )
          goto LABEL_20;
        v39 = (unsigned int)(v38 - 13);
        if ( (unsigned int)v39 <= 0x3B )
        {
          v40 = 0x800000000000005LL;
          if ( _bittest64(&v40, v39) )
          {
            if ( v37 != 117 )
              goto LABEL_20;
          }
        }
      }
    }
  }
  else if ( v16 != 256 )
  {
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 148) = 112;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v55 = 0;
  v57 = 112;
  v50 = 0;
  v54 = 0;
  v56 = 0;
  copy_tinfo_t(&v52, a1 + 136);
  v45 = calc_retloc(&v49);
  if ( v45 )
  {
    v28 = v54;
    *(_QWORD *)&v54 = v48;
    v48 = v28;
    LODWORD(v28) = v53;
    LODWORD(v53) = v47;
    LODWORD(v47) = v28;
  }
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
  cleanup_argloc(&v53);
  clear_tinfo_t(&v52);
  v29 = v49;
  if ( v49 )
  {
    v30 = v50;
    if ( (_QWORD)v50 )
    {
      v31 = 0;
      do
      {
        v32 = (_QWORD *)(v29 + 80 * v31);
        clear_tinfo_t(v32 + 8);
        v33 = v32[5];
        if ( v33 )
        {
          v32[6] = 0;
          qfree(v33);
        }
        v34 = v32[2];
        if ( v34 )
        {
          v32[3] = 0;
          qfree(v34);
        }
        ++v31;
        cleanup_argloc(v32);
        v29 = v49;
      }
      while ( v30 != v31 );
    }
    *(_QWORD *)&v50 = 0;
    qfree(v29);
  }
  if ( v45 )
    *(_DWORD *)(a1 + 144) = get_tinfo_size(0, *(_QWORD *)(a1 + 136), 0);
  cleanup_argloc(&v47);
LABEL_20:
  if ( *(_BYTE *)(a1 + 136) && (unsigned __int8)sub_218BA0(a1, (_QWORD *)(a1 + 136), 1) )
    return 1;
  v17 = *(_QWORD *)(a1 + 32);
  if ( v17 == 1 )
  {
    v25 = **(_QWORD **)(a1 + 88) + 104LL * *(int *)(*(_QWORD *)(a1 + 24) + 44LL);
    if ( *(_DWORD *)(v25 + 88) == v11 )
    {
      copy_tinfo_t(a1 + 136, v25 + 80);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v25 + 88);
      copy_argloc(a1 + 120, v25);
      return 1;
    }
LABEL_23:
    v18 = v42;
    v19 = (unsigned int)v11;
    v43 = 2;
    v20 = (v18 >> 4) & 1;
    if ( !(_BYTE)v20 )
      goto LABEL_24;
LABEL_29:
    v23 = round_up_power2(v19);
    *(_DWORD *)(a1 + 144) = v23;
    v24 = sub_1186A0(v11, v23);
    if ( v24 != -1 )
      *(_DWORD *)(a1 + 144) = v24;
    sub_326DD0(&v49, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL));
    copy_tinfo_t(a1 + 136, &v49);
    clear_tinfo_t(&v49);
    if ( *(_BYTE *)(a1 + 136) )
    {
LABEL_32:
      if ( !(unsigned __int8)sub_218BA0(a1, (_QWORD *)(a1 + 136), 0) )
        goto LABEL_27;
    }
    else
    {
LABEL_27:
      while ( 1 )
      {
        LOBYTE(v20) = v20 ^ 1;
        if ( v43 == 1 )
          break;
        v43 = 1;
        v19 = (unsigned int)v11;
        if ( (_BYTE)v20 )
          goto LABEL_29;
LABEL_24:
        if ( v11 > 0x10 )
          v21 = (unsigned int)round_up_power2(v19);
        else
          v21 = (unsigned int)sub_1185D0(v19);
        v22 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 144) = v21;
        sub_326FC0(&v49, *(_QWORD *)(v22 + 1504), v21);
        copy_tinfo_t(a1 + 136, &v49);
        clear_tinfo_t(&v49);
        if ( *(_BYTE *)(a1 + 136) )
          goto LABEL_32;
      }
      cleanup_argloc(a1 + 120);
      if ( v12 == -1 )
      {
        v4 = v41;
        v5 = 3;
      }
      else
      {
        v4 = v41 | (v12 << 16);
        v5 = 4;
      }
      *(_DWORD *)(a1 + 120) = v5;
      v6 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 128) = v4;
      sub_326FC0(&v49, *(_QWORD *)(v6 + 1504), *(unsigned int *)(a1 + 144));
      copy_tinfo_t(a1 + 136, &v49);
      clear_tinfo_t(&v49);
    }
    return 1;
  }
  if ( v17 )
    goto LABEL_23;
  return 0;
}
