__int64 __fastcall sub_153210(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int v10; // eax
  int *v11; // r8
  char v12; // dl
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v21; // r8
  __int64 v22; // r15
  unsigned int v23; // eax
  char v24; // al
  char v25; // dl
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  int v31; // eax
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned int v34; // eax
  int *v35; // r8
  __int64 v36; // rax
  unsigned __int8 *v37; // rsi
  _QWORD *v38; // rdx
  __int64 v39; // r14
  int v40; // edx
  char v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r15
  unsigned int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  char v49; // al
  char v50; // dl
  __int64 v51; // rcx
  __int64 v52; // rdx
  char v53; // al
  char v54; // dl
  __int64 v55; // rcx
  __int64 v56; // rdx
  char v57; // al
  int v58; // eax
  const char *v59; // rdx
  __int64 v60; // r12
  int v61; // eax
  _DWORD *v62; // rsi
  _DWORD *v63; // rsi
  _DWORD *v64; // rsi
  _DWORD *v65; // rsi
  _DWORD *v66; // rsi
  __int64 v67; // [rsp-8h] [rbp-D8h]
  int v68; // [rsp+0h] [rbp-D0h]
  __int64 v69; // [rsp+8h] [rbp-C8h]
  __int64 v70; // [rsp+10h] [rbp-C0h]
  __int64 v71; // [rsp+10h] [rbp-C0h]
  int v72; // [rsp+18h] [rbp-B8h]
  __int64 v73; // [rsp+18h] [rbp-B8h]
  __int64 v74; // [rsp+20h] [rbp-B0h]
  __int64 v75; // [rsp+20h] [rbp-B0h]
  __int64 v76; // [rsp+20h] [rbp-B0h]
  __int64 v77; // [rsp+20h] [rbp-B0h]
  __int64 v78; // [rsp+20h] [rbp-B0h]
  unsigned __int8 v80; // [rsp+28h] [rbp-A8h]
  unsigned int v81; // [rsp+38h] [rbp-98h] BYREF
  __int64 v82[2]; // [rsp+40h] [rbp-90h] BYREF
  __m128i si128; // [rsp+50h] [rbp-80h] BYREF
  __int64 v84; // [rsp+60h] [rbp-70h]
  __int128 v85; // [rsp+68h] [rbp-68h]
  int v86; // [rsp+78h] [rbp-58h]
  __int64 v87; // [rsp+80h] [rbp-50h]
  int v88; // [rsp+88h] [rbp-48h]
  unsigned __int64 v89; // [rsp+98h] [rbp-38h]

  v4 = a4 + 32;
  v6 = a1;
  v7 = *(_BYTE *)(a4 + 32) == 4;
  v89 = __readfsqword(0x28u);
  v8 = a4;
  v72 = a4 + 32;
  if ( !v7 )
    goto LABEL_20;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v4 + 8);
    v10 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 != 19 )
      break;
    v21 = v9 + 48;
    if ( *(_BYTE *)(v9 + 48) != 4 )
      goto LABEL_15;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v21 + 8);
      v23 = *(_DWORD *)v22;
      if ( *(_DWORD *)v22 != 19 )
        break;
      v28 = v22 + 48;
      if ( *(_BYTE *)(v22 + 48) != 4 )
        goto LABEL_44;
      while ( 1 )
      {
        v29 = *(_QWORD *)(v28 + 8);
        v30 = *(_DWORD *)v29;
        if ( *(_DWORD *)v29 == 19 )
        {
          v78 = *(_QWORD *)(v28 + 8);
          v57 = sub_150240(a1, (_BYTE *)(v29 + 48));
          v29 = v78;
          if ( !v57 )
            return 0;
          goto LABEL_113;
        }
        if ( v30 > 0x13 )
        {
          if ( v30 == 22 )
            goto LABEL_102;
LABEL_44:
          v31 = *(_DWORD *)(a1 + 64);
          goto LABEL_45;
        }
        if ( v30 != 9 )
          break;
LABEL_113:
        v28 = v29 + 32;
        if ( *(_BYTE *)(v29 + 32) != 4 )
          goto LABEL_44;
      }
      if ( v30 != 14 )
        goto LABEL_44;
LABEL_102:
      v77 = v28;
      v53 = sub_1227B0(*(int **)(v28 + 8), &v81, v82, 1);
      v28 = v77;
      v54 = v53;
      v31 = *(_DWORD *)(a1 + 64);
      if ( v54 )
      {
        if ( (v81 & 7) == 0 && v81 >> 3 < v31 )
        {
          v55 = v31 - (v81 >> 3) - 1;
          if ( !*(_QWORD *)(a1 + 8 * v55) )
          {
            v56 = v82[0];
            if ( *(_BYTE *)v82[0] == 4 )
            {
              v66 = *(_DWORD **)(v82[0] + 8);
              if ( *v66 == 9 )
                v56 = (__int64)(v66 + 8);
            }
            if ( *(_DWORD *)(v56 + 4) == 1 )
            {
              *(_QWORD *)(a1 + 8 * v55) = v56;
              goto LABEL_48;
            }
          }
        }
      }
LABEL_45:
      if ( v31 <= 0 )
        goto LABEL_133;
      v32 = v31 - 1;
      if ( *(_QWORD *)(a1 + 8 * v32) )
        return 0;
      *(_QWORD *)(a1 + 8 * v32) = v28;
LABEL_48:
      v21 = v22 + 32;
      if ( *(_BYTE *)(v22 + 32) != 4 )
      {
LABEL_15:
        v17 = *(_DWORD *)(a1 + 64);
        goto LABEL_16;
      }
    }
    if ( v23 > 0x13 )
    {
      if ( v23 != 22 )
        goto LABEL_15;
    }
    else
    {
      if ( v23 == 9 )
        goto LABEL_48;
      if ( v23 != 14 )
        goto LABEL_15;
    }
    v74 = v21;
    v24 = sub_1227B0(*(int **)(v21 + 8), &v81, v82, 1);
    v21 = v74;
    v25 = v24;
    v17 = *(_DWORD *)(a1 + 64);
    if ( !v25 )
      goto LABEL_16;
    if ( (v81 & 7) != 0 )
      goto LABEL_16;
    if ( v81 >> 3 >= v17 )
      goto LABEL_16;
    v26 = v17 - (v81 >> 3) - 1;
    if ( *(_QWORD *)(a1 + 8 * v26) )
      goto LABEL_16;
    v27 = v82[0];
    if ( *(_BYTE *)v82[0] == 4 )
    {
      v64 = *(_DWORD **)(v82[0] + 8);
      if ( *v64 == 9 )
        v27 = (__int64)(v64 + 8);
    }
    if ( *(_DWORD *)(v27 + 4) != 1 )
    {
LABEL_16:
      if ( v17 <= 0 )
      {
        if ( under_debugger )
          goto LABEL_138;
        goto LABEL_132;
      }
      v18 = v17 - 1;
      if ( *(_QWORD *)(a1 + 8 * v18) )
        return 0;
      *(_QWORD *)(a1 + 8 * v18) = v21;
    }
    else
    {
      *(_QWORD *)(a1 + 8 * v26) = v27;
    }
LABEL_19:
    v4 = v9 + 32;
    if ( *(_BYTE *)(v9 + 32) != 4 )
    {
LABEL_20:
      v13 = *(_DWORD *)(a1 + 64);
      goto LABEL_21;
    }
  }
  if ( v10 > 0x13 )
  {
    v11 = *(int **)(v4 + 8);
    if ( v10 != 22 )
      goto LABEL_20;
  }
  else
  {
    if ( v10 == 9 )
      goto LABEL_19;
    v11 = *(int **)(v4 + 8);
    if ( v10 != 14 )
      goto LABEL_20;
  }
  v12 = sub_1227B0(v11, &v81, v82, 1);
  v13 = *(_DWORD *)(a1 + 64);
  if ( !v12 )
    goto LABEL_21;
  if ( (v81 & 7) != 0 )
    goto LABEL_21;
  if ( v81 >> 3 >= v13 )
    goto LABEL_21;
  v14 = v13 - (v81 >> 3) - 1;
  if ( *(_QWORD *)(a1 + 8 * v14) )
    goto LABEL_21;
  v15 = v82[0];
  if ( *(_BYTE *)v82[0] == 4 )
  {
    v62 = *(_DWORD **)(v82[0] + 8);
    if ( *v62 == 9 )
      v15 = (__int64)(v62 + 8);
  }
  if ( *(_DWORD *)(v15 + 4) != 1 )
  {
LABEL_21:
    if ( v13 <= 0 )
    {
      if ( under_debugger )
        goto LABEL_138;
      goto LABEL_132;
    }
    v19 = v13 - 1;
    if ( *(_QWORD *)(a1 + 8 * v19) )
      return 0;
    *(_QWORD *)(a1 + 8 * v19) = v4;
    v70 = v8 + 48;
    if ( *(_BYTE *)(v8 + 48) != 4 )
      return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8 * v14) = v15;
    v70 = v8 + 48;
    v16 = v8 + 48;
    if ( *(_BYTE *)(v8 + 48) != 4 )
      goto LABEL_57;
  }
  v16 = v70;
LABEL_52:
  v33 = *(_QWORD *)(v16 + 8);
  v34 = *(_DWORD *)v33;
  if ( *(_DWORD *)v33 == 19 )
  {
    v44 = v33 + 48;
    if ( *(_BYTE *)(v33 + 48) != 4 )
      goto LABEL_87;
    while ( 1 )
    {
      v45 = *(_QWORD *)(v44 + 8);
      v46 = *(_DWORD *)v45;
      if ( *(_DWORD *)v45 == 19 )
      {
        if ( !(unsigned __int8)sub_150240(a1, (_BYTE *)(v45 + 48)) )
          return 0;
      }
      else
      {
        if ( v46 > 0x13 )
        {
          if ( v46 == 22 )
            goto LABEL_94;
LABEL_87:
          v47 = *(_DWORD *)(a1 + 64);
LABEL_88:
          if ( v47 > 0 )
          {
            v48 = v47 - 1;
            if ( !*(_QWORD *)(a1 + 8 * v48) )
            {
              *(_QWORD *)(a1 + 8 * v48) = v44;
              goto LABEL_91;
            }
            return 0;
          }
          if ( under_debugger )
LABEL_138:
            BUG();
LABEL_132:
          sub_383060(52549);
        }
        if ( v46 != 9 )
        {
          if ( v46 != 14 )
            goto LABEL_87;
LABEL_94:
          v76 = v44;
          v49 = sub_1227B0(*(int **)(v44 + 8), &v81, v82, 1);
          v44 = v76;
          v50 = v49;
          v47 = *(_DWORD *)(a1 + 64);
          if ( !v50 )
            goto LABEL_88;
          if ( (v81 & 7) != 0 )
            goto LABEL_88;
          if ( v81 >> 3 >= v47 )
            goto LABEL_88;
          v51 = v47 - (v81 >> 3) - 1;
          if ( *(_QWORD *)(a1 + 8 * v51) )
            goto LABEL_88;
          v52 = v82[0];
          if ( *(_BYTE *)v82[0] == 4 )
          {
            v65 = *(_DWORD **)(v82[0] + 8);
            if ( *v65 == 9 )
              v52 = (__int64)(v65 + 8);
          }
          if ( *(_DWORD *)(v52 + 4) != 1 )
            goto LABEL_88;
          *(_QWORD *)(a1 + 8 * v51) = v52;
LABEL_91:
          v16 = v33 + 32;
          if ( *(_BYTE *)(v33 + 32) != 4 )
          {
LABEL_56:
            v13 = *(_DWORD *)(a1 + 64);
            goto LABEL_57;
          }
          goto LABEL_52;
        }
      }
      v44 = v45 + 32;
      if ( *(_BYTE *)(v45 + 32) != 4 )
        goto LABEL_87;
    }
  }
  if ( v34 > 0x13 )
  {
    v35 = *(int **)(v16 + 8);
    if ( v34 != 22 )
      goto LABEL_56;
  }
  else
  {
    if ( v34 == 9 )
      goto LABEL_91;
    v35 = *(int **)(v16 + 8);
    if ( v34 != 14 )
      goto LABEL_56;
  }
  v41 = sub_1227B0(v35, &v81, v82, 1);
  v13 = *(_DWORD *)(a1 + 64);
  if ( !v41 )
    goto LABEL_57;
  if ( (v81 & 7) != 0 )
    goto LABEL_57;
  if ( v81 >> 3 >= v13 )
    goto LABEL_57;
  v42 = v13 - (v81 >> 3) - 1;
  if ( *(_QWORD *)(a1 + 8 * v42) )
    goto LABEL_57;
  v43 = v82[0];
  if ( *(_BYTE *)v82[0] == 4 )
  {
    v63 = *(_DWORD **)(v82[0] + 8);
    if ( *v63 == 9 )
      v43 = (__int64)(v63 + 8);
  }
  if ( *(_DWORD *)(v43 + 4) != 1 )
  {
LABEL_57:
    if ( v13 > 0 )
    {
      v36 = v13 - 1;
      if ( *(_QWORD *)(a1 + 8 * v36) )
        return 0;
      *(_QWORD *)(a1 + 8 * v36) = v16;
      v13 = *(_DWORD *)(a1 + 64);
      goto LABEL_60;
    }
LABEL_133:
    if ( under_debugger )
      goto LABEL_138;
    goto LABEL_132;
  }
  *(_QWORD *)(a1 + 8 * v42) = v43;
LABEL_60:
  v37 = *(unsigned __int8 **)a1;
  if ( v13 > 0 )
  {
    v38 = (_QWORD *)a1;
    while ( *v38 )
    {
      if ( ++v38 == (_QWORD *)(a1 + 8LL * v13) )
      {
        v75 = *(_QWORD *)(a2[30].m128i_i64[0] + 112);
        if ( v13 == 1 )
          goto LABEL_70;
        v69 = v8;
        v39 = 1;
        while ( (unsigned __int8)sub_12FF70(v75, v82, a2, a3, (__int64)v37, a3, *(_QWORD *)(a1 + 8 * v39))
             && v82[0] == v39 )
        {
          if ( *(_DWORD *)(a1 + 64) <= (int)++v39 )
          {
            v8 = v69;
            v6 = a1;
            goto LABEL_70;
          }
        }
        return 0;
      }
    }
    return 0;
  }
  v75 = *(_QWORD *)(a2[30].m128i_i64[0] + 112);
LABEL_70:
  sub_123A40((__int64)v82, v37);
  v40 = *(_DWORD *)(v6 + 64);
  v84 = 0;
  v86 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v87 = 0;
  v88 = 0;
  v85 = 0;
  v80 = sub_12AB50((unsigned __int64)v82, v75, v40, 1);
  if ( v80 )
  {
    sub_32C430(&v81, v75, *(unsigned int *)(v6 + 64), 2);
    copy_tinfo_t();
    clear_tinfo_t();
    v58 = *(_DWORD *)(v6 + 64);
    v59 = "_byteswap_ushort";
    if ( v58 != 2 )
    {
      v59 = "_byteswap_uint64";
      if ( v58 == 4 )
        v59 = "_byteswap_ulong";
    }
    v60 = sub_335B10(
            a2[4].m128i_i64[0],
            *(_QWORD *)(v8 + 24),
            (_DWORD)v59,
            (unsigned int)&si128.m128i_u32[2],
            1,
            (unsigned int)v82,
            1,
            v67,
            v68,
            (unsigned int)&v81,
            v70,
            v72);
    *(_DWORD *)(*(_QWORD *)(v60 + 72) + 284LL) = 12;
    *(_DWORD *)(*(_QWORD *)(v60 + 72) + 280LL) |= 0x10u;
    sub_11CDA0(v71);
    sub_11CDA0(v73);
    *(_BYTE *)(v8 + 32) = 4;
    *(_QWORD *)(v8 + 40) = v60;
    v61 = *(_DWORD *)(v6 + 64);
    *(_DWORD *)v8 = 4;
    *(_DWORD *)(v8 + 36) = v61;
  }
  cleanup_argloc();
  if ( v84 )
  {
    *(_QWORD *)&v85 = 0;
    qfree();
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v82);
  return v80;
}
