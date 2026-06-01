unsigned __int64 __fastcall sub_1B1E5F0(
        __int64 *a1,
        const void *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  size_t v8; // r14
  unsigned __int64 v10; // rbx
  char *v11; // rdi
  int v12; // r9d
  unsigned __int64 *v13; // r13
  __int64 v14; // rbx
  unsigned __int64 *v15; // rbp
  unsigned __int64 *v16; // r15
  _DWORD *v17; // rsi
  __int64 *v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  _QWORD *v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _QWORD *v36; // rax
  int v41; // [rsp+24h] [rbp-134h]
  int v42; // [rsp+24h] [rbp-134h]
  unsigned int v43; // [rsp+24h] [rbp-134h]
  __int64 v44; // [rsp+30h] [rbp-128h] BYREF
  __int64 v45; // [rsp+38h] [rbp-120h] BYREF
  void *v46; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-110h]
  char v48; // [rsp+4Ch] [rbp-10Ch]
  void *ptr; // [rsp+50h] [rbp-108h] BYREF
  __int64 v50; // [rsp+58h] [rbp-100h]
  _BYTE dest[48]; // [rsp+60h] [rbp-F8h] BYREF
  void *v52; // [rsp+90h] [rbp-C8h] BYREF
  unsigned int v53; // [rsp+98h] [rbp-C0h]
  char v54; // [rsp+9Ch] [rbp-BCh]
  __int64 v55; // [rsp+A0h] [rbp-B8h]
  unsigned __int8 *v56; // [rsp+B0h] [rbp-A8h] BYREF
  char v57; // [rsp+108h] [rbp-50h]
  unsigned int v58; // [rsp+110h] [rbp-48h]
  char v59; // [rsp+114h] [rbp-44h]

  v8 = 8 * a3;
  v10 = (8 * a3) >> 3;
  v11 = dest;
  v12 = 0;
  v13 = (unsigned __int64 *)dest;
  ptr = dest;
  v50 = 0x600000000LL;
  if ( v10 > 6 )
  {
    sub_2237220(&ptr, dest, (8 * a3) >> 3, 8);
    v13 = (unsigned __int64 *)ptr;
    v12 = v50;
    v11 = (char *)ptr + 8 * (unsigned int)v50;
  }
  if ( v8 )
  {
    memcpy(v11, a2, v8);
    v13 = (unsigned __int64 *)ptr;
    v12 = v50;
  }
  LODWORD(v50) = v12 + v10;
  v14 = (unsigned int)(v12 + v10);
  v15 = &v13[v14];
  if ( v15 != v13 )
  {
    v16 = v13;
    while ( 1 )
    {
      v17 = (_DWORD *)*v16;
      if ( *v16 )
      {
        if ( (*v17 & 0x8000) == 0 )
          break;
      }
LABEL_11:
      if ( v15 == ++v16 )
      {
        v13 = (unsigned __int64 *)ptr;
        v14 = (unsigned int)v50;
        goto LABEL_28;
      }
    }
    v18 = (__int64 *)*a1;
    v47 = 1;
    v46 = nullptr;
    v48 = 0;
    v19 = sub_1915F20(v18, (unsigned __int64)v17, (__int64)&v46, 1, a7, a8);
    if ( v19 <= 1 )
    {
      if ( (BYTE1(*(_DWORD *)*v16) & 0x80u) != 0 )
      {
LABEL_8:
        if ( v47 > 0x40 && v46 )
          operator delete[](v46);
        goto LABEL_11;
      }
    }
    else
    {
      v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
      *v16 = v20;
      v21 = v20;
      v53 = 64;
      v52 = &dword_0 + 1;
      v54 = 0;
      v22 = sub_98E2D0((__int64 *)&v46, (__int64 *)&v52);
      if ( v53 > 0x40 && v52 )
      {
        v41 = v22;
        operator delete[](v52);
        v22 = v41;
      }
      if ( v22 >= 0 )
      {
        v53 = 64;
        v54 = 0;
        v52 = (void *)a3;
        v23 = sub_98E2D0((__int64 *)&v46, (__int64 *)&v52);
        if ( v53 > 0x40 && v52 )
        {
          v42 = v23;
          operator delete[](v52);
          v23 = v42;
        }
        if ( v23 <= 0 )
          goto LABEL_8;
      }
      v43 = sub_EEC140(v21);
      LODWORD(v45) = sub_EEB7E0(v21, (__int64)&v52, *(double *)a7.m128_u64);
      HIDWORD(v45) = v43;
      v26 = sub_C00A40(v21, (__int64)&v52, v43, v24, v25);
      sub_168B9F0((__int64)&v52, a1, v26, 0x119Du, 0);
      if ( v57 )
      {
        sub_AE9DF0(&v56, a3, 3u);
      }
      else if ( v59 )
      {
        v32 = sub_168B9E0(&v52);
        v35 = v55;
        if ( v55 )
          v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 32LL))(v55);
        v44 = v35;
        v36 = sub_1587BC0(v32, &v44, v30, v31, v33, v34);
        sub_AE9DF0((unsigned __int8 **)(*v36 + 32LL * v58 + 8), a3, 3u);
      }
      sub_15884C0((__int64)&v52, &v45);
      sub_15F7200(&v52);
      if ( (BYTE1(*(_DWORD *)*v16) & 0x80u) != 0 )
        goto LABEL_8;
    }
    *v16 = 0;
    goto LABEL_8;
  }
LABEL_28:
  v27 = (_QWORD *)sub_168B6C0((__int64)a1);
  v28 = sub_EC01B0(v27, a4, a5, a6, (__int64)v13, v14);
  if ( ptr != dest )
    free(ptr);
  return v28;
}
