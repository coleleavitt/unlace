__int64 __fastcall ClpSimplex::saveModel(ClpSimplex *this, const char *a2)
{
  FILE *v3; // rax
  FILE *v4; // rbp
  int v5; // edx
  __int128 v6; // xmm0
  FILE *v7; // rcx
  int v8; // eax
  __m128d v9; // xmm5
  int v10; // edx
  int v11; // eax
  __int128 v12; // xmm2
  __m128d v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm3
  __int128 v16; // xmm4
  __int128 v17; // xmm1
  _BOOL4 v18; // r13d
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD, int *, _QWORD, __int64); // rdi
  void *v21; // rax
  int v22; // r13d
  void *v23; // rdi
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rdx
  void *v30; // r15
  char *v31; // rcx
  int v32; // eax
  __int64 v33; // r14
  size_t v34; // rax
  char *v35; // rcx
  __int64 i; // rdx
  int v37; // eax
  __int64 v38; // r14
  int v39; // r14d
  size_t v40; // r12
  const void *v41; // rax
  size_t v42; // rax
  size_t v43; // r12
  const void *v44; // rax
  size_t v45; // rax
  size_t v46; // r12
  const void *v47; // rax
  size_t v48; // rax
  size_t v49; // r12
  const void *v50; // rax
  __int64 v51; // [rsp+8h] [rbp-120h]
  __int64 v52; // [rsp+8h] [rbp-120h]
  size_t size; // [rsp+10h] [rbp-118h] BYREF
  int v54; // [rsp+18h] [rbp-110h] BYREF
  _OWORD ptr[8]; // [rsp+20h] [rbp-108h] BYREF
  int v56; // [rsp+A0h] [rbp-88h]
  int v57; // [rsp+A4h] [rbp-84h]
  int v58; // [rsp+A8h] [rbp-80h]
  int v59; // [rsp+ACh] [rbp-7Ch]
  int v60; // [rsp+B0h] [rbp-78h]
  int v61; // [rsp+B4h] [rbp-74h]
  int v62; // [rsp+B8h] [rbp-70h]
  int v63; // [rsp+BCh] [rbp-6Ch]
  int v64; // [rsp+C0h] [rbp-68h]
  int v65; // [rsp+C4h] [rbp-64h]
  int v66; // [rsp+C8h] [rbp-60h]
  int v67; // [rsp+CCh] [rbp-5Ch]
  int v68; // [rsp+D0h] [rbp-58h]
  int v69; // [rsp+D4h] [rbp-54h]
  int v70; // [rsp+D8h] [rbp-50h]
  int v71; // [rsp+DCh] [rbp-4Ch]
  int v72; // [rsp+E0h] [rbp-48h]
  int v73; // [rsp+E4h] [rbp-44h]
  int v74; // [rsp+E8h] [rbp-40h]

  v3 = fopen(a2, "wb");
  if ( !v3 )
    return -1;
  v4 = v3;
  v5 = *((_DWORD *)this + 77);
  v6 = *((_OWORD *)this + 4);
  v7 = v3;
  v56 = *((_DWORD *)this + 26);
  v8 = *((_DWORD *)this + 27);
  v9 = *((__m128d *)this + 54);
  v61 = v5;
  v10 = *((_DWORD *)this + 80);
  v57 = v8;
  v11 = *((_DWORD *)this + 76);
  ptr[4] = v6;
  v62 = v10;
  v60 = v11;
  v12 = *((_OWORD *)this + 2);
  v13 = _mm_shuffle_pd(*((__m128d *)this + 49), v9, 2);
  v59 = *((_DWORD *)this + 75);
  v14 = *((_OWORD *)this + 3);
  v15 = *((_OWORD *)this + 1);
  v58 = *((_DWORD *)this + 74);
  v63 = v58;
  v16 = *(_OWORD *)this;
  ptr[2] = v12;
  ptr[3] = v14;
  ptr[0] = v16;
  ptr[1] = v15;
  ptr[5] = v13;
  v17 = *((_OWORD *)this + 56);
  ptr[6] = *((_OWORD *)this + 55);
  ptr[7] = v17;
  v64 = *((_DWORD *)this + 82);
  v65 = *((_DWORD *)this + 306);
  v66 = *((_DWORD *)this + 307);
  v67 = *((_DWORD *)this + 308);
  v68 = *((_DWORD *)this + 309);
  v69 = *((_DWORD *)this + 64);
  v70 = *((_DWORD *)this + 325);
  v71 = *((_DWORD *)this + 84);
  v72 = *(_DWORD *)(*((_QWORD *)this + 155) + 16LL);
  v73 = *(_DWORD *)(*((_QWORD *)this + 156) + 16LL);
  v74 = *(_DWORD *)(*((_QWORD *)this + 24) + 52LL);
  if ( fwrite(ptr, 0xD0u, 1u, v7) != 1 )
    return 1;
  size = *(_QWORD *)(*((_QWORD *)this + 86) - 24LL);
  if ( fwrite(&size, 4u, 1u, v4) != 1 || size && fwrite(*((const void **)this + 86), size, 1u, v4) != 1 )
    return 1;
  if ( sub_102290(*((void **)this + 14), *((_DWORD *)this + 26), v4)
    || sub_102290(*((void **)this + 15), *((_DWORD *)this + 27), v4)
    || sub_102290(*((void **)this + 16), *((_DWORD *)this + 26), v4)
    || sub_102290(*((void **)this + 17), *((_DWORD *)this + 27), v4)
    || sub_102290(*((void **)this + 18), *((_DWORD *)this + 26), v4)
    || sub_102290(*((void **)this + 19), *((_DWORD *)this + 26), v4) )
  {
    return 1;
  }
  v20 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, int *, _QWORD, __int64))this + 20);
  v21 = nullptr;
  v22 = *((_DWORD *)this + 27);
  if ( v20 )
    v21 = (void *)(**v20)(v20, 0, 0, &v54, 0, 2);
  if ( sub_102290(v21, v22, v4) )
    return 1;
  if ( sub_102290(*((void **)this + 21), *((_DWORD *)this + 26), v4) )
    return 1;
  if ( sub_102290(*((void **)this + 22), *((_DWORD *)this + 27), v4) )
    return 1;
  v18 = sub_102290(*((void **)this + 23), *((_DWORD *)this + 27), v4);
  if ( v18 )
    return 1;
  v23 = *((void **)this + 27);
  if ( !v23 )
    goto LABEL_23;
  v24 = *((_DWORD *)this + 80);
  if ( v24 == 1 )
  {
    if ( sub_102290(v23, *((_DWORD *)this + 26), v4) )
      return 1;
  }
  else
  {
    if ( v24 != 2 )
    {
LABEL_23:
      if ( sub_102290(nullptr, 0, v4) )
        return 1;
      goto LABEL_24;
    }
    if ( sub_102290(v23, *((_DWORD *)this + 27), v4) )
      return 1;
  }
LABEL_24:
  if ( *((_QWORD *)this + 33) && (v25 = *((_DWORD *)this + 26) + *((_DWORD *)this + 27), v25 > 0) )
  {
    size = v25;
    if ( fwrite(&size, 4u, 1u, v4) != 1 )
      return 1;
    v34 = fwrite(*((const void **)this + 33), 1u, size, v4);
    if ( size != v34 )
      return 1;
  }
  else
  {
    size = 0;
    if ( fwrite(&size, 4u, 1u, v4) != 1 )
      return 1;
  }
  v26 = *((_DWORD *)this + 82);
  if ( v26 )
  {
    v27 = *((_DWORD *)this + 26);
    if ( *((_DWORD *)this + 27) >= v27 )
      v27 = *((_DWORD *)this + 27);
    v28 = operator new[]((v26 + 1) * v27);
    v29 = 0;
    v30 = (void *)v28;
    v31 = (char *)v28;
    while ( 1 )
    {
      v32 = *((_DWORD *)this + 26);
      v33 = *((int *)this + 82);
      if ( v32 <= (int)v29 )
        break;
      v51 = v29;
      v31 = &strcpy(v31, *(const char **)(*((_QWORD *)this + 46) + 8 * v29))[v33 + 1];
      v29 = v51 + 1;
    }
    if ( *((_DWORD *)this + 26) != fwrite(v30, (int)v33 + 1, v32, v4) )
      return 1;
    v35 = (char *)v30;
    for ( i = 0; ; i = v52 + 1 )
    {
      v37 = *((_DWORD *)this + 27);
      v38 = *((int *)this + 82);
      if ( v37 <= (int)i )
        break;
      v52 = i;
      v35 = &strcpy(v35, *(const char **)(*((_QWORD *)this + 49) + 8 * i))[v38 + 1];
    }
    if ( *((_DWORD *)this + 27) != fwrite(v30, (int)v38 + 1, v37, v4) )
    {
      v18 = 1;
      operator delete[](v30);
      return v18;
    }
  }
  if ( !*((_QWORD *)this + 34) )
  {
    v54 = 0;
    fwrite(&v54, 4u, 1u, v4);
    goto LABEL_47;
  }
  v54 = 1;
  fwrite(&v54, 4u, 1u, v4);
  if ( *((_DWORD *)this + 27) == fwrite(*((const void **)this + 34), 1u, *((int *)this + 27), v4) )
  {
LABEL_47:
    v39 = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 56LL))(*((_QWORD *)this + 24))
                    + 4LL * *((int *)this + 27)
                    - 4);
    size = *(_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 64LL))(*((_QWORD *)this + 24))
                     + 4LL * *((int *)this + 27)
                     - 4)
         + v39;
    if ( fwrite(&size, 4u, 1u, v4) == 1 )
    {
      v40 = size;
      v41 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 40LL))(*((_QWORD *)this + 24));
      v42 = fwrite(v41, 8u, v40, v4);
      v43 = size;
      if ( size == v42 )
      {
        v44 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 48LL))(*((_QWORD *)this + 24));
        v45 = fwrite(v44, 4u, v43, v4);
        if ( size == v45 )
        {
          v46 = *((_DWORD *)this + 27) + 1;
          v47 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 56LL))(*((_QWORD *)this + 24));
          v48 = fwrite(v47, 4u, v46, v4);
          v49 = *((int *)this + 27);
          if ( v49 + 1 == v48 )
          {
            v50 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 64LL))(*((_QWORD *)this + 24));
            if ( *((_DWORD *)this + 27) == fwrite(v50, 4u, v49, v4) )
            {
              fclose(v4);
              return v18;
            }
          }
        }
      }
    }
  }
  return 1;
}

