unsigned __int64 __fastcall sub_1817AB0(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r12
  __int64 v12; // rdx
  unsigned int v13; // r15d
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r15d
  _QWORD *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbp
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r8
  __int64 v40; // r9
  void *v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  void *v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // [rsp+0h] [rbp-168h]
  unsigned int v50[4]; // [rsp+Ch] [rbp-15Ch] BYREF
  int v51; // [rsp+1Ch] [rbp-14Ch] BYREF
  void *v52; // [rsp+20h] [rbp-148h] BYREF
  unsigned int v53; // [rsp+28h] [rbp-140h]
  char v54; // [rsp+2Ch] [rbp-13Ch]
  char v55; // [rsp+30h] [rbp-138h]
  void *v56[2]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v57[16]; // [rsp+50h] [rbp-118h] BYREF
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __m128i si128; // [rsp+68h] [rbp-100h]
  _BYTE v60[40]; // [rsp+78h] [rbp-F0h] BYREF
  void *v61; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-C0h]
  unsigned __int64 v63; // [rsp+B0h] [rbp-B8h]
  int v64; // [rsp+B8h] [rbp-B0h]
  unsigned __int8 *v65[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char v66; // [rsp+118h] [rbp-50h]
  unsigned int v67; // [rsp+120h] [rbp-48h]
  char v68; // [rsp+124h] [rbp-44h]

  v50[0] = a4;
  if ( (unsigned __int8)sub_1E534E0(a1, a2, 0) )
    return 0;
  v10 = (unsigned __int64)a2;
  if ( (*a2 & 0x20000) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 248);
    v53 = 64;
    v52 = nullptr;
    v54 = 1;
    v55 = 1;
    sub_C3EB00((__int64)&v61, (unsigned __int64)a2, v12, nullptr, v8, v9);
    if ( !(_BYTE)v63 )
    {
      v55 = 0;
      sub_98E4B0((__int64)&v61);
      v24 = sub_C00A40((unsigned __int64)a2, (__int64)a2, v21, v22, v23);
      sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v24, 0xC53u, 0);
      if ( v66 )
      {
        sub_AE9DF0(v65, a3, 0xEu);
      }
      else if ( v68 )
      {
        v38 = sub_168B9E0(&v61);
        v41 = (void *)v63;
        if ( v63 )
          v41 = (void *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v63 + 32LL))(v63);
        ptr = v41;
        v42 = sub_1587BC0(v38, (__int64 *)&ptr, v36, v37, v39, v40);
        sub_AE9DF0((unsigned __int8 **)(*v42 + 32LL * v67 + 8), a3, 0xEu);
      }
      v25 = sub_1588370((__int64)&v61, v50);
      LODWORD(v56[0]) = 1;
      v26 = sub_180A710(v25, (int *)v56);
      ptr = (void *)sub_EEC8C0((unsigned __int64)a2, (__int64)v56, a5);
      sub_1587DB0(v26, (__int64 *)&ptr);
      v10 = 0;
      sub_15F7200(&v61);
LABEL_14:
      sub_98E4B0((__int64)&v52);
      return v10;
    }
    v52 = v61;
    v27 = v62;
    LODWORD(v62) = 0;
    v53 = v27;
    v54 = BYTE4(v62);
    sub_98E4B0((__int64)&v61);
    v13 = v53;
    if ( v53 > 0x40 )
    {
      if ( v13 - (unsigned int)sub_2206780(&v52) <= 0x20 )
      {
LABEL_9:
        LODWORD(v62) = 64;
        v61 = nullptr;
        BYTE4(v62) = 0;
        v18 = sub_98E2D0((__int64 *)&v52, (__int64 *)&v61);
        if ( (unsigned int)v62 > 0x40 && v61 )
          operator delete[](v61);
        if ( v18 < 0 )
        {
          v34 = sub_C00A40((unsigned __int64)a2, (__int64)&v61, v15, v16, v17);
          sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v34, 0x199Au, 0);
          if ( v66 )
          {
            sub_AE9DF0(v65, a3, 0xEu);
          }
          else if ( v68 )
          {
            v43 = sub_168B9E0(&v61);
            v47 = (void *)v63;
            if ( v63 )
            {
              v49 = v43;
              v47 = (void *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v63 + 32LL))(v63);
              v43 = v49;
            }
            ptr = v47;
            v48 = sub_1587BC0(v43, (__int64 *)&ptr, v43, v44, v45, v46);
            sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v67 + 8), a3, 0xEu);
          }
          v35 = sub_1588370((__int64)&v61, v50);
          ptr = (void *)sub_EEC8C0((unsigned __int64)a2, (__int64)v50, a5);
          sub_1587DB0(v35, (__int64 *)&ptr);
          sub_15F7200(&v61);
        }
        v19 = *(_QWORD **)(a1 + 248);
        v20 = v19[2340];
        v62 = 0;
        v64 = 0;
        LODWORD(v61) = 1;
        v63 = sub_A73320(v19, v20 | 1);
        v65[0] = nullptr;
        v10 = sub_1A24E20(a1, &v61, 0, a2, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_14;
      }
    }
    else
    {
      if ( !v52 )
        goto LABEL_9;
      _BitScanReverse64(&v14, (unsigned __int64)v52);
      if ( 64 - ((unsigned int)v14 ^ 0x3F) <= 0x20 )
        goto LABEL_9;
    }
    v31 = sub_C00A40((unsigned __int64)a2, (__int64)a2, v28, v29, v30);
    sub_168B9F0((__int64)&v61, (__int64 *)(a1 + 8), v31, 0xF55u, 0);
    ptr = v60;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90((unsigned int)&v52, (unsigned int)&ptr, 10, 0, 0, 1, 0);
    v56[0] = v57;
    sub_1804580(v56, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v60 )
      free(ptr);
    v32 = sub_1682AF0((__int64)&v61, (__int64)v56);
    v51 = 32;
    v33 = sub_1587D10(v32, &v51);
    LODWORD(ptr) = 1;
    sub_1587D10(v33, (int *)&ptr);
    if ( v56[0] != v57 )
      operator delete(v56[0]);
    v10 = 0;
    sub_15F7200(&v61);
    goto LABEL_14;
  }
  return v10;
}
