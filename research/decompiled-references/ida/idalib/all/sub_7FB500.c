__int64 __fastcall sub_7FB500(__int64 a1)
{
  __int64 v1; // r12
  int v3; // eax
  unsigned __int64 v5; // r14
  unsigned int v6; // eax
  _BYTE *v7; // r8
  size_t v8; // r13
  unsigned __int8 *v9; // rdx
  int v10; // esi
  char *v11; // rdx
  void *v12; // r14
  void *v13; // r13
  char *v14; // rax
  void *v15; // rdi
  char *v16; // rdi
  __int64 v17; // rax
  void (*v18)(); // rdx
  char *v19; // rdi
  __int64 v20; // r14
  char *v21; // r13
  char *v22; // r15
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi
  void *v27; // rdi
  __int64 v28; // r15
  char *v29; // r14
  char *v30; // r13
  void *v31; // rdi
  void *v32; // rdi
  void (*v33)(); // rax
  unsigned int *v34; // rbp
  unsigned int *v35; // r12
  signed __int64 v36; // rax
  __int64 v37; // r14
  __int64 i; // rdx
  unsigned __int64 v39; // r15
  unsigned int *v40; // rax
  unsigned int *v41; // r13
  unsigned int *v42; // r9
  char *v43; // r8
  char *v44; // rax
  char *v45; // rsi
  char *v46; // rdi
  unsigned int *v47; // rsi
  unsigned int *v48; // rsi
  char *src; // [rsp+0h] [rbp-A8h]
  char *srca; // [rsp+0h] [rbp-A8h]
  void *srcc; // [rsp+0h] [rbp-A8h]
  char *srcb; // [rsp+0h] [rbp-A8h]
  int v53; // [rsp+Ch] [rbp-9Ch]
  void *dest; // [rsp+10h] [rbp-98h] BYREF
  __int128 v55; // [rsp+18h] [rbp-90h]
  void *ptr[15]; // [rsp+30h] [rbp-78h] BYREF

  v1 = a1 + 16;
  ptr[7] = (void *)__readfsqword(0x28u);
  v53 = 0;
  dest = nullptr;
  v55 = 0;
  while ( 1 )
  {
    v3 = unpack_dd(v1);
    *(_DWORD *)(a1 + 48) = v3;
    if ( !v3 )
      break;
    v5 = *(_QWORD *)(a1 + 24);
    v6 = unpack_dd(v1);
    v7 = *(_BYTE **)(a1 + 16);
    v8 = v6;
    v9 = &v7[v6];
    if ( __CFADD__(v6, v7) || v5 < (unsigned __int64)v9 )
    {
      *(_QWORD *)(a1 + 32) = 0;
      break;
    }
    *(_QWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 32) = v7;
    if ( !v7 )
      break;
    v10 = *(_DWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 40) = v6;
    switch ( v10 )
    {
      case 1:
        LOBYTE(ptr[0]) = 0;
        memset(&ptr[1], 0, 48);
        extract_type_from_metadata((__int64)ptr, v7, (unsigned __int64)v9);
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 16LL))(a1, ptr);
        if ( ptr[4] )
        {
          ptr[5] = nullptr;
          qfree(ptr[4]);
        }
        if ( ptr[1] )
        {
          ptr[2] = nullptr;
          qfree(ptr[1]);
        }
        break;
      case 2:
        ptr[0] = v7;
        v17 = unpack_dq(ptr);
        v18 = *(void (**)())(*(_QWORD *)a1 + 24LL);
        if ( v18 != nullsub_256 )
          ((void (__fastcall *)(__int64, __int64))v18)(a1, v17);
        break;
      case 3:
      case 4:
        memset(ptr, 0, 24);
        if ( v6 )
        {
          srcc = v7;
          ptr[0] = (void *)qvector_reserve(ptr, 0, v6 + 1LL, 1);
          ptr[1] = (void *)(v8 + 1);
          memmove(ptr[0], srcc, v8);
          *((_BYTE *)ptr[0] + v8) = 0;
          v10 = *(_DWORD *)(a1 + 48);
        }
        (*(void (__fastcall **)(__int64, void **, bool))(*(_QWORD *)a1 + 32LL))(a1, ptr, v10 == 4);
        v16 = (char *)ptr[0];
        if ( ptr[0] )
          goto LABEL_23;
        break;
      case 5:
      case 6:
        memset(ptr, 0, 24);
        extract_insn_cmts_from_metadata((__int64 *)ptr, v7, (unsigned __int64)v9);
        (*(void (__fastcall **)(__int64, void **, bool))(*(_QWORD *)a1 + 40LL))(a1, ptr, *(_DWORD *)(a1 + 48) == 6);
        v11 = (char *)ptr[0];
        if ( ptr[0] )
        {
          v12 = ptr[1];
          if ( ptr[1] )
          {
            v13 = nullptr;
            do
            {
              v14 = &v11[32 * (_QWORD)v13];
              v15 = *((void **)v14 + 1);
              if ( v15 )
              {
                *((_QWORD *)v14 + 2) = 0;
                qfree(v15);
                v11 = (char *)ptr[0];
              }
              v13 = (char *)v13 + 1;
            }
            while ( v12 != v13 );
          }
          ptr[1] = nullptr;
          qfree(v11);
        }
        break;
      case 7:
        memset(ptr, 0, 24);
        extract_extra_cmts_from_metadata((__int64 *)ptr, v7, (unsigned __int64)v9);
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 48LL))(a1, ptr);
        v16 = (char *)ptr[0];
        if ( ptr[0] )
        {
          srca = (char *)ptr[1];
          if ( ptr[1] )
          {
            v28 = 0;
            v29 = nullptr;
            do
            {
              v30 = &v16[v28];
              v31 = *(void **)&v16[v28 + 32];
              if ( v31 )
              {
                *((_QWORD *)v30 + 5) = 0;
                qfree(v31);
              }
              v32 = *((void **)v30 + 1);
              if ( v32 )
              {
                *((_QWORD *)v30 + 2) = 0;
                qfree(v32);
              }
              v16 = (char *)ptr[0];
              ++v29;
              v28 += 56;
            }
            while ( srca != v29 );
          }
          goto LABEL_23;
        }
        break;
      case 8:
        memset(ptr, 0, 24);
        extract_user_stkpnts_from_metadata((__int64 *)ptr, (unsigned __int64)v7, (unsigned __int64)v9);
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 56LL))(a1, ptr);
        v16 = (char *)ptr[0];
        if ( ptr[0] )
        {
LABEL_23:
          ptr[1] = nullptr;
          qfree(v16);
        }
        break;
      case 9:
        ptr[0] = nullptr;
        ptr[1] = (void *)-1LL;
        memset(&ptr[2], 0, 32);
        extract_frame_desc_from_metadata((__int64)ptr, v7, (__int64)v9);
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 64LL))(a1, ptr);
        v19 = (char *)ptr[3];
        if ( ptr[3] )
        {
          src = (char *)ptr[4];
          if ( ptr[4] )
          {
            v20 = 0;
            v21 = nullptr;
            do
            {
              v22 = &v19[v20];
              v23 = *(void **)&v19[v20 + 96];
              if ( v23 )
              {
                *((_QWORD *)v22 + 13) = 0;
                qfree(v23);
              }
              v24 = *((void **)v22 + 9);
              if ( v24 )
              {
                *((_QWORD *)v22 + 10) = 0;
                qfree(v24);
              }
              v25 = *((void **)v22 + 6);
              if ( v25 )
              {
                *((_QWORD *)v22 + 7) = 0;
                qfree(v25);
              }
              v26 = *((void **)v22 + 3);
              if ( v26 )
              {
                *((_QWORD *)v22 + 4) = 0;
                qfree(v26);
              }
              v27 = *(void **)v22;
              if ( *(_QWORD *)v22 )
              {
                *((_QWORD *)v22 + 1) = 0;
                qfree(v27);
              }
              v19 = (char *)ptr[3];
              ++v21;
              v20 += 416;
            }
            while ( src != v21 );
          }
          ptr[4] = nullptr;
          qfree(v19);
        }
        break;
      case 10:
        ++v53;
        extract_insn_opreprs_from_metadata((__int64 *)&dest, v7, v9);
        break;
      case 11:
        ++v53;
        extract_insn_opreprs_from_metadata_ex((__int64)&dest, (unsigned __int64)v7, (unsigned __int64)v9);
        break;
      default:
        v33 = *(void (**)())(*(_QWORD *)a1 + 80LL);
        if ( v33 != nullsub_276 )
          ((void (__fastcall *)(__int64))v33)(a1);
        break;
    }
  }
  if ( v53 > 0 )
  {
    if ( v53 != 2 )
      goto LABEL_5;
    v34 = (unsigned int *)dest;
    v35 = (unsigned int *)((char *)dest + 2192 * v55);
    if ( dest == v35 )
      goto LABEL_5;
    v36 = 0xE21A291C077975B9LL * ((2192 * (__int64)v55) >> 4) + 1;
    v37 = v36 / 2;
    if ( v36 <= 1 )
    {
      v48 = (unsigned int *)dest;
      v39 = 0;
      v41 = nullptr;
      if ( v37 )
      {
LABEL_77:
        v39 = 0;
        v41 = nullptr;
        sub_7FB460(v34, v35);
        goto LABEL_72;
      }
      goto LABEL_71;
    }
    for ( i = v36 / 2; ; i = (__int64)(srcb + 1) >> 1 )
    {
      v39 = 548 * i;
      srcb = (char *)i;
      v40 = (unsigned int *)operator new(2192 * i, (const std::nothrow_t *)&std::nothrow);
      v41 = v40;
      if ( v40 )
        break;
      if ( srcb == (_BYTE *)&dword_0 + 1 )
        goto LABEL_77;
    }
    v42 = &v40[v39];
    if ( v40 == &v40[v39] )
    {
      v48 = v34;
      v39 = 0;
      if ( srcb == (char *)v37 )
        goto LABEL_71;
    }
    else
    {
      v43 = (char *)(v40 + 548);
      qmemcpy(v40, v34, 0x890u);
      v44 = (char *)(v40 + 548);
      if ( v39 == 548 )
      {
        v47 = v41;
      }
      else
      {
        do
        {
          v45 = v44 - 2192;
          v46 = v44;
          v44 += 2192;
          qmemcpy(v46, v45, 0x890u);
        }
        while ( v44 != (char *)v42 );
        v47 = (unsigned int *)&v43[2192
                                 * ((0x21A291C077975B9LL * ((unsigned __int64)(v44 - (char *)v41 - 4384) >> 4))
                                  & 0xFFFFFFFFFFFFFFFLL)];
      }
      qmemcpy(v34, v47, 0x890u);
      if ( srcb == (char *)v37 )
      {
        v48 = &v34[v39];
LABEL_71:
        sub_7F7E30(v34, v48, v35, v41);
LABEL_72:
        operator delete(v41, v39 * 4);
LABEL_5:
        (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 72LL))(a1, &dest);
        goto LABEL_6;
      }
    }
    sub_7FB1F0(v34, v35, v41, (__int64)srcb);
    goto LABEL_72;
  }
LABEL_6:
  if ( dest )
  {
    *(_QWORD *)&v55 = 0;
    qfree(dest);
  }
  return 0;
}
