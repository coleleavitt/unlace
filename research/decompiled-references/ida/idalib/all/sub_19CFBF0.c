unsigned __int64 __fastcall sub_19CFBF0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  char *v14; // r13
  __int64 v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  char v28; // si
  unsigned __int64 v29; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 *v35; // r12
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rsi
  unsigned __int64 v65; // rbp
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  unsigned __int16 v69; // ax
  __int64 v70; // rdi
  __int64 v71; // rbp
  unsigned int v72; // eax
  __int64 v73; // r8
  unsigned __int16 v74; // ax
  __int64 v75; // r8
  __int64 v76; // rcx
  char *v77; // rsi
  int v78; // ebp
  char v79; // r12
  __int64 v80; // rax
  __int64 v81; // rdx
  unsigned __int64 v83; // [rsp+8h] [rbp-50h]
  __int64 v84; // [rsp+8h] [rbp-50h]
  unsigned __int64 v85; // [rsp+8h] [rbp-50h]
  __int64 v86[8]; // [rsp+18h] [rbp-40h] BYREF

  v10 = sub_168B6C0((__int64)a1);
  v13 = *a1;
  v14 = (char *)v10;
  v15 = *(_QWORD *)(a4 + 56);
  if ( (v15 & 0x200000000LL) == 0 )
  {
    v27 = sub_BA86C0(a4, a3);
    goto LABEL_9;
  }
  v16 = *(_QWORD **)(v13 + 248);
  if ( (v15 & 0x20000) != 0 && a5 )
  {
    v40 = sub_BA86C0(a4, a3);
    v29 = sub_19CF780(v16, v40);
LABEL_10:
    if ( !a2 || !sub_BFEF10(a2) )
      return v29;
    v86[0] = sub_BA86C0(a4, a3);
    sub_F5E9A0(v86);
    v52 = sub_A8A2C0(v14);
    v56 = *(_QWORD *)(v52 + 48);
    v57 = v56 ? v56 & 0xFFFFFFFFFFFFFFF0LL : sub_A7AA70((__int64)v14, v52, 0, v53, v54, v55);
    if ( v86[0] != v57 )
      return v29;
    v58 = *(_QWORD *)(*(_QWORD *)(sub_BFBAE0(a2) + 16) + 16LL);
    v59 = (_QWORD *)(v58 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v58 & 4) != 0 )
      v59 = (_QWORD *)*v59;
    if ( v59 )
      v59 -= 6;
    v60 = sub_BA85D0((__int64)v59);
    v64 = sub_A82070((__int64)v14, v60, 0, v61, v62, v63);
    v65 = sub_A74EC0((__int64)v14, v64);
    v69 = sub_F6A600(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), v64, v66, v67, v68);
    if ( HIBYTE(v69) )
      return sub_A719E0((__int64)v14, v69, v65, v65);
    return v65;
  }
  if ( a6 )
  {
    v31 = sub_15F1670(v13);
    if ( v31 )
    {
      v32 = sub_BA85D0(v31);
      if ( v32 )
      {
        v34 = sub_A82070((__int64)v16, v32, 0, v11, v12, v33);
        v86[0] = sub_A74EC0((__int64)v16, v34);
        goto LABEL_7;
      }
    }
  }
  v83 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v17 = sub_F67CD0(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL), a2, a3 & 0xFFFFFFFFFFFFFFF0LL, v11, v12);
  v18 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v17 )
  {
    v86[0] = sub_A74EC0((__int64)v16, a3);
    goto LABEL_7;
  }
  v41 = *(_QWORD *)v83;
  if ( *(_BYTE *)(*(_QWORD *)v83 + 16LL) == 34 )
    goto LABEL_22;
  v47 = *(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v47 + 16) != 34 )
    goto LABEL_36;
  v41 = sub_F63050(v41, a2, v18, v47);
  v18 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v41 )
  {
LABEL_22:
    v42 = *(_QWORD *)(*(_QWORD *)(v41 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v43 = (unsigned int)*(unsigned __int8 *)(v42 + 16) - 35;
    if ( (unsigned int)v43 > 1 )
    {
      v85 = v18;
      v42 = sub_F63050(v42, a2, v18, v43);
      v18 = v85;
    }
    v44 = *(unsigned __int8 *)(v42 + 19);
    LOBYTE(v44) = (unsigned __int8)v44 >> 2;
    if ( !(_BYTE)v44 )
    {
      v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v45 + 16) == 13 && ((*(_WORD *)(v45 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_27;
    }
  }
  v48 = *(_QWORD *)v18;
  if ( *(_BYTE *)(*(_QWORD *)v18 + 16LL) == 34
    || (v81 = *(_QWORD *)(*(_QWORD *)(v48 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v81 + 16) == 34)
    && (v48 = sub_F63050(v48, a2, v81, v44)) != 0 )
  {
    v49 = *(_QWORD *)(*(_QWORD *)(v48 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v50 = (unsigned int)*(unsigned __int8 *)(v49 + 16) - 35;
    if ( (unsigned int)v50 > 1 )
      v49 = sub_F63050(v49, a2, v50, v44);
    if ( *(_BYTE *)(v49 + 19) >> 2 )
    {
      v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v49 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v51 + 16) == 13 && ((*(_WORD *)(v51 + 18) >> 3) & 0x1FF) == 0x1EA )
      {
LABEL_27:
        v46 = sub_BA86C0(a4, a3);
        v27 = sub_19CF780(v16, v46);
        goto LABEL_9;
      }
    }
  }
LABEL_36:
  v86[0] = a3;
LABEL_7:
  v19 = sub_BA86C0(a4, a3);
  v23 = sub_F6A600(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), a3, v20, v21, v22);
  v27 = v86[0];
  v28 = v23;
  if ( HIBYTE(v23) )
  {
    sub_F5E9A0(v86);
    v27 = sub_A719E0((__int64)v16, v28, v86[0], v86[0]);
  }
LABEL_9:
  v29 = v27;
  if ( a5 )
    goto LABEL_10;
  v84 = v27;
  v35 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
  v36 = sub_F61C90(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), 1, v27, v24, v25, v26);
  v39 = v84;
  if ( !v36 )
    return v39;
  v70 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v71 = 0;
  LOWORD(v72) = sub_F6A600(v70, 1, v84, v37, v38);
  if ( BYTE1(v72) )
  {
    v71 = (unsigned int)(unsigned __int8)v72 + 1;
    if ( (_BYTE)v72 == 3 )
      v71 = 2;
  }
  v74 = sub_F6A600(*v35, 1, v84, v72, v73);
  v76 = 0;
  v39 = v84;
  if ( HIBYTE(v74) )
  {
    v76 = (unsigned int)(unsigned __int8)v74 + 1;
    if ( (_BYTE)v74 == 3 )
      v76 = 2;
  }
  v77 = (char *)&unk_2646DE0 + 4 * v71;
  v78 = (unsigned __int8)v77[(unsigned int)v76];
  v79 = v77[(unsigned int)v76];
  if ( (_DWORD)v76 == v78 )
    return v39;
  do
  {
    v80 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v80 + 16) == 8 )
    {
      v29 = *(_QWORD *)(v80 + 40);
    }
    else
    {
      v77 = v14;
      v29 = sub_F6B0C0(v29, (__int64)v14, v39, v76, v75);
    }
  }
  while ( (unsigned __int16)sub_F6A600(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v77, v39, v76, v75) >> 8 );
  result = v29;
  if ( v78 )
    return sub_A719E0((__int64)v14, v79 - 1, v29, v29);
  return result;
}
