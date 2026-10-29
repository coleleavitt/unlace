unsigned __int64 __fastcall sub_1810D80(__int64 a1, _DWORD *a2, void *a3, unsigned int a4, double a5)
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
  __int64 v26; // rax
  __int64 v27; // rbp
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // r14
  unsigned int v38[4]; // [rsp+Ch] [rbp-15Ch] BYREF
  int v39; // [rsp+1Ch] [rbp-14Ch] BYREF
  void *v40; // [rsp+20h] [rbp-148h] BYREF
  unsigned int v41; // [rsp+28h] [rbp-140h]
  char v42; // [rsp+2Ch] [rbp-13Ch]
  char v43; // [rsp+30h] [rbp-138h]
  void *v44[2]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v45[16]; // [rsp+50h] [rbp-118h] BYREF
  void *ptr; // [rsp+60h] [rbp-108h] BYREF
  __m128i si128; // [rsp+68h] [rbp-100h]
  _BYTE v48[40]; // [rsp+78h] [rbp-F0h] BYREF
  void *v49; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+A8h] [rbp-C0h]
  unsigned __int64 v51; // [rsp+B0h] [rbp-B8h]
  int v52; // [rsp+B8h] [rbp-B0h]
  __int64 v53; // [rsp+C0h] [rbp-A8h]

  v38[0] = a4;
  if ( (unsigned __int8)sub_1E534E0(a1, a2, 0) )
    return 0;
  v10 = (unsigned __int64)a2;
  if ( (*a2 & 0x20000) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 248);
    v41 = 64;
    v40 = nullptr;
    v42 = 1;
    v43 = 1;
    sub_C3EB00((__int64)&v49, (unsigned __int64)a2, v12, nullptr, v8, v9);
    if ( !(_BYTE)v51 )
    {
      v43 = 0;
      sub_98E4B0((__int64)&v49);
      v24 = sub_C00A40((unsigned __int64)a2, (__int64)a2, v21, v22, v23);
      sub_168B9F0((__int64)&v49, (__int64 *)(a1 + 8), v24, 0xC53u, 0);
      v44[0] = a3;
      v25 = sub_1810CD0((__int64)&v49, (__int64 *)v44);
      v26 = sub_1588370(v25, v38);
      v39 = 1;
      v27 = sub_180A710(v26, &v39);
      ptr = (void *)sub_EEC8C0((unsigned __int64)a2, (__int64)&v39, a5);
      sub_1587DB0(v27, (__int64 *)&ptr);
      v10 = 0;
      sub_15F7200(&v49);
LABEL_15:
      sub_98E4B0((__int64)&v40);
      return v10;
    }
    v40 = v49;
    v28 = v50;
    LODWORD(v50) = 0;
    v41 = v28;
    v42 = BYTE4(v50);
    sub_98E4B0((__int64)&v49);
    v13 = v41;
    if ( v41 > 0x40 )
    {
      if ( v13 - (unsigned int)sub_2206780(&v40) <= 0x20 )
      {
LABEL_9:
        LODWORD(v50) = 64;
        v49 = nullptr;
        BYTE4(v50) = 0;
        v18 = sub_98E2D0((__int64 *)&v40, (__int64 *)&v49);
        if ( (unsigned int)v50 > 0x40 && v49 )
          operator delete[](v49);
        if ( v18 < 0 )
        {
          v35 = sub_C00A40((unsigned __int64)a2, (__int64)&v49, v15, v16, v17);
          sub_168B9F0((__int64)&v49, (__int64 *)(a1 + 8), v35, 0xC94u, 0);
          v44[0] = a3;
          v36 = sub_1810CD0((__int64)&v49, (__int64 *)v44);
          v39 = 1;
          v37 = sub_1587D10(v36, &v39);
          ptr = (void *)sub_EEC8C0((unsigned __int64)a2, (__int64)&v39, a5);
          sub_1587DB0(v37, (__int64 *)&ptr);
          sub_15F7200(&v49);
        }
        v19 = *(_QWORD **)(a1 + 248);
        v20 = v19[2340];
        v50 = 0;
        v52 = 0;
        LODWORD(v49) = 1;
        v51 = sub_A73320(v19, v20 | 1);
        v53 = 0;
        v10 = sub_1A24E20(a1, &v49, 0, a2, 0, 0) & 0xFFFFFFFFFFFFFFFELL;
        goto LABEL_15;
      }
    }
    else
    {
      if ( !v40 )
        goto LABEL_9;
      _BitScanReverse64(&v14, (unsigned __int64)v40);
      if ( 64 - ((unsigned int)v14 ^ 0x3F) <= 0x20 )
        goto LABEL_9;
    }
    v32 = sub_C00A40((unsigned __int64)a2, (__int64)a2, v29, v30, v31);
    sub_168B9F0((__int64)&v49, (__int64 *)(a1 + 8), v32, 0xF55u, 0);
    ptr = v48;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    sub_220BA90((unsigned int)&v40, (unsigned int)&ptr, 10, 0, 0, 1, 0);
    v44[0] = v45;
    sub_1804580(v44, ptr, (__int64)ptr + si128.m128i_i64[0]);
    if ( ptr != v48 )
      free(ptr);
    v33 = sub_1682AF0((__int64)&v49, (__int64)v44);
    v39 = 32;
    v34 = sub_1587D10(v33, &v39);
    LODWORD(ptr) = 1;
    sub_1587D10(v34, (int *)&ptr);
    if ( v44[0] != v45 )
      operator delete(v44[0]);
    v10 = 0;
    sub_15F7200(&v49);
    goto LABEL_15;
  }
  return v10;
}
