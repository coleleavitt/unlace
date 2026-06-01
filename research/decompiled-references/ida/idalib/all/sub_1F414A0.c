void __fastcall sub_1F414A0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  const __m128i *i; // rbx
  __m128i *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 *v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  const __m128i *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 *v47; // rax
  unsigned __int64 *v48; // rax
  unsigned __int64 *v49; // rax
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-70h]
  __m128i v54; // [rsp+10h] [rbp-68h] BYREF
  int v55; // [rsp+24h] [rbp-54h]
  __int64 v56; // [rsp+28h] [rbp-50h]
  __int64 v57; // [rsp+30h] [rbp-48h]
  __int64 v58; // [rsp+38h] [rbp-40h]

  v6 = a2;
  switch ( *(_BYTE *)(a2 + 28) & 0x7F )
  {
    case 0:
      *(_QWORD *)(a2 + 72) = a3 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(a2 + 80) = *(_QWORD *)(a3 + 80);
      break;
    case 0x13:
    case 0x14:
      *(_QWORD *)(a2 + 88) = a3 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(a2 + 96) = *(_QWORD *)(a3 + 96);
      break;
    case 0x18:
      *(_QWORD *)(a2 + 80) = a3 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(a2 + 88) = *(_QWORD *)(a3 + 88);
      break;
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
      sub_1F40C50(a1, (unsigned __int64 *)(a2 + 104), a3, a4, a5, a6);
      break;
    case 0x28:
    case 0x29:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
      sub_1F33A30(a1, (unsigned __int64 *)(a2 + 72), a3);
      break;
    case 0x35:
    case 0x36:
    case 0x4D:
      *(_QWORD *)(a2 + 48) = a3 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(a2 + 56) = *(_QWORD *)(a3 + 56);
      break;
    case 0x3A:
    case 0x3B:
    case 0x3C:
    case 0x3D:
    case 0x3E:
      *(_QWORD *)(a2 + 96) = a3 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(a2 + 104) = *(_QWORD *)(a3 + 104);
      break;
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
      *(_QWORD *)(a2 + 64) = a3 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(a2 + 72) = *(_QWORD *)(a3 + 72);
      break;
    default:
      break;
  }
  sub_1F201D0(a1, a2, a3);
  v11 = *(_WORD *)(a2 + 30) & 0x3FFF;
  v12 = (unsigned int)v11 | *(_WORD *)(a3 + 30) & 0x26;
  *(_WORD *)(a2 + 30) = v11 | *(_WORD *)(a3 + 30) & 0x26 | *(_WORD *)(a2 + 30) & 0xC000;
  v13 = *(_QWORD **)(a1 + 144);
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 68 <= 6 )
  {
    a2 = *(_QWORD *)(a3 + 56);
    v53 = *(_QWORD *)(v6 + 56);
    v55 = *(_DWORD *)(a2 + 20) & 0x1FFFFFFF;
    if ( v55 )
    {
      v14 = 0;
      while ( 1 )
      {
        v15 = *(_QWORD *)(a2 + 8 * v14 + 24);
        v11 = *(_QWORD *)(v53 + 8 * v14 + 24);
        if ( (*(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_7;
        v16 = *(_QWORD *)(v11 + 72);
        if ( ((*(__int64 *)(v15 + 72) >> 1) & 3) == 1 )
          v15 = *(_QWORD *)(v15 + 72) & 0xFFFFFFFFFFFFFFF8LL;
        v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v18 = (v16 >> 1) & 3;
          if ( v18 != 1 )
          {
            if ( v18 == 2 )
            {
              *v17 = v15;
            }
            else
            {
              v54.m128i_i64[0] = (__int64)v17;
              v57 = v11;
              v56 = a2;
              v54 = (__m128i)_mm_loadh_ps((const double *)v54.m128i_i64);
              v40 = sub_BC1A70(v13, a2, v12, v11, v9, v10);
              *(__m128i *)v40 = _mm_load_si128(&v54);
              v11 = v57;
              *(_QWORD *)(v57 + 72) = v40 & 0xFFFFFFFFFFFFFFF9LL | 4;
              a2 = v56;
            }
            goto LABEL_7;
          }
          v19 = v17[9];
          v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
          v54.m128i_i64[0] = v19 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v19 )
          {
            if ( ((v19 >> 1) & 3) == 2 )
            {
              v54.m128i_i64[0] = 0;
              if ( v20 )
                v54.m128i_i64[0] = *(_QWORD *)(v20 + 8);
            }
          }
          v58 = v11;
          ++v14;
          v57 = a2;
          v21 = sub_BC1A70(v13, a2, v12, v11, v9, v10);
          v56 = v15;
          *(__m128 *)v21 = _mm_loadh_ps((const double *)v54.m128i_i64);
          v11 = v58;
          *(_QWORD *)(v58 + 72) = v21 & 0xFFFFFFFFFFFFFFF9LL | 4;
          a2 = v57;
          if ( v55 == (_DWORD)v14 )
          {
LABEL_18:
            v13 = *(_QWORD **)(a1 + 144);
            break;
          }
        }
        else
        {
          *(_QWORD *)(v11 + 72) = v15 & 0xFFFFFFFFFFFFFFF9LL | 2;
LABEL_7:
          if ( v55 == (_DWORD)++v14 )
            goto LABEL_18;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v22 = sub_B8C3D0(a3, a2, v12, v11, v9, v10);
    v26 = *v22;
    v27 = *v22 + 8LL * *((unsigned int *)v22 + 2);
    if ( v26 >= v27 )
    {
      for ( ; v26 != v27; v27 += 8LL )
      {
        v23 = *(_QWORD *)v27;
        if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 248 )
          goto LABEL_27;
      }
    }
    else
    {
      v23 = v26;
      while ( 1 )
      {
        a2 = *(_QWORD *)v23;
        if ( *(_WORD *)(*(_QWORD *)v23 + 36LL) == 248 )
          break;
        v23 += 8LL;
        if ( v27 == v23 )
          goto LABEL_30;
      }
      if ( v27 != v23 )
      {
        for ( i = *(const __m128i **)v26; *(_WORD *)(*(_QWORD *)v26 + 36LL) != 248; i = *(const __m128i **)v26 )
        {
          v26 += 8LL;
LABEL_27:
          ;
        }
        if ( (*(_BYTE *)(v6 + 29) & 1) == 0 )
          goto LABEL_29;
        v47 = sub_B8C3D0(v6, a2, v26, v23, v24, v25);
        v26 = *v47;
        v23 = *v47 + 8LL * *((unsigned int *)v47 + 2);
        if ( *v47 >= v23 )
        {
          if ( v26 == v23 )
          {
LABEL_29:
            v29 = sub_B272A0(i, (__int64)v13);
            v29[2].m128i_i8[6] |= 1u;
            a2 = (__int64)v29;
            sub_B8CC60(v6, (__int64)v29, v30, v31, v32, v33);
            goto LABEL_30;
          }
          while ( *(_WORD *)(*(_QWORD *)v23 + 36LL) != 248 )
          {
            v23 += 8LL;
            if ( v26 == v23 )
              goto LABEL_29;
          }
        }
        else
        {
          v48 = (unsigned __int64 *)*v47;
          while ( 1 )
          {
            v26 = *v48;
            if ( *(_WORD *)(*v48 + 36) == 248 )
              break;
            if ( (unsigned __int64 *)v23 == ++v48 )
              goto LABEL_29;
          }
          if ( (unsigned __int64 *)v23 == v48 )
            goto LABEL_29;
        }
      }
    }
LABEL_30:
    if ( (*(_BYTE *)(a3 + 29) & 1) == 0 )
      return;
    v34 = sub_B8C3D0(a3, a2, v26, v23, v24, v25);
    v37 = *v34;
    v38 = *v34 + 8LL * *((unsigned int *)v34 + 2);
    if ( v37 >= v38 )
    {
      if ( v37 == v38 )
        return;
      while ( 1 )
      {
        v39 = *(_QWORD *)v38;
        if ( *(_WORD *)(*(_QWORD *)v38 + 36LL) == 142 )
          break;
        v38 += 8LL;
        if ( v37 == v38 )
          return;
      }
    }
    else
    {
      v39 = v37;
      while ( 1 )
      {
        a2 = *(_QWORD *)v39;
        if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 142 )
          break;
        v39 += 8;
        if ( v38 == v39 )
          return;
      }
      if ( v38 == v39 )
        return;
    }
    while ( 1 )
    {
      v41 = *(const __m128i **)v37;
      if ( *(_WORD *)(*(_QWORD *)v37 + 36LL) == 142 )
        break;
      v37 += 8LL;
    }
    if ( (*(_BYTE *)(v6 + 29) & 1) != 0 )
    {
      v49 = sub_B8C3D0(v6, a2, v37, v39, v35, v36);
      v50 = *v49;
      v51 = *v49 + 8LL * *((unsigned int *)v49 + 2);
      if ( *v49 >= v51 )
      {
        if ( v50 != v51 )
        {
          while ( *(_WORD *)(*(_QWORD *)v51 + 36LL) != 142 )
          {
            v51 += 8LL;
            if ( v50 == v51 )
              goto LABEL_51;
          }
          return;
        }
      }
      else
      {
        v52 = *v49;
        while ( *(_WORD *)(*(_QWORD *)v52 + 36LL) != 142 )
        {
          v52 += 8LL;
          if ( v51 == v52 )
            goto LABEL_51;
        }
        if ( v51 != v52 )
          return;
      }
    }
LABEL_51:
    v42 = sub_B2DDE0(v41, (__int64)v13);
    *(_BYTE *)(v42 + 38) |= 1u;
    sub_B8CC60(v6, v42, v43, v44, v45, v46);
  }
}
