__int64 __fastcall sub_153210(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // rbx
  bool v7; // zf
  __int64 v8; // r14
  __int64 v9; // r13
  unsigned int v10; // eax
  int *v11; // r8
  int v12; // eax
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // r8
  __int64 v19; // r15
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // r13
  unsigned int v28; // eax
  int *v29; // r8
  __int64 v30; // rax
  unsigned __int8 *v31; // rsi
  _QWORD *v32; // rdx
  __int64 v33; // r14
  char v34; // al
  int v35; // edx
  __int64 v36; // r8
  __int64 v37; // r15
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // eax
  char v43; // al
  int v44; // eax
  const char *v45; // rdx
  __int64 v46; // r12
  int v47; // eax
  _DWORD *v48; // rsi
  _DWORD *v49; // rsi
  _DWORD *v50; // rsi
  _DWORD *v51; // rsi
  _DWORD *v52; // rsi
  __int64 v53; // [rsp-10h] [rbp-E0h]
  __int64 v54; // [rsp-8h] [rbp-D8h]
  int v55; // [rsp+0h] [rbp-D0h]
  __int64 v56; // [rsp+8h] [rbp-C8h]
  __int64 v57; // [rsp+10h] [rbp-C0h]
  __int64 v58; // [rsp+10h] [rbp-C0h]
  int v59; // [rsp+18h] [rbp-B8h]
  __int64 v60; // [rsp+18h] [rbp-B8h]
  __int64 v61; // [rsp+20h] [rbp-B0h]
  __int64 v62; // [rsp+20h] [rbp-B0h]
  __int64 v63; // [rsp+20h] [rbp-B0h]
  __int64 v64; // [rsp+20h] [rbp-B0h]
  __int64 v65; // [rsp+20h] [rbp-B0h]
  __int64 v66; // [rsp+28h] [rbp-A8h]
  unsigned __int8 v67; // [rsp+28h] [rbp-A8h]
  unsigned int v68; // [rsp+38h] [rbp-98h] BYREF
  __int64 v69[2]; // [rsp+40h] [rbp-90h] BYREF
  __m128i si128; // [rsp+50h] [rbp-80h] BYREF
  __int64 v71; // [rsp+60h] [rbp-70h]
  __int128 v72; // [rsp+68h] [rbp-68h]
  int v73; // [rsp+78h] [rbp-58h]
  __int64 v74; // [rsp+80h] [rbp-50h]
  int v75; // [rsp+88h] [rbp-48h]
  unsigned __int64 v76; // [rsp+98h] [rbp-38h]

  v4 = a4 + 32;
  v6 = a1;
  v66 = a3;
  v7 = *(_BYTE *)(a4 + 32) == 4;
  v76 = __readfsqword(0x28u);
  v8 = a4;
  v59 = a4 + 32;
  if ( !v7 )
    goto LABEL_20;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v4 + 8);
    v10 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 != 19 )
      break;
    v18 = v9 + 48;
    if ( *(_BYTE *)(v9 + 48) != 4 )
      goto LABEL_15;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v18 + 8);
      v20 = *(_DWORD *)v19;
      if ( *(_DWORD *)v19 != 19 )
        break;
      v22 = v19 + 48;
      if ( *(_BYTE *)(v19 + 48) != 4 )
        goto LABEL_44;
      while ( 1 )
      {
        v23 = *(_QWORD *)(v22 + 8);
        v24 = *(_DWORD *)v23;
        if ( *(_DWORD *)v23 == 19 )
        {
          v65 = *(_QWORD *)(v22 + 8);
          v43 = sub_150240(a1, (_BYTE *)(v23 + 48));
          v23 = v65;
          if ( !v43 )
            return 0;
          goto LABEL_113;
        }
        if ( v24 > 0x13 )
        {
          if ( v24 == 22 )
            goto LABEL_102;
LABEL_44:
          v25 = *(_DWORD *)(a1 + 64);
          goto LABEL_45;
        }
        if ( v24 != 9 )
          break;
LABEL_113:
        v22 = v23 + 32;
        if ( *(_BYTE *)(v23 + 32) != 4 )
          goto LABEL_44;
      }
      if ( v24 != 14 )
        goto LABEL_44;
LABEL_102:
      v64 = v22;
      v42 = sub_1227B0(*(int **)(v22 + 8), &v68, v69, 1);
      v22 = v64;
      a3 = v42;
      v25 = *(_DWORD *)(a1 + 64);
      if ( (_BYTE)a3 )
      {
        a3 = v68;
        if ( (v68 & 7) == 0 )
        {
          a3 = v68 >> 3;
          if ( (unsigned int)a3 < v25 )
          {
            a4 = (unsigned int)(v25 - a3 - 1);
            if ( !*(_QWORD *)(a1 + 8 * a4) )
            {
              a3 = v69[0];
              if ( *(_BYTE *)v69[0] == 4 )
              {
                v52 = *(_DWORD **)(v69[0] + 8);
                if ( *v52 == 9 )
                  a3 = (__int64)(v52 + 8);
              }
              if ( *(_DWORD *)(a3 + 4) == 1 )
              {
                *(_QWORD *)(a1 + 8 * a4) = a3;
                goto LABEL_48;
              }
            }
          }
        }
      }
LABEL_45:
      if ( v25 <= 0 )
        goto LABEL_133;
      v26 = v25 - 1;
      if ( *(_QWORD *)(a1 + 8 * v26) )
        return 0;
      *(_QWORD *)(a1 + 8 * v26) = v22;
LABEL_48:
      v18 = v19 + 32;
      if ( *(_BYTE *)(v19 + 32) != 4 )
      {
LABEL_15:
        v14 = *(_DWORD *)(a1 + 64);
        goto LABEL_16;
      }
    }
    if ( v20 > 0x13 )
    {
      if ( v20 != 22 )
        goto LABEL_15;
    }
    else
    {
      if ( v20 == 9 )
        goto LABEL_48;
      if ( v20 != 14 )
        goto LABEL_15;
    }
    v61 = v18;
    v21 = sub_1227B0(*(int **)(v18 + 8), &v68, v69, 1);
    v18 = v61;
    a3 = v21;
    v14 = *(_DWORD *)(a1 + 64);
    if ( !(_BYTE)a3 )
      goto LABEL_16;
    a3 = v68;
    if ( (v68 & 7) != 0 )
      goto LABEL_16;
    a3 = v68 >> 3;
    if ( (unsigned int)a3 >= v14 )
      goto LABEL_16;
    a4 = (unsigned int)(v14 - a3);
    a3 = (unsigned int)(a4 - 1);
    if ( *(_QWORD *)(a1 + 8 * a3) )
      goto LABEL_16;
    a4 = v69[0];
    if ( *(_BYTE *)v69[0] == 4 )
    {
      v50 = *(_DWORD **)(v69[0] + 8);
      if ( *v50 == 9 )
        a4 = (__int64)(v50 + 8);
    }
    if ( *(_DWORD *)(a4 + 4) != 1 )
    {
LABEL_16:
      if ( v14 <= 0 )
      {
        if ( under_debugger )
          goto LABEL_138;
        goto LABEL_132;
      }
      v15 = v14 - 1;
      if ( *(_QWORD *)(a1 + 8 * v15) )
        return 0;
      *(_QWORD *)(a1 + 8 * v15) = v18;
    }
    else
    {
      *(_QWORD *)(a1 + 8 * a3) = a4;
    }
LABEL_19:
    v4 = v9 + 32;
    if ( *(_BYTE *)(v9 + 32) != 4 )
    {
LABEL_20:
      v12 = *(_DWORD *)(a1 + 64);
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
  a3 = (unsigned int)sub_1227B0(v11, &v68, v69, 1);
  v12 = *(_DWORD *)(a1 + 64);
  if ( !(_BYTE)a3 )
    goto LABEL_21;
  a3 = v68;
  if ( (v68 & 7) != 0 )
    goto LABEL_21;
  a3 = v68 >> 3;
  if ( (unsigned int)a3 >= v12 )
    goto LABEL_21;
  a4 = (unsigned int)(v12 - a3);
  a3 = (unsigned int)(a4 - 1);
  if ( *(_QWORD *)(a1 + 8 * a3) )
    goto LABEL_21;
  a4 = v69[0];
  if ( *(_BYTE *)v69[0] == 4 )
  {
    v48 = *(_DWORD **)(v69[0] + 8);
    if ( *v48 == 9 )
      a4 = (__int64)(v48 + 8);
  }
  if ( *(_DWORD *)(a4 + 4) != 1 )
  {
LABEL_21:
    if ( v12 <= 0 )
    {
      if ( under_debugger )
        goto LABEL_138;
      goto LABEL_132;
    }
    v16 = v12 - 1;
    if ( *(_QWORD *)(a1 + 8 * v16) )
      return 0;
    *(_QWORD *)(a1 + 8 * v16) = v4;
    v57 = v8 + 48;
    if ( *(_BYTE *)(v8 + 48) != 4 )
      return 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8 * a3) = a4;
    v57 = v8 + 48;
    v13 = v8 + 48;
    if ( *(_BYTE *)(v8 + 48) != 4 )
      goto LABEL_57;
  }
  v13 = v57;
LABEL_52:
  v27 = *(_QWORD *)(v13 + 8);
  v28 = *(_DWORD *)v27;
  if ( *(_DWORD *)v27 == 19 )
  {
    v36 = v27 + 48;
    if ( *(_BYTE *)(v27 + 48) != 4 )
      goto LABEL_87;
    while ( 1 )
    {
      v37 = *(_QWORD *)(v36 + 8);
      v38 = *(_DWORD *)v37;
      if ( *(_DWORD *)v37 == 19 )
      {
        if ( !(unsigned __int8)sub_150240(a1, (_BYTE *)(v37 + 48)) )
          return 0;
      }
      else
      {
        if ( v38 > 0x13 )
        {
          if ( v38 == 22 )
            goto LABEL_94;
LABEL_87:
          v39 = *(_DWORD *)(a1 + 64);
LABEL_88:
          if ( v39 > 0 )
          {
            v40 = v39 - 1;
            if ( !*(_QWORD *)(a1 + 8 * v40) )
            {
              *(_QWORD *)(a1 + 8 * v40) = v36;
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
        if ( v38 != 9 )
        {
          if ( v38 != 14 )
            goto LABEL_87;
LABEL_94:
          v63 = v36;
          v41 = sub_1227B0(*(int **)(v36 + 8), &v68, v69, 1);
          v36 = v63;
          a3 = v41;
          v39 = *(_DWORD *)(a1 + 64);
          if ( !(_BYTE)a3 )
            goto LABEL_88;
          a3 = v68;
          if ( (v68 & 7) != 0 )
            goto LABEL_88;
          a3 = v68 >> 3;
          if ( (unsigned int)a3 >= v39 )
            goto LABEL_88;
          a4 = (unsigned int)(v39 - a3 - 1);
          if ( *(_QWORD *)(a1 + 8 * a4) )
            goto LABEL_88;
          a3 = v69[0];
          if ( *(_BYTE *)v69[0] == 4 )
          {
            v51 = *(_DWORD **)(v69[0] + 8);
            if ( *v51 == 9 )
              a3 = (__int64)(v51 + 8);
          }
          if ( *(_DWORD *)(a3 + 4) != 1 )
            goto LABEL_88;
          *(_QWORD *)(a1 + 8 * a4) = a3;
LABEL_91:
          v13 = v27 + 32;
          if ( *(_BYTE *)(v27 + 32) != 4 )
          {
LABEL_56:
            v12 = *(_DWORD *)(a1 + 64);
            goto LABEL_57;
          }
          goto LABEL_52;
        }
      }
      v36 = v37 + 32;
      if ( *(_BYTE *)(v37 + 32) != 4 )
        goto LABEL_87;
    }
  }
  if ( v28 > 0x13 )
  {
    v29 = *(int **)(v13 + 8);
    if ( v28 != 22 )
      goto LABEL_56;
  }
  else
  {
    if ( v28 == 9 )
      goto LABEL_91;
    v29 = *(int **)(v13 + 8);
    if ( v28 != 14 )
      goto LABEL_56;
  }
  a3 = (unsigned int)sub_1227B0(v29, &v68, v69, 1);
  v12 = *(_DWORD *)(a1 + 64);
  if ( !(_BYTE)a3 )
    goto LABEL_57;
  a3 = v68;
  if ( (v68 & 7) != 0 )
    goto LABEL_57;
  a3 = v68 >> 3;
  if ( (unsigned int)a3 >= v12 )
    goto LABEL_57;
  a4 = (unsigned int)(v12 - a3);
  a3 = (unsigned int)(a4 - 1);
  if ( *(_QWORD *)(a1 + 8 * a3) )
    goto LABEL_57;
  a4 = v69[0];
  if ( *(_BYTE *)v69[0] == 4 )
  {
    v49 = *(_DWORD **)(v69[0] + 8);
    if ( *v49 == 9 )
      a4 = (__int64)(v49 + 8);
  }
  if ( *(_DWORD *)(a4 + 4) != 1 )
  {
LABEL_57:
    if ( v12 > 0 )
    {
      v30 = v12 - 1;
      if ( *(_QWORD *)(a1 + 8 * v30) )
        return 0;
      *(_QWORD *)(a1 + 8 * v30) = v13;
      v12 = *(_DWORD *)(a1 + 64);
      goto LABEL_60;
    }
LABEL_133:
    if ( under_debugger )
      goto LABEL_138;
    goto LABEL_132;
  }
  *(_QWORD *)(a1 + 8 * a3) = a4;
LABEL_60:
  v31 = *(unsigned __int8 **)a1;
  if ( v12 > 0 )
  {
    v32 = (_QWORD *)a1;
    a4 = a1 + 8LL * v12;
    while ( *v32 )
    {
      if ( ++v32 == (_QWORD *)a4 )
      {
        a3 = a2[30].m128i_i64[0];
        v62 = *(_QWORD *)(a3 + 112);
        if ( v12 == 1 )
          goto LABEL_70;
        v56 = v8;
        v33 = 1;
        while ( 1 )
        {
          v34 = sub_12FF70(v62, v69, a2, v66, (__int64)v31, v66, *(_QWORD *)(a1 + 8 * v33));
          a4 = v53;
          if ( !v34 || v69[0] != v33 )
            return 0;
          if ( *(_DWORD *)(a1 + 64) <= (int)++v33 )
          {
            v8 = v56;
            v6 = a1;
            goto LABEL_70;
          }
        }
      }
    }
    return 0;
  }
  v62 = *(_QWORD *)(a2[30].m128i_i64[0] + 112);
LABEL_70:
  sub_123A40((__int64)v69, v31, a3, a4);
  v35 = *(_DWORD *)(v6 + 64);
  v71 = 0;
  v73 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v74 = 0;
  v75 = 0;
  v72 = 0;
  v67 = sub_12AB50((unsigned __int8 *)v69, v62, v35, 1);
  if ( v67 )
  {
    sub_32C430(&v68, v62, *(unsigned int *)(v6 + 64), 2);
    copy_tinfo_t();
    clear_tinfo_t();
    v44 = *(_DWORD *)(v6 + 64);
    v45 = "_byteswap_ushort";
    if ( v44 != 2 )
    {
      v45 = "_byteswap_uint64";
      if ( v44 == 4 )
        v45 = "_byteswap_ulong";
    }
    v46 = sub_335B10(
            a2[4].m128i_i64[0],
            *(_QWORD *)(v8 + 24),
            (_DWORD)v45,
            (unsigned int)&si128.m128i_u32[2],
            1,
            (unsigned int)v69,
            1,
            v54,
            v55,
            (unsigned int)&v68,
            v57,
            v59);
    *(_DWORD *)(*(_QWORD *)(v46 + 72) + 284LL) = 12;
    *(_DWORD *)(*(_QWORD *)(v46 + 72) + 280LL) |= 0x10u;
    sub_11CDA0(v58);
    sub_11CDA0(v60);
    *(_BYTE *)(v8 + 32) = 4;
    *(_QWORD *)(v8 + 40) = v46;
    v47 = *(_DWORD *)(v6 + 64);
    *(_DWORD *)v8 = 4;
    *(_DWORD *)(v8 + 36) = v47;
  }
  cleanup_argloc();
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)v69);
  return v67;
}
