unsigned __int16 *__fastcall sub_19D7F10(__int64 *a1, __int64 a2, unsigned __int64 a3, __m128 a4, __m128 a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // r14
  char v31; // al
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // r15
  unsigned __int16 v39; // ax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int64 v49; // rbp
  __int64 v50; // r12
  int v51; // eax
  unsigned __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  unsigned int v55; // eax
  unsigned __int64 v56; // r15
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 *v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // r14
  size_t v62; // rax
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rax
  __int64 v65; // r8
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rax
  size_t v74; // rax
  __int64 v75; // rsi
  __int64 v76; // r8
  __int64 v77; // r14
  size_t v78; // rax
  __int64 v79; // r14
  size_t v80; // rax
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // r14
  unsigned __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  size_t v89; // rax
  __int64 v90; // rax
  __int64 v91; // r10
  __int64 v92; // rax
  size_t v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // [rsp+0h] [rbp-118h]
  __int64 v97; // [rsp+0h] [rbp-118h]
  __int64 v98; // [rsp+0h] [rbp-118h]
  unsigned __int64 v99; // [rsp+8h] [rbp-110h]
  __int64 v100; // [rsp+8h] [rbp-110h]
  __int64 v101; // [rsp+8h] [rbp-110h]
  __int64 v102; // [rsp+10h] [rbp-108h]
  unsigned __int64 v103; // [rsp+10h] [rbp-108h]
  __int64 v104; // [rsp+18h] [rbp-100h]
  unsigned int v105; // [rsp+2Ch] [rbp-ECh] BYREF
  __int64 v106; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v107; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v108[2]; // [rsp+40h] [rbp-D8h] BYREF
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v110; // [rsp+58h] [rbp-C0h]
  __int64 v111; // [rsp+60h] [rbp-B8h] BYREF
  int v112; // [rsp+68h] [rbp-B0h]
  __int64 v113; // [rsp+70h] [rbp-A8h]

  v8 = sub_168B6C0((__int64)a1);
  v12 = v8;
  if ( (*(_DWORD *)a3 & 0x10000) != 0 )
  {
    v13 = *(_QWORD *)(v8 + 19072);
LABEL_3:
    v14 = sub_EEE9A0(40, (_QWORD *)v12, 8u);
    *(_WORD *)v14 = *(_WORD *)v14 & 0xFE00 | 0x27;
    if ( unk_2CD7484 )
      sub_EE9B50(39);
    *(_WORD *)(v14 + 1) &= 0xF801u;
    *(_QWORD *)(v14 + 8) = v13;
    *(_QWORD *)(v14 + 16) = a3;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = a2;
    v15 = sub_B63990(v14);
    *(_BYTE *)(v14 + 1) = (v15 << 6) | *(_BYTE *)(v14 + 1) & 0x3F;
    *(_BYTE *)(v14 + 2) = *(_BYTE *)(v14 + 2) & 0xF8 | (v15 >> 2) & 7;
    return (unsigned __int16 *)v14;
  }
  v17 = a3;
  v18 = sub_19179A0(*a1, (_QWORD *)a3, 1u, v9, v10, v11, a4, a5);
  if ( v18 == 1 )
    return (_WORD *)(&dword_0 + 1);
  v105 = a2;
  a3 = v18 & 0xFFFFFFFFFFFFFFFELL;
  v106 = *(_QWORD *)((v18 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v23 = *(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v23 + 16) == 42 )
    goto LABEL_8;
  v30 = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v31 = *(_BYTE *)(v30 + 16);
  if ( v31 != 42 )
  {
LABEL_16:
    if ( v31 == 13 )
    {
      v58 = sub_BFB9F0(a3);
      if ( (*(_WORD *)v58 & 0x1FF) == 0x4E )
      {
        switch ( (*(_BYTE *)(v58 + 2) >> 3) & 7 )
        {
          case 0:
          case 2:
            v106 = *(_QWORD *)(v12 + 18648);
            break;
          case 1:
            v106 = *(_QWORD *)(v12 + 18664);
            break;
          case 3:
            v106 = *(_QWORD *)(v12 + 18688);
            break;
          case 4:
            v106 = *(_QWORD *)(v12 + 18696);
            break;
          default:
            break;
        }
      }
      v59 = (__int64 *)v106;
      goto LABEL_48;
    }
    if ( v31 != 47 )
    {
      if ( !sub_F616E0(v23, v17, v19, v20, v21, v22) )
        goto LABEL_9;
      if ( !a1[13] )
      {
        v83 = sub_19D76D0((__int64 *)*a1, v105, 3u);
        a1[13] = v83;
        if ( !v83 )
          return (_WORD *)(&dword_0 + 1);
        v87 = sub_A82070(v12, v83, 0, v84, v85, v86);
        a1[15] = sub_A74EC0(v12, v87);
      }
      if ( !a1[34] )
      {
        v77 = *(_QWORD *)(v12 + 17504);
        v78 = j__strlen("valueWithBytes");
        v108[0] = sub_6F3470(v77, "valueWithBytes", v78);
        v79 = *(_QWORD *)(v12 + 17504);
        v80 = j__strlen("objCType");
        v108[1] = sub_6F3470(v79, "objCType", v80);
        v81 = sub_FE3230(*(_QWORD **)(v12 + 17512), 2u, (unsigned __int64 *)v108);
        v82 = sub_BAD910(a1[13], v81, 0, 0, 1, 0);
        if ( !v82 && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 106) & 1) != 0 )
        {
          v88 = a1[13];
          if ( v88 )
            v88 += 48;
          v82 = sub_BA7B60((_QWORD *)v12, 0, 0, v81, a1[15], 0, v88, 0, 0, 0, 0, 1, 0, 1, 0);
          ptr = &v111;
          v110 = 0x200000000LL;
          v102 = *(_QWORD *)(v12 + 19056) | 1LL;
          v100 = *(_QWORD *)(v12 + 17504);
          v89 = j__strlen("bytes");
          v90 = sub_6F3470(v100, "bytes", v89);
          if ( v82 )
            v91 = v82 + 48;
          else
            v91 = 0;
          v104 = v91;
          v92 = sub_B74530(v12, v91, 0, 0, v90, v102, 0, 0, 0);
          sub_19D1980((__int64)&ptr, v92);
          v103 = sub_A70010(v12, *(_QWORD *)(v12 + 18648) | 1LL);
          v101 = *(_QWORD *)(v12 + 17504);
          v93 = j__strlen("type");
          v94 = sub_6F3470(v101, "type", v93);
          v95 = sub_B74530(v12, v104, 0, 0, v94, v103, 0, 0, 0);
          sub_19D1980((__int64)&ptr, v95);
          sub_BA9CC0(v82, v12, ptr, (unsigned int)v110, 0, 0);
          if ( ptr != &v111 )
            free(ptr);
        }
        if ( !(unsigned __int8)sub_19D4020(*a1, v105, a1[13], v81, v82) )
          return (_WORD *)(&dword_0 + 1);
        a1[34] = v82;
      }
      if ( !sub_F62A70(&v106, v12) )
      {
        sub_168B9F0((__int64)&ptr, a1, v105, 0x1111u, 0);
        goto LABEL_11;
      }
      v37 = a1[34];
      v38 = a1[15];
      goto LABEL_39;
    }
    v32 = sub_F60F10(v30, v17, v19, v20, v21, v22);
    if ( (*((_BYTE *)v32 + 74) & 1) == 0 && (v32[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v28 = 4360;
      goto LABEL_10;
    }
    v64 = sub_F60F10(v30, v17, v33, v34, v35, v36)[16];
    v59 = (__int64 *)(v64 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v64 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      if ( (v64 & 4) == 0 )
      {
LABEL_57:
        v59 = (__int64 *)(v64 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_48;
      }
      v70 = *v59;
      v71 = *(_QWORD *)(*v59 & 0xFFFFFFFFFFFFFFF0LL);
      v72 = *(_QWORD *)(v71 + 8) & 7LL | (*(__int64 *)(v71 + 8) >> 3) & 1;
      if ( v72 )
      {
        v64 = sub_F64F00(v70, v17, v71, v72, v65);
        goto LABEL_57;
      }
      v59 = (__int64 *)(v71 & 0xFFFFFFFFFFFFFFF0LL);
    }
LABEL_48:
    v60 = sub_19D78D0(a1, v105, (__int64)v59, 0, 0);
    v38 = a1[14];
    v37 = v60;
LABEL_39:
    if ( !v37 )
      goto LABEL_9;
    goto LABEL_27;
  }
  v23 = sub_F63050(v23, v17, v19, v20);
  if ( !v23 )
  {
    v23 = *(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL);
    v30 = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v31 = *(_BYTE *)(v30 + 16);
    goto LABEL_16;
  }
LABEL_8:
  v24 = *(_QWORD *)(v12 + 18648);
  if ( !sub_19CD5D0(*(_QWORD *)(v23 + 32), v24) )
  {
LABEL_9:
    v28 = 4359;
LABEL_10:
    sub_168B9F0((__int64)&ptr, a1, v105, v28, 0);
LABEL_11:
    v29 = sub_1605D30((__int64)&ptr, &v106);
    v108[0] = sub_EEC8C0(a3, (__int64)&v106, *(double *)a4.m128_u64);
    sub_1587DB0(v29, v108);
    sub_15F7200(&ptr);
    return (_WORD *)(&dword_0 + 1);
  }
  if ( !a1[31] )
  {
    v66 = sub_19D76D0((__int64 *)*a1, v105, 4u);
    a1[31] = v66;
    if ( !v66 )
      return (_WORD *)(&dword_0 + 1);
    v24 = sub_A82070(v12, v66, 0, v67, v68, v69);
    a1[32] = sub_A74EC0(v12, v24);
  }
  if ( (*(_WORD *)a3 & 0x1FF) == 0x4F && ((*(_WORD *)(a3 + 2) >> 3) & 0x7F) == 0xB )
  {
    v56 = sub_BFB9F0(*(_QWORD *)(a3 + 16));
    if ( (*(_WORD *)v56 & 0x1FF) == 9 )
    {
      v57 = *(_DWORD *)(v56 + 16) * ((*(_WORD *)(v56 + 2) >> 6) & 7u);
      v107 = v56 + 4LL * *(unsigned int *)(v56 + 4) + 20;
      if ( (unsigned __int8)sub_22189B0(&v107, v107 + v57) )
      {
        v13 = sub_A719E0(v12, 0, a1[32], a1[32]);
        goto LABEL_3;
      }
      sub_168B9F0((__int64)&ptr, a1, *(_DWORD *)(v56 + 20), 0x1C06u, 0);
      v97 = sub_1605D30((__int64)&ptr, a1 + 32);
      v24 = (unsigned __int64)v108;
      v108[0] = sub_EEC8C0(v56, (__int64)(a1 + 32), *(double *)a4.m128_u64);
      sub_1587DB0(v97, v108);
      sub_15F7200(&ptr);
    }
  }
  v37 = a1[33];
  if ( !v37 )
  {
    v61 = *(_QWORD *)(v12 + 17504);
    v62 = j__strlen("stringWithUTF8String");
    v63 = sub_6F3470(v61, "stringWithUTF8String", v62) & 0xFFFFFFFFFFFFFFF8LL | 2;
    v37 = sub_BAD910(a1[31], v63, 0, 0, 1, 0);
    if ( !v37 && (*(_BYTE *)(sub_168B6E0((__int64)a1) + 106) & 1) != 0 )
    {
      v73 = a1[31];
      if ( v73 )
        v73 += 48;
      v37 = sub_BA7B60((_QWORD *)v12, 0, 0, v63, a1[32], 0, v73, 0, 0, 0, 0, 1, 0, 1, 0);
      v99 = sub_A70010(v12, *(_QWORD *)(v12 + 18648) | 1LL);
      v98 = *(_QWORD *)(v12 + 17504);
      v74 = j__strlen("value");
      v75 = v37 + 48;
      v76 = sub_6F3470(v98, "value", v74);
      if ( !v37 )
        v75 = 0;
      ptr = (void *)sub_B74530(v12, v75, 0, 0, v76, v99, 0, 0, 0);
      sub_BA9CC0(v37, v12, &ptr, 1, 0, 0);
    }
    v24 = v105;
    if ( !(unsigned __int8)sub_19D4020(*a1, v105, a1[31], v63, v37) )
      return (_WORD *)(&dword_0 + 1);
    a1[33] = v37;
  }
  v38 = a1[32];
  v39 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(v37 + 80) & 0xFFFFFFFFFFFFFFF0LL), v24, v25, v26, v27);
  if ( HIBYTE(v39) )
    v38 = sub_A719E0(v12, v39, v38, v38);
LABEL_27:
  sub_18F5260(*a1, v37, (int *)&v105, 1u, 0, 0, (__m128i)a4, *(double *)a5.m128_u64, 0, 0, 0);
  if ( sub_F616E0(*(_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF0LL), v37, v40, v41, v42, v43) )
  {
    LODWORD(ptr) = 9;
    v110 = 0;
    v111 = v106;
    v54 = *a1;
    v112 = 0;
    v113 = 0;
    v96 = v54;
    v55 = sub_C00A40(a3, v37, v44, v45, v46);
    v48 = sub_1A24E20(v96, &ptr, v55, a3, 0, 0);
  }
  else
  {
    sub_19CF970(
      (__int64)&ptr,
      (_QWORD *)v12,
      **(_QWORD **)(v37 + 96),
      *(_QWORD *)(**(_QWORD **)(v37 + 96) + 48LL),
      v46,
      v47);
    v48 = sub_1A24E20(*a1, &ptr, 0, a3, 0, 0);
  }
  if ( v48 == 1 )
    return (_WORD *)(&dword_0 + 1);
  v49 = v48 & 0xFFFFFFFFFFFFFFFELL;
  v50 = sub_EEE9A0(40, (_QWORD *)v12, 8u);
  *(_WORD *)v50 = *(_WORD *)v50 & 0xFE00 | 0x27;
  if ( unk_2CD7484 )
    sub_EE9B50(39);
  *(_WORD *)(v50 + 1) &= 0xF801u;
  *(_QWORD *)(v50 + 8) = v38;
  *(_QWORD *)(v50 + 16) = v49;
  *(_QWORD *)(v50 + 24) = v37;
  *(_QWORD *)(v50 + 32) = a2;
  v51 = sub_B63990(v50);
  *(_BYTE *)(v50 + 1) = ((_BYTE)v51 << 6) | *(_BYTE *)(v50 + 1) & 0x3F;
  v52 = *(_BYTE *)(v50 + 2) & 0xF8;
  *(_BYTE *)(v50 + 2) = *(_BYTE *)(v50 + 2) & 0xF8 | ((unsigned __int8)v51 >> 2) & 7;
  return sub_19A3E40(*a1, (unsigned __int16 *)v50, v52, (unsigned int)(v51 << 6), v53, a4, a5);
}
