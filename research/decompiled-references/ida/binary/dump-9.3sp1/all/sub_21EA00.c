_BOOL8 __fastcall sub_21EA00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v7; // r13d
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r13
  int v12; // eax
  unsigned int v13; // r14d
  unsigned __int64 v14; // rbp
  int v15; // r13d
  unsigned __int64 v16; // rax
  int *v17; // rdi
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rax
  unsigned int v21; // r12d
  int v22; // edi
  int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // rax
  signed int v26; // eax
  int v27; // eax
  __int64 v28; // r12
  _QWORD *v29; // r14
  unsigned __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r12
  _QWORD *v34; // r15
  __int64 v35; // rdi
  __int64 v36; // rdi
  unsigned __int64 v37; // r8
  unsigned int v38; // r12d
  int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // [rsp+Ch] [rbp-CCh]
  unsigned int v43; // [rsp+10h] [rbp-C8h]
  int v44; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+10h] [rbp-C8h]
  char v46; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v47; // [rsp+18h] [rbp-C0h]
  __int64 v48; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v49; // [rsp+38h] [rbp-A0h]
  __int64 v50; // [rsp+48h] [rbp-90h]
  __int64 v51; // [rsp+50h] [rbp-88h]
  __int64 v52; // [rsp+58h] [rbp-80h]
  __int128 v53; // [rsp+60h] [rbp-78h]
  __int64 v54; // [rsp+70h] [rbp-68h]
  __int128 v55; // [rsp+78h] [rbp-60h]
  char v56; // [rsp+88h] [rbp-50h]
  unsigned __int64 v57; // [rsp+98h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(v5 + 320) )
  {
    if ( !*(_QWORD *)(a1 + 32) )
    {
      if ( *(_DWORD *)(a1 + 144) )
        return (*(_BYTE *)(v5 + 400) & 2) == 0;
      return 0;
    }
    return 1;
  }
  v10 = sub_1D5170(v5, a2, a3, a4);
  sub_64700((__int64 *)(a1 + 48), (__int64 *)(v10 + 160));
  sub_3180C0(a1 + 64, v10 + 176);
  LODWORD(v10) = sub_64960((_QWORD *)(a1 + 48), 0);
  v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
          (unsigned int)v10);
  v11 = (int)sub_64BA0((_QWORD *)(a1 + 48), v10);
  v12 = sub_64960((_QWORD *)(a1 + 48), 0);
  v13 = sub_64960((_QWORD *)(a1 + 48), (int)v11 + v12);
  v14 = v11 + (int)v10 - v42;
  v15 = -1;
  if ( v13 != *(_DWORD *)(a1 + 56) )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 1504LL) + 184LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1504LL),
            v13);
    v16 = (int)(v13 + sub_64BA0((_QWORD *)(a1 + 48), v15) - v15);
    if ( v16 < v14 )
      v16 = v14;
    v14 = 2 * v16;
  }
  v17 = *(int **)(a1 + 16);
  v18 = v17[18];
  if ( v18 <= 0x10 )
  {
    v18 = getinf();
    v17 = *(int **)(a1 + 16);
  }
  if ( v18 == 176 || v18 == 256 )
  {
    if ( ((v29 = *((_QWORD **)v17 + 118), v29[1] != -1) || (unsigned __int8)sub_21E760(*((__int64 **)v17 + 118)))
      && (v30 = v29[2]) != 0 )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v29 + 1496LL) + 24LL) + 16LL) & (v29[1] + *(_QWORD *)(*v29 + 1440LL));
      v49 = 0;
      v48 = 0;
      if ( v30 + v37 - 1 >= v37 )
      {
        v47 = v37;
        v45 = v30;
        v48 = qvector_reserve((__int64)&v48, 0, 1, 16);
        *(__m128i *)(v48 + 16 * v49) = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v45);
        *(_QWORD *)&v49 = v49 + 1;
      }
    }
    else
    {
      v48 = 0;
      v49 = 0;
    }
    sub_3180C0(a1 + 64, &v48);
    if ( v48 )
    {
      *(_QWORD *)&v49 = 0;
      qfree(v48);
    }
    v17 = *(int **)(a1 + 16);
    if ( *(_QWORD *)(a1 + 32) > 1u || *(int *)(*((_QWORD *)v17 + 188) + 80LL) < v14 || *(_QWORD *)(a1 + 72) )
    {
      if ( (unsigned __int8)sub_21DEC0(v17, (__int64 *)(a1 + 136), a1 + 120, (__int64 *)(a1 + 48)) )
      {
        *(_DWORD *)(a1 + 144) = get_tinfo_size();
        return 1;
      }
      v17 = *(int **)(a1 + 16);
    }
  }
  v19 = *(_DWORD *)(a1 + 148);
  v43 = *v17;
  if ( v19 <= 0x10 )
  {
    v19 = getinf();
    if ( v19 <= 0x10 )
      v19 = getinf();
  }
  if ( v19 == 176 )
  {
    if ( (unsigned __int64)getinf() > 0x397 )
      goto LABEL_20;
    if ( (unsigned __int8)getinf_flag() )
    {
      netnode_check();
      v38 = netnode_altval();
      if ( v38 > 0x74 )
      {
        v39 = *(_DWORD *)(get_ph() + 4);
        if ( !v39 )
          goto LABEL_20;
        v40 = (unsigned int)(v39 - 13);
        if ( (unsigned int)v40 <= 0x3B )
        {
          v41 = 0x800000000000005LL;
          if ( _bittest64(&v41, v40) )
          {
            if ( v38 != 117 )
              goto LABEL_20;
          }
        }
      }
    }
  }
  else if ( v19 != 256 )
  {
    goto LABEL_20;
  }
  *(_DWORD *)(a1 + 148) = 112;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v54 = 0;
  v56 = 112;
  v49 = 0;
  v53 = 0;
  v55 = 0;
  copy_tinfo_t();
  v46 = calc_retloc();
  if ( v46 )
  {
    *(_QWORD *)&v53 = 0;
    LODWORD(v52) = 0;
  }
  if ( v54 )
  {
    *(_QWORD *)&v55 = 0;
    qfree(v54);
  }
  cleanup_argloc();
  clear_tinfo_t();
  v31 = v48;
  if ( v48 )
  {
    v32 = v49;
    if ( (_QWORD)v49 )
    {
      v33 = 0;
      do
      {
        v34 = (_QWORD *)(v31 + 80 * v33);
        clear_tinfo_t();
        v35 = v34[5];
        if ( v35 )
        {
          v34[6] = 0;
          qfree(v35);
        }
        v36 = v34[2];
        if ( v36 )
        {
          v34[3] = 0;
          qfree(v36);
        }
        ++v33;
        cleanup_argloc();
        v31 = v48;
      }
      while ( v32 != v33 );
    }
    *(_QWORD *)&v49 = 0;
    qfree(v31);
  }
  if ( v46 )
    *(_DWORD *)(a1 + 144) = get_tinfo_size();
  cleanup_argloc();
LABEL_20:
  if ( *(_BYTE *)(a1 + 136) && (unsigned __int8)sub_21D7A0(a1, (_QWORD *)(a1 + 136), 1) )
    return 1;
  v20 = *(_QWORD *)(a1 + 32);
  if ( v20 == 1 )
  {
    v28 = **(_QWORD **)(a1 + 88) + 104LL * *(int *)(*(_QWORD *)(a1 + 24) + 44LL);
    if ( *(_DWORD *)(v28 + 88) == v14 )
    {
      copy_tinfo_t();
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v28 + 88);
      copy_argloc();
      return 1;
    }
LABEL_23:
    v21 = v43;
    v22 = v14;
    v44 = 2;
    v23 = (v21 >> 4) & 1;
    if ( !(_BYTE)v23 )
      goto LABEL_24;
LABEL_29:
    v26 = round_up_power2();
    *(_DWORD *)(a1 + 144) = v26;
    v27 = sub_11CB60(v14, v26);
    if ( v27 != -1 )
      *(_DWORD *)(a1 + 144) = v27;
    sub_32C080(&v48, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1496LL));
    copy_tinfo_t();
    clear_tinfo_t();
    if ( *(_BYTE *)(a1 + 136) )
    {
LABEL_32:
      if ( !(unsigned __int8)sub_21D7A0(a1, (_QWORD *)(a1 + 136), 0) )
        goto LABEL_27;
    }
    else
    {
LABEL_27:
      while ( 1 )
      {
        LOBYTE(v23) = v23 ^ 1;
        if ( v44 == 1 )
          break;
        v44 = 1;
        v22 = v14;
        if ( (_BYTE)v23 )
          goto LABEL_29;
LABEL_24:
        if ( v14 > 0x10 )
          v24 = (unsigned int)round_up_power2();
        else
          v24 = (unsigned int)sub_11CA90(v22);
        v25 = *(_QWORD *)(a1 + 16);
        *(_DWORD *)(a1 + 144) = v24;
        sub_32C270(&v48, *(_QWORD *)(v25 + 1504), v24);
        copy_tinfo_t();
        clear_tinfo_t();
        if ( *(_BYTE *)(a1 + 136) )
          goto LABEL_32;
      }
      cleanup_argloc();
      if ( v15 == -1 )
      {
        v7 = v42;
        v8 = 3;
      }
      else
      {
        v7 = v42 | (v15 << 16);
        v8 = 4;
      }
      *(_DWORD *)(a1 + 120) = v8;
      v9 = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(a1 + 128) = v7;
      sub_32C270(&v48, *(_QWORD *)(v9 + 1504), *(unsigned int *)(a1 + 144));
      copy_tinfo_t();
      clear_tinfo_t();
    }
    return 1;
  }
  if ( v20 )
    goto LABEL_23;
  return 0;
}
