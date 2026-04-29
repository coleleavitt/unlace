__int64 __fastcall sub_401C0(__int64 a1, __int64 a2, unsigned __int64 a3, _BYTE *a4, char a5)
{
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rax
  unsigned __int64 that; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int16 v14; // r14
  __int64 next_func_addr; // r12
  int v16; // eax
  __int64 spd; // r13
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r13
  __int64 v22; // rax
  char v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  signed __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r12
  __int16 v38; // ax
  char v39; // dl
  unsigned int v40; // eax
  bool v41; // dl
  int v42; // eax
  int v43; // eax
  char v44; // dl
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  bool v48; // dl
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // [rsp+0h] [rbp-218h]
  __int64 func; // [rsp+8h] [rbp-210h]
  __int128 *v59; // [rsp+10h] [rbp-208h]
  char v60; // [rsp+1Eh] [rbp-1FAh]
  unsigned __int64 v61; // [rsp+20h] [rbp-1F8h]
  unsigned __int64 v62; // [rsp+28h] [rbp-1F0h]
  int v63; // [rsp+30h] [rbp-1E8h]
  char v64; // [rsp+35h] [rbp-1E3h]
  unsigned __int8 v66; // [rsp+37h] [rbp-1E1h]
  __int64 v67; // [rsp+38h] [rbp-1E0h]
  __int64 v68; // [rsp+38h] [rbp-1E0h]
  __int64 v70; // [rsp+48h] [rbp-1D0h]
  int v71; // [rsp+5Ch] [rbp-1BCh] BYREF
  __int64 v72; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v73; // [rsp+68h] [rbp-1B0h] BYREF
  __int128 v74; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v75; // [rsp+80h] [rbp-198h]
  __int64 v76; // [rsp+88h] [rbp-190h]
  __int64 v77; // [rsp+90h] [rbp-188h]
  char v78; // [rsp+98h] [rbp-180h] BYREF
  char v79; // [rsp+99h] [rbp-17Fh]
  __int16 v80; // [rsp+9Eh] [rbp-17Ah]
  char v81; // [rsp+C1h] [rbp-157h]
  __int16 v82; // [rsp+C6h] [rbp-152h]
  unsigned __int64 v83; // [rsp+1D8h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a2 + 32);
  v83 = __readfsqword(0x28u);
  v61 = v7;
  v62 = *(_QWORD *)(a2 + 24);
  func = get_func();
  if ( !func )
  {
    *a4 = 1;
    return 0;
  }
  v75 = -1;
  v8 = (unsigned __int64 *)&v78;
  v76 = 0;
  v77 = 0;
  v74 = -1;
  do
  {
    *(_WORD *)v8 = 0;
    v8 += 5;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *(v8 - 2) = 0;
  }
  while ( &v83 != v8 );
  if ( v62 < v61 )
  {
    that = v62;
    v66 = 0;
    v64 = 1;
    v63 = 0;
    v59 = &v74;
    while ( 1 )
    {
      *(_QWORD *)(a2 + 40) = that;
      if ( !(unsigned int)decode_insn() )
        return 1;
      v60 = BYTE2(v76);
      v14 = v76;
      if ( (unsigned __int8)sub_867A0((unsigned __int16)v76, that, v10, v11, v12, v13, 0.0, v57, func, v59) )
      {
        if ( *(_DWORD *)(a2 + 72) != 4 )
        {
          *(_DWORD *)(a2 + 76) |= 0x100u;
          if ( (unsigned __int8)sub_867F0(a1, v59, 3) )
            *(_DWORD *)(a2 + 76) |= 0x80u;
        }
      }
      next_func_addr = v75 + WORD1(v76);
      if ( next_func_addr == -1 )
        break;
      if ( (int)get_func_chunknum() < 0 )
      {
        next_func_addr = get_next_func_addr();
        v43 = *(_DWORD *)(a2 + 76);
        if ( (v43 & 0x10) != 0 )
          goto LABEL_55;
LABEL_57:
        if ( (v43 & 0x40) == 0 )
          goto LABEL_58;
        goto LABEL_60;
      }
      v16 = *(_DWORD *)(a2 + 76);
      if ( (v16 & 0x10) != 0 )
        goto LABEL_55;
      if ( (v16 & 0x40) == 0 )
        goto LABEL_58;
LABEL_15:
      if ( (get_aflags() & 0x800002) != 0 )
      {
        if ( !a5 || (get_flags_ex() & 0x10000) != 0 )
        {
          spd = get_spd();
          v21 = spd - get_spd();
          if ( (*(_BYTE *)(func + 16) & 0x10) != 0 )
          {
            if ( (_WORD)v76 == 16 )
            {
              v55 = sub_73080(a1, v59, 0, v18, v19, v20);
              if ( !(unsigned __int8)sub_79D80(a1, func, v59, v55, &v73, &v72) || (v72 & 0xFFFFFFFB) != 3 )
                goto LABEL_28;
            }
            else if ( (_WORD)v76 != 94 )
            {
              if ( (_WORD)v76 == 122 )
              {
                if ( v79 != 1 || v80 != 4 )
                  goto LABEL_28;
              }
              else if ( (_WORD)v76 != 92 || v79 != 1 || v80 != 4 || v81 != 4 || v82 == 4 )
              {
                goto LABEL_28;
              }
            }
            *(_DWORD *)(a2 + 76) |= 0x200u;
          }
          goto LABEL_28;
        }
        goto LABEL_35;
      }
LABEL_46:
      v37 = sub_741C0(a1, func, v59);
      v38 = v76;
      v21 = -v37;
      if ( (unsigned __int16)v76 <= 0x59u )
      {
        if ( (unsigned __int16)v76 > 0x55u )
        {
          v46 = sub_73080(a1, v59, 0, v34, v35, v36);
          if ( v46 != -1 )
          {
            v68 = v46;
            v47 = get_func();
            if ( v47 )
            {
              if ( (*(_BYTE *)(v47 + 16) & 1) == 0 && *(_QWORD *)v47 == v68 )
              {
                if ( !a5 )
                {
                  v52 = *(_QWORD *)(a2 + 8);
                  v53 = *(_QWORD *)a2;
                  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v52 + 1) )
                  {
                    v56 = qvector_reserve();
                    *(_QWORD *)a2 = v56;
                    v53 = v56;
                    v52 = *(_QWORD *)(a2 + 8);
                  }
                  v54 = v53 + 32 * v52;
                  *(_QWORD *)v54 = that;
                  *(_QWORD *)(v54 + 8) = 0;
                  *(_QWORD *)(v54 + 16) = 0;
                  *(_WORD *)(v54 + 24) = v14;
                  *(_BYTE *)(v54 + 26) = v60;
                  *(_BYTE *)(v54 + 27) = 1;
                  ++*(_QWORD *)(a2 + 8);
                }
                goto LABEL_35;
              }
            }
          }
          v38 = v76;
LABEL_71:
          v48 = 1;
          if ( *(_QWORD *)func == v62 )
            v48 = (v76 & 0x1000000000LL) != 0;
          switch ( v38 )
          {
            case '^':
LABEL_87:
              v49 = *(_DWORD *)(a2 + 76);
              if ( !*(_QWORD *)(a2 + 8) )
                v49 |= 0x20u;
              ++v63;
              *(_DWORD *)(a2 + 76) = v49 & 0xFFFFFFFC | 1;
LABEL_90:
              if ( v63 == 1 && *(_DWORD *)(a2 + 72) == 2 && (v76 & 0x1000000000LL) == 0 )
              {
                v22 = *(_QWORD *)(a2 + 48);
                if ( v14 == 92 || a3 < -v22 )
                {
                  v64 = 0;
                  v23 = 2;
                  goto LABEL_32;
                }
                v23 = 2;
LABEL_29:
                v24 = v21 + v22;
                *(_QWORD *)(a2 + 48) = v24;
                if ( v64 && v24 < *(_QWORD *)(a2 + 56) )
                  *(_QWORD *)(a2 + 56) = v24;
                goto LABEL_32;
              }
              v64 = 0;
              v23 = 2;
LABEL_32:
              v25 = *(_QWORD *)(a2 + 8);
              v26 = *(_QWORD *)a2;
              if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v25 + 1) )
              {
                v45 = qvector_reserve();
                *(_QWORD *)a2 = v45;
                v26 = v45;
                v25 = *(_QWORD *)(a2 + 8);
              }
              v27 = 32 * v25 + v26;
              *(_QWORD *)v27 = that;
              *(_QWORD *)(v27 + 8) = v21;
              *(_QWORD *)(v27 + 16) = 0;
              *(_WORD *)(v27 + 24) = v14;
              *(_BYTE *)(v27 + 26) = v60;
              *(_BYTE *)(v27 + 27) = v23;
              ++*(_QWORD *)(a2 + 8);
              goto LABEL_35;
            case 'z':
              if ( v79 == 1 && v80 == 4 )
                goto LABEL_87;
              break;
            case '\\':
              if ( v79 == 1 && v80 == 4 && v81 == 4 && v82 != 4 && v48 )
                goto LABEL_87;
              if ( (*(_BYTE *)(func + 16) & 0x10) != 0 && v79 == 1 && v80 == 4 && v81 == 4 && v82 != 4 )
LABEL_107:
                *(_DWORD *)(a2 + 76) |= 0x200u;
              break;
            default:
              goto LABEL_103;
          }
        }
        else
        {
          if ( (unsigned __int16)(v76 - 16) <= 2u )
          {
            v67 = sub_73080(a1, v59, 0, v34, v35, v36);
            v39 = sub_79D80(a1, func, v59, v67, &v72, &v71);
            v40 = v71 & 0xFFFFFFFB;
            if ( v39 )
            {
              v41 = v40 == 3;
              v23 = v40 == 3;
              v21 = -v72;
              if ( v40 == 3 )
              {
LABEL_51:
                v42 = *(_DWORD *)(a2 + 76);
                ++v63;
                v23 = 2;
                *(_DWORD *)(a2 + 76) = v42 | 0x221;
                if ( v67 == -1 )
                {
                  *(_DWORD *)(a2 + 76) = v42 & 0xFFFFFDDC | 0x221;
                  goto LABEL_90;
                }
LABEL_52:
                if ( (unsigned __int8)getinf_flag() )
                {
                  v21 = 0;
                }
                else
                {
                  v73 = 0;
                  if ( (unsigned __int8)get_tinfo() )
                  {
                    v70 = (int)sub_40000();
                    clear_tinfo_t();
                    if ( v70 != -1 )
                    {
                      v21 = -v70;
                      goto LABEL_28;
                    }
                  }
                  else
                  {
                    clear_tinfo_t();
                  }
                  if ( v23 )
                  {
                    *(_DWORD *)(a2 + 76) &= ~2u;
                    if ( v23 != 1 )
                      goto LABEL_90;
                    v64 = 0;
                    v66 = 1;
                    goto LABEL_32;
                  }
                }
LABEL_28:
                v22 = *(_QWORD *)(a2 + 48);
                v23 = 0;
                goto LABEL_29;
              }
            }
            else
            {
              v23 = 1;
              v41 = 1;
              v21 = -v72;
              if ( v40 == 3 )
                goto LABEL_51;
            }
            if ( *(_DWORD *)(a2 + 72) == 7 )
              goto LABEL_28;
            if ( v67 == -1 || !v41 )
            {
              if ( v23 )
              {
                *(_DWORD *)(a2 + 76) &= ~2u;
                v23 = 1;
                v66 = 1;
                v64 = 0;
                goto LABEL_32;
              }
              goto LABEL_28;
            }
            goto LABEL_52;
          }
          if ( *(_QWORD *)func == v62 )
          {
LABEL_103:
            if ( (*(_BYTE *)(func + 16) & 0x10) != 0 && v38 == 16 )
            {
              v50 = sub_73080(a1, v59, 0, func, v35, v36);
              if ( (unsigned __int8)sub_79D80(a1, func, v59, v50, &v73, &v72) )
              {
                if ( (v72 & 0xFFFFFFFB) == 3 )
                  goto LABEL_107;
              }
            }
          }
        }
        if ( v37 || !a5 )
          goto LABEL_28;
        goto LABEL_35;
      }
      if ( (_WORD)v76 != 159 )
        goto LABEL_71;
      if ( (v76 & 0x800000000LL) != 0 )
      {
        v51 = v75;
        if ( netnode_supval() == 8 )
        {
          v73 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v51 + v73);
          if ( (int)get_func_chunknum() >= 0 )
          {
            v21 = -4;
            goto LABEL_28;
          }
        }
      }
      if ( !a5 )
      {
        *(_DWORD *)(a2 + 76) &= ~2u;
        v23 = 1;
        v64 = 0;
        v66 = 1;
        goto LABEL_32;
      }
LABEL_35:
      that = next_that();
      if ( that >= v61 )
        goto LABEL_36;
    }
    v33 = *(_DWORD *)(a2 + 76);
    if ( (v33 & 0x10) != 0 )
    {
LABEL_55:
      v44 = netnode_charval();
      v43 = *(_DWORD *)(a2 + 76);
      if ( v44 == 1 )
      {
        v43 &= ~0x10u;
        *(_DWORD *)(a2 + 76) = v43;
      }
      goto LABEL_57;
    }
    if ( (v33 & 0x40) != 0 )
      goto LABEL_46;
LABEL_58:
    if ( (unsigned __int8)netnode_charval() == 2 )
      *(_DWORD *)(a2 + 76) |= 0x40u;
LABEL_60:
    if ( next_func_addr == -1 )
      goto LABEL_46;
    goto LABEL_15;
  }
  v66 = 0;
LABEL_36:
  v28 = *(_QWORD *)(a2 + 64);
  v29 = *(_QWORD *)(a2 + 8) - 1LL;
  if ( v29 >= 0 )
  {
    v30 = 0;
    v31 = *(_QWORD *)a2 + 32LL * *(_QWORD *)(a2 + 8);
    do
    {
      if ( *(_BYTE *)(v31 - 5) )
        break;
      v30 -= *(_QWORD *)(v31 - 24);
      if ( v30 < v28 )
      {
        *(_QWORD *)(a2 + 64) = v30;
        v28 = v30;
      }
      --v29;
      v31 -= 32;
    }
    while ( v29 != -1 );
  }
  *(__m128i *)(a2 + 56) = _mm_sub_epi64(
                            (__m128i)0LL,
                            _mm_unpacklo_epi64(
                              _mm_loadl_epi64((const __m128i *)(a2 + 56)),
                              (__m128i)(unsigned __int64)v28));
  return v66;
}
