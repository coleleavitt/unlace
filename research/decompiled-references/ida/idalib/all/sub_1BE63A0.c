__int64 __fastcall sub_1BE63A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 **v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r13
  char v10; // al
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  char v15; // al
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // al
  unsigned __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rsi
  char v28; // al
  char v29; // dl
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rdx
  _QWORD *v34; // r14
  _QWORD *v35; // rax
  __int64 v36; // rbp
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // ebp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r14
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rsi
  unsigned __int64 v56; // rsi
  __int64 v57; // rbp
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rsi
  unsigned __int64 v64; // rsi
  __int64 v65; // [rsp+0h] [rbp-48h] BYREF
  __int64 v66; // [rsp+8h] [rbp-40h] BYREF
  _DWORD v67[11]; // [rsp+1Ch] [rbp-2Ch] BYREF

  v5 = (unsigned __int8 **)a2;
  v66 = a3;
  v65 = a4;
  v6 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a3 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return sub_AE9DF0(v5, 0, 2u);
  v7 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return sub_AE9DF0(v5, 0, 2u);
  v8 = *(_QWORD *)v6;
  v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v10 == 33 )
  {
    v11 = *(_QWORD *)v7;
    v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( v12 != 33 )
      goto LABEL_7;
    if ( *(_BYTE *)(v8 + 16) != 33 )
    {
      v8 = sub_F63050(v8, a2, v7, a4);
      v11 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
    }
    if ( *(_BYTE *)(v11 + 16) != 33 )
      v11 = sub_F63050(v11, a2, v7, a4);
    v34 = sub_F61C10(v11);
    v35 = sub_F61C10(v8);
    if ( !v35 || !v34 || v34 != v35 && (a2 = (__int64)v34, !sub_1BE56A0((__int64)v35, (__int64)v34)) )
    {
      sub_AE9DF0(v5, 1, 2u);
      if ( sub_F62DD0(v11) )
      {
        v49 = *(_QWORD *)(a1 + 248);
        v50 = sub_F61C10(v11);
        v55 = v50[6];
        if ( v55 )
          v56 = v55 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v56 = sub_A7AA70(v49, (__int64)v50, v51, v52, v53, v54);
        sub_AE9DF0(v5, v56, 8u);
      }
      else
      {
        sub_AE9DF0(v5, *(_QWORD *)(v11 + 40), 0xBu);
      }
      if ( !sub_F62DD0(v8) )
        return sub_AE9DF0(v5, *(_QWORD *)(v8 + 40), 0xBu);
      v57 = *(_QWORD *)(a1 + 248);
      v58 = sub_F61C10(v8);
      v63 = v58[6];
      if ( v63 )
        v64 = v63 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v64 = sub_A7AA70(v57, (__int64)v58, v59, v60, v61, v62);
      return sub_AE9DF0(v5, v64, 8u);
    }
    v7 = *(_QWORD *)(v11 + 32);
    v66 = *(_QWORD *)(v8 + 32);
    v65 = v7;
    v8 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  }
  if ( v10 == 42 )
    v66 = sub_F68450(v8, a2, v7, a4, a5);
  v11 = *(_QWORD *)(v65 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_7:
  if ( v12 == 42 )
    v65 = sub_F68450(v11, a2, v7, a4, a5);
  v66 = sub_C1BEF0((__int64)&v66, a2, v7, a4);
  v65 = sub_C1BEF0((__int64)&v65, a2, v13, v14);
  v15 = v66;
  v16 = v66 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v17 + 17) & 2) != 0 )
  {
    if ( !sub_F6A860(v17) )
      return sub_AE9DF0(v5, 0, 2u);
    v15 = v66;
    v16 = v66 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v18 = *(_QWORD *)(v16 + 8);
  v19 = v18 | v15;
  v20 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v20 | v19 & 7) != (*(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                         | ((unsigned __int8)*(_QWORD *)&byte_8[v65 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v65) & 7) )
  {
    v21 = sub_1BCB520(v66, v20);
    v22 = sub_1BCB520(v65, v20);
    v23 = v22;
    if ( v21 )
    {
      if ( v22 )
      {
        v24 = *(unsigned __int16 *)(v22 + 22);
        if ( (_WORD)v24 != *(_WORD *)(v21 + 22) )
        {
          sub_AE9DF0(v5, 2, 2u);
          sub_AE9DF0(v5, *(unsigned __int16 *)(v23 + 22), 3u);
          return sub_AE9DF0(v5, *(unsigned __int16 *)(v21 + 22), 3u);
        }
        if ( (unsigned __int8)sub_1BD3E10(
                                a1,
                                (__int64 *)(v21 + 48),
                                v24,
                                v22 + 48,
                                *(unsigned __int16 *)(v22 + 22),
                                v67,
                                0) )
        {
          v26 = *(_QWORD *)&byte_8[*(_QWORD *)(v23 + 24) & 0xFFFFFFFFFFFFFFF0LL];
          v27 = *(_QWORD *)&byte_8[*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL];
          v28 = v26 | *(_QWORD *)(v23 + 24);
          v29 = v27 | *(_QWORD *)(v21 + 24);
          v30 = v26 & 0xFFFFFFFFFFFFFFF8LL;
          v31 = v27 & 0xFFFFFFFFFFFFFFF8LL;
          v32 = v31 | v29 & 7;
          if ( v32 != (v30 | v28 & 7) )
          {
            sub_AE9DF0(v5, 4, 2u);
            sub_AE9DF0(v5, *(_QWORD *)(v23 + 24), 8u);
            return sub_AE9DF0(v5, *(_QWORD *)(v21 + 24), 8u);
          }
          v36 = sub_A5DBE0(v23, v31, v32, v30, v25);
          if ( v36 != sub_A5DBE0(v21, v31, v37, v38, v39) )
          {
            sub_AE9DF0(v5, 5, 2u);
            v44 = sub_A5DBE0(v23, 5, v41, v42, v43);
            sub_AE9DF0(v5, v44, 7u);
            v48 = sub_A5DBE0(v21, v44, v45, v46, v47);
            return sub_AE9DF0(v5, v48, 7u);
          }
          v40 = sub_F63060(*(_QWORD *)(*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF0LL));
          if ( ((unsigned int)sub_F63060(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL)) == 0) != (v40 == 0) )
            return sub_AE9DF0(v5, 6, 2u);
          return sub_AE9DF0(v5, 0, 2u);
        }
        sub_AE9DF0(v5, 3, 2u);
        sub_AE9DF0(v5, (unsigned int)(v67[0] + 1), 3u);
        sub_AE9DF0(v5, *(_QWORD *)(v23 + 8LL * v67[0] + 48), 8u);
        v64 = *(_QWORD *)(v21 + 8LL * v67[0] + 48);
        return sub_AE9DF0(v5, v64, 8u);
      }
    }
  }
  return sub_AE9DF0(v5, 0, 2u);
}
