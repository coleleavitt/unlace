void __fastcall sub_1C3D080(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // eax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rbp
  _BYTE *v21; // rdi
  unsigned __int64 v22; // rdx
  size_t v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned __int64 *v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  double v35[2]; // [rsp+8h] [rbp-150h] BYREF
  __int64 v36; // [rsp+18h] [rbp-140h] BYREF
  unsigned __int64 v37; // [rsp+20h] [rbp-138h] BYREF
  __int64 v38; // [rsp+28h] [rbp-130h] BYREF
  void *src; // [rsp+30h] [rbp-128h] BYREF
  size_t n; // [rsp+38h] [rbp-120h]
  _QWORD v41[2]; // [rsp+40h] [rbp-118h] BYREF
  __int64 v42; // [rsp+50h] [rbp-108h] BYREF
  char v43; // [rsp+58h] [rbp-100h]
  __int64 v44; // [rsp+5Ch] [rbp-FCh]
  char v45; // [rsp+64h] [rbp-F4h]
  void *dest; // [rsp+68h] [rbp-F0h]
  __m128 v47; // [rsp+70h] [rbp-E8h] BYREF
  char v48; // [rsp+88h] [rbp-D0h]
  _QWORD v49[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 *v50; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v51; // [rsp+B0h] [rbp-A8h] BYREF
  char v52; // [rsp+108h] [rbp-50h]
  unsigned int v53; // [rsp+110h] [rbp-48h]
  char v54; // [rsp+114h] [rbp-44h]

  v3 = (unsigned __int16 *)sub_B73640(a2);
  if ( !v3 )
    return;
  v36 = *(_QWORD *)(a2 + 48);
  v4 = *v3;
  LOWORD(v4) = v4 & 0x1FF;
  v5 = (unsigned int)(unsigned __int16)v4 - 113;
  if ( (unsigned int)v5 > 1 )
  {
    if ( (((_WORD)v4 + 433) & 0x1FFu) > 9 || ((v3[1] >> 3) & 0x7F) != 4 )
      return;
  }
  else
  {
    v6 = *((_QWORD *)v3 + 2);
    LODWORD(v49[0]) = 0;
    if ( !sub_B98FE0(v6, v49, v4, v5) )
      return;
  }
  v7 = *(_QWORD *)(a1 + 248);
  if ( (unsigned __int64)sub_A97D20(v7, *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL)) > 0x200 )
    goto LABEL_8;
  if ( sub_F62A80(&v36, v7) )
    return;
  v12 = sub_F63270(*(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL), v7, v8, v9, v10, v11);
  if ( !v12 || (*((_BYTE *)v12 + 29) & 1) == 0 )
  {
LABEL_8:
    sub_168B9F0((__int64)v49, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 24), 0x1AF6u, 0);
    if ( v52 )
    {
      sub_AE9DF0(&v51, a2, 0xAu);
    }
    else if ( v54 )
    {
      v24 = sub_168B9E0(v49);
      v28 = (__int64)v50;
      if ( v50 )
      {
        v29 = *v50;
        *(_QWORD *)&v35[0] = v24;
        v28 = (*(__int64 (__fastcall **)(__int64 *))(v29 + 32))(v50);
        v24 = *(_QWORD *)&v35[0];
      }
      v42 = v28;
      v30 = sub_1587BC0(v24, &v42, v24, v25, v26, v27);
      sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v53 + 8), a2, 0xAu);
    }
    sub_1605D30((__int64)v49, &v36);
    sub_15F7200(v49);
    v17 = sub_B73090(a2);
    sub_168B9F0((__int64)v49, (__int64 *)(a1 + 8), v17, 0x1931u, 0);
    v37 = sub_A73030(*(_QWORD *)(a1 + 248), v36, 1u);
    v18 = sub_162B6D0((__int64)v49, (__int64 *)&v37);
    v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    v19 = sub_1587DB0(v18, &v38);
    v45 = 0;
    v20 = v19;
    LODWORD(v19) = *(_DWORD *)(a2 + 24);
    v44 = 0;
    dest = &v47.m128_u16[4];
    v47.m128_u64[0] = 0;
    v47.m128_i8[8] = 0;
    v48 = 0;
    LODWORD(v42) = v19;
    HIDWORD(v42) = v19;
    v43 = 0;
    src = v41;
    sub_1C32AD0(&src, "&", (__int64)"");
    v21 = dest;
    if ( src == v41 )
    {
      v23 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v41[0];
        else
          memcpy(dest, src, n);
        v23 = n;
        v21 = dest;
      }
      v47.m128_u64[0] = v23;
      v21[v23] = 0;
      v21 = src;
      goto LABEL_14;
    }
    if ( dest == &v47.m128_u16[4] )
    {
      v35[0] = *(double *)v41;
      dest = src;
      v47 = _mm_loadh_ps(v35);
    }
    else
    {
      v35[0] = *(double *)v41;
      v22 = v47.m128_u64[1];
      dest = src;
      v47 = _mm_loadh_ps(v35);
      if ( v21 )
      {
        src = v21;
        v41[0] = v22;
LABEL_14:
        n = 0;
        *v21 = 0;
        if ( src != v41 )
          operator delete(src);
        v48 = 0;
        sub_1589170(v20, &v42);
        if ( dest != &v47.m128_u16[4] )
          operator delete(dest);
        sub_15F7200(v49);
        return;
      }
    }
    v21 = v41;
    src = v41;
    goto LABEL_14;
  }
  v31 = sub_B8C3D0((__int64)v12, v7, v13, v14, v15, v16);
  v32 = *v31;
  v33 = *v31 + 8LL * *((unsigned int *)v31 + 2);
  if ( *v31 >= v33 )
  {
    if ( v32 == v33 )
      goto LABEL_8;
    while ( *(_WORD *)(*(_QWORD *)v33 + 36LL) != 381 )
    {
      v33 += 8LL;
      if ( v32 == v33 )
        goto LABEL_8;
    }
  }
  else
  {
    v34 = *v31;
    while ( *(_WORD *)(*(_QWORD *)v34 + 36LL) != 381 )
    {
      v34 += 8LL;
      if ( v33 == v34 )
        goto LABEL_8;
    }
    if ( v33 == v34 )
      goto LABEL_8;
  }
}
