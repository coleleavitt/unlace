__int64 __fastcall sub_13040(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  __int64 v8; // rsi
  unsigned __int16 v9; // ax
  unsigned __int8 *v10; // r13
  _DWORD *v11; // r15
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r14
  _DWORD *v14; // r14
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v19; // eax
  __int64 v20; // rax
  __int16 v21; // r15
  __int64 v22; // r14
  __int64 v23; // r13
  int v24; // eax
  __int64 flags; // rax
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  int v29; // r9d
  __int64 v30; // rax
  __int64 func; // rax
  unsigned __int64 v32; // rax
  int v33; // eax
  unsigned __int8 *v34; // [rsp+0h] [rbp-98h]
  unsigned __int8 *v35; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+8h] [rbp-90h]
  __int64 v37; // [rsp+18h] [rbp-80h] BYREF
  __m128i si128; // [rsp+20h] [rbp-78h] BYREF
  __int64 v39; // [rsp+30h] [rbp-68h]
  __int128 v40; // [rsp+38h] [rbp-60h]
  __int16 v41; // [rsp+48h] [rbp-50h]
  unsigned __int64 v42; // [rsp+58h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(unsigned __int16 *)(a2 + 24);
  v42 = __readfsqword(0x28u);
  v5 = *(_DWORD *)(v2 + 104);
  if ( v5 <= v3 && v3 < *(_DWORD *)(v2 + 108) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v2 + 112) + 16LL * (v3 - v5) + 8);
    v6 = v7 & 1;
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  *(_DWORD *)(a1 + 5352) = v6;
  v8 = *(_QWORD *)(a2 + 16);
  v36 = v8 + *(unsigned __int16 *)(a2 + 26);
  if ( netnode_altval(*(_QWORD *)(a1 + 120), v8, 371) == 1 )
    *(_DWORD *)(a1 + 5352) = 1;
  v9 = *(_WORD *)(a2 + 24);
  if ( v9 <= 0x15u )
  {
    if ( !v9 )
      goto LABEL_15;
    switch ( *(_WORD *)(a2 + 24) )
    {
      case 1:
      case 3:
        if ( (*(_BYTE *)(a1 + 5288) & 4) == 0 )
          goto LABEL_15;
        if ( *(_BYTE *)(a2 + 81) != 4 )
          goto LABEL_15;
        v24 = *(unsigned __int16 *)(a2 + 86);
        if ( v24 == 28 )
          goto LABEL_15;
        if ( v24 == 27 )
        {
          func = get_func(*(_QWORD *)(a2 + 16));
          if ( func )
          {
            if ( (*(_BYTE *)(func + 16) & 0x10) != 0 )
              goto LABEL_15;
          }
        }
        flags = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
        if ( (unsigned __int8)is_defarg(flags, 1) )
          goto LABEL_15;
        si128.m128i_i64[0] = -1;
        if ( *(_QWORD *)(a2 + 96) <= 3u )
          goto LABEL_15;
        if ( !(unsigned __int8)sub_111C0(
                                 a1,
                                 a2,
                                 *(_QWORD *)(a2 + 16),
                                 *(unsigned __int16 *)(a2 + 86),
                                 &si128,
                                 nullptr,
                                 1,
                                 nullptr) )
          goto LABEL_15;
        v26 = si128.m128i_i64[0];
        if ( !si128.m128i_i64[0] )
          goto LABEL_15;
        v27 = *(_QWORD *)(a2 + 96);
        if ( (*(_DWORD *)(a2 + 28) & 0x18) == 0x10 )
        {
          v26 = si128.m128i_i64[0] - v27;
          si128.m128i_i64[0] -= v27;
        }
        if ( !(unsigned __int8)sub_DA20(a1, v27 + v26) )
          goto LABEL_15;
        v28 = *(_WORD *)(a2 + 24);
        if ( v28 == 139 )
          goto LABEL_107;
        if ( v28 > 0x8Bu )
        {
          if ( v28 != 140 )
          {
            v29 = 4;
            if ( (unsigned __int16)(v28 - 308) > 1u )
              goto LABEL_89;
            goto LABEL_90;
          }
        }
        else
        {
          if ( v28 == 3 )
          {
LABEL_100:
            v29 = 1;
            if ( (~*(_BYTE *)(a2 + 28) & 0x18) == 0 )
            {
              v33 = *(_DWORD *)(a2 + 28) & 6;
              if ( v33 == 4 )
              {
LABEL_107:
                v29 = 2;
                goto LABEL_90;
              }
              if ( !v33 )
                goto LABEL_103;
            }
LABEL_90:
            sub_D7F0(a1, *(_QWORD *)(a2 + 16), 1u, v26, 0, v29);
            goto LABEL_15;
          }
          if ( v28 != 138 )
          {
            if ( v28 != 1 )
            {
LABEL_89:
              v29 = 1;
              goto LABEL_90;
            }
            goto LABEL_100;
          }
        }
LABEL_103:
        v29 = 4;
        goto LABEL_90;
      case 0xE:
      case 0x11:
        if ( (*(_BYTE *)(a2 + 28) & 0x1F) == 0 )
          goto LABEL_14;
        goto LABEL_15;
      case 0x13:
      case 0x15:
        if ( (*(_BYTE *)(a1 + 5288) & 4) != 0 && *(_BYTE *)(a2 + 41) == 1 )
        {
          v19 = *(unsigned __int16 *)(a2 + 86);
          if ( v19 != 28
            && (v19 != 27 || (v30 = get_func(*(_QWORD *)(a2 + 16))) == 0 || (*(_BYTE *)(v30 + 16) & 0x10) == 0) )
          {
            v20 = get_flags_ex(*(_QWORD *)(a2 + 16), 0);
            if ( !(unsigned __int8)is_defarg(v20, 2) )
            {
              v21 = *(_WORD *)(a2 + 24);
              v37 = -1;
              if ( (unsigned __int8)sub_11070(a1, a2, a2 + 80, &v37, nullptr, 1, nullptr) )
              {
                v22 = v37;
                if ( v37 )
                {
                  if ( *(_BYTE *)(a2 + 121) == 5
                    && (v32 = *(_QWORD *)(a2 + 128), v32 > 3)
                    && (unsigned __int8)sub_DA20(a1, v37 + v32) )
                  {
                    sub_D7F0(a1, *(_QWORD *)(a2 + 16), 2u, v22, v21 == 21, 1);
                  }
                  else if ( *(_WORD *)(a2 + 86) != *(_WORD *)(a2 + 126) )
                  {
                    v39 = 0;
                    v41 = 0;
                    si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
                    v40 = 0;
                    if ( (unsigned __int8)sub_10FF0(a1, a2, a2 + 120, &si128) && si128.m128i_i64[0] > 3uLL )
                    {
                      v23 = v22 + si128.m128i_i64[0];
                      if ( v21 == 21 )
                        v23 = v22 - si128.m128i_i64[0];
                      if ( (unsigned __int8)sub_DA20(a1, v23) )
                      {
                        sub_D7F0(a1, si128.m128i_i64[1], (char)v41, v22, v21 == 21, 1);
                        sub_D910(a1, a2, v23 & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL));
                      }
                    }
                    if ( v39 )
                    {
                      *(_QWORD *)&v40 = 0;
                      qfree(v39);
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_15;
      default:
        goto LABEL_15;
    }
  }
  if ( v9 > 0x8Bu )
  {
    if ( v9 == 157 && (*(_BYTE *)(a2 + 64) & 0x40) != 0 )
      goto LABEL_14;
  }
  else if ( v9 > 0x89u
         || v9 == 65
         || v9 == 70 && (*(_BYTE *)(a1 + 5288) & 8) != 0 && *(_BYTE *)(a2 + 41) == 5 && !*(_QWORD *)(a2 + 48) )
  {
LABEL_14:
    *(_DWORD *)(a1 + 5352) = 1;
  }
LABEL_15:
  if ( (unsigned __int8)getinf_flag(10, 4096) && (unsigned int)get_auto_state() == 40 )
  {
    if ( *(_DWORD *)(a1 + 5352) )
      recalc_spd(*(_QWORD *)(a2 + 16));
    else
      sub_12FF0(a1, a2);
  }
  v10 = (unsigned __int8 *)(a2 + 40);
  v11 = &unk_1F600;
  v12 = (unsigned __int8 *)(a2 + 200);
  v13 = (unsigned __int8 *)(a2 + 40);
  do
  {
    if ( (*v11 & v7) != 0 )
    {
      v34 = v12;
      sub_E300(a1, a2, v13, 1u);
      v12 = v34;
    }
    v13 += 40;
    ++v11;
  }
  while ( v12 != v13 );
  v14 = &unk_1F620;
  do
  {
    if ( (*v14 & v7) != 0 )
    {
      v35 = v12;
      sub_E300(a1, a2, v10, 0);
      v12 = v35;
    }
    v10 += 40;
    ++v14;
  }
  while ( v10 != v12 );
  if ( *(_DWORD *)(a1 + 5352)
    && ((*(_QWORD *)(a2 + 24) & 0x600000FFFFLL) == 0x4000000012LL && *(_BYTE *)(a2 + 41) == 7
     || *(_WORD *)(a2 + 24) <= 4u
     || (*(_BYTE *)(a2 + 28) & 0x60) == 0) )
  {
    if ( (unsigned int)get_auto_state() == 40 )
      recalc_spd(*(_QWORD *)(a2 + 16));
  }
  else
  {
    add_cref(*(_QWORD *)(a2 + 16), v36, 21);
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x600000FFFFLL) == 0x4000000012LL && *(_BYTE *)(a2 + 41) == 7
    || (v15 = *(_WORD *)(a2 + 24), v15 <= 4u)
    || (*(_BYTE *)(a2 + 28) & 0x60) == 0 )
  {
    netnode_supdel(*(_QWORD *)(a1 + 120), v36, 371);
  }
  else
  {
    if ( v15 == 15 || v15 == 18 )
    {
      v16 = 3;
    }
    else
    {
      v16 = 2;
      if ( *(_DWORD *)(a1 + 5352) )
        v16 = 1;
    }
    v17 = *(_QWORD *)(a1 + 120);
    si128.m128i_i64[0] = v16;
    netnode_supset(v17, v36, &si128, 8, 371);
  }
  return 1;
}
