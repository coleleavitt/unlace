__int64 __fastcall sub_8EF130(__int64 a1, _QWORD *a2, const __m128i *a3, const __m128i *a4)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned int v7; // r13d
  const __m128i *v8; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rcx
  __m128i *v25; // r15
  __int64 v26; // rcx
  char *v27; // r11
  int v28; // r9d
  _QWORD *v29; // r12
  unsigned int v30; // ebp
  char *v31; // r13
  __int64 v32; // rax
  size_t v33; // rcx
  unsigned __int64 v34; // r14
  _QWORD *v35; // rbp
  const __m128i *v36; // r12
  char *v37; // r11
  int v38; // edi
  int v39; // edx
  int v40; // esi
  size_t v41; // r14
  __int64 v42; // rdx
  size_t v43; // rcx
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  int v49; // r9d
  char *v50; // r10
  __int64 v51; // rax
  int v52; // r9d
  char *v53; // r10
  __m128i *v54; // r14
  bool v55; // al
  __m128i *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // [rsp+0h] [rbp-78h]
  __int64 v65; // [rsp+0h] [rbp-78h]
  char *v66; // [rsp+0h] [rbp-78h]
  __m128i *v67; // [rsp+8h] [rbp-70h]
  const __m128i *v68; // [rsp+10h] [rbp-68h]
  size_t v69; // [rsp+18h] [rbp-60h]
  char *v70; // [rsp+18h] [rbp-60h]
  _BOOL4 v71; // [rsp+18h] [rbp-60h]
  unsigned __int64 v72; // [rsp+18h] [rbp-60h]
  int v73; // [rsp+18h] [rbp-60h]
  char *v74; // [rsp+18h] [rbp-60h]
  unsigned __int64 v75; // [rsp+20h] [rbp-58h]
  char *v76; // [rsp+20h] [rbp-58h]
  int v77; // [rsp+20h] [rbp-58h]
  int v78; // [rsp+20h] [rbp-58h]
  int v79; // [rsp+20h] [rbp-58h]
  __int64 v80; // [rsp+28h] [rbp-50h]
  __int64 v81; // [rsp+30h] [rbp-48h]
  int v82; // [rsp+3Ch] [rbp-3Ch]

  v4 = -70;
  if ( a2[2] > a2[1] )
    return v4;
  v5 = a3[1].m128i_u64[0];
  v6 = a3->m128i_u64[1];
  v4 = -72;
  if ( v5 > v6 )
    return v4;
  v4 = -42;
  if ( (unsigned int)a4 > 2 )
    return v4;
  v7 = (unsigned int)a4;
  v8 = a3;
  if ( *(_DWORD *)(a1 + 3608) )
  {
    v18 = *(_DWORD *)(a1 + 356);
    if ( v18 != 1 )
      goto LABEL_15;
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 3640);
    v12 = v6 - v5;
    v13 = v11 + v6 - v5;
    if ( *(_DWORD *)(a1 + 140) == 1 && !v7 && v13 <= 0x1FFFF )
    {
      if ( !v11 || v8->m128i_i64[0] == *(_QWORD *)(a1 + 3616) && v5 == *(_QWORD *)(a1 + 3624) )
      {
        v14 = _mm_loadu_si128(v8);
        v8[1].m128i_i64[0] = v6;
        *(__m128i *)(a1 + 3616) = v14;
        v15 = v8[1].m128i_i64[0];
        *(_QWORD *)(a1 + 3640) += v12;
        v16 = -(__int64)(*(_DWORD *)(a1 + 16) == 0);
        *(_QWORD *)(a1 + 3632) = v15;
        return (v16 & 4) + 2;
      }
      return -50;
    }
    v4 = sub_8EE9B0(a1, v7, v13, v11, -42, v5);
    if ( v4 > 0xFFFFFFFFFFFFFF88LL )
      return v4;
    v18 = *(_DWORD *)(a1 + 356);
    if ( v18 != 1 )
    {
      if ( *(_DWORD *)(a1 + 360) == 1 )
      {
        a4 = (const __m128i *)(a2[1] - a2[2]);
        *(_QWORD *)(a1 + 3648) = a4;
        goto LABEL_34;
      }
      goto LABEL_16;
    }
    v23 = *(_DWORD *)(a1 + 360) == 1;
    *(__m128i *)(a1 + 3616) = _mm_loadu_si128(v8);
    *(_QWORD *)(a1 + 3632) = v8[1].m128i_i64[0];
    if ( v23 )
      *(_QWORD *)(a1 + 3648) = a2[1] - a2[2];
  }
  if ( *(_QWORD *)(a1 + 3616) != v8->m128i_i64[0] || *(_QWORD *)(a1 + 3632) != v8[1].m128i_i64[0] )
    return -50;
  v18 = 1;
LABEL_15:
  if ( *(_DWORD *)(a1 + 360) == 1 )
  {
    a4 = *(const __m128i **)(a1 + 3648);
LABEL_34:
    a3 = (const __m128i *)(a2[1] - a2[2]);
    if ( a3 != a4 )
      return -50;
  }
LABEL_16:
  if ( *(int *)(a1 + 308) > 0 )
  {
    if ( *(_DWORD *)(a1 + 4) )
    {
      sub_9443E0(*(_QWORD *)(a1 + 3728), a1 + 16, a3, a4, v4);
      *(_DWORD *)(a1 + 4) = 0;
    }
    v19 = *(_QWORD *)(a1 + 3640);
    v20 = v8[1].m128i_i64[0];
    if ( v19 )
    {
      v8[1].m128i_i64[0] = v20 - v19;
      *(_QWORD *)(a1 + 3640) = 0;
      v20 = v8[1].m128i_i64[0];
    }
    v21 = a2[2];
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = sub_945130(*(_QWORD *)(a1 + 3728), a2, v8, v7, v4);
        *(_QWORD *)(a1 + 768) = *(_QWORD *)(a1 + 768) + v8[1].m128i_i64[0] - v20;
        *(_QWORD *)(a1 + 776) = *(_QWORD *)(a1 + 776) + a2[2] - v21;
        if ( v22 > 0xFFFFFFFFFFFFFF88LL )
        {
          v64 = v22;
          sub_8ECD80(a1, 1);
          return v64;
        }
        if ( v7 == 2 && !v22 )
        {
          sub_8EC840(a1);
          sub_8ECD80(a1, 1);
          v4 = 0;
          goto LABEL_63;
        }
        if ( v7 )
          break;
        if ( v8[1].m128i_i64[0] != v20 || a2[2] != v21 || v8->m128i_i64[1] == v20 || a2[1] == v21 )
          goto LABEL_72;
      }
      if ( !v22 )
        break;
      v21 = a2[2];
      if ( v21 == a2[1] )
        break;
      v20 = v8[1].m128i_i64[0];
    }
LABEL_72:
    v4 = v22;
LABEL_63:
    if ( *(_DWORD *)(a1 + 356) == 1 )
    {
      *(__m128i *)(a1 + 3616) = _mm_loadu_si128(v8);
      *(_QWORD *)(a1 + 3632) = v8[1].m128i_i64[0];
    }
    if ( *(_DWORD *)(a1 + 360) == 1 )
      *(_QWORD *)(a1 + 3648) = a2[1] - a2[2];
    return v4;
  }
  v24 = v8->m128i_i64[0];
  v80 = v8->m128i_i64[0];
  if ( v8->m128i_i64[0] )
  {
    v67 = (__m128i *)(v24 + v8->m128i_i64[1]);
    v25 = (__m128i *)(v8[1].m128i_i64[0] + v24);
  }
  else
  {
    v67 = nullptr;
    v25 = nullptr;
  }
  v26 = *a2;
  v81 = *a2;
  if ( *a2 )
  {
    v65 = v26 + a2[1];
    v27 = (char *)(a2[2] + v26);
  }
  else
  {
    v65 = 0;
    v27 = nullptr;
  }
  if ( v18 == 1 )
  {
    v8[1].m128i_i64[0] -= *(_QWORD *)(a1 + 3640);
    if ( v25 )
      v25 = (__m128i *)((char *)v25 - *(_QWORD *)(a1 + 3640));
    *(_QWORD *)(a1 + 3640) = 0;
  }
  v28 = *(_DWORD *)(a1 + 3608);
  v68 = v8;
  v29 = a2;
  v30 = v7;
  v31 = v27;
LABEL_42:
  while ( v28 != 1 )
  {
    if ( !v28 )
      return -62;
    if ( v28 == 2 )
    {
      v32 = *(_QWORD *)(a1 + 3600);
      v4 = *(_QWORD *)(a1 + 3592) - v32;
      goto LABEL_46;
    }
  }
  while ( v30 != 2 )
  {
    v39 = *(_DWORD *)(a1 + 356);
    v40 = v39;
    if ( v39 )
    {
      if ( !v30 )
      {
        v44 = *(_QWORD *)(a1 + 752);
        v45 = (char *)v67 - (char *)v25;
        if ( (char *)v67 - (char *)v25 < v44 )
        {
          v35 = v29;
          v37 = v31;
          v36 = v68;
          v25 = v67;
          *(_QWORD *)(a1 + 3640) = v45;
          goto LABEL_52;
        }
        goto LABEL_129;
      }
      if ( v25 == v67 )
        goto LABEL_91;
LABEL_128:
      v44 = *(_QWORD *)(a1 + 752);
      v40 = v39;
      v45 = (char *)v67 - (char *)v25;
LABEL_129:
      v46 = v65 - (_QWORD)v31;
      goto LABEL_130;
    }
    v41 = (char *)v67 - (char *)v25;
LABEL_83:
    v42 = *(_QWORD *)(a1 + 3560);
    if ( *(_QWORD *)(a1 + 3568) - v42 <= v41 )
      v41 = *(_QWORD *)(a1 + 3568) - v42;
    if ( v41 )
    {
      v73 = v28;
      memcpy((void *)(v42 + *(_QWORD *)(a1 + 3536)), v25, v41);
      v42 = *(_QWORD *)(a1 + 3560);
      v28 = v73;
    }
    v43 = v41 + v42;
    *(_QWORD *)(a1 + 3560) = v41 + v42;
    if ( v25 )
      v25 = (__m128i *)((char *)v25 + v41);
    if ( v30 )
    {
      if ( v30 == 1 && v43 == *(_QWORD *)(a1 + 3552) )
      {
LABEL_91:
        v35 = v29;
        v37 = v31;
        v36 = v68;
        goto LABEL_52;
      }
    }
    else if ( v43 < *(_QWORD *)(a1 + 3568) )
    {
      goto LABEL_91;
    }
    v40 = *(_DWORD *)(a1 + 356);
    v46 = v65 - (_QWORD)v31;
    if ( !v40 )
    {
      v82 = v28;
      v44 = v43 - *(_QWORD *)(a1 + 3552);
      v47 = sub_8E78E0(v44);
      v48 = v65 - (_QWORD)v31;
      if ( v65 - (__int64)v31 >= v47 || (v40 = 0, v49 = v82, *(_DWORD *)(a1 + 360) == 1) )
      {
        v50 = v31;
LABEL_118:
        v55 = v25 == v67 && v30 == 2;
        v71 = v55;
        v56 = (__m128i *)(*(_QWORD *)(a1 + 3536) + *(_QWORD *)(a1 + 3552));
        v76 = v50;
        if ( v55 )
        {
          v57 = sub_8EC940(a1, v50, v48, v56, v44);
          v53 = v76;
          v4 = v57;
        }
        else
        {
          v4 = sub_8EAC50(a1, v50, v48, v56, v44, 1, 0);
          v53 = v76;
        }
        if ( v4 > 0xFFFFFFFFFFFFFF88LL )
          return v4;
        v58 = *(_QWORD *)(a1 + 752);
        *(_DWORD *)(a1 + 3612) = v71;
        v59 = *(_QWORD *)(a1 + 3560);
        *(_QWORD *)(a1 + 3568) = v59 + v58;
        if ( (unsigned __int64)(v59 + v58) > *(_QWORD *)(a1 + 3544) )
        {
          *(_QWORD *)(a1 + 3560) = 0;
          v59 = 0;
          *(_QWORD *)(a1 + 3568) = v58;
        }
        *(_QWORD *)(a1 + 3552) = v59;
        goto LABEL_114;
      }
LABEL_106:
      v50 = *(char **)(a1 + 3576);
      v48 = *(_QWORD *)(a1 + 3584);
      goto LABEL_107;
    }
    v44 = *(_QWORD *)(a1 + 752);
    v45 = (char *)v67 - (char *)v25;
LABEL_130:
    v78 = v28;
    if ( v45 <= v44 )
      v44 = v45;
    v72 = v46;
    v61 = sub_8E78E0(v44);
    v48 = v72;
    v50 = v31;
    v49 = v78;
    if ( v61 <= v72 )
      goto LABEL_108;
    if ( *(_DWORD *)(a1 + 360) != 1 )
      goto LABEL_106;
LABEL_107:
    if ( !v40 )
      goto LABEL_118;
LABEL_108:
    if ( v30 == 2 && v67 == (__m128i *)&v25->m128i_i8[v44] )
    {
      v79 = v49;
      v74 = v50;
      v63 = sub_8EC940(a1, v50, v48, v25, v44);
      v53 = v74;
      v52 = v79;
      v4 = v63;
    }
    else
    {
      v70 = v50;
      v51 = sub_8EAC50(a1, v50, v48, v25, v44, 1, 0);
      v52 = 0;
      v53 = v70;
      v4 = v51;
    }
    v54 = (__m128i *)((char *)v25 + v44);
    if ( v25 )
      v25 = v54;
    if ( v4 > 0xFFFFFFFFFFFFFF88LL )
      return v4;
    *(_DWORD *)(a1 + 3612) = v52;
LABEL_114:
    if ( v31 == v53 )
    {
      v31 += v4;
      if ( !*(_DWORD *)(a1 + 3612) )
      {
        v28 = *(_DWORD *)(a1 + 3608);
        goto LABEL_42;
      }
LABEL_116:
      v35 = v29;
      v36 = v68;
      sub_8ECD80(a1, 1);
      v37 = v31;
      goto LABEL_52;
    }
    *(_QWORD *)(a1 + 3592) = v4;
    v32 = 0;
    *(_QWORD *)(a1 + 3600) = 0;
    *(_DWORD *)(a1 + 3608) = 2;
LABEL_46:
    v33 = v4;
    v34 = v65 - (_QWORD)v31;
    if ( v65 - (__int64)v31 <= v4 )
      v33 = v65 - (_QWORD)v31;
    if ( v33 )
    {
      v75 = v4;
      v69 = v33;
      memcpy(v31, (const void *)(*(_QWORD *)(a1 + 3576) + v32), v33);
      v33 = v69;
      v4 = v75;
      v32 = *(_QWORD *)(a1 + 3600);
      v31 += v69;
    }
    if ( v34 < v4 )
    {
      v35 = v29;
      v36 = v68;
      v37 = v31;
      *(_QWORD *)(a1 + 3600) = v32 + v33;
      goto LABEL_52;
    }
    v38 = *(_DWORD *)(a1 + 3612);
    *(_QWORD *)(a1 + 3600) = 0;
    *(_QWORD *)(a1 + 3592) = 0;
    if ( v38 )
      goto LABEL_116;
    *(_DWORD *)(a1 + 3608) = 1;
    v28 = 1;
  }
  v77 = v28;
  v41 = (char *)v67 - (char *)v25;
  v60 = sub_8E78E0((char *)v67 - (char *)v25);
  v28 = v77;
  if ( v65 - (__int64)v31 < v60 && *(_DWORD *)(a1 + 360) != 1 || *(_QWORD *)(a1 + 3560) )
  {
    if ( !*(_DWORD *)(a1 + 356) )
      goto LABEL_83;
    v39 = *(_DWORD *)(a1 + 356);
    goto LABEL_128;
  }
  v35 = v29;
  v36 = v68;
  v62 = sub_8EC940(a1, v31, v65 - (_QWORD)v31, v25, v41);
  v4 = v62;
  if ( v62 > 0xFFFFFFFFFFFFFF88LL )
    return v4;
  *(_DWORD *)(a1 + 3612) = 1;
  v66 = &v31[v62];
  sub_8ECD80(a1, 1);
  v25 = v67;
  v37 = v66;
LABEL_52:
  v36[1].m128i_i64[0] = (__int64)v25->m128i_i64 - v80;
  v35[2] = &v37[-v81];
  if ( *(_DWORD *)(a1 + 3612) )
  {
    if ( *(_DWORD *)(a1 + 356) != 1 )
      goto LABEL_57;
    goto LABEL_93;
  }
  if ( *(_DWORD *)(a1 + 356) == 1 )
  {
    v4 = *(_QWORD *)(a1 + 752) - *(_QWORD *)(a1 + 3640);
    if ( v4 > 0xFFFFFFFFFFFFFF88LL )
      return v4;
LABEL_93:
    *(__m128i *)(a1 + 3616) = _mm_loadu_si128(v36);
    *(_QWORD *)(a1 + 3632) = v36[1].m128i_i64[0];
    goto LABEL_57;
  }
  v4 = *(_QWORD *)(a1 + 3568) - *(_QWORD *)(a1 + 3560);
  if ( !v4 )
    v4 = *(_QWORD *)(a1 + 752);
  if ( v4 <= 0xFFFFFFFFFFFFFF88LL )
  {
LABEL_57:
    if ( *(_DWORD *)(a1 + 360) == 1 )
      *(_QWORD *)(a1 + 3648) = v35[1] - v35[2];
    return *(_QWORD *)(a1 + 3592) - *(_QWORD *)(a1 + 3600);
  }
  return v4;
}

