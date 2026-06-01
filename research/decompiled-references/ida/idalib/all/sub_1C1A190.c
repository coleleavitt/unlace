__int64 __fastcall sub_1C1A190(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rdi
  __int64 v18; // r14
  size_t v19; // r14
  unsigned int *v20; // rdx
  const char *v21; // rax
  int v22; // edx
  char v23; // r15
  char v24; // cl
  __int16 v25; // dx
  _BYTE *v26; // rdx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r14
  char v37; // cl
  char *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // [rsp+0h] [rbp-168h]
  __int64 *v59; // [rsp+0h] [rbp-168h]
  __int64 v60; // [rsp+0h] [rbp-168h]
  __int64 v61; // [rsp+0h] [rbp-168h]
  __int64 v62; // [rsp+0h] [rbp-168h]
  const char *srca; // [rsp+8h] [rbp-160h]
  void *src; // [rsp+8h] [rbp-160h]
  __int64 v65; // [rsp+18h] [rbp-150h] BYREF
  void *ptr; // [rsp+20h] [rbp-148h] BYREF
  __m128i si128; // [rsp+28h] [rbp-140h]
  _BYTE v68[104]; // [rsp+38h] [rbp-130h] BYREF
  __int64 v69[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-B8h]
  unsigned __int8 *v71[11]; // [rsp+C0h] [rbp-A8h] BYREF
  char v72; // [rsp+118h] [rbp-50h]
  unsigned int v73; // [rsp+120h] [rbp-48h]
  char v74; // [rsp+124h] [rbp-44h]

  v7 = *(_QWORD *)(a1 + 80);
  v8 = *(_QWORD *)(v7 + 16);
  if ( (v8 & 4) == 0 )
  {
    v12 = v8 & 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_QWORD *)(v12 + 88);
    v15 = v12;
    *(_QWORD *)(a1 + 120) = v14;
    v16 = sub_1C16330(*(_QWORD **)(a1 + 8), v14, v7, v12, a5, a6);
    result = 0;
    if ( !v16 )
      return result;
    if ( (*(_BYTE *)(v16 + 58) & 8) == 0 || !a2 )
      goto LABEL_9;
    v17 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v16 + 16) & 4) != 0 )
      v17 = *(_QWORD *)v17;
    if ( (*(_BYTE *)(v17 + 8) & 0x7F) != 0x14 || (v58 = v17 - 48, v17 == 48) )
    {
LABEL_9:
      *(_QWORD *)(a1 + 112) = v16;
      return 1;
    }
    v18 = *(_QWORD *)(v15 + 40);
    if ( (v18 & 7) != 0 )
    {
      v22 = 0;
      v24 = 0;
      v23 = 0;
      v19 = 0;
      v21 = &byte_22F0C30;
    }
    else
    {
      v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v19 )
      {
        v20 = *(unsigned int **)(v19 + 16);
        v19 = *v20;
        v21 = (const char *)(v20 + 4);
        v22 = *((unsigned __int8 *)v20 + 16);
        v23 = v22;
        v24 = v22;
      }
      else
      {
        v22 = 0;
        v24 = 0;
        v21 = &byte_22F0C30;
        v23 = 0;
      }
    }
    v25 = *(_WORD *)&byte_2411740[2 * v22];
    if ( (v25 & 0x40) != 0 )
    {
      v23 = v24 - 32;
    }
    else
    {
      v37 = v24 + 32;
      if ( (v25 & 0x20) != 0 )
        v23 = v37;
    }
    ptr = v68;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8090);
    if ( v19 > 0x64 )
    {
      srca = v21;
      sub_2236E10(&ptr, v68, v19, 1);
      v21 = srca;
      v38 = (char *)ptr + si128.m128i_i64[0];
    }
    else
    {
      v26 = v68;
      if ( !v19 )
      {
LABEL_21:
        si128.m128i_i64[0] = v19;
        *v26 = v23;
        v27 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 240LL) + 552LL, ptr, si128.m128i_u64[0]);
        LOBYTE(v28) = (*(_BYTE *)(v15 + 73) & 0x40) != 0;
        v32 = sub_BAD2F0(v58, v27, (unsigned int)(v28 + 1), v29, v30, v31);
        v36 = v32;
        if ( v32 == v15 || !v32 || v16 != *(_QWORD *)(v32 + 112) )
        {
LABEL_24:
          if ( ptr != v68 )
            free(ptr);
          goto LABEL_9;
        }
        v59 = (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL);
        v39 = sub_C00A40(*(_QWORD *)(a1 + 80), (__int64)v59, v33, v34, v35);
        sub_168B9F0((__int64)v69, v59, v39, 0x12FAu, 0);
        if ( v72 )
        {
          sub_AE9DF0(v71, v15, 0xAu);
        }
        else
        {
          if ( !v74 )
          {
LABEL_36:
            sub_15F7200(v69);
            sub_168B9F0((__int64)v69, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_DWORD *)(v15 + 24), 0x189Au, 0);
            sub_15F7200(v69);
            sub_168B9F0((__int64)v69, (__int64 *)(*(_QWORD *)(a1 + 8) + 8LL), *(_DWORD *)(v36 + 24), 0x189Au, 0);
            sub_15F7200(v69);
            goto LABEL_24;
          }
          v61 = sub_168B9E0(v69);
          v44 = v70;
          if ( v70 )
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
          v65 = v44;
          v45 = sub_1587BC0(v61, &v65, v40, v41, v42, v43);
          sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * v73 + 8), v15, 0xAu);
        }
        if ( v72 )
        {
          sub_AE9DF0(v71, v36, 0xAu);
        }
        else
        {
          if ( !v74 )
            goto LABEL_36;
          v62 = sub_168B9E0(v69);
          v56 = v70;
          if ( v70 )
            v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
          v65 = v56;
          v57 = sub_1587BC0(v62, &v65, v52, v53, v54, v55);
          sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v73 + 8), v36, 0xAu);
        }
        v60 = *(_QWORD *)(v16 + 40);
        if ( v72 )
        {
          sub_AE9DF0(v71, *(_QWORD *)(v16 + 40), 9u);
        }
        else if ( v74 )
        {
          src = (void *)sub_168B9E0(v69);
          v50 = v70;
          if ( v70 )
            v50 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 32LL))(v70);
          v65 = v50;
          v51 = sub_1587BC0((__int64)src, &v65, v46, v47, v48, v49);
          sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * v73 + 8), v60, 9u);
        }
        goto LABEL_36;
      }
      v38 = v68;
    }
    memcpy(v38, v21, v19);
    v26 = ptr;
    v19 += si128.m128i_i64[0];
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v9 )
  {
    *(_QWORD *)(a1 + 112) = v9;
    *(_QWORD *)(a1 + 120) = *(_QWORD *)(v9 + 40);
    return 1;
  }
  else
  {
    v69[0] = *(_QWORD *)((v8 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    v10 = sub_FDE960(v69, 0);
    *(_QWORD *)(a1 + 120) = sub_FE87C0(
                              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 240LL) + 552LL,
                              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 240LL) + 680LL,
                              v10);
    return 0;
  }
}
