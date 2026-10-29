__int64 __fastcall sub_1992E90(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v6; // rax
  char v7; // dl
  int v8; // ecx
  __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // r13
  void *v12; // rdx
  __m128 v13; // xmm0
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  unsigned int v19; // r15d
  _QWORD *v20; // r9
  _QWORD *v21; // rax
  __int64 result; // rax
  __int64 v23; // rdi
  int v24; // esi
  __int64 v25; // rax
  _QWORD *v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  __int64 v29; // rsi
  __int32 v30; // r8d
  __int64 v31; // rdx
  char v32; // r13
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 *v43; // r9
  __int32 v44; // r8d
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 *v47; // r12
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+8h] [rbp-190h]
  unsigned int v53; // [rsp+8h] [rbp-190h]
  _QWORD *v54; // [rsp+8h] [rbp-190h]
  __int64 v55; // [rsp+8h] [rbp-190h]
  __int64 *v56; // [rsp+8h] [rbp-190h]
  __int64 v57; // [rsp+8h] [rbp-190h]
  unsigned __int64 v58; // [rsp+10h] [rbp-188h]
  __int32 v59; // [rsp+10h] [rbp-188h]
  __int64 *v60; // [rsp+10h] [rbp-188h]
  unsigned __int64 v61; // [rsp+10h] [rbp-188h]
  __int64 *v62; // [rsp+18h] [rbp-180h]
  __int32 v63; // [rsp+18h] [rbp-180h]
  _QWORD *v64; // [rsp+18h] [rbp-180h]
  unsigned __int64 v65; // [rsp+20h] [rbp-178h]
  __int32 v66; // [rsp+28h] [rbp-170h]
  unsigned __int64 v67; // [rsp+30h] [rbp-168h]
  unsigned __int64 v68; // [rsp+40h] [rbp-158h]
  char v69; // [rsp+5Bh] [rbp-13Dh] BYREF
  _BOOL4 v70; // [rsp+5Ch] [rbp-13Ch] BYREF
  __int64 v71; // [rsp+60h] [rbp-138h] BYREF
  __int64 v72; // [rsp+68h] [rbp-130h] BYREF
  __int64 v73[2]; // [rsp+70h] [rbp-128h] BYREF
  __int64 v74; // [rsp+80h] [rbp-118h] BYREF
  unsigned int v75; // [rsp+88h] [rbp-110h]
  unsigned __int64 v76; // [rsp+90h] [rbp-108h] BYREF
  __int128 v77; // [rsp+A0h] [rbp-F8h] BYREF
  void *v78[2]; // [rsp+B0h] [rbp-E8h]
  __int128 v79; // [rsp+C0h] [rbp-D8h]
  __int128 v80; // [rsp+D0h] [rbp-C8h] BYREF
  void *ptr[2]; // [rsp+E0h] [rbp-B8h]
  __int128 v82; // [rsp+F0h] [rbp-A8h]

  v6 = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v6 == 1 )
    return 1;
  v7 = *(_BYTE *)(a2 + 24);
  v8 = *(_DWORD *)(a2 + 28);
  v69 = 0;
  v71 = 0;
  v9 = sub_19B0570(
         *a1,
         0,
         (unsigned int)v6 & 0xFFFFFFFE,
         v8,
         (v7 & 1) == 0 ? 26 : 37,
         (unsigned int)&v71,
         (__int64)&v69);
  if ( v9 == 1 )
    return 1;
  v10 = *(_QWORD *)(a2 + 32);
  v11 = v71;
  v12 = *(void **)(a2 + 40);
  if ( v10 )
  {
    v10 = sub_198CB00((__int64)a1, v10, v12, v71, 0);
    if ( !v10 )
      return 1;
  }
  v13 = 0;
  v77 = 0;
  *(_OWORD *)v78 = 0;
  v79 = 0;
  sub_15AB8B0((__int64)&v77, v10, (__int64)v12);
  v14 = *(_QWORD *)(a2 + 64);
  if ( v14 )
  {
    v15 = (v14 >> 2) & 1;
    if ( ((v14 >> 2) & 1) == 0 )
    {
      v16 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      {
        v17 = v14 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)v16 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
        {
          v17 = (__int64)sub_198C690(a1, *(_QWORD *)v16, (__m128i *)(v16 + 8), v11, 0, (__int64)&v77, 0.0, a4);
          if ( !v17 )
            goto LABEL_45;
        }
        goto LABEL_9;
      }
    }
    v19 = *(_DWORD *)(a2 + 72);
    if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      {
        v18 = 4;
        if ( (v14 & 4) != 0 )
          v18 = v14 & 0xFFFFFFFFFFFFFFF8LL | 4;
LABEL_10:
        v20 = *(_QWORD **)(a2 + 48);
        if ( v20 )
        {
          v13 = 0;
          v80 = 0;
          *(_OWORD *)ptr = 0;
          v82 = 0;
          if ( (*v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v52 = v18;
            v21 = sub_198C690(a1, *v20, (__m128i *)(v20 + 1), v11, 0, (__int64)&v80, 0.0, a4);
            v18 = v52;
            v20 = v21;
            if ( !v21 )
            {
              result = 1;
              if ( HIDWORD(ptr[1]) )
              {
                free(ptr[0]);
                result = 1;
              }
              goto LABEL_46;
            }
            if ( HIDWORD(ptr[1]) )
            {
              v58 = v52;
              v54 = v21;
              free(ptr[0]);
              v18 = v58;
              v20 = v54;
            }
          }
        }
        v28 = v9 & 0xFFFFFFFFFFFFFFFELL;
        v29 = *(unsigned int *)(a2 + 60);
        v30 = *(_DWORD *)(a2 + 56);
        v31 = v18;
        v32 = *(_BYTE *)(a2 + 24) & 1;
        v33 = *(_DWORD *)(a2 + 28);
        v34 = v19;
        v55 = *(_QWORD *)(v28 + 8);
        if ( (*(_DWORD *)v28 & 0x10000) != 0 || v18 && (v18 & 4) != 0 && (v18 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v35 = *a1;
          v36 = v32 == 0 ? 26 : 37;
LABEL_33:
          result = sub_19AA5D0(v35, v28, v33, v36, (unsigned int)&v77, (_DWORD)v20, v30, v29, v31, v34);
          goto LABEL_46;
        }
        v37 = *(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL);
        if ( v32 )
        {
          v61 = v55 & 0xFFFFFFFFFFFFFFF0LL;
          if ( *(_BYTE *)(v37 + 16) != 42 )
          {
            v68 = v18;
            v67 = v18;
            v66 = v30;
            v64 = v20;
            v50 = sub_18BBDD0(v37, v29, v18, v19);
            v20 = v64;
            v30 = v66;
            v18 = v67;
            v31 = v68;
            v34 = v19;
            if ( !v50 )
              goto LABEL_36;
            v37 = *(_QWORD *)v61;
            if ( *(_BYTE *)(*(_QWORD *)v61 + 16LL) != 42 )
            {
              v51 = sub_F63050(v37, (unsigned int)v29, v68, v19);
              v31 = v68;
              v34 = v19;
              v37 = v51;
              v18 = v67;
              v30 = v66;
              v20 = v64;
            }
          }
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                    & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 48 )
          {
            v35 = *a1;
            v36 = 37;
            goto LABEL_33;
          }
        }
        else if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
        {
          v35 = *a1;
          v36 = 26;
          goto LABEL_33;
        }
LABEL_36:
        if ( !v18 || (v59 = v30, v62 = v20, (v18 & 4) != 0) )
          BUG();
        v65 = v18 & 0xFFFFFFFFFFFFFFF8LL;
        v38 = *(_QWORD *)&byte_8[*(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL) & 0xFFFFFFFFFFFFFFF0LL];
        v39 = sub_B87700(
                *(_QWORD *)(*a1 + 248) + 17536LL,
                v38 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v38 | *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFF8LL)) & 7);
        v75 = v19;
        v40 = v39;
        v74 = v39;
        sub_B85890(&v76, v39);
        v43 = v62;
        v76 = v65;
        if ( v62 )
        {
          v44 = v59;
          v45 = *(_QWORD *)(*v62 & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v45 + 16) - 47 > 1 )
          {
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
               - 47 > 1
              || (v63 = v59, v60 = v43, v46 = sub_F63050(v45, v40, v41, v42), v43 = v60, v44 = v63, !v46) )
            {
              v56 = v43;
              v47 = (__int64 *)(*a1 + 8);
              v73[0] = *v43;
              v73[1] = (__int64)(v43 + 1);
              v48 = sub_F6CCB0(v73, v13);
              sub_168B9F0((__int64)&v80, v47, v48, 0xEA3u, 0);
              v72 = *v56;
              v49 = sub_162B6D0((__int64)&v80, &v72);
              v70 = (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 8) != 0;
              sub_1588370(v49, (unsigned int *)&v70);
              sub_15F7200(&v80);
              goto LABEL_45;
            }
          }
          sub_15AB760((__m128i **)&v77, *(_QWORD **)(*a1 + 248), *v43, (__int64)(v43 + 1), v44, v13);
        }
        result = sub_19CC2F0(*a1, v28, v55, v33, v32 & 1, (unsigned int)&v77, 0, 0, (__int64)&v74, 0, 0, 0);
        goto LABEL_46;
      }
      v23 = *a1;
      v15 = (v14 >> 2) & 1;
    }
    else
    {
      v23 = *a1;
    }
    v24 = v14 & 0xFFFFFFF8;
    if ( !v15 )
      v24 = 0;
  }
  else
  {
    v19 = *(_DWORD *)(a2 + 72);
    if ( (v11 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v18 = 4;
      if ( (*(_BYTE *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
        goto LABEL_10;
    }
    v23 = *a1;
    v24 = 0;
  }
  v25 = sub_19BBC70(v23, v24, v19, 0, (unsigned int)&v77, v71, 0);
  if ( v25 )
  {
    v26 = *(_QWORD **)(*a1 + 248);
    v53 = *(_DWORD *)(a2 + 72);
    v27 = sub_1E5F010(v25, 0);
    v17 = (__int64)sub_A81910(v26, v27, v53);
LABEL_9:
    sub_C93FF0((__int64)&v80, v17);
    v18 = v80;
    v19 = DWORD2(v80);
    goto LABEL_10;
  }
LABEL_45:
  result = 1;
LABEL_46:
  if ( HIDWORD(v78[1]) )
  {
    v57 = result;
    free(v78[0]);
    return v57;
  }
  return result;
}
