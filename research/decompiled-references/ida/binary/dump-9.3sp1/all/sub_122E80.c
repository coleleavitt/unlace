__int64 __fastcall sub_122E80(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  int v4; // r12d
  char v5; // cl
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  bool v8; // zf
  char *v9; // r13
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v13; // r13d
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // cl
  unsigned __int64 *v20; // rax
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // r14
  int v24; // eax
  int v25; // ecx
  int v26; // r12d
  bool v27; // cf
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rdi
  char v37; // [rsp+7h] [rbp-1F1h]
  __int64 v38; // [rsp+8h] [rbp-1F0h]
  __m128i v39; // [rsp+10h] [rbp-1E8h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v41; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v42; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v43[2]; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v44[2]; // [rsp+60h] [rbp-198h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-178h] BYREF
  _QWORD v47[2]; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v48[2]; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v49; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD v50[2]; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v51; // [rsp+D0h] [rbp-128h] BYREF
  _QWORD v52[2]; // [rsp+E0h] [rbp-118h] BYREF
  __m128i v53; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v54[2]; // [rsp+100h] [rbp-F8h] BYREF
  _QWORD v55[2]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v56; // [rsp+120h] [rbp-D8h] BYREF
  _QWORD v57[2]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+148h] [rbp-B0h]
  unsigned __int64 *v60; // [rsp+160h] [rbp-98h] BYREF
  __int128 v61; // [rsp+168h] [rbp-90h]
  unsigned __int64 *v62; // [rsp+180h] [rbp-78h] BYREF
  __int128 v63; // [rsp+188h] [rbp-70h]
  __int64 v64; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v65; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v66; // [rsp+1B8h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  v2 = *a2;
  if ( *a2 > 0x29 )
  {
    v37 = 0;
    if ( v2 - 45 > 7 )
      return 0;
    goto LABEL_4;
  }
  if ( v2 > 0x21 )
  {
    v37 = 1;
LABEL_4:
    if ( (unsigned __int8)sub_11FD80((char *)a2 + 48, &v40, 0) )
      goto LABEL_5;
    return 0;
  }
  if ( v2 != 29 )
    return 0;
  v40 = 0;
  v37 = 1;
LABEL_5:
  v4 = 8 * a2[9];
  v5 = v4 - 1;
  if ( (unsigned __int64)(v4 - 1) <= 0x3F )
  {
    v7 = 1LL << v5;
    v6 = 2 * (1LL << v5);
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  v8 = *((_BYTE *)a2 + 32) == 4;
  v39 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v8 )
  {
    v9 = *((char **)a2 + 5);
    v10 = *(_DWORD *)v9;
    switch ( *(_DWORD *)v9 )
    {
      case 6:
      case 0x1D:
      case 0x1E:
      case 0x1F:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        v58 = 0;
        v59 = 0;
        *(_QWORD *)&v41 = 0;
        *((_QWORD *)&v41 + 1) = 2;
        sub_316BB0(&v58, &v41);
        v38 = 2;
        goto LABEL_19;
      case 8:
      case 9:
        v26 = *((_DWORD *)v9 + 9);
        v58 = 0;
        v59 = 0;
        v4 = 8 * v26;
        v17 = v4;
        if ( v10 == 8 )
          goto LABEL_71;
        goto LABEL_36;
      case 0x13:
      case 0x14:
        if ( !(unsigned __int8)sub_11FD80(v9 + 48, &v64, 0) )
          goto LABEL_15;
        v24 = log2floor();
        v8 = *(_DWORD *)v9 == 19;
        v58 = 0;
        v25 = v24 + 1;
        v59 = 0;
        if ( !v8 )
        {
          if ( (unsigned __int64)v25 > 0x3F )
            goto LABEL_18;
          v38 = 1LL << v25;
          goto LABEL_38;
        }
        if ( (unsigned __int64)v25 > 0x3F )
        {
          v38 = 0;
          v20 = nullptr;
          v21 = 0;
          goto LABEL_44;
        }
        v38 = 1LL << v25;
        v21 = 1LL << v25;
        goto LABEL_75;
      case 0x17:
      case 0x18:
        if ( !(unsigned __int8)sub_152630(*((_QWORD *)a2 + 5), &v64) || (int)v64 <= 0 )
        {
LABEL_15:
          v4 = 8 * a2[9];
          goto LABEL_16;
        }
        v4 = 8 * *((_DWORD *)v9 + 9) - v64;
        v8 = *(_DWORD *)v9 == 24;
        v59 = 0;
        v58 = 0;
        v17 = v4;
        if ( v8 )
        {
LABEL_71:
          v27 = v17 < 0x40;
          v28 = 0;
          if ( v27 )
            v28 = 1LL << v4;
          v38 = v28;
          goto LABEL_42;
        }
LABEL_36:
        if ( v17 > 0x3F )
          goto LABEL_18;
        break;
      default:
        goto LABEL_16;
    }
LABEL_37:
    v38 = 1LL << v4;
LABEL_38:
    *(_QWORD *)&v41 = 0;
    *((_QWORD *)&v41 + 1) = v38;
    sub_316BB0(&v58, &v41);
    goto LABEL_19;
  }
LABEL_16:
  v13 = *a2;
  v14 = sub_32EA20(*a2);
  v58 = 0;
  v59 = 0;
  if ( v13 == v14 )
  {
    v18 = 0;
    if ( (unsigned __int64)v4 < 0x40 )
      v18 = 1LL << v4;
    v38 = v18;
LABEL_42:
    v19 = v4 - 1;
    if ( (unsigned __int64)(v4 - 1) <= 0x3F )
    {
      *(_QWORD *)&v41 = 0;
      v21 = 1LL << ((unsigned __int8)v4 - 1);
      *((_QWORD *)&v41 + 1) = 1LL << v19;
      sub_316BB0(&v58, &v41);
LABEL_75:
      v20 = (unsigned __int64 *)(-v21 & (v6 - 1));
    }
    else
    {
      v41 = 0;
      sub_316BB0(&v58, &v41);
      v20 = nullptr;
      v21 = 0;
    }
LABEL_44:
    *(_QWORD *)&v61 = v21;
    v60 = v20;
    sub_316BB0(&v58, &v60);
    goto LABEL_19;
  }
  if ( (unsigned __int64)v4 <= 0x3F )
    goto LABEL_37;
LABEL_18:
  v41 = 0;
  sub_316BB0(&v58, &v41);
  v38 = 0;
LABEL_19:
  v15 = *a2;
  v60 = nullptr;
  v61 = 0;
  switch ( v15 )
  {
    case 0x1Du:
    case 0x28u:
    case 0x33u:
      v22 = v40;
      if ( v40 == v7 )
        goto LABEL_78;
      if ( v7 >= v40 )
      {
        v53 = _mm_load_si128(&v39);
        sub_316BB0(&v60, &v53);
        if ( v22 )
        {
          v54[0] = 0;
          v54[1] = v22;
          sub_316BB0(&v60, v54);
        }
      }
      else
      {
        v52[0] = v7;
        v52[1] = v40 - v7;
        sub_316BB0(&v60, v52);
      }
      goto LABEL_20;
    case 0x22u:
    case 0x2Du:
      v42 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(v6 - v40));
      sub_316BB0(&v60, &v42);
      goto LABEL_20;
    case 0x23u:
    case 0x2Eu:
      v11 = 2;
      if ( !v40 )
        goto LABEL_30;
      v43[1] = v40;
      v43[0] = 0;
      sub_316BB0(&v60, v43);
      goto LABEL_20;
    case 0x24u:
    case 0x2Fu:
      if ( v6 - 1 == v40 )
        goto LABEL_78;
      v44[0] = v40 + 1;
      v44[1] = v6 - v40 - 1;
      sub_316BB0(&v60, v44);
      goto LABEL_20;
    case 0x25u:
    case 0x30u:
      v45[0] = 0;
      v45[1] = v40 + 1;
      sub_316BB0(&v60, v45);
      goto LABEL_20;
    case 0x26u:
    case 0x31u:
      if ( v7 - 1 == v40 )
      {
LABEL_78:
        v11 = 2;
        goto LABEL_30;
      }
      if ( v40 >= v7 - 1 )
      {
        v39.m128i_i64[0] = v40;
        v47[1] = v7;
        v47[0] = 0;
        sub_316BB0(&v60, v47);
        if ( v39.m128i_i64[0] < (unsigned __int64)(v6 - 1) )
        {
          v48[0] = v39.m128i_i64[0] + 1;
          v48[1] = v6 - v39.m128i_i64[0] - 1;
          sub_316BB0(&v60, v48);
        }
      }
      else
      {
        v46[0] = v40 + 1;
        v46[1] = v7 - v40 - 1;
        sub_316BB0(&v60, v46);
      }
LABEL_20:
      sub_3180C0(&v60, &v58);
      v11 = 2;
      if ( !(_QWORD)v61 )
        goto LABEL_28;
      if ( !(unsigned int)sub_316F80(&v60, &v58) )
      {
        v11 = 3;
        goto LABEL_28;
      }
      if ( (_QWORD)v61 == 1 && v60[1] == 1 )
      {
        v30 = a2[9];
        v31 = *((_QWORD *)a2 + 3);
        v40 = *v60;
        v29 = v40;
        *a2 = v37 == 0 ? 44 : 33;
        sub_120A10((__int64)(a2 + 12), a1, v29, v30, v31, 0);
        v11 = 1;
        goto LABEL_28;
      }
      v62 = nullptr;
      v64 = 0;
      *(_QWORD *)&v65 = v38;
      v63 = 0;
      sub_316BB0(&v62, &v64);
      sub_317C60(&v62, &v60);
      if ( (_QWORD)v63 == 1 && v62[1] == 1 )
      {
        v33 = a2[9];
        v34 = *((_QWORD *)a2 + 3);
        v40 = *v62;
        v32 = v40;
        *a2 = v37 == 0 ? 43 : 32;
        sub_120A10((__int64)(a2 + 12), a1, v32, v33, v34, 0);
        goto LABEL_81;
      }
      v16 = *a2;
      if ( v16 == (unsigned int)sub_32EAF0(*a2) )
        goto LABEL_25;
      v64 = 0;
      v57[0] = 0;
      v57[1] = v7;
      v65 = 0;
      sub_316BB0(&v64, v57);
      if ( !(unsigned __int8)sub_317F40(&v64, &v58) )
      {
        if ( v64 )
        {
          *(_QWORD *)&v65 = 0;
          qfree(v64);
        }
LABEL_25:
        v11 = 0;
        goto LABEL_26;
      }
      v35 = sub_32EAF0(*a2);
      v36 = v64;
      *a2 = v35;
      if ( v36 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v36);
      }
LABEL_81:
      v11 = 1;
LABEL_26:
      if ( v62 )
      {
        *(_QWORD *)&v63 = 0;
        qfree((__int64)v62);
      }
LABEL_28:
      if ( v60 )
      {
        *(_QWORD *)&v61 = 0;
        qfree((__int64)v60);
      }
LABEL_30:
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(v58);
      }
      return v11;
    case 0x27u:
    case 0x32u:
      if ( v40 >= v7 )
      {
        v39.m128i_i64[0] = v40;
        v50[1] = v7;
        v50[0] = 0;
        sub_316BB0(&v60, v50);
        v51 = _mm_unpacklo_epi64((__m128i)v39.m128i_u64[0], (__m128i)(unsigned __int64)(v6 - v39.m128i_i64[0]));
        sub_316BB0(&v60, &v51);
      }
      else
      {
        v49 = _mm_unpacklo_epi64((__m128i)v40, (__m128i)(v7 - v40));
        sub_316BB0(&v60, &v49);
      }
      goto LABEL_20;
    case 0x29u:
    case 0x34u:
      v23 = v40;
      if ( v40 < v7 )
      {
        v56 = _mm_load_si128(&v39);
        sub_316BB0(&v60, &v56);
        v62 = nullptr;
        *(_QWORD *)&v63 = v23 + 1;
        sub_316BB0(&v60, &v62);
      }
      else
      {
        v55[0] = v7;
        v55[1] = v40 + 1 - v7;
        sub_316BB0(&v60, v55);
      }
      goto LABEL_20;
    default:
      goto LABEL_20;
  }
}
