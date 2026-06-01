unsigned __int64 __fastcall sub_1421C50(__int64 a1, __int64 a2, char a3)
{
  __int16 v4; // cx
  char v5; // al
  char v6; // r12
  int v7; // edx
  unsigned __int64 result; // rax
  _QWORD *v9; // rax
  unsigned __int8 *v10; // r14
  __int64 v11; // rbp
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int8 **v16; // r15
  _BYTE *v17; // rax
  unsigned __int8 *v18; // rsi
  signed __int64 v19; // rcx
  char v20; // r12
  size_t v21; // rax
  _BYTE *v22; // rdi
  size_t v23; // rdx
  size_t *v24; // rdi
  size_t v25; // rdx
  size_t v26; // rcx
  size_t v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbp
  int v32; // eax
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  size_t *v36; // rbp
  void *v37; // rdi
  __int64 v38; // rbp
  size_t *v39; // rdi
  int v40; // r15d
  __int64 v41; // rax
  size_t *v42; // [rsp+0h] [rbp-118h] BYREF
  void *src; // [rsp+8h] [rbp-110h]
  _DWORD v44[4]; // [rsp+10h] [rbp-108h] BYREF
  __int16 v45; // [rsp+20h] [rbp-F8h]
  void *v46; // [rsp+30h] [rbp-E8h] BYREF
  size_t n; // [rsp+38h] [rbp-E0h]
  _QWORD v48[2]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int8 *v49; // [rsp+50h] [rbp-C8h] BYREF
  char v50; // [rsp+58h] [rbp-C0h]
  __int64 v51; // [rsp+5Ch] [rbp-BCh]
  char v52; // [rsp+64h] [rbp-B4h]
  void *v53; // [rsp+68h] [rbp-B0h]
  __m128 v54; // [rsp+70h] [rbp-A8h] BYREF
  char v55; // [rsp+88h] [rbp-90h]
  unsigned __int8 *v56; // [rsp+90h] [rbp-88h] BYREF
  _BYTE v57[12]; // [rsp+98h] [rbp-80h]
  char v58; // [rsp+A4h] [rbp-74h]
  void *dest; // [rsp+A8h] [rbp-70h]
  __m128 v60; // [rsp+B0h] [rbp-68h] BYREF
  char v61; // [rsp+C8h] [rbp-50h]

  if ( a3 )
  {
    sub_14634E0(a1, v44);
  }
  else
  {
    v20 = *(_BYTE *)(a1 + 544);
    *(_BYTE *)(a1 + 544) = v20 | 0x20;
    sub_14634E0(a1, v44);
    *(_BYTE *)(a1 + 544) = (32 * ((v20 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
  }
  v4 = v45;
  if ( v45 == 4 )
  {
    v5 = *(_BYTE *)(a1 + 544);
    v6 = v5 & 0x20;
    do
    {
      *(_BYTE *)(a1 + 544) = v5 | 0x20;
      sub_14634E0(a1, v44);
      v4 = v45;
      v5 = v6 | *(_BYTE *)(a1 + 544) & 0xDF;
      *(_BYTE *)(a1 + 544) = v5;
    }
    while ( v4 == 4 );
  }
  v7 = v44[0];
  result = v44[0];
  if ( v4 != 2 )
  {
    v50 = 0;
    v52 = 0;
    v53 = &v54.m128_u16[4];
    v9 = *(_QWORD **)(a1 + 56);
    v49 = nullptr;
    v51 = 0;
    v54.m128_u64[0] = 0;
    v54.m128_i8[8] = 0;
    v55 = 0;
    if ( (*v9 & 0x400000801LL) == 0 || *(_QWORD *)(a1 + 1144) )
      goto LABEL_9;
    LODWORD(src) = v44[0];
    v21 = j__strlen("//");
    v42 = &v60.m128_u64[1];
    LODWORD(v56) = (_DWORD)src;
    HIDWORD(v56) = (_DWORD)src;
    dest = &v60.m128_u16[4];
    *(_QWORD *)&v57[4] = 0;
    v58 = 0;
    v60.m128_u64[0] = 0;
    v60.m128_i8[8] = 0;
    v61 = 0;
    v57[0] = 0;
    v46 = v48;
    sub_141A0D0(&v46, "//", (__int64)&asc_22D9D83[v21]);
    v22 = dest;
    if ( v46 == v48 )
    {
      v27 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v48[0];
        else
          memcpy(dest, v46, n);
        v27 = n;
        v22 = dest;
      }
      v60.m128_u64[0] = v27;
      v22[v27] = 0;
      v22 = v46;
    }
    else
    {
      if ( dest == v42 )
      {
        v42 = (size_t *)v48[0];
        dest = v46;
        v60 = _mm_loadh_ps((const double *)&v42);
      }
      else
      {
        v42 = (size_t *)v48[0];
        v23 = v60.m128_u64[1];
        dest = v46;
        v60 = _mm_loadh_ps((const double *)&v42);
        if ( v22 )
        {
          v46 = v22;
          v48[0] = v23;
          goto LABEL_28;
        }
      }
      v22 = v48;
      v46 = v48;
    }
LABEL_28:
    n = 0;
    *v22 = 0;
    if ( v46 != v48 )
      operator delete(v46);
    v61 = 0;
    v24 = (size_t *)v53;
    v25 = v60.m128_u64[0];
    v49 = v56;
    v50 = v57[0];
    v51 = *(_QWORD *)&v57[4];
    v52 = v58;
    if ( dest == &v60.m128_u16[4] )
    {
      if ( v60.m128_u64[0] )
      {
        if ( v60.m128_u64[0] == 1 )
          *(_BYTE *)v53 = v60.m128_i8[8];
        else
          memcpy(v53, dest, v60.m128_u64[0]);
        v25 = v60.m128_u64[0];
        v24 = (size_t *)v53;
      }
      v54.m128_u64[0] = v25;
      *((_BYTE *)v24 + v25) = 0;
      v24 = (size_t *)dest;
      goto LABEL_34;
    }
    if ( v53 == &v54.m128_u16[4] )
    {
      v42 = (size_t *)v60.m128_u64[1];
      v53 = dest;
      v54 = _mm_loadh_ps((const double *)&v42);
    }
    else
    {
      v42 = (size_t *)v60.m128_u64[1];
      v26 = v54.m128_u64[1];
      v53 = dest;
      v54 = _mm_loadh_ps((const double *)&v42);
      if ( v24 )
      {
        dest = v24;
        v60.m128_u64[1] = v26;
LABEL_34:
        v60.m128_u64[0] = 0;
        *(_BYTE *)v24 = 0;
        v55 = v61;
        if ( dest != &v60.m128_u16[4] )
          operator delete(dest);
        v7 = v44[0];
LABEL_9:
        sub_FC70B0((__int64)&v56, *(_QWORD *)(a1 + 48), v7, 1239);
        sub_AE9DF0(&v56, a2, 1u);
        if ( !(_DWORD)v49 || !HIDWORD(v49) )
          goto LABEL_20;
        v10 = v56;
        if ( v56 )
        {
          v11 = *((unsigned int *)v56 + 134);
          v12 = *((_QWORD *)v56 + 66);
          v13 = *((unsigned int *)v56 + 135);
          v14 = v11 + 1;
          v15 = v12 + (v11 << 6);
        }
        else
        {
          v28 = *(_QWORD *)v57;
          v29 = *(_DWORD *)(*(_QWORD *)v57 + 14976LL);
          if ( v29 )
          {
            v34 = (unsigned int)(v29 - 1);
            *(_DWORD *)(*(_QWORD *)v57 + 14976LL) = v34;
            v10 = *(unsigned __int8 **)(v28 + 8 * v34 + 14848);
            v35 = *((unsigned int *)v10 + 134);
            *v10 = 0;
            v36 = *((size_t **)v10 + 66);
            *((_DWORD *)v10 + 106) = 0;
            v12 = (unsigned __int64)&v36[8 * v35];
            if ( v36 != (size_t *)v12 )
            {
              do
              {
                while ( 1 )
                {
                  v12 -= 64LL;
                  v37 = *(void **)(v12 + 24);
                  if ( v37 == (void *)(v12 + 40) )
                    break;
                  v42 = (size_t *)v12;
                  operator delete(v37);
                  v12 = (unsigned __int64)v42;
                  if ( v36 == v42 )
                    goto LABEL_63;
                }
              }
              while ( v36 != (size_t *)v12 );
LABEL_63:
              v12 = *((_QWORD *)v10 + 66);
            }
            *((_DWORD *)v10 + 134) = 0;
            v13 = *((unsigned int *)v10 + 135);
          }
          else
          {
            v30 = operator new(0x3A0u);
            v13 = 6;
            v10 = (unsigned __int8 *)v30;
            *(_BYTE *)v30 = 0;
            *(_QWORD *)(v30 + 96) = v30 + 112;
            *(_QWORD *)(v30 + 128) = v30 + 144;
            *(_QWORD *)(v30 + 160) = v30 + 176;
            *(_QWORD *)(v30 + 192) = v30 + 208;
            *(_QWORD *)(v30 + 224) = v30 + 240;
            *(_QWORD *)(v30 + 256) = v30 + 272;
            *(_QWORD *)(v30 + 288) = v30 + 304;
            *(_QWORD *)(v30 + 320) = v30 + 336;
            *(_QWORD *)(v30 + 352) = v30 + 368;
            *(_QWORD *)(v30 + 384) = v30 + 400;
            *(_QWORD *)(v30 + 416) = v30 + 432;
            *(_QWORD *)(v30 + 104) = 0;
            *(_BYTE *)(v30 + 112) = 0;
            *(_QWORD *)(v30 + 136) = 0;
            *(_BYTE *)(v30 + 144) = 0;
            *(_QWORD *)(v30 + 168) = 0;
            *(_BYTE *)(v30 + 176) = 0;
            *(_QWORD *)(v30 + 200) = 0;
            *(_BYTE *)(v30 + 208) = 0;
            *(_QWORD *)(v30 + 232) = 0;
            *(_BYTE *)(v30 + 240) = 0;
            *(_QWORD *)(v30 + 264) = 0;
            *(_BYTE *)(v30 + 272) = 0;
            *(_QWORD *)(v30 + 296) = 0;
            *(_BYTE *)(v30 + 304) = 0;
            *(_QWORD *)(v30 + 328) = 0;
            *(_BYTE *)(v30 + 336) = 0;
            *(_QWORD *)(v30 + 360) = 0;
            *(_BYTE *)(v30 + 368) = 0;
            *(_QWORD *)(v30 + 392) = 0;
            *(_BYTE *)(v30 + 400) = 0;
            *(_QWORD *)(v30 + 424) = 0x800000000LL;
            v12 = v30 + 544;
            *((_QWORD *)v10 + 66) = v12;
            *((_QWORD *)v10 + 67) = 0x600000000LL;
          }
          v56 = v10;
          v15 = v12;
          v14 = 1;
        }
        v16 = &v49;
        if ( v14 > v13 )
        {
          if ( v12 > (unsigned __int64)&v49 || v15 <= (unsigned __int64)&v49 )
          {
            v42 = (size_t *)(v10 + 544);
            v38 = sub_2237400(v10 + 528, v10 + 544, v14, 64, &v46);
            sub_9EF810((__int64 *)v10 + 66, v38);
            v39 = *((size_t **)v10 + 66);
            v40 = (int)v46;
            if ( v39 != v42 )
              free(v39);
            v41 = *((unsigned int *)v10 + 134);
            *((_QWORD *)v10 + 66) = v38;
            *((_DWORD *)v10 + 135) = v40;
            v16 = &v49;
            v15 = (v41 << 6) + v38;
          }
          else
          {
            src = v10 + 544;
            v42 = (size_t *)((char *)&v49 - v12);
            v31 = sub_2237400(v10 + 528, v10 + 544, v14, 64, &v46);
            sub_9EF810((__int64 *)v10 + 66, v31);
            v32 = (int)v46;
            v33 = *((void **)v10 + 66);
            if ( v33 != src )
            {
              src = v46;
              free(v33);
              v32 = (int)src;
            }
            *((_QWORD *)v10 + 66) = v31;
            *((_DWORD *)v10 + 135) = v32;
            v16 = (unsigned __int8 **)((char *)v42 + v31);
            v15 = ((unsigned __int64)*((unsigned int *)v10 + 134) << 6) + v31;
          }
        }
        *(_QWORD *)v15 = *v16;
        *(_DWORD *)(v15 + 8) = *((_DWORD *)v16 + 2);
        *(_QWORD *)(v15 + 12) = *(unsigned __int8 **)((char *)v16 + 12);
        *(_DWORD *)(v15 + 20) = *((_DWORD *)v16 + 5);
        v17 = (_BYTE *)(v15 + 40);
        *(_QWORD *)(v15 + 24) = v15 + 40;
        v18 = v16[3];
        v19 = (signed __int64)v16[4];
        if ( &v18[v19] && !v18 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v19 > 0xF )
        {
          if ( v19 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          src = v16[3];
          v42 = (size_t *)v19;
          v17 = (_BYTE *)operator new(v19 + 1);
          v19 = (signed __int64)v42;
          v18 = (unsigned __int8 *)src;
          *(_QWORD *)(v15 + 24) = v17;
          *(_QWORD *)(v15 + 40) = v19;
        }
        else
        {
          if ( v19 == 1 )
          {
            *(_BYTE *)(v15 + 40) = *v18;
LABEL_19:
            *(_QWORD *)(v15 + 32) = v19;
            v17[v19] = 0;
            *(_BYTE *)(v15 + 56) = *((_BYTE *)v16 + 56);
            ++*((_DWORD *)v10 + 134);
LABEL_20:
            sub_AEA040((__int64)&v56);
            result = (unsigned __int64)sub_141A820(a1, (unsigned int *)&v56) >> 32;
            if ( v53 != &v54.m128_u16[4] )
            {
              LODWORD(v42) = result;
              operator delete(v53);
              return (unsigned int)v42;
            }
            return result;
          }
          if ( !v19 )
            goto LABEL_19;
        }
        v42 = (size_t *)v19;
        memcpy(v17, v18, v19);
        v17 = *(_BYTE **)(v15 + 24);
        v19 = (signed __int64)v42;
        goto LABEL_19;
      }
    }
    v24 = &v60.m128_u64[1];
    dest = &v60.m128_u16[4];
    goto LABEL_34;
  }
  return result;
}
