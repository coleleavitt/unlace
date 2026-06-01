unsigned __int64 __fastcall sub_1B3BC90(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128 a7,
        __m128 a8,
        int a9,
        __int64 *a10,
        __int64 a11,
        unsigned int a12,
        int a13,
        int a14,
        int a15)
{
  __int64 *v16; // rbx
  __int64 *v17; // r13
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // rdi
  __int64 v23; // r8
  char v24; // dl
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  char v27; // al
  __int64 v28; // r9
  char v29; // al
  unsigned int v30; // eax
  __int64 v31; // rax
  void *v32; // r13
  __int64 v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  _BYTE *v36; // rdi
  unsigned __int64 v37; // rbx
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // r13
  __int64 v42; // r13
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // [rsp+8h] [rbp-120h]
  __int64 v52; // [rsp+8h] [rbp-120h]
  __int64 v53; // [rsp+8h] [rbp-120h]
  __int64 v54; // [rsp+8h] [rbp-120h]
  _DWORD *v55; // [rsp+18h] [rbp-110h]
  unsigned __int64 v56; // [rsp+20h] [rbp-108h]
  int v57; // [rsp+34h] [rbp-F4h]
  int v58; // [rsp+38h] [rbp-F0h]
  unsigned int v60; // [rsp+4Ch] [rbp-DCh] BYREF
  unsigned __int64 v61; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-D0h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-C0h]
  _BYTE v65[184]; // [rsp+70h] [rbp-B8h] BYREF

  v56 = (unsigned __int64)a2;
  v16 = a10;
  v55 = (_DWORD *)a3;
  v57 = a4;
  v58 = a5;
  if ( a2 )
  {
    if ( (*(_DWORD *)a2 & 0x3C000) != 0 )
      goto LABEL_3;
    v42 = a1[1];
    v43 = sub_C00A40((unsigned __int64)a2, (__int64)&ptr, a3, a4, a5);
    if ( !(unsigned __int8)sub_1B13CD0(*a1, v43, v42, *(double *)a7.m128_u64, a8) )
      return 0;
    v48 = sub_19146F0(*a1, a2, v44, v45, v46, v47, a7, a8);
    if ( v48 == 1 )
      return 0;
    v49 = sub_1BFA490(*a1, v48 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a1[1] + 27544), 4, 1);
    if ( v49 == 1 )
      return 0;
    v56 = v49 & 0xFFFFFFFFFFFFFFFELL;
    if ( v49 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 8) != 0 )
  {
    v39 = a1[1];
    v40 = *(_QWORD *)(v39 + 27512);
    v41 = v40 + 8LL * *(unsigned int *)(v39 + 27520);
    if ( v41 == sub_1AED4C0(v40, v41) )
    {
      sub_1606D30((__int64)&ptr, (_QWORD *)*a1, a12, 3745, 0);
      sub_15F7200(&ptr);
      goto LABEL_3;
    }
  }
  v56 = 0;
LABEL_3:
  if ( !v55 )
    goto LABEL_29;
  if ( (*v55 & 0x3C000) != 0 )
    goto LABEL_5;
  v50 = sub_1B11600(a1, (unsigned __int64)v55, 7u, 1, 0, a7, a8);
  if ( v50 > 1 )
    v55 = (_DWORD *)(v50 & 0xFFFFFFFFFFFFFFFELL);
  else
LABEL_29:
    v55 = nullptr;
LABEL_5:
  v17 = &a10[a11];
  v64 = 0x800000000LL;
  ptr = v65;
  if ( a10 == v17 )
    return 0;
  do
  {
    v21 = *v16;
    v22 = *a1;
    v60 = 0;
    v62 = 0;
    v61 = v21;
    v23 = sub_1B31D70(v22, &v61, &v60, &v62, (__int64)&byte_22F0C30, 0, *(double *)a7.m128_u64);
    if ( v24 )
    {
      v25 = (unsigned int)v64;
      v26 = (unsigned int)v64 + 1LL;
      if ( v26 > HIDWORD(v64) )
      {
        v54 = v23;
        sub_2237220(&ptr, v65, v26, 8);
        v25 = (unsigned int)v64;
        v23 = v54;
      }
      *((_QWORD *)ptr + v25) = v21;
      LODWORD(v64) = v64 + 1;
    }
    if ( v23 )
    {
      if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 40 <= 6 )
        goto LABEL_9;
      v51 = v23;
      v27 = sub_B8E180(*(_QWORD *)(*a1 + 544));
      v28 = 0;
      if ( !v27 )
        v28 = sub_1B22DF0(*a1, v51, v61, 0, a7, a8);
      v52 = v28;
      v29 = sub_B8E180(*(_QWORD *)(*a1 + 544));
      v18 = v52;
      if ( v29 )
LABEL_9:
        v18 = sub_BFB9F0(v21);
      v19 = (unsigned int)v64;
      v20 = (unsigned int)v64 + 1LL;
      if ( v20 > HIDWORD(v64) )
      {
        v53 = v18;
        sub_2237220(&ptr, v65, v20, 8);
        v19 = (unsigned int)v64;
        v18 = v53;
      }
      *((_QWORD *)ptr + v19) = v18;
      LODWORD(v64) = v64 + 1;
    }
    ++v16;
  }
  while ( v17 != v16 );
  v30 = v64;
  if ( (_DWORD)v64 )
  {
    if ( v56 )
    {
      v31 = sub_1AE5FF0(a1[1]);
      sub_14B7B40(v31 + 1160, v56);
      v30 = v64;
    }
    v32 = ptr;
    v33 = v30;
    v34 = sub_168B6C0((__int64)a1);
    v35 = sub_EBE700(v34, a12, a13, v56, (__int64)v55, a14, v57, v58, a6, a9, a15, (__int64)v32, v33);
    v36 = ptr;
    v37 = v35;
  }
  else
  {
    v36 = ptr;
    v37 = 0;
  }
  if ( v36 != v65 )
    free(v36);
  return v37;
}
