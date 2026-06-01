__int64 __fastcall sub_F418A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  char v7; // al
  unsigned __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdi
  __int64 v48; // r13
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rdi
  __int64 v54; // r12
  __int64 v55; // r13
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdi
  __int64 v61; // rbx
  _QWORD v62[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL];
  v7 = v6 | *a1;
  v8 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v8 | v7 & 7;
  v10 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v11 & 8) != 0 )
  {
    v8 = v11 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (((*(__int64 *)((char *)&qword_18 + (v11 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v11 & 7)) >> 6) & 6) != 0 )
      return 0;
  }
  if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) <= 4u )
  {
    v62[0] = sub_A4D710(a2, v9);
    return sub_F418A0(v62, a2);
  }
  v14 = 0;
  if ( sub_F3E930(*v10, nullptr, v8, a4, a5, a6) )
    return 0;
  v19 = *(_QWORD *)(a2 + 2320);
  if ( (*(_BYTE *)(v19 + 16) & 1) != 0 || *(char *)(v19 + 15) < 0 )
  {
    v14 = v9;
    if ( (unsigned __int8)sub_A739A0(a2, v9, v15, v16, v17) )
      return 0;
  }
  v20 = sub_F3F480(*v10, v14, v15, v16, v17, v18);
  v21 = (__int64)v20;
  if ( !v20 || (*((_BYTE *)v20 + 28) & 0x7Fu) - 58 > 3 )
    return 1;
  if ( (unsigned __int8)sub_B5AFE0((__int64)v20, 0) )
    return 0;
  v30 = sub_B5ABC0(v21, 0, v22, v23, v24, v25);
  if ( v30 )
  {
LABEL_14:
    v62[0] = *(_QWORD *)(v30 + 48);
    if ( !(unsigned __int8)sub_F418A0(v62, a2) )
      return 0;
    while ( 1 )
    {
      v31 = *(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v30 = v31;
      if ( !v31 )
        break;
      if ( (*(_BYTE *)(v31 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_14;
    }
  }
  if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 59 > 2 )
    return 1;
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v26, v27, v28, v29);
  v36 = *(_QWORD *)(v21 + 128);
  if ( (*(_BYTE *)(v36 + 24) & 1) != 0 )
    v37 = sub_B72C40(v36);
  else
    v37 = *(_QWORD *)(v36 + 24);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v32, v33, v34, v35);
  v38 = v37 + 24LL * *(unsigned int *)(*(_QWORD *)(v21 + 128) + 16LL);
  sub_6E4DB0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v39, v40, v41, v42);
  v47 = *(_QWORD *)(v21 + 128);
  if ( (*(_BYTE *)(v47 + 24) & 1) != 0 )
    v48 = sub_B72C40(v47);
  else
    v48 = *(_QWORD *)(v47 + 24);
  if ( v38 == v48 )
  {
LABEL_26:
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v43, v44, v45, v46);
    v53 = *(_QWORD *)(v21 + 128);
    if ( (*(_BYTE *)(v53 + 32) & 1) != 0 )
      v54 = sub_B72C80(v53);
    else
      v54 = *(_QWORD *)(v53 + 32);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v49, v50, v51, v52);
    v55 = v54 + 24LL * *(unsigned int *)(*(_QWORD *)(v21 + 128) + 20LL);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v21 + 104) + 96LL), *(_QWORD *)(v21 + 104), v56, v57, v58, v59);
    v60 = *(_QWORD *)(v21 + 128);
    if ( (*(_BYTE *)(v60 + 32) & 1) != 0 )
      v61 = sub_B72C80(v60);
    else
      v61 = *(_QWORD *)(v60 + 32);
    if ( v61 != v55 )
    {
      while ( 1 )
      {
        v62[0] = **(_QWORD **)(v61 + 16);
        v62[0] = sub_6B4E70(v62);
        result = sub_F418A0(v62, a2);
        if ( !(_BYTE)result )
          break;
        v61 += 24;
        if ( v61 == v55 )
          return 1;
      }
      return result;
    }
    return 1;
  }
  while ( 1 )
  {
    v62[0] = **(_QWORD **)(v48 + 16);
    v62[0] = sub_6B4E70(v62);
    result = sub_F418A0(v62, a2);
    if ( !(_BYTE)result )
      return result;
    v48 += 24;
    if ( v48 == v38 )
      goto LABEL_26;
  }
}

