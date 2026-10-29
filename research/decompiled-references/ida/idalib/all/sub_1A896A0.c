_QWORD *__fastcall sub_1A896A0(__int64 *a1, unsigned int a2, _QWORD *a3, __m128 a4, __m128 a5)
{
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *result; // rax
  _QWORD *v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rdi
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  size_t v25; // rax
  __int64 v26; // r13
  size_t v27; // rax
  __int64 v28; // r13
  size_t v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 *v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r13
  __int64 v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // [rsp+8h] [rbp-110h] BYREF
  __int64 *v48; // [rsp+18h] [rbp-100h] BYREF
  __int64 v49; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-F0h] BYREF
  __int64 v51[4]; // [rsp+30h] [rbp-E8h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+50h] [rbp-C8h] BYREF
  int v53; // [rsp+58h] [rbp-C0h]
  _QWORD **v54; // [rsp+60h] [rbp-B8h]

  v47 = a3;
  v8 = sub_168B6C0((__int64)a1);
  result = v47;
  if ( !v47 )
    return (_QWORD *)(&dword_0 + 1);
  if ( (*(_DWORD *)v47 & 0x10000) != 0 )
    return result;
  v12 = v47;
  v13 = sub_19179A0(*a1, v47, 1u, v7, v9, v10, a4, a5);
  if ( v13 == 1 )
    return (_QWORD *)(&dword_0 + 1);
  v47 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
  v17 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)v17;
  if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) == 34
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34
    && (v18 = sub_F63050(v18, v12, v14, v15)) != 0 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 35 > 1 )
      v19 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF0LL), v12, v14, v15);
    v20 = sub_9C7D40(v19, (__int64)v12, v14, v15, v16);
    if ( v20 )
    {
      v21 = sub_168B6E0((__int64)a1);
      v22 = *a1;
      v23 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(v21 + 107) & 4) == 0 )
      {
        if ( !(unsigned __int8)sub_1E63330(v22, a2, v23, 1, 0) )
          goto LABEL_10;
        return v47;
      }
      v53 = 3020;
      v52 = off_2BC64D8;
      v54 = &v47;
      if ( (unsigned __int8)sub_1E63C20(v22, a2, v23, 1, &v52) )
        return v47;
    }
    else if ( !(*(_BYTE *)(v19 + 19) >> 2) )
    {
      return v47;
    }
LABEL_10:
    v24 = *(_QWORD *)(v8 + 17504);
    v25 = j__strlen("countByEnumeratingWithState");
    v51[0] = sub_6F3470(v24, "countByEnumeratingWithState", v25);
    v26 = *(_QWORD *)(v8 + 17504);
    v27 = j__strlen("objects");
    v51[1] = sub_6F3470(v26, "objects", v27);
    v28 = *(_QWORD *)(v8 + 17504);
    v29 = j__strlen("count");
    v51[2] = sub_6F3470(v28, "count", v29);
    v30 = sub_FE3230(*(_QWORD **)(v8 + 17512), 3u, (unsigned __int64 *)v51);
    v48 = (__int64 *)v30;
    if ( (!v20 || !sub_BAD910(v20, v30, 1, 0, 1, 0) && !sub_BADBA0(v20, (__int64)&v48, 1, v33, v34, v35))
      && !sub_19D0310((__int64)a1, (__int64)v48, v18, 1, v31, v32) )
    {
      sub_168B9F0((__int64)&v52, a1, a2, 0x1A11u, 0);
      v37 = &v49;
      v49 = v47[1];
      v38 = sub_162B6D0((__int64)&v52, &v49);
      v39 = v38;
      if ( *(_BYTE *)(v38 + 120) )
      {
        v37 = v48;
        sub_AE9DF0((unsigned __int8 **)(v38 + 32), (__int64)v48, 9u);
      }
      else if ( *(_BYTE *)(v38 + 132) )
      {
        v44 = sub_168B9E0((_QWORD *)v38);
        v45 = *(_QWORD *)(v39 + 16);
        if ( v45 )
          v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v45 + 32LL))(*(_QWORD *)(v39 + 16));
        v50 = v45;
        v46 = sub_1587BC0(v44, &v50, v40, v41, v42, v43);
        v37 = v48;
        sub_AE9DF0((unsigned __int8 **)(*v46 + 32LL * *(unsigned int *)(v39 + 128) + 8), (__int64)v48, 9u);
      }
      v50 = sub_EEC8C0((unsigned __int64)v47, (__int64)v37, *(double *)a4.m128_u64);
      sub_1587DB0(v39, &v50);
      sub_15F7200(&v52);
    }
    return v47;
  }
  sub_168B9F0((__int64)&v52, a1, a2, 0xD70u, 0);
  v50 = v47[1];
  v36 = sub_162B6D0((__int64)&v52, &v50);
  v51[0] = sub_EEC8C0((unsigned __int64)v47, (__int64)&v50, *(double *)a4.m128_u64);
  sub_1587DB0(v36, v51);
  sub_15F7200(&v52);
  return (_QWORD *)(&dword_0 + 1);
}
