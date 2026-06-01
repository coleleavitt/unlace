__int64 __fastcall sub_1775B20(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  char v5; // dl
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  void *v10; // rdx
  __m128 v11; // xmm0
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned int v17; // r15d
  _QWORD *v18; // r9
  _QWORD *v19; // rax
  __int64 result; // rax
  __int64 v21; // rdi
  int v22; // esi
  __int64 v23; // rax
  _QWORD *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 v27; // rsi
  __int32 v28; // r8d
  __int64 v29; // rdx
  char v30; // r13
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 *v41; // r9
  __int32 v42; // r8d
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 *v45; // rbx
  unsigned int v46; // eax
  __int64 v47; // r13
  bool v48; // bl
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  unsigned __int64 v58; // [rsp+8h] [rbp-190h]
  unsigned int v59; // [rsp+8h] [rbp-190h]
  _QWORD *v60; // [rsp+8h] [rbp-190h]
  __int64 v61; // [rsp+8h] [rbp-190h]
  __int64 *v62; // [rsp+8h] [rbp-190h]
  __int64 v63; // [rsp+8h] [rbp-190h]
  unsigned __int64 v64; // [rsp+10h] [rbp-188h]
  __int32 v65; // [rsp+10h] [rbp-188h]
  __int64 *v66; // [rsp+10h] [rbp-188h]
  unsigned __int64 v67; // [rsp+10h] [rbp-188h]
  __int64 *v68; // [rsp+18h] [rbp-180h]
  __int32 v69; // [rsp+18h] [rbp-180h]
  unsigned __int64 v70; // [rsp+20h] [rbp-178h]
  unsigned __int64 v71; // [rsp+20h] [rbp-178h]
  __int32 v72; // [rsp+20h] [rbp-178h]
  __int32 v73; // [rsp+30h] [rbp-168h]
  __int64 v74; // [rsp+30h] [rbp-168h]
  _QWORD *v75; // [rsp+40h] [rbp-158h]
  unsigned __int64 v76; // [rsp+48h] [rbp-150h]
  char v77; // [rsp+57h] [rbp-141h] BYREF
  __int64 v78; // [rsp+58h] [rbp-140h] BYREF
  __int64 v79; // [rsp+60h] [rbp-138h] BYREF
  __int64 v80; // [rsp+68h] [rbp-130h] BYREF
  __int64 v81[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v82; // [rsp+80h] [rbp-118h] BYREF
  unsigned int v83; // [rsp+88h] [rbp-110h]
  unsigned __int64 v84; // [rsp+90h] [rbp-108h] BYREF
  __int128 v85; // [rsp+A0h] [rbp-F8h] BYREF
  void *v86[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v87; // [rsp+C0h] [rbp-D8h]
  __int128 v88; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-B8h]
  __int128 v90; // [rsp+F0h] [rbp-A8h]

  v4 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v4 == 1 )
    return 1;
  v5 = *(_BYTE *)(a2 + 24);
  v6 = *a1;
  v77 = 0;
  v78 = 0;
  v7 = sub_19B0570(
         v6,
         0,
         (unsigned int)v4 & 0xFFFFFFFE,
         *(_DWORD *)(a2 + 28),
         (v5 & 1) == 0 ? 26 : 37,
         (unsigned int)&v78,
         (__int64)&v77);
  if ( v7 == 1 )
    return 1;
  v8 = *(_QWORD *)(a2 + 32);
  v9 = v78;
  v10 = *(void **)(a2 + 40);
  if ( v8 )
  {
    v8 = sub_176EE90(a1, v8, v10, v78, 0);
    if ( !v8 )
      return 1;
  }
  v11 = 0;
  v85 = 0;
  *(_OWORD *)v86 = 0;
  v87 = 0;
  sub_15AB8B0((__int64)&v85, v8, (__int64)v10);
  v12 = *(_QWORD *)(a2 + 64);
  if ( v12 )
  {
    v13 = (v12 >> 2) & 1;
    if ( ((v12 >> 2) & 1) == 0 )
    {
      v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v12 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)v14 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_9;
        v15 = (__int64)sub_176EA10(a1, *(_QWORD *)v14, (const __m128i *)(v14 + 8), v9, 0, (__int64)&v85);
        if ( v15 )
          goto LABEL_9;
        goto LABEL_47;
      }
    }
    v17 = *(_DWORD *)(a2 + 72);
    if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        v16 = 4;
        if ( (v12 & 4) != 0 )
          v16 = v12 & 0xFFFFFFFFFFFFFFF8LL | 4;
LABEL_10:
        v18 = *(_QWORD **)(a2 + 48);
        if ( v18 )
        {
          v11 = 0;
          v88 = 0;
          *(_OWORD *)ptr = 0;
          v90 = 0;
          if ( (*v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v58 = v16;
            v19 = sub_176EA10(a1, *v18, (const __m128i *)(v18 + 1), v9, 0, (__int64)&v88);
            v16 = v58;
            v18 = v19;
            if ( !v19 )
            {
              result = 1;
              if ( HIDWORD(ptr[1]) )
              {
                free(ptr[0]);
                result = 1;
              }
              goto LABEL_48;
            }
            if ( HIDWORD(ptr[1]) )
            {
              v64 = v58;
              v60 = v19;
              free(ptr[0]);
              v16 = v64;
              v18 = v60;
            }
          }
        }
        v26 = v7 & 0xFFFFFFFFFFFFFFFELL;
        v27 = *(unsigned int *)(a2 + 60);
        v28 = *(_DWORD *)(a2 + 56);
        v29 = v16;
        v30 = *(_BYTE *)(a2 + 24) & 1;
        v31 = *(_DWORD *)(a2 + 28);
        v32 = v17;
        v61 = *(_QWORD *)(v26 + 8);
        if ( (*(_DWORD *)v26 & 0x10000) != 0 || v16 && (v16 & 4) != 0 && (v16 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v33 = *a1;
          v34 = v30 == 0 ? 26 : 37;
LABEL_33:
          result = sub_19AA5D0(v33, v26, v31, v34, (unsigned int)&v85, (_DWORD)v18, v28, v27, v29, v32);
          goto LABEL_48;
        }
        v35 = *(_QWORD *)(v61 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v30 )
        {
          v67 = v61 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v35 + 16) != 42 )
          {
            v71 = v16;
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 42 )
              goto LABEL_36;
            v76 = v16;
            v73 = v28;
            v75 = v18;
            v49 = sub_F63050(v35, v27, v16, v17);
            v18 = v75;
            v28 = v73;
            v16 = v76;
            if ( !v49 )
              goto LABEL_36;
            v29 = v71;
            v32 = v17;
            v35 = *(_QWORD *)v67;
            if ( *(_BYTE *)(*(_QWORD *)v67 + 16LL) != 42 )
            {
              v74 = v71;
              v72 = v28;
              v50 = sub_F63050(v35, (unsigned int)v27, v29, v17);
              v29 = v74;
              v32 = v17;
              v35 = v50;
              v16 = v76;
              v28 = v72;
              v18 = v75;
            }
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 48 )
          {
            v33 = *a1;
            v34 = 37;
            goto LABEL_33;
          }
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
        {
          v33 = *a1;
          v34 = 26;
          goto LABEL_33;
        }
LABEL_36:
        if ( !v16 || (v65 = v28, v68 = v18, (v16 & 4) != 0) )
          JUMPOUT(0x2E9544);
        v70 = v16 & 0xFFFFFFFFFFFFFFF8LL;
        v36 = *(_QWORD *)&byte_8[*(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
        v37 = sub_B87700(
                *(_QWORD *)(*a1 + 248) + 17536LL,
                v36 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v36 | *(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
        v83 = v17;
        v38 = v37;
        v82 = v37;
        sub_B85890(&v84, v37);
        v41 = v68;
        v84 = v70;
        if ( v68 )
        {
          v42 = v65;
          v43 = *(_QWORD *)(*v68 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v43 + 16) - 47 > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 47 > 1
              || (v69 = v65, v66 = v41, v44 = sub_F63050(v43, v38, v39, v40), v41 = v66, v42 = v69, !v44) )
            {
              v62 = v41;
              v45 = (__int64 *)(*a1 + 8);
              v81[0] = *v41;
              v81[1] = (__int64)(v41 + 1);
              v46 = sub_F6CCB0(v81, v11);
              sub_168B9F0((__int64)&v88, v45, v46, 0xEA3u, 0);
              v79 = *v62;
              v47 = sub_162B6D0((__int64)&v88, &v79);
              v48 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
              if ( *(_BYTE *)(v47 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v47 + 32), v48, 3u);
              }
              else if ( *(_BYTE *)(v47 + 132) )
              {
                v53 = sub_168B9E0((_QWORD *)v47);
                v56 = *(_QWORD *)(v47 + 16);
                if ( v56 )
                  v56 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v56 + 32LL))(*(_QWORD *)(v47 + 16));
                v80 = v56;
                v57 = sub_1587BC0(v53, &v80, v51, v52, v54, v55);
                sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * *(unsigned int *)(v47 + 128) + 8), v48, 3u);
              }
              sub_15F7200(&v88);
              goto LABEL_47;
            }
          }
          sub_15AB760((__m128i **)&v85, *(_QWORD **)(*a1 + 248), *v41, (__int64)(v41 + 1), v42, v11);
        }
        result = sub_19CC2F0(*a1, v26, v61, v31, v30 & 1, (unsigned int)&v85, 0, 0, (__int64)&v82, 0, 0, 0);
        goto LABEL_48;
      }
      v21 = *a1;
      v13 = (v12 >> 2) & 1;
    }
    else
    {
      v21 = *a1;
    }
    v22 = v12 & 0xFFFFFFF8;
    if ( !v13 )
      v22 = 0;
  }
  else
  {
    v17 = *(_DWORD *)(a2 + 72);
    if ( (v9 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v16 = 4;
      if ( (*(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_10;
    }
    v21 = *a1;
    v22 = 0;
  }
  v23 = sub_19BBC70(v21, v22, v17, 0, (unsigned int)&v85, v78, 0);
  if ( v23 )
  {
    v24 = *(_QWORD **)(*a1 + 248);
    v59 = *(_DWORD *)(a2 + 72);
    v25 = sub_1E5F010(v23, 0);
    v15 = (__int64)sub_A81910(v24, v25, v59);
LABEL_9:
    sub_C93FF0((__int64)&v88, v15);
    v16 = v88;
    v17 = DWORD2(v88);
    goto LABEL_10;
  }
LABEL_47:
  result = 1;
LABEL_48:
  if ( HIDWORD(v86[1]) )
  {
    v63 = result;
    free(v86[0]);
    return v63;
  }
  return result;
}
