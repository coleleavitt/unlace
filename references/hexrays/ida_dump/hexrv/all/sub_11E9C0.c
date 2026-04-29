__int64 __fastcall sub_11E9C0(int a1, unsigned int *a2)
{
  unsigned int v2; // eax
  int v5; // r12d
  char v6; // cl
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  bool v9; // zf
  char *v10; // r13
  int v11; // esi
  unsigned int v12; // r14d
  unsigned int v14; // r13d
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r14
  __int64 v25; // rdi
  int v26; // eax
  int v27; // ecx
  int v28; // r12d
  bool v29; // cf
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // ecx
  __int64 v36; // r8
  unsigned int v37; // eax
  __int64 v38; // rdi
  int v39; // ecx
  char v40; // [rsp+7h] [rbp-1F1h]
  __int64 v41; // [rsp+8h] [rbp-1F0h]
  __m128i v42; // [rsp+10h] [rbp-1E8h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-1D0h] BYREF
  __int128 v44; // [rsp+30h] [rbp-1C8h] BYREF
  __m128i v45; // [rsp+40h] [rbp-1B8h] BYREF
  _QWORD v46[2]; // [rsp+50h] [rbp-1A8h] BYREF
  _QWORD v47[2]; // [rsp+60h] [rbp-198h] BYREF
  _QWORD v48[2]; // [rsp+70h] [rbp-188h] BYREF
  _QWORD v49[2]; // [rsp+80h] [rbp-178h] BYREF
  _QWORD v50[2]; // [rsp+90h] [rbp-168h] BYREF
  _QWORD v51[2]; // [rsp+A0h] [rbp-158h] BYREF
  __m128i v52; // [rsp+B0h] [rbp-148h] BYREF
  _QWORD v53[2]; // [rsp+C0h] [rbp-138h] BYREF
  __m128i v54; // [rsp+D0h] [rbp-128h] BYREF
  _QWORD v55[2]; // [rsp+E0h] [rbp-118h] BYREF
  __m128i v56; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp-F8h] BYREF
  _QWORD v58[2]; // [rsp+110h] [rbp-E8h] BYREF
  __m128i v59; // [rsp+120h] [rbp-D8h] BYREF
  _QWORD v60[2]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+140h] [rbp-B8h] BYREF
  __int128 v62; // [rsp+148h] [rbp-B0h]
  unsigned __int64 *v63; // [rsp+160h] [rbp-98h] BYREF
  __int128 v64; // [rsp+168h] [rbp-90h]
  unsigned __int64 *v65; // [rsp+180h] [rbp-78h] BYREF
  __int128 v66; // [rsp+188h] [rbp-70h]
  __int64 v67; // [rsp+1A0h] [rbp-58h] BYREF
  __int128 v68; // [rsp+1A8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+1B8h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  if ( (a2[1] & 0x10) != 0 )
    return 0;
  v2 = *a2;
  if ( *a2 > 0x29 )
  {
    v40 = 0;
    if ( v2 - 45 > 7 )
      return 0;
    goto LABEL_4;
  }
  if ( v2 > 0x21 )
  {
    v40 = 1;
LABEL_4:
    if ( (unsigned __int8)sub_11B8C0((char *)a2 + 48, &v43, 0) )
      goto LABEL_5;
    return 0;
  }
  if ( v2 != 29 )
    return 0;
  v43 = 0;
  v40 = 1;
LABEL_5:
  v5 = 8 * a2[9];
  v6 = v5 - 1;
  if ( (unsigned __int64)(v5 - 1) <= 0x3F )
  {
    v8 = 1LL << v6;
    v7 = 2 * (1LL << v6);
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  v9 = *((_BYTE *)a2 + 32) == 4;
  v42 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  if ( v9 )
  {
    v10 = *((char **)a2 + 5);
    v11 = *(_DWORD *)v10;
    switch ( *(_DWORD *)v10 )
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
        v61 = 0;
        v62 = 0;
        *(_QWORD *)&v44 = 0;
        *((_QWORD *)&v44 + 1) = 2;
        sub_311AB0(&v61, &v44);
        v41 = 2;
        goto LABEL_19;
      case 8:
      case 9:
        v28 = *((_DWORD *)v10 + 9);
        v61 = 0;
        v62 = 0;
        v5 = 8 * v28;
        v18 = v5;
        if ( v11 == 8 )
          goto LABEL_72;
        goto LABEL_36;
      case 0x13:
      case 0x14:
        if ( !(unsigned __int8)sub_11B8C0(v10 + 48, &v67, 0) )
          goto LABEL_15;
        v25 = v67;
        if ( *(_DWORD *)v10 == 19 )
        {
          v39 = 8 * *((_DWORD *)v10 + 13);
          if ( (unsigned __int64)v39 <= 0x3F )
            v25 = (-1LL << v39) | v67;
          v25 = ~v25;
        }
        v26 = log2floor(v25);
        v9 = *(_DWORD *)v10 == 19;
        v61 = 0;
        v27 = v26 + 1;
        v62 = 0;
        if ( !v9 )
        {
          if ( (unsigned __int64)v27 > 0x3F )
            goto LABEL_18;
          v41 = 1LL << v27;
          goto LABEL_38;
        }
        if ( (unsigned __int64)v27 > 0x3F )
        {
          v41 = 0;
          v21 = 0;
          v22 = 0;
          goto LABEL_44;
        }
        v41 = 1LL << v27;
        v22 = 1LL << v27;
        goto LABEL_76;
      case 0x17:
      case 0x18:
        if ( !(unsigned __int8)sub_14E170(*((_QWORD *)a2 + 5), &v67) || (int)v67 <= 0 )
        {
LABEL_15:
          v5 = 8 * a2[9];
          goto LABEL_16;
        }
        v5 = 8 * *((_DWORD *)v10 + 9) - v67;
        v9 = *(_DWORD *)v10 == 24;
        v62 = 0;
        v61 = 0;
        v18 = v5;
        if ( v9 )
        {
LABEL_72:
          v29 = v18 < 0x40;
          v30 = 0;
          if ( v29 )
            v30 = 1LL << v5;
          v41 = v30;
          goto LABEL_42;
        }
LABEL_36:
        if ( v18 > 0x3F )
          goto LABEL_18;
        break;
      default:
        goto LABEL_16;
    }
LABEL_37:
    v41 = 1LL << v5;
LABEL_38:
    *(_QWORD *)&v44 = 0;
    *((_QWORD *)&v44 + 1) = v41;
    sub_311AB0(&v61, &v44);
    goto LABEL_19;
  }
LABEL_16:
  v14 = *a2;
  v15 = sub_329760(*a2);
  v61 = 0;
  v62 = 0;
  if ( v14 == v15 )
  {
    v19 = 0;
    if ( (unsigned __int64)v5 < 0x40 )
      v19 = 1LL << v5;
    v41 = v19;
LABEL_42:
    v20 = v5 - 1;
    if ( (unsigned __int64)(v5 - 1) <= 0x3F )
    {
      *(_QWORD *)&v44 = 0;
      v22 = 1LL << ((unsigned __int8)v5 - 1);
      *((_QWORD *)&v44 + 1) = 1LL << v20;
      sub_311AB0(&v61, &v44);
LABEL_76:
      v21 = -v22 & (v7 - 1);
    }
    else
    {
      v44 = 0;
      sub_311AB0(&v61, &v44);
      v21 = 0;
      v22 = 0;
    }
LABEL_44:
    *(_QWORD *)&v64 = v22;
    v63 = (unsigned __int64 *)v21;
    sub_311AB0(&v61, &v63);
    goto LABEL_19;
  }
  if ( (unsigned __int64)v5 <= 0x3F )
    goto LABEL_37;
LABEL_18:
  v44 = 0;
  sub_311AB0(&v61, &v44);
  v41 = 0;
LABEL_19:
  v16 = *a2;
  v63 = nullptr;
  v64 = 0;
  switch ( v16 )
  {
    case 0x1Du:
    case 0x28u:
    case 0x33u:
      v23 = v43;
      if ( v43 == v8 )
        goto LABEL_79;
      if ( v8 >= v43 )
      {
        v56 = _mm_load_si128(&v42);
        sub_311AB0(&v63, &v56);
        if ( v23 )
        {
          v57[0] = 0;
          v57[1] = v23;
          sub_311AB0(&v63, v57);
        }
      }
      else
      {
        v55[0] = v8;
        v55[1] = v43 - v8;
        sub_311AB0(&v63, v55);
      }
      goto LABEL_20;
    case 0x22u:
    case 0x2Du:
      v45 = _mm_unpacklo_epi64((__m128i)v43, (__m128i)(v7 - v43));
      sub_311AB0(&v63, &v45);
      goto LABEL_20;
    case 0x23u:
    case 0x2Eu:
      v12 = 2;
      if ( !v43 )
        goto LABEL_30;
      v46[1] = v43;
      v46[0] = 0;
      sub_311AB0(&v63, v46);
      goto LABEL_20;
    case 0x24u:
    case 0x2Fu:
      if ( v7 - 1 == v43 )
        goto LABEL_79;
      v47[0] = v43 + 1;
      v47[1] = v7 - v43 - 1;
      sub_311AB0(&v63, v47);
      goto LABEL_20;
    case 0x25u:
    case 0x30u:
      v48[0] = 0;
      v48[1] = v43 + 1;
      sub_311AB0(&v63, v48);
      goto LABEL_20;
    case 0x26u:
    case 0x31u:
      if ( v8 - 1 == v43 )
      {
LABEL_79:
        v12 = 2;
        goto LABEL_30;
      }
      if ( v43 >= v8 - 1 )
      {
        v42.m128i_i64[0] = v43;
        v50[1] = v8;
        v50[0] = 0;
        sub_311AB0(&v63, v50);
        if ( v42.m128i_i64[0] < (unsigned __int64)(v7 - 1) )
        {
          v51[0] = v42.m128i_i64[0] + 1;
          v51[1] = v7 - v42.m128i_i64[0] - 1;
          sub_311AB0(&v63, v51);
        }
      }
      else
      {
        v49[0] = v43 + 1;
        v49[1] = v8 - v43 - 1;
        sub_311AB0(&v63, v49);
      }
LABEL_20:
      sub_312FC0(&v63, &v61);
      v12 = 2;
      if ( !(_QWORD)v64 )
        goto LABEL_28;
      if ( !(unsigned int)sub_311E80(&v63, &v61) )
      {
        v12 = 3;
        goto LABEL_28;
      }
      if ( (_QWORD)v64 == 1 && v63[1] == 1 )
      {
        v32 = a2[9];
        v33 = *((_QWORD *)a2 + 3);
        v43 = *v63;
        v31 = v43;
        *a2 = v40 == 0 ? 44 : 33;
        sub_11C550((__int64)(a2 + 12), a1, v31, v32, v33, 0);
        v12 = 1;
        goto LABEL_28;
      }
      v65 = nullptr;
      v67 = 0;
      *(_QWORD *)&v68 = v41;
      v66 = 0;
      sub_311AB0(&v65, &v67);
      sub_312B60(&v65, &v63);
      if ( (_QWORD)v66 == 1 && v65[1] == 1 )
      {
        v35 = a2[9];
        v36 = *((_QWORD *)a2 + 3);
        v43 = *v65;
        v34 = v43;
        *a2 = v40 == 0 ? 43 : 32;
        sub_11C550((__int64)(a2 + 12), a1, v34, v35, v36, 0);
        goto LABEL_82;
      }
      v17 = *a2;
      if ( v17 == (unsigned int)sub_329830(*a2) )
        goto LABEL_25;
      v67 = 0;
      v60[0] = 0;
      v60[1] = v8;
      v68 = 0;
      sub_311AB0(&v67, v60);
      if ( !(unsigned __int8)sub_312E40(&v67, &v61) )
      {
        if ( v67 )
        {
          *(_QWORD *)&v68 = 0;
          qfree(v67);
        }
LABEL_25:
        v12 = 0;
        goto LABEL_26;
      }
      v37 = sub_329830(*a2);
      v38 = v67;
      *a2 = v37;
      if ( v38 )
      {
        *(_QWORD *)&v68 = 0;
        qfree(v38);
      }
LABEL_82:
      v12 = 1;
LABEL_26:
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree(v65);
      }
LABEL_28:
      if ( v63 )
      {
        *(_QWORD *)&v64 = 0;
        qfree(v63);
      }
LABEL_30:
      if ( v61 )
      {
        *(_QWORD *)&v62 = 0;
        qfree(v61);
      }
      return v12;
    case 0x27u:
    case 0x32u:
      if ( v43 >= v8 )
      {
        v42.m128i_i64[0] = v43;
        v53[1] = v8;
        v53[0] = 0;
        sub_311AB0(&v63, v53);
        v54 = _mm_unpacklo_epi64((__m128i)v42.m128i_u64[0], (__m128i)(unsigned __int64)(v7 - v42.m128i_i64[0]));
        sub_311AB0(&v63, &v54);
      }
      else
      {
        v52 = _mm_unpacklo_epi64((__m128i)v43, (__m128i)(v8 - v43));
        sub_311AB0(&v63, &v52);
      }
      goto LABEL_20;
    case 0x29u:
    case 0x34u:
      v24 = v43;
      if ( v43 < v8 )
      {
        v59 = _mm_load_si128(&v42);
        sub_311AB0(&v63, &v59);
        v65 = nullptr;
        *(_QWORD *)&v66 = v24 + 1;
        sub_311AB0(&v63, &v65);
      }
      else
      {
        v58[0] = v8;
        v58[1] = v43 + 1 - v8;
        sub_311AB0(&v63, v58);
      }
      goto LABEL_20;
    default:
      goto LABEL_20;
  }
}
