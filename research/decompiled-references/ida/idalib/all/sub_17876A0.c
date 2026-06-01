__int64 __fastcall sub_17876A0(__int64 a1)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r14
  unsigned __int64 v16; // r13
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  char v20; // al
  char *v21; // r13
  size_t v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 *v39; // r13
  unsigned __int64 v40; // rax
  unsigned __int8 v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // [rsp+8h] [rbp-1D0h]
  __int64 v51; // [rsp+10h] [rbp-1C8h]
  __int64 v52; // [rsp+18h] [rbp-1C0h]
  __int64 v53[2]; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v54; // [rsp+30h] [rbp-1A8h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-198h]
  __int128 v56; // [rsp+50h] [rbp-188h]
  _QWORD v57[2]; // [rsp+60h] [rbp-178h] BYREF
  __int64 v58; // [rsp+70h] [rbp-168h]
  unsigned __int8 *v59[11]; // [rsp+80h] [rbp-158h] BYREF
  char v60; // [rsp+D8h] [rbp-100h]
  unsigned int v61; // [rsp+E0h] [rbp-F8h]
  char v62; // [rsp+E4h] [rbp-F4h]
  __int64 v63; // [rsp+F0h] [rbp-E8h] BYREF
  _QWORD *v64; // [rsp+F8h] [rbp-E0h]
  __int64 v65; // [rsp+100h] [rbp-D8h]
  _OWORD v66[5]; // [rsp+108h] [rbp-D0h] BYREF
  __int64 v67; // [rsp+158h] [rbp-80h]
  __int64 v68; // [rsp+160h] [rbp-78h]
  __int64 v69; // [rsp+168h] [rbp-70h]
  int v70; // [rsp+170h] [rbp-68h]
  __int64 v71; // [rsp+178h] [rbp-60h] BYREF
  __m128i si128; // [rsp+180h] [rbp-58h]
  __int64 v73; // [rsp+190h] [rbp-48h]

  v2 = 1;
  v3 = sub_6F3470(*(_QWORD *)(*(_QWORD *)(a1 + 112) + 240LL) + 552LL, "get_return_object_on_allocation_failure", 0x27u);
  v4 = *(_QWORD *)(a1 + 112);
  v5 = v3;
  LODWORD(v3) = *(_DWORD *)(a1 + 140);
  v64 = v66;
  v68 = v4;
  v65 = 0x800000000LL;
  v66[4] = 0;
  v70 = v3;
  v63 = 0;
  v67 = 0;
  v69 = v5;
  sub_B85890(&v71, v5);
  v73 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA5C0);
  sub_1A395A0(&v63);
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD *)(a1 + 112);
  if ( v6 )
    v6 += 64;
  if ( (unsigned __int8)sub_1A48440(v7, &v63, v6, 0) )
  {
    v10 = *(_QWORD *)(a1 + 112);
    v54 = 0;
    *(_OWORD *)ptr = 0;
    v56 = 0;
    v11 = sub_190B490(v10, &v54, &v63, 0, 0, v8);
    if ( v11 == 1 )
    {
LABEL_20:
      v2 = 0;
      goto LABEL_21;
    }
    v15 = *(_QWORD *)(a1 + 128);
    v16 = v11 & 0xFFFFFFFFFFFFFFFELL;
    v51 = *(_QWORD *)(a1 + 200);
    v50 = *(_QWORD *)(a1 + 112);
    v17 = sub_C00A40(v11 & 0xFFFFFFFFFFFFFFFELL, v51, v12, v13, v14);
    if ( v16 )
    {
      if ( (*(_WORD *)v16 & 0x1FF) == 0x47 )
      {
        v18 = *(_QWORD *)(v16 + 16);
        if ( v18 )
        {
          if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 35 <= 3 )
          {
            v52 = *(_QWORD *)(v16 + 16);
            LOBYTE(v19) = sub_B979F0((_QWORD *)v52);
            v2 = v19;
            if ( (_BYTE)v19 )
            {
              v23 = sub_192A5E0(*(_QWORD *)(a1 + 112), *(_DWORD *)(a1 + 140), 0, 0, 0);
              if ( v23 == 1 )
                goto LABEL_20;
              v24 = sub_1C46CA0(*(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 140), v23 & 0xFFFFFFFFFFFFFFFELL, 0);
              if ( v24 != 1 )
              {
                *(_QWORD *)(a1 + 88) = v24 & 0xFFFFFFFFFFFFFFFELL;
LABEL_21:
                if ( HIDWORD(ptr[1]) )
                  free(ptr[0]);
                goto LABEL_4;
              }
              v39 = (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL);
              v40 = *v64 & 0xFFFFFFFFFFFFFFF8LL;
              v41 = *(_BYTE *)(v40 + 28) & 0x7F;
              if ( (unsigned int)v41 - 53 <= 1 || ((v41 + 52) & 0x7Fu) <= 1 )
                v40 = sub_B72ED0(*v64 & 0xFFFFFFFFFFFFFFF8LL);
              sub_168B9F0((__int64)v57, v39, *(_DWORD *)(v40 + 24), 0x17C1u, 0);
              if ( v60 )
              {
                sub_AE9DF0(v59, v5, 9u);
              }
              else if ( v62 )
              {
                v47 = sub_168B9E0(v57);
                v48 = v58;
                if ( v58 )
                  v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
                v53[0] = v48;
                v49 = sub_1587BC0(v47, v53, v43, v44, v45, v46);
                sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v61 + 8), v5, 9u);
              }
              sub_15F7200(v57);
              sub_168B9F0(
                (__int64)v57,
                (__int64 *)(*(_QWORD *)(a1 + 112) + 8LL),
                *(_DWORD *)(*(_QWORD *)(a1 + 128) + 12LL),
                0x16F0u,
                0);
              v53[0] = (__int64)sub_1783530(*(_QWORD *)(a1 + 128));
              v53[1] = v42;
              sub_166BAF0((__int64)v57, (__int64)v53);
              goto LABEL_19;
            }
            v17 = *(_DWORD *)(v52 + 24);
          }
        }
      }
    }
    sub_168B9F0((__int64)v57, (__int64 *)(v50 + 8), v17, 0xDC6u, 0);
    if ( v60 )
    {
      sub_AE9DF0(v59, v51, 0xAu);
    }
    else if ( v62 )
    {
      v27 = sub_168B9E0(v57);
      v30 = v58;
      if ( v58 )
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
      v53[0] = v30;
      v31 = sub_1587BC0(v27, v53, v25, v26, v28, v29);
      sub_AE9DF0((unsigned __int8 **)(*v31 + 32LL * v61 + 8), v51, 0xAu);
    }
    sub_15F7200(v57);
    sub_168B9F0((__int64)v57, (__int64 *)(v50 + 8), *(_DWORD *)(v15 + 12), 0x16F0u, 0);
    v20 = (*(_BYTE *)(v15 + 10) >> 2) & 3;
    if ( v20 == 1 )
    {
      v21 = "co_await";
      v22 = j__strlen("co_await");
    }
    else if ( v20 )
    {
      v21 = "co_yield";
      v22 = j__strlen("co_yield");
    }
    else
    {
      v21 = "co_return";
      v22 = j__strlen("co_return");
    }
    if ( v60 )
    {
      sub_AEC220(v59, v21, v22);
    }
    else if ( v62 )
    {
      v36 = sub_168B9E0(v57);
      v37 = v58;
      if ( v58 )
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
      v53[0] = v37;
      v38 = sub_1587BC0(v36, v53, v32, v33, v34, v35);
      sub_AEC220((unsigned __int8 **)(*v38 + 32LL * v61 + 8), v21, v22);
    }
LABEL_19:
    sub_15F7200(v57);
    goto LABEL_20;
  }
LABEL_4:
  sub_169D230((__int64)&v63);
  return v2;
}
