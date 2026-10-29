__int64 __fastcall sub_19BAC90(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 a6,
        char a7,
        __int64 a8)
{
  unsigned int v10; // r13d
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbp
  char *v21; // r14
  __int64 *v22; // rax
  __int64 v23; // rsi
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 *v27; // rbp
  __int64 *v28; // r14
  unsigned __int64 v29; // rax
  unsigned __int8 v30; // dl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r15
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r15
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r15
  __int64 v57; // rax
  _QWORD *v58; // rax
  __int64 v61[2]; // [rsp+14h] [rbp-280h] BYREF
  __int64 v62; // [rsp+24h] [rbp-270h] BYREF
  __m128i v63; // [rsp+2Ch] [rbp-268h] BYREF
  __int64 v64; // [rsp+3Ch] [rbp-258h]
  unsigned __int8 *v65[11]; // [rsp+4Ch] [rbp-248h] BYREF
  char v66; // [rsp+A4h] [rbp-1F0h]
  unsigned int v67; // [rsp+ACh] [rbp-1E8h]
  char v68; // [rsp+B0h] [rbp-1E4h]
  __int64 v69; // [rsp+BCh] [rbp-1D8h] BYREF
  __int64 *v70; // [rsp+C4h] [rbp-1D0h]
  __int64 v71; // [rsp+CCh] [rbp-1C8h]
  __int64 v72; // [rsp+D4h] [rbp-1C0h] BYREF
  __int128 v73; // [rsp+114h] [rbp-180h]
  __int64 v74; // [rsp+124h] [rbp-170h]
  _QWORD *v75; // [rsp+12Ch] [rbp-168h]
  __int64 v76; // [rsp+134h] [rbp-160h]
  unsigned int v77; // [rsp+13Ch] [rbp-158h]
  __int64 v78; // [rsp+144h] [rbp-150h] BYREF
  __int128 v79; // [rsp+14Ch] [rbp-148h]
  __int64 v80; // [rsp+15Ch] [rbp-138h]
  void *ptr; // [rsp+16Ch] [rbp-128h] BYREF
  __int64 v82; // [rsp+174h] [rbp-120h]
  _BYTE v83[280]; // [rsp+17Ch] [rbp-118h] BYREF

  v10 = 1;
  v75 = a1;
  v61[0] = a4;
  v70 = &v72;
  v76 = a4;
  v71 = 0x800000000LL;
  v73 = 0;
  v69 = 0;
  v74 = 0;
  v77 = a2;
  sub_B85890(&v78, a4);
  v79 = 0;
  v80 = 0x101010000LL;
  sub_1A395A0(&v69);
  v11 = a3 + 64;
  if ( !a3 )
    v11 = 0;
  sub_1A48440(a1, &v69, v11, 0);
  if ( (_DWORD)v69 != 5 )
  {
    *(_WORD *)((char *)&v80 + 3) = 0;
    if ( HIDWORD(a8) != 1 )
    {
      v18 = sub_A7A9D0(a1[31], a3, v12, v13, v14, v15);
      if ( sub_199F840((__int64)a1, v18) )
        HIDWORD(a8) = 1;
    }
    ptr = v83;
    v82 = 0x400000000LL;
    sub_19A34B0(&v63, (__int64)a1, (__int64)&v69, (__int64)&a7, a2, (__int64 *)&ptr);
    if ( (_DWORD)v82 == 1 )
    {
      v22 = (__int64 *)ptr;
      v23 = *((_QWORD *)ptr + 1);
      *a5 = v23;
      LOBYTE(v24) = sub_19ADA00(a1, a2, ((unsigned __int64)a2 << 32) | a2, a6, *((__int64 *)&v73 + 1), *v22, v23);
      v16 = (char *)ptr;
      v10 = v24;
      goto LABEL_9;
    }
    if ( (_DWORD)v82 )
    {
      if ( a6 )
      {
        sub_168B9F0((__int64)&v63, a1 + 1, a2, 0xBB3u, 0);
        v19 = sub_17B3DD0((__int64)&v63, v61);
        v20 = v19;
        if ( *(_BYTE *)(v19 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v19 + 32), a3, 0xAu);
        }
        else if ( *(_BYTE *)(v19 + 132) )
        {
          v49 = sub_168B9E0((_QWORD *)v19);
          v50 = *(_QWORD *)(v20 + 16);
          if ( v50 )
            v50 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v50 + 32LL))(*(_QWORD *)(v20 + 16));
          v62 = v50;
          v51 = sub_1587BC0(v49, &v62, v45, v46, v47, v48);
          sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * *(unsigned int *)(v20 + 128) + 8), a3, 0xAu);
        }
        sub_15F7200(&v63);
        v21 = (char *)ptr;
        v16 = (char *)ptr + 56 * (unsigned int)v82;
        if ( ptr == v16 )
        {
          v10 = a6;
LABEL_9:
          if ( v16 != v83 )
            free(v16);
          goto LABEL_11;
        }
        do
        {
          sub_168B9F0((__int64)&v63, a1 + 1, *(_DWORD *)(*((_QWORD *)v21 + 1) + 24LL), 0x17C1u, 0);
          if ( v66 )
          {
            sub_AE9DF0(v65, v61[0], 9u);
          }
          else if ( v68 )
          {
            v35 = sub_168B9E0(&v63);
            v36 = v64;
            if ( v64 )
              v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
            v62 = v36;
            v37 = sub_1587BC0(v35, &v62, v31, v32, v33, v34);
            sub_AE9DF0((unsigned __int8 **)(*v37 + 32LL * v67 + 8), v61[0], 9u);
          }
          v21 += 56;
          sub_15F7200(&v63);
        }
        while ( v21 != v16 );
LABEL_41:
        v16 = (char *)ptr;
        v10 = a6;
        goto LABEL_9;
      }
    }
    else
    {
      if ( !(_DWORD)v71 )
      {
        v16 = (char *)ptr;
        v10 = 0;
        *a5 = 0;
        goto LABEL_9;
      }
      if ( a6 )
      {
        sub_168B9F0((__int64)&v63, a1 + 1, a2, 0x10B9u, 0);
        v25 = sub_17B3DD0((__int64)&v63, v61);
        v26 = v25;
        if ( *(_BYTE *)(v25 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v25 + 32), a3, 0xAu);
        }
        else if ( *(_BYTE *)(v25 + 132) )
        {
          v56 = sub_168B9E0((_QWORD *)v25);
          v57 = *(_QWORD *)(v26 + 16);
          if ( v57 )
            v57 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v57 + 32LL))(*(_QWORD *)(v26 + 16));
          v62 = v57;
          v58 = sub_1587BC0(v56, &v62, v52, v53, v54, v55);
          sub_AE9DF0((unsigned __int8 **)(*v58 + 32LL * *(unsigned int *)(v26 + 128) + 8), a3, 0xAu);
        }
        sub_15F7200(&v63);
        v27 = v70;
        v28 = &v70[(unsigned int)v71];
        if ( v28 != v70 )
        {
          do
          {
            v29 = *v27 & 0xFFFFFFFFFFFFFFF8LL;
            v30 = *(_BYTE *)(v29 + 28) & 0x7F;
            if ( ((v30 + 52) & 0x7Fu) <= 1 || (unsigned int)v30 - 53 <= 1 )
              v29 = sub_B72ED0(*v27 & 0xFFFFFFFFFFFFFFF8LL);
            sub_168B9F0((__int64)&v63, a1 + 1, *(_DWORD *)(v29 + 24), 0x17C1u, 0);
            if ( v66 )
            {
              sub_AE9DF0(v65, v61[0], 9u);
            }
            else if ( v68 )
            {
              v42 = sub_168B9E0(&v63);
              v43 = v64;
              if ( v64 )
                v43 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
              v62 = v43;
              v44 = sub_1587BC0(v42, &v62, v38, v39, v40, v41);
              sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v67 + 8), v61[0], 9u);
            }
            ++v27;
            sub_15F7200(&v63);
          }
          while ( v28 != v27 );
        }
        goto LABEL_41;
      }
    }
    v16 = (char *)ptr;
    v10 = 1;
    goto LABEL_9;
  }
LABEL_11:
  sub_169D230((__int64)&v69);
  return v10;
}
