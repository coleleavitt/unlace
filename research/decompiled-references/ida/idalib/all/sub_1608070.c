void __fastcall sub_1608070(__int64 a1, int a2, unsigned __int64 a3, double a4, double a5)
{
  __int64 v5; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 *v18; // rbp
  int v19; // ebx
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  size_t v23; // r12
  __int64 v24; // rax
  _BYTE *v25; // rdi
  unsigned __int64 v26; // rdx
  char *v27; // r15
  int v28; // edx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r12
  void *v36; // rax
  _QWORD *v37; // rax
  int v38; // eax
  size_t v39; // rax
  size_t v40; // rdx
  size_t n; // [rsp+0h] [rbp-148h] BYREF
  void *s1; // [rsp+8h] [rbp-140h]
  int v43; // [rsp+1Ch] [rbp-12Ch] BYREF
  void *src; // [rsp+20h] [rbp-128h] BYREF
  size_t v45; // [rsp+28h] [rbp-120h]
  _QWORD v46[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 v47; // [rsp+40h] [rbp-108h] BYREF
  char v48; // [rsp+48h] [rbp-100h]
  __int64 v49; // [rsp+4Ch] [rbp-FCh]
  char v50; // [rsp+54h] [rbp-F4h]
  void *dest; // [rsp+58h] [rbp-F0h]
  __m128 v52; // [rsp+60h] [rbp-E8h] BYREF
  char v53; // [rsp+78h] [rbp-D0h]
  char *s; // [rsp+80h] [rbp-C8h] BYREF
  int v55; // [rsp+88h] [rbp-C0h]
  void *v56; // [rsp+90h] [rbp-B8h]
  __int64 v57[11]; // [rsp+A0h] [rbp-A8h] BYREF
  char v58; // [rsp+F8h] [rbp-50h]
  unsigned int v59; // [rsp+100h] [rbp-48h]
  char v60; // [rsp+104h] [rbp-44h]

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x10) == 0 )
    return;
  v5 = (unsigned int)(a2 - 13);
  if ( (unsigned int)v5 > 1 )
    return;
  v7 = sub_BFBAE0(a3);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v8 + 16) == 13 && ((*(_WORD *)(v8 + 18) >> 3) & 0x1FF) == 0x1E8 )
    return;
  if ( (*(_WORD *)v7 & 0x1FF) == 0x3A )
    return;
  v9 = *(_QWORD *)(a1 + 264);
  v10 = sub_EEB7E0(a3, v5, a4);
  if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v9 + 32), 0x1D95u, v10, v9, v11, v12) == 1 )
    return;
  v13 = *(unsigned int *)(a1 + 11320);
  if ( (_DWORD)v13 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 11312) + (v13 << 6) - 64) == 20 )
      return;
  }
  v14 = 0;
  v15 = sub_15F1540(a1, 0);
  if ( (*(_BYTE *)(v15 + 8) & 0x7Fu) - 34 <= 5 && v15 != 72 && (*(_BYTE *)(v15 + 11) & 2) != 0 )
    return;
  v16 = sub_EEB7E0(a3, 0, a4);
  v17 = *(_QWORD *)(a1 + 264);
  v43 = v16;
  if ( (*(_BYTE *)(*(_QWORD *)(v17 + 152) + 24LL) & 0x10) != 0 )
  {
    v18 = *(__int64 **)(a1 + 272);
    v19 = v16;
    while ( v19 < 0 )
    {
      v20 = sub_1021B90((__int64)v18, v19);
      sub_1022900((__int64)&s, v18, v20, 1);
      if ( !s || (s1 = s, n = j__strlen(s), n != j__strlen("<scratch space>")) || n && memcmp(s1, "<scratch space>", n) )
      {
        v14 = (unsigned int)v19;
        v21 = sub_1021B90((__int64)v18, v19);
        if ( !v21 )
          break;
        v14 = v21;
        v38 = sub_1021680((__int64)v18, v21);
        if ( !v38 )
          break;
        if ( v38 == 3 )
          break;
        v39 = j__strlen("NULL");
        v14 = (__int64)&v43;
        if ( (unsigned __int8)sub_15F1800(a1, &v43, "NULL", v39, a4, a5) )
          break;
        return;
      }
LABEL_40:
      if ( (unsigned __int8)sub_1020490((__int64)v18, v19, nullptr) )
      {
        v19 = sub_10205A0((__int64)v18, v19);
      }
      else
      {
        s = (char *)sub_101FC50((__int64)v18, v19);
        v19 = (int)s;
        v55 = v30;
      }
      if ( v19 >= 0 )
        v29 = v19;
      else
        v29 = sub_1021B90((__int64)v18, v19);
      while ( 1 )
      {
        v14 = (__int64)v18;
        sub_1022900((__int64)&s, v18, v29, 1);
        v27 = s;
        if ( !s || strlen(s) != 15 )
          break;
        if ( *(_QWORD *)v27 != 0x686374617263733CLL
          || *((_DWORD *)v27 + 2) != 1634759456
          || *((_WORD *)v27 + 6) != 25955
          || (v28 = 0, v27[14] != 62) )
        {
          v28 = 1;
        }
        v29 = v19;
        if ( v28 )
          break;
        if ( v19 < 0 )
          goto LABEL_40;
      }
    }
  }
  v22 = sub_EEB7E0(a3, v14, a4);
  sub_168B9F0(&s, a1 + 8, v22, 7573, 0);
  v23 = j__strlen("nullptr");
  v24 = sub_EEC8C0(a3, a1 + 8, a4);
  v49 = 0;
  v50 = 0;
  dest = &v52.m128_u16[4];
  v52.m128_u64[0] = 0;
  v52.m128_i8[8] = 0;
  v53 = 0;
  v47 = v24;
  v48 = 1;
  src = v46;
  sub_15F0740(&src, "nullptr", (__int64)&aReturnNullptr[v23 + 7]);
  v25 = dest;
  if ( src == v46 )
  {
    v40 = v45;
    if ( v45 )
    {
      if ( v45 == 1 )
        *(_BYTE *)dest = v46[0];
      else
        memcpy(dest, src, v45);
      v40 = v45;
      v25 = dest;
    }
    v52.m128_u64[0] = v40;
    v25[v40] = 0;
    v25 = src;
    goto LABEL_22;
  }
  if ( dest == &v52.m128_u16[4] )
  {
    n = v46[0];
    dest = src;
    v52 = _mm_loadh_ps((const double *)&n);
    goto LABEL_67;
  }
  n = v46[0];
  v26 = v52.m128_u64[1];
  dest = src;
  v52 = _mm_loadh_ps((const double *)&n);
  if ( !v25 )
  {
LABEL_67:
    v25 = v46;
    src = v46;
    goto LABEL_22;
  }
  src = v25;
  v46[0] = v26;
LABEL_22:
  v45 = 0;
  *v25 = 0;
  if ( src != v46 )
    operator delete(src);
  if ( v58 )
  {
    if ( (_DWORD)v47 && HIDWORD(v47) )
      sub_15F8EE0(v57, (unsigned __int64)&v47);
  }
  else if ( v60 )
  {
    v35 = sub_168B9E0(&s);
    v36 = v56;
    if ( v56 )
      v36 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v56 + 32LL))(v56);
    src = v36;
    v37 = sub_1587BC0(v35, (__int64 *)&src, v31, v32, v33, v34);
    if ( (_DWORD)v47 && HIDWORD(v47) )
      sub_15F8EE0((__int64 *)(*v37 + 32LL * v59 + 8), (unsigned __int64)&v47);
  }
  if ( dest != &v52.m128_u16[4] )
    operator delete(dest);
  sub_15F7200(&s);
}
