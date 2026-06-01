__int64 __fastcall sub_14FBB30(__int64 a1, unsigned int *a2)
{
  char v2; // dl
  __int64 v3; // r13
  size_t v4; // rax
  signed __int64 v5; // rcx
  _QWORD *v6; // rax
  _BYTE *v7; // rdi
  unsigned __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 v10; // r12
  unsigned int v11; // esi
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int16 *v16; // rdi
  size_t v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rax
  void **v27; // [rsp+20h] [rbp-198h] BYREF
  void **p_src; // [rsp+28h] [rbp-190h]
  __int64 v29; // [rsp+30h] [rbp-188h]
  __int64 v30; // [rsp+38h] [rbp-180h]
  unsigned int v31; // [rsp+4Ch] [rbp-16Ch] BYREF
  void *src; // [rsp+50h] [rbp-168h] BYREF
  size_t n; // [rsp+58h] [rbp-160h]
  _QWORD v34[2]; // [rsp+60h] [rbp-158h] BYREF
  void *ptr; // [rsp+70h] [rbp-148h] BYREF
  __int64 v36; // [rsp+78h] [rbp-140h]
  _BYTE v37[32]; // [rsp+80h] [rbp-138h] BYREF
  unsigned int v38; // [rsp+A0h] [rbp-118h] BYREF
  unsigned int v39; // [rsp+A4h] [rbp-114h]
  char v40; // [rsp+A8h] [rbp-110h]
  __int64 v41; // [rsp+ACh] [rbp-10Ch]
  char v42; // [rsp+B4h] [rbp-104h]
  void *dest; // [rsp+B8h] [rbp-100h]
  __m128 v44; // [rsp+C0h] [rbp-F8h] BYREF
  char v45; // [rsp+D8h] [rbp-E0h]
  __int64 v46; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-D0h]
  void *v48; // [rsp+130h] [rbp-88h] BYREF
  __int64 v49; // [rsp+138h] [rbp-80h]
  _BYTE v50[120]; // [rsp+140h] [rbp-78h] BYREF

  v31 = 0;
  v48 = v50;
  ptr = v37;
  v49 = 0x800000000LL;
  v36 = 0x800000000LL;
  sub_14F5A70(a1, (__int64)&v48, (__int64)&ptr, 0, 0, &v31, (__int64)a2, 1u);
  v3 = sub_1A862B0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v31, (_DWORD)v48, v49, (_DWORD)ptr, v36, *a2);
  if ( !v3 || v2 )
    goto LABEL_22;
  sub_1564820(&v46, a1, v31, 2157);
  v4 = j__strlen("id");
  v41 = 0;
  v5 = v4;
  v42 = 0;
  dest = &v44.m128_u16[4];
  v38 = v31;
  v39 = v31;
  v6 = v34;
  v44.m128_u64[0] = 0;
  v44.m128_i8[8] = 0;
  v45 = 0;
  v40 = 0;
  src = v34;
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v27 = (void **)v5;
    v6 = (_QWORD *)operator new(v5 + 1);
    v5 = (signed __int64)v27;
    src = v6;
    v34[0] = v27;
LABEL_31:
    p_src = &src;
    v27 = (void **)v5;
    memcpy(v6, "id", v5);
    v6 = src;
    v5 = (signed __int64)v27;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    LOBYTE(v34[0]) = 105;
    goto LABEL_6;
  }
  if ( v5 )
    goto LABEL_31;
LABEL_6:
  n = v5;
  *((_BYTE *)v6 + v5) = 0;
  v7 = dest;
  if ( src == v34 )
  {
    v18 = n;
    if ( n )
    {
      if ( n == 1 )
      {
        *(_BYTE *)dest = v34[0];
      }
      else
      {
        v27 = &src;
        memcpy(dest, src, n);
      }
      v18 = n;
      v7 = dest;
    }
    v44.m128_u64[0] = v18;
    v7[v18] = 0;
    v7 = src;
    goto LABEL_10;
  }
  if ( dest == &v44.m128_u16[4] )
  {
    v27 = (void **)v34[0];
    dest = src;
    v44 = _mm_loadh_ps((const double *)&v27);
    goto LABEL_38;
  }
  v27 = (void **)v34[0];
  v8 = v44.m128_u64[1];
  dest = src;
  v44 = _mm_loadh_ps((const double *)&v27);
  if ( !v7 )
  {
LABEL_38:
    v7 = v34;
    src = v34;
    goto LABEL_10;
  }
  src = v7;
  v34[0] = v8;
LABEL_10:
  n = 0;
  *v7 = 0;
  if ( src != v34 )
    operator delete(src);
  v45 = 0;
  if ( v38 && v39 )
    sub_14FA6F0(&v46, (unsigned __int64)&v38);
  v9 = *a2;
  v10 = v46;
  v11 = v31;
  if ( v46 )
  {
    v12 = *(unsigned int *)(v46 + 424);
    v13 = *(unsigned int *)(v46 + 428);
    v14 = v12 + 1;
  }
  else
  {
    v19 = v47;
    v20 = *(_DWORD *)(v47 + 14976);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v47 + 14976) = v21;
      v10 = *(_QWORD *)(v19 + 8 * v21 + 14848);
      v22 = *(unsigned int *)(v10 + 536);
      v23 = *(_QWORD *)(v10 + 528);
      *(_BYTE *)v10 = 0;
      *(_DWORD *)(v10 + 424) = 0;
      v24 = v23 + (v22 << 6);
      if ( v23 == v24 )
      {
        v14 = 1;
        v12 = 0;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v24 -= 64;
            v25 = *(void **)(v24 + 24);
            if ( v25 == (void *)(v24 + 40) )
              break;
            v30 = v23;
            v29 = v24;
            LODWORD(p_src) = v11;
            LODWORD(v27) = v9;
            operator delete(v25);
            v24 = v29;
            v23 = v30;
            v9 = (unsigned int)v27;
            v11 = (unsigned int)p_src;
            if ( v30 == v29 )
              goto LABEL_43;
          }
        }
        while ( v23 != v24 );
LABEL_43:
        v12 = *(unsigned int *)(v10 + 424);
        v14 = v12 + 1;
      }
      *(_DWORD *)(v10 + 536) = 0;
      v13 = *(unsigned int *)(v10 + 428);
    }
    else
    {
      LODWORD(p_src) = v31;
      LODWORD(v27) = v9;
      v26 = operator new(0x3A0u);
      v13 = 8;
      v14 = 1;
      v10 = v26;
      *(_BYTE *)v26 = 0;
      *(_QWORD *)(v26 + 96) = v26 + 112;
      *(_QWORD *)(v26 + 128) = v26 + 144;
      *(_QWORD *)(v26 + 160) = v26 + 176;
      *(_QWORD *)(v26 + 192) = v26 + 208;
      *(_QWORD *)(v26 + 224) = v26 + 240;
      *(_QWORD *)(v26 + 256) = v26 + 272;
      *(_QWORD *)(v26 + 288) = v26 + 304;
      *(_QWORD *)(v26 + 320) = v26 + 336;
      *(_QWORD *)(v26 + 352) = v26 + 368;
      *(_QWORD *)(v26 + 384) = v26 + 400;
      *(_QWORD *)(v26 + 416) = v26 + 432;
      *(_QWORD *)(v26 + 104) = 0;
      *(_BYTE *)(v26 + 112) = 0;
      *(_QWORD *)(v26 + 136) = 0;
      *(_BYTE *)(v26 + 144) = 0;
      *(_QWORD *)(v26 + 168) = 0;
      *(_BYTE *)(v26 + 176) = 0;
      *(_QWORD *)(v26 + 200) = 0;
      *(_BYTE *)(v26 + 208) = 0;
      *(_QWORD *)(v26 + 232) = 0;
      *(_BYTE *)(v26 + 240) = 0;
      *(_QWORD *)(v26 + 264) = 0;
      *(_BYTE *)(v26 + 272) = 0;
      *(_QWORD *)(v26 + 296) = 0;
      *(_BYTE *)(v26 + 304) = 0;
      *(_QWORD *)(v26 + 328) = 0;
      *(_BYTE *)(v26 + 336) = 0;
      *(_QWORD *)(v26 + 360) = 0;
      *(_BYTE *)(v26 + 368) = 0;
      *(_QWORD *)(v26 + 392) = 0;
      *(_BYTE *)(v26 + 400) = 0;
      *(_QWORD *)(v26 + 424) = 0x800000000LL;
      v9 = (unsigned int)v27;
      *(_QWORD *)(v26 + 528) = v26 + 544;
      v11 = (unsigned int)p_src;
      *(_QWORD *)(v26 + 536) = 0x600000000LL;
      v12 = 0;
    }
    v46 = v10;
  }
  src = (void *)__PAIR64__(v9, v11);
  LOBYTE(n) = 1;
  if ( v14 > v13 )
  {
    sub_2237220(v10 + 416, v10 + 432, v14, 12);
    v12 = *(unsigned int *)(v10 + 424);
  }
  v15 = *(_QWORD *)(v10 + 416) + 12 * v12;
  *(_QWORD *)v15 = src;
  *(_DWORD *)(v15 + 8) = n;
  v16 = (unsigned __int16 *)dest;
  ++*(_DWORD *)(v10 + 424);
  if ( v16 != &v44.m128_u16[4] )
    operator delete(v16);
  sub_AEA040((__int64)&v46);
LABEL_22:
  if ( ptr != v37 )
    free(ptr);
  if ( v48 != v50 )
    free(v48);
  return v3;
}
