unsigned __int64 __fastcall sub_1B44F60(__int64 *a1, __int64 a2, __int64 *a3, __int64 a4, __m128 a5)
{
  void *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r14
  unsigned __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r12d
  unsigned int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // r12
  int v22; // eax
  _BYTE *v23; // rcx
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  int v33; // eax
  unsigned __int64 *v34; // rax
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  __int64 v38; // rdi
  _WORD *v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdi
  void (*v46)(); // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r12
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rax
  _QWORD *v60; // rax
  unsigned __int64 *v61; // rax
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  int v65; // eax
  void *v66; // [rsp-8h] [rbp-180h]
  __int64 *v67; // [rsp+8h] [rbp-170h]
  unsigned int v68; // [rsp+24h] [rbp-154h]
  __int64 v69; // [rsp+30h] [rbp-148h]
  __int64 v70; // [rsp+30h] [rbp-148h]
  __int64 v71; // [rsp+30h] [rbp-148h]
  __int64 v72; // [rsp+38h] [rbp-140h]
  __int64 v73; // [rsp+40h] [rbp-138h] BYREF
  __int64 v74; // [rsp+48h] [rbp-130h] BYREF
  __int64 v75[2]; // [rsp+50h] [rbp-128h] BYREF
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __int64 v77; // [rsp+68h] [rbp-110h]
  _BYTE v78[64]; // [rsp+70h] [rbp-108h] BYREF
  __int64 v79[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v81; // [rsp+D0h] [rbp-A8h] BYREF
  char v82; // [rsp+128h] [rbp-50h]
  unsigned int v83; // [rsp+130h] [rbp-48h]
  char v84; // [rsp+134h] [rbp-44h]

  v68 = a2;
  v11 = (_QWORD *)sub_168B6C0((__int64)a1);
  ptr = v78;
  v77 = 0x800000000LL;
  v67 = &a3[a4];
  if ( a3 == v67 )
    return 0;
  do
  {
    while ( 1 )
    {
      v14 = *a3;
      v16 = *a3;
      v73 = *(_QWORD *)(*a3 + 16);
      v15 = v73;
      v17 = sub_C00A40(v16, a2, (__int64)v8, v9, v10);
      *(_BYTE *)(v15 + 29) |= 8u;
      a2 = (__int64)v11;
      v18 = v17;
      sub_B8C4D0(v15, (__int64)v11);
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v73 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 6) != 0 )
      {
        v12 = (unsigned int)v77;
        v9 = HIDWORD(v77);
        v13 = (unsigned int)v77 + 1LL;
        if ( v13 > HIDWORD(v77) )
        {
          a2 = (__int64)v78;
          sub_2237220(&ptr, v78, v13, 8);
          v12 = (unsigned int)v77;
        }
        v8 = ptr;
        *((_QWORD *)ptr + v12) = v14;
        LODWORD(v77) = v77 + 1;
        goto LABEL_6;
      }
      a2 = v18;
      if ( !(unsigned __int8)sub_1E63CF0(*a1, v18, *(_QWORD *)(v73 + 48), 1, 4626) )
        break;
LABEL_6:
      if ( v67 == ++a3 )
        goto LABEL_15;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 > 1 )
    {
      if ( (unsigned int)sub_B73370(v73) )
      {
        if ( (*(_BYTE *)(v73 + 29) & 1) == 0 )
        {
LABEL_24:
          sub_168B9F0((__int64)v79, a1, v18, 0x1222u, 0);
          v32 = sub_17B9080((__int64)v79, &v73);
          LODWORD(v75[0]) = sub_B73370(v73) == 0;
          sub_1587D10(v32, (int *)v75);
          sub_15F7200(v79);
          v33 = sub_B74100(v73, (__int64)v11);
          sub_168B9F0((__int64)v79, a1, *(_DWORD *)(v73 + 24), v33 == 0 ? 6283 : 5899, 0);
          a2 = (__int64)&v73;
          sub_17B9080((__int64)v79, &v73);
          sub_15F7200(v79);
          goto LABEL_6;
        }
        v34 = sub_B8C3D0(v73, v18, v28, v29, v30, v31);
        v35 = *v34;
        v36 = *v34 + 8LL * *((unsigned int *)v34 + 2);
        if ( *v34 >= v36 )
        {
          if ( v35 == v36 )
            goto LABEL_24;
          while ( *(_WORD *)(*(_QWORD *)v36 + 36LL) != 297 )
          {
            v36 += 8LL;
            if ( v35 == v36 )
              goto LABEL_24;
          }
        }
        else
        {
          v37 = *v34;
          while ( *(_WORD *)(*(_QWORD *)v37 + 36LL) != 297 )
          {
            v37 += 8LL;
            if ( v36 == v37 )
              goto LABEL_24;
          }
          if ( v36 == v37 )
            goto LABEL_24;
        }
        if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 68) & 4) == 0
          || !*(_BYTE *)(*(_QWORD *)(sub_168B6C0((__int64)a1) + 17448) + 273LL) )
        {
          goto LABEL_24;
        }
      }
      v38 = v73;
      if ( (*(_BYTE *)(v73 + 96) & 7) != 5 || (*(_BYTE *)(v73 + 29) & 1) == 0 )
        goto LABEL_34;
      v61 = sub_B8C3D0(v73, v18, v28, v29, v30, v31);
      v62 = *v61;
      v63 = *v61 + 8LL * *((unsigned int *)v61 + 2);
      if ( *v61 >= v63 )
      {
        v38 = v73;
        if ( v62 == v63 )
          goto LABEL_34;
        while ( *(_WORD *)(*(_QWORD *)v63 + 36LL) != 139 )
        {
          v63 += 8LL;
          if ( v62 == v63 )
            goto LABEL_34;
        }
      }
      else
      {
        v64 = *v61;
        while ( *(_WORD *)(*(_QWORD *)v64 + 36LL) != 139 )
        {
          v64 += 8LL;
          if ( v63 == v64 )
            goto LABEL_51;
        }
        v38 = v73;
        if ( v63 == v64 )
          goto LABEL_34;
      }
      v65 = *(_BYTE *)(v38 + 28) & 0x7F;
      if ( (v65 == 40 || v65 == 46) && sub_1AE8710(v38) )
      {
LABEL_51:
        v38 = v73;
LABEL_34:
        v39 = (_WORD *)sub_B7D120(v38, v79);
        if ( !v39 || (a2 = (__int64)v39, v79[0] = *a1, !(unsigned __int8)sub_1B13100((__int64)v79, v39, a5)) )
        {
          sub_14B7B40((__int64)&ptr, v14);
          sub_1AEF810(a1[1], v73, v14, 0x64u, 0, 0, 0);
          v40 = v73;
          a2 = sub_B314D0((__int64)v11, ((unsigned __int64)v68 << 32) | v68);
          sub_B8CC60(v40, a2, v41, v42, v43, v44);
          v45 = v11[2296];
          v8 = v66;
          if ( v45 )
          {
            a2 = (__int64)nullsub_446;
            v46 = *(void (**)())(*(_QWORD *)v45 + 152LL);
            if ( v46 != nullsub_446 )
            {
              a2 = v73;
              ((void (__fastcall *)(__int64, __int64))v46)(v45, v73);
            }
          }
        }
        goto LABEL_6;
      }
      goto LABEL_24;
    }
    v19 = *(_DWORD *)(sub_168B6E0((__int64)a1) + 64);
    sub_168B9F0((__int64)v79, a1, v18, 0x11F5u, 0);
    v75[0] = sub_20EAB70(101, v19);
    v75[1] = v20;
    v21 = sub_166BAF0((__int64)v79, (__int64)v75);
    if ( *(_BYTE *)(v21 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v21 + 32), *(_QWORD *)(v73 + 48), 8u);
    }
    else if ( *(_BYTE *)(v21 + 132) )
    {
      v69 = *(_QWORD *)(v73 + 48);
      v54 = sub_168B9E0((_QWORD *)v21);
      v57 = v69;
      v58 = v54;
      v59 = *(_QWORD *)(v21 + 16);
      if ( v59 )
      {
        v72 = v69;
        v70 = v58;
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 32LL))(v59);
        v57 = v72;
        v58 = v70;
      }
      v71 = v57;
      v74 = v59;
      v60 = sub_1587BC0(v58, &v74, v58, v57, v55, v56);
      sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * *(unsigned int *)(v21 + 128) + 8), v71, 8u);
    }
    sub_15F7200(v79);
    v22 = sub_B74100(v73, (__int64)v11);
    a2 = (__int64)a1;
    sub_168B9F0((__int64)v79, a1, *(_DWORD *)(v73 + 24), v22 == 0 ? 6283 : 5899, 0);
    if ( v82 )
    {
      a2 = v73;
      sub_AE9DF0(&v81, v73, 0xAu);
    }
    else if ( v84 )
    {
      v51 = sub_168B9E0(v79);
      v52 = v80;
      if ( v80 )
        v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 32LL))(v80);
      v75[0] = v52;
      v53 = sub_1587BC0(v51, v75, v47, v48, v49, v50);
      a2 = v73;
      sub_AE9DF0((unsigned __int8 **)(*v53 + 32LL * v83 + 8), v73, 0xAu);
    }
    ++a3;
    sub_15F7200(v79);
  }
  while ( v67 != a3 );
LABEL_15:
  v23 = ptr;
  if ( (_DWORD)v77 )
  {
    v24 = *(_QWORD *)(*a1 + 3032);
    if ( !v24 )
      v24 = *(_QWORD *)(*a1 + 544);
    v25 = sub_BB1960(v11, v24, v68, ptr, (unsigned int)v77);
    *(_BYTE *)(v25 + 29) &= 0x9Fu;
    v23 = ptr;
    v26 = v25;
  }
  else
  {
    v26 = 0;
  }
  if ( v23 != v78 )
    free(v23);
  return v26;
}
