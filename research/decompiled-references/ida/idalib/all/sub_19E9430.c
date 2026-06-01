__int64 __fastcall sub_19E9430(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  int v7; // r13d
  __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbp
  __int64 v17; // r13
  char *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  _QWORD *v22; // rsi
  __int64 v23; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  _DWORD *v28; // rax
  __int64 v29; // rdi
  int v30; // edx
  _DWORD *v31; // rax
  __int64 v32; // rdi
  int v33; // edx
  unsigned __int64 v35; // rax
  __int64 *v36; // rbp
  _QWORD *v37; // rax
  _BYTE *v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // r12
  unsigned __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  _QWORD *v45; // rcx
  __int64 v46; // r14
  unsigned __int64 v47; // rdx
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  _DWORD *v51; // rax
  __int64 v52; // rdi
  int v53; // edx
  size_t v54; // rdx
  __int64 v55; // [rsp+8h] [rbp-70h] BYREF
  void *dest; // [rsp+10h] [rbp-68h] BYREF
  __m128 v57; // [rsp+18h] [rbp-60h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n; // [rsp+38h] [rbp-40h]
  _QWORD v60[7]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = a4;
  v10 = *(_QWORD *)v6;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(unsigned __int8 *)(v11 + 16);
  if ( (_BYTE)v12 == 13 )
  {
    if ( (((*(_WORD *)(v11 + 18) >> 3) + 76) & 0x1FFu) > 0x34 )
      goto LABEL_3;
LABEL_34:
    sub_19E9120((__int64)&dest, v10, v7, a2);
    v35 = v57.m128_u64[0];
    if ( !v57.m128_u64[0] )
    {
LABEL_35:
      *(_QWORD *)a1 = a1 + 16;
      if ( dest == &v57.m128_u16[4] )
      {
        *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&v57.m128_u16[4]);
      }
      else
      {
        *(_QWORD *)a1 = dest;
        *(_QWORD *)(a1 + 16) = v57.m128_u64[1];
      }
      *(_QWORD *)(a1 + 8) = v35;
      return a1;
    }
    sub_C05100((__int64)&src, " = ", (__int64)&dest);
    v38 = dest;
    if ( src == v60 )
    {
      v54 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v60[0];
        else
          memcpy(dest, src, n);
        v54 = n;
        v38 = dest;
      }
      v57.m128_u64[0] = v54;
      v38[v54] = 0;
      v38 = src;
      goto LABEL_51;
    }
    if ( dest == &v57.m128_u16[4] )
    {
      v55 = v60[0];
      dest = src;
      v57 = _mm_loadh_ps((const double *)&v55);
    }
    else
    {
      v55 = v60[0];
      v39 = v57.m128_u64[1];
      dest = src;
      v57 = _mm_loadh_ps((const double *)&v55);
      if ( v38 )
      {
        src = v38;
        v60[0] = v39;
LABEL_51:
        n = 0;
        *v38 = 0;
        if ( src != v60 )
          operator delete(src);
        v35 = v57.m128_u64[0];
        goto LABEL_35;
      }
    }
    v38 = v60;
    src = v60;
    goto LABEL_51;
  }
  if ( (_BYTE)v12 == 47 )
  {
    v36 = (__int64 *)v6;
    v37 = sub_F60F10(v11, v10, v6, a4, a5, a6);
    v10 = *v36;
    if ( (*((_BYTE *)v37 + 74) & 1) != 0 || (v37[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_34;
  }
  else if ( (unsigned __int8)v12 <= 0x2Au )
  {
    v6 = 0x40600004C00LL;
    if ( _bittest64((const __int64 *)&v6, v12) )
      goto LABEL_34;
  }
LABEL_3:
  v13 = sub_F63270(v10, v10, v6, a4, a5, a6);
  v16 = v13;
  if ( !v13 )
    goto LABEL_31;
  v17 = v13[13];
  v18 = (char *)v13[16];
  v19 = *(_QWORD *)(v17 + 96);
  v20 = v19 & 1;
  v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
  if ( !v18 )
  {
    if ( (v19 & 1) == 0 )
    {
      v45 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
      if ( (v19 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
      {
        if ( (v19 & 2) == 0 )
          goto LABEL_31;
        v46 = v45[2295];
        v47 = v17 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v46 )
        {
          v48 = v45[294];
          v45[304] += 24LL;
          v49 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v45[295] >= v49 + 24 && v48 )
          {
            v45[294] = v49 + 24;
            v50 = (v48 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v50 = sub_986170((__int64)(v45 + 294), 24, 24, 3, v14, v15);
            v49 = v50 & 0xFFFFFFFFFFFFFFFBLL;
          }
          *(_QWORD *)v50 = v46;
          v47 = v49 | 4;
          *(_DWORD *)(v50 + 8) = 0;
          *(_QWORD *)(v50 + 16) = v17;
        }
        v21 = v47 & 0xFFFFFFFFFFFFFFFELL;
        v19 = v21 | 1;
        *(_QWORD *)(v17 + 96) = v21 | 1;
      }
    }
    if ( v21 )
    {
      if ( (v21 & 4) != 0 )
      {
        v51 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v51 )
        {
          v52 = *(_QWORD *)v51;
          v53 = *(_DWORD *)(*(_QWORD *)v51 + 12LL);
          if ( v51[2] != v53 )
          {
            v51[2] = v53;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v52 + 152LL))(v52, v17);
          }
        }
      }
    }
    v18 = (char *)v16[16];
    if ( !v18 )
      goto LABEL_31;
    v17 = v16[13];
    v19 = *(_QWORD *)(v17 + 96);
    v20 = v19 & 1;
    v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 0x10) == 0 )
    goto LABEL_24;
  if ( v20 || (v22 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL), (v19 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
LABEL_17:
    if ( v21 )
    {
      if ( (v21 & 4) != 0 )
      {
        v28 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v28 )
        {
          v29 = *(_QWORD *)v28;
          v30 = *(_DWORD *)(*(_QWORD *)v28 + 12LL);
          if ( v28[2] != v30 )
          {
            v28[2] = v30;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 152LL))(v29, v17);
          }
        }
      }
    }
    v18 = (char *)v16[16];
    if ( v18[8] >= 0 )
      goto LABEL_10;
    v17 = v16[13];
    v19 = *(_QWORD *)(v17 + 96);
    v20 = v19 & 1;
    v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
LABEL_24:
    if ( v20 )
      goto LABEL_25;
    v22 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v19 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    {
      v19 = *(_QWORD *)(v17 + 96);
      v21 = v19 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_25;
    }
LABEL_44:
    if ( (v19 & 2) == 0 )
    {
      if ( *v18 < 0 )
      {
LABEL_46:
        *(_DWORD *)(a1 + 16) = 2065710368;
        *(_QWORD *)a1 = a1 + 16;
        *(_BYTE *)(a1 + 20) = 125;
        *(_QWORD *)(a1 + 8) = 5;
        *(_BYTE *)(a1 + 21) = 0;
        return a1;
      }
LABEL_31:
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)a1 = a1 + 16;
      *(_BYTE *)(a1 + 16) = 0;
      return a1;
    }
    v40 = v22[2295];
    v41 = v17 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v40 )
    {
      v42 = v22[294];
      v22[304] += 24LL;
      v43 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22[295] >= v43 + 24 && v42 )
      {
        v22[294] = v43 + 24;
        v44 = (v42 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v44 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v14, v15);
        v43 = v44 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v44 = v40;
      v41 = v43 | 4;
      *(_DWORD *)(v44 + 8) = 0;
      *(_QWORD *)(v44 + 16) = v17;
    }
    v21 = v41 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v21 | 1;
    *(_QWORD *)(v17 + 96) = v21 | 1;
LABEL_25:
    if ( v21 )
    {
      if ( (v21 & 4) != 0 )
      {
        v31 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v31 )
        {
          v32 = *(_QWORD *)v31;
          v33 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
          if ( v31[2] != v33 )
          {
            v31[2] = v33;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 152LL))(v32, v17);
          }
        }
      }
    }
    if ( *(char *)v16[16] < 0 )
      goto LABEL_46;
    goto LABEL_31;
  }
  if ( (v19 & 2) != 0 )
  {
    v23 = v22[2295];
    v24 = v17 & 0xFFFFFFFFFFFFFFFBLL;
    if ( v23 )
    {
      v25 = v22[294];
      v22[304] += 24LL;
      v26 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v22[295] >= v26 + 24 && v25 )
      {
        v22[294] = v26 + 24;
        v27 = (v25 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v27 = sub_986170((__int64)(v22 + 294), 24, 24, 3, v14, v15);
        v26 = v27 & 0xFFFFFFFFFFFFFFFBLL;
      }
      *(_QWORD *)v27 = v23;
      v24 = v26 | 4;
      *(_DWORD *)(v27 + 8) = 0;
      *(_QWORD *)(v27 + 16) = v17;
    }
    v21 = v24 & 0xFFFFFFFFFFFFFFFELL;
    v19 = v21 | 1;
    *(_QWORD *)(v17 + 96) = v21 | 1;
    goto LABEL_17;
  }
  if ( v18[8] < 0 )
    goto LABEL_44;
LABEL_10:
  *(_QWORD *)(a1 + 8) = 2;
  *(_QWORD *)a1 = a1 + 16;
  strcpy((char *)(a1 + 16), "{}");
  return a1;
}
