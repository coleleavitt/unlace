void __fastcall sub_137D910(
        __int64 a1,
        __int64 *a2,
        const void *a3,
        size_t a4,
        const void *a5,
        size_t a6,
        __int16 a7,
        int a8,
        char a9)
{
  char v12; // dl
  _WORD *v14; // rsi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int16 v29; // [rsp+2Ch] [rbp-16Ch] BYREF
  __int16 v30; // [rsp+2Eh] [rbp-16Ah]
  void *v31; // [rsp+30h] [rbp-168h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-160h]
  void *v33; // [rsp+50h] [rbp-148h] BYREF
  __int64 v34; // [rsp+58h] [rbp-140h]
  char *v35; // [rsp+60h] [rbp-138h]
  __int16 v36; // [rsp+70h] [rbp-128h]
  void *v37; // [rsp+80h] [rbp-118h] BYREF
  __int64 v38; // [rsp+88h] [rbp-110h]
  const char *v39; // [rsp+90h] [rbp-108h]
  __int16 v40; // [rsp+A0h] [rbp-F8h]
  __int64 v41; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-E0h]
  __int64 v43; // [rsp+C0h] [rbp-D8h]
  __int64 v44; // [rsp+C8h] [rbp-D0h]
  __int64 v45; // [rsp+D0h] [rbp-C8h]
  void *v46; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+E8h] [rbp-B0h]
  __int64 v48; // [rsp+F0h] [rbp-A8h]
  _WORD v49[20]; // [rsp+F8h] [rbp-A0h] BYREF
  void *ptr; // [rsp+120h] [rbp-78h] BYREF
  __int64 v51; // [rsp+128h] [rbp-70h]
  __int64 v52; // [rsp+130h] [rbp-68h]
  __int64 v53; // [rsp+138h] [rbp-60h] BYREF
  __int64 v54; // [rsp+140h] [rbp-58h]

  v12 = 0;
  if ( !a9 )
    v12 = *(_BYTE *)(a1 + 56);
  v14 = v49;
  v48 = 32;
  v46 = v49;
  v29 = a7;
  v47 = 2;
  v15 = -(__int16)a8 & 0x1FFF | v30 & 0xE000;
  LOBYTE(v30) = -(char)a8;
  HIBYTE(v30) = (v12 << 7) | (32 * (a9 & 1)) & 0x3F | HIBYTE(v15) & 0x1F;
  v49[0] = 24415;
  if ( a4 + 2 > 0x20 )
  {
    sub_2236E10(&v46, v49, a4 + 2, 1);
    v14 = v46;
    v27 = v47;
  }
  else
  {
    v16 = 2;
    if ( !a4 )
      goto LABEL_5;
    v27 = 2;
  }
  memcpy((char *)v14 + v27, a3, a4);
  v16 = v47;
LABEL_5:
  v47 = v16 + a4;
  LOWORD(v45) = 257;
  sub_21EF060(&v31, &v29);
  sub_137D2F0((__int64)&ptr, (__int64)&v31, a5, a6);
  v40 = 261;
  v37 = ptr;
  v38 = v51;
  v36 = 773;
  v33 = v46;
  v34 = v47;
  v35 = "_EPSILON__";
  sub_1039E30(a2, (__int64)&v33, (__int64)&v37, v17, v18, v19, v41, v42, v43, v44, v45);
  if ( ptr != &v53 )
    free(ptr);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
  LOWORD(v54) = 257;
  LODWORD(v41) = a8;
  v40 = 773;
  v37 = v46;
  LOWORD(v45) = 265;
  v38 = v47;
  v39 = "_FBIT__";
  sub_1039E30(a2, (__int64)&v37, (__int64)&v41, v20, 773, v21, (char)ptr, v51, v52, v53, 1u);
  LOWORD(v45) = 257;
  sub_21EEC90(&v31, &v29);
  sub_137D2F0((__int64)&ptr, (__int64)&v31, a5, a6);
  v40 = 261;
  v37 = ptr;
  v36 = 773;
  v38 = v51;
  v33 = v46;
  v34 = v47;
  v35 = "_MAX__";
  sub_1039E30(a2, (__int64)&v33, (__int64)&v37, v22, v23, v24, v41, v42, v43, v44, v45);
  if ( ptr != &v53 )
    free(ptr);
  if ( v32 > 0x40 && v31 )
  {
    operator delete[](v31);
    if ( !a9 )
      goto LABEL_12;
  }
  else if ( !a9 )
  {
    goto LABEL_12;
  }
  LOWORD(v45) = 257;
  sub_21EEEF0(&v31, &v29);
  sub_137D2F0((__int64)&ptr, (__int64)&v31, a5, a6);
  v40 = 261;
  v37 = ptr;
  v36 = 773;
  v38 = v51;
  v33 = v46;
  v34 = v47;
  v35 = "_MIN__";
  sub_1039E30(a2, (__int64)&v33, (__int64)&v37, 773, v25, v26, v41, v42, v43, v44, v45);
  if ( ptr != &v53 )
    free(ptr);
  if ( v32 > 0x40 && v31 )
    operator delete[](v31);
LABEL_12:
  if ( v46 != v49 )
    free(v46);
}
