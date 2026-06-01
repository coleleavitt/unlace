unsigned __int16 *__fastcall sub_19DC180(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __m128 a5, __m128 a6)
{
  _QWORD *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rbp
  _QWORD **v19; // r15
  __int64 v20; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 *v24; // rbp
  unsigned __int16 *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  _QWORD *v45; // rax
  size_t v46; // rax
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rax
  size_t v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v64; // [rsp+8h] [rbp-120h]
  __int64 v65; // [rsp+10h] [rbp-118h]
  __int64 v66; // [rsp+10h] [rbp-118h]
  unsigned __int64 v67; // [rsp+18h] [rbp-110h]
  __int64 v68; // [rsp+18h] [rbp-110h]
  __int64 v69; // [rsp+20h] [rbp-108h]
  int v70; // [rsp+3Ch] [rbp-ECh] BYREF
  __int64 v71; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v74; // [rsp+58h] [rbp-D0h] BYREF
  void *ptr; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+68h] [rbp-C0h]
  _BYTE v77[184]; // [rsp+70h] [rbp-B8h] BYREF

  v64 = a2;
  v8 = (_QWORD *)sub_168B6C0(a1);
  if ( !*(_QWORD *)(a1 + 280) )
  {
    a2 = (unsigned int)a2;
    v29 = sub_19D76D0(*(__int64 **)a1, v64, 0);
    *(_QWORD *)(a1 + 280) = v29;
    if ( !v29 )
      return (_WORD *)(&dword_0 + 1);
  }
  v9 = sub_A8A250(v8);
  v14 = *(_QWORD *)(v9 + 48);
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 288);
    v16 = v14 & 0xFFFFFFFFFFFFFFF0LL;
    if ( v15 )
      goto LABEL_4;
  }
  else
  {
    a2 = v9;
    v30 = sub_A7AA70((__int64)v8, v9, v10, v11, v12, v13);
    v15 = *(_QWORD *)(a1 + 288);
    v16 = v30;
    if ( v15 )
      goto LABEL_4;
  }
  v31 = sub_E94AE0(*(_QWORD *)(a1 + 88), 4);
  v32 = *(_QWORD *)(a1 + 280);
  v71 = v31;
  v15 = sub_BAD910(v32, v31, 0, 0, 1, 0);
  if ( !v15 && (*(_BYTE *)(sub_168B6E0(a1) + 106) & 1) != 0 )
  {
    v45 = sub_704780((__int64 *)(*(_QWORD *)(v8[283] + 80LL) + 72LL), *(_QWORD *)(v8[283] + 80LL), v41, v42, v43, v44);
    if ( v45 )
      v45 += 5;
    v15 = sub_BA7B60(v8, 0, 0, v71, v16, 0, (__int64)v45, 0, 0, 0, 0, 1, 0, 1, 0);
    ptr = v77;
    v76 = 0x200000000LL;
    v67 = sub_A70010((__int64)v8, v16);
    v65 = v8[2188];
    v46 = j__strlen("objects");
    v47 = sub_6F3470(v65, "objects", v46);
    v48 = 0;
    if ( v15 )
      v48 = v15 + 48;
    v69 = v48;
    v49 = sub_B74530((__int64)v8, v48, 0, 0, v47, v67, 0, 0, 0);
    sub_19D1980((__int64)&ptr, v49);
    v68 = v8[2347];
    v66 = v8[2188];
    v50 = j__strlen("cnt");
    v51 = sub_6F3470(v66, "cnt", v50);
    v52 = sub_B74530((__int64)v8, v69, 0, 0, v51, v68, 0, 0, 0);
    sub_19D1980((__int64)&ptr, v52);
    sub_BA9CC0(v15, (__int64)v8, ptr, (unsigned int)v76, 0, 0);
    if ( ptr != v77 )
      free(ptr);
  }
  if ( !(unsigned __int8)sub_19D4020(*(_QWORD *)a1, v64, *(_QWORD *)(a1 + 280), v71, v15) )
    return (_WORD *)(&dword_0 + 1);
  v72 = *(_QWORD *)(**(_QWORD **)(v15 + 96) + 48LL);
  v34 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v34 + 16) != 42
    && ((v40 = *(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v40 + 16) != 42)
     || (v34 = sub_F63050(*(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)v64, v40, v33)) == 0)
    || (a2 = v16, !sub_19CD5D0(*(_QWORD *)(v34 + 32), v16)) )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)a1, v64, 0x110Du, 0);
    sub_19D3F70((__int64)&ptr, &v71);
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, (__int64 *)a1, *(_DWORD *)(**(_QWORD **)(v15 + 96) + 24LL), 0x1809u, 0);
    LODWORD(v73) = 0;
    v38 = sub_1587D10((__int64)&ptr, (int *)&v73);
    v39 = sub_1605D30(v38, &v72);
    v74 = sub_A70010((__int64)v8, v16 | 1);
    sub_162B6D0(v39, (__int64 *)&v74);
LABEL_20:
    sub_15F7200(&ptr);
    return (_WORD *)(&dword_0 + 1);
  }
  if ( !sub_9EC890(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 96) + 8LL) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
          v16,
          v35,
          v36,
          v37) )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)a1, v64, 0x110Du, 0);
    sub_19D3F70((__int64)&ptr, &v71);
    sub_15F7200(&ptr);
    sub_168B9F0((__int64)&ptr, (__int64 *)a1, *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 96) + 8LL) + 24LL), 0x1809u, 0);
    v70 = 1;
    v53 = sub_1587D10((__int64)&ptr, &v70);
    v73 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 96) + 8LL) + 48LL);
    v54 = sub_162B6D0(v53, &v73);
    v55 = v54;
    if ( *(_BYTE *)(v54 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v54 + 32), (__int64)"integral", 1u);
    }
    else if ( *(_BYTE *)(v54 + 132) )
    {
      v58 = sub_168B9E0((_QWORD *)v54);
      v61 = *(_QWORD *)(v55 + 16);
      if ( v61 )
        v61 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v61 + 32LL))(*(_QWORD *)(v55 + 16));
      v74 = v61;
      v62 = sub_1587BC0(v58, (__int64 *)&v74, v56, v57, v59, v60);
      sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * *(unsigned int *)(v55 + 128) + 8), (__int64)"integral", 1u);
    }
    goto LABEL_20;
  }
  *(_QWORD *)(a1 + 288) = v15;
LABEL_4:
  v17 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) != 42 )
    v17 = sub_F63050(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v15 + 96) + 48LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v10, v11);
  v18 = *(_QWORD *)(v17 + 32);
  if ( (_DWORD)a4 )
  {
    v19 = (_QWORD **)a3;
    do
    {
      v20 = sub_19DBB20(*(__int64 **)a1, *v19, v18, 1, v12, v13, a5, a6);
      if ( v20 == 1 )
        return (_WORD *)(&dword_0 + 1);
      *v19++ = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
    }
    while ( v19 != (_QWORD **)(a3 + 8LL * (unsigned int)(a4 - 1) + 8) );
  }
  v22 = sub_A82070((__int64)v8, *(_QWORD *)(a1 + 280), 0, v11, v12, v13);
  v23 = sub_A74EC0((__int64)v8, v22);
  v24 = *(__int64 **)a1;
  v25 = (unsigned __int16 *)sub_C9AF10(v8, a3, a4, v23, *(_QWORD *)(a1 + 288), v64);
  return sub_19A3E40((__int64)v24, v25, v26, v27, v28, a5, a6);
}
