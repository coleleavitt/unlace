__int64 __fastcall sub_19A1E80(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        bool *a5,
        unsigned __int64 *a6,
        double a7)
{
  unsigned __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  char v20; // al
  unsigned int v21; // r8d
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r9
  unsigned __int8 v27; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r14
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // r13
  __int64 v35; // rdx
  unsigned __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // [rsp-10h] [rbp-2078h]
  __int64 v44; // [rsp-10h] [rbp-2078h]
  __int64 v45; // [rsp-8h] [rbp-2070h]
  unsigned __int8 v46; // [rsp+8h] [rbp-2060h]
  __int64 v47; // [rsp+8h] [rbp-2060h]
  _QWORD v48[2]; // [rsp+28h] [rbp-2040h] BYREF
  unsigned __int64 v49; // [rsp+38h] [rbp-2030h] BYREF
  _WORD v50[2]; // [rsp+40h] [rbp-2028h] BYREF
  __int64 v51; // [rsp+44h] [rbp-2024h]
  int v52; // [rsp+4Ch] [rbp-201Ch]
  int v53; // [rsp+50h] [rbp-2018h] BYREF
  __int64 v54; // [rsp+58h] [rbp-2010h]
  __int64 v55; // [rsp+60h] [rbp-2008h]
  int v56; // [rsp+68h] [rbp-2000h]
  __int64 v57; // [rsp+70h] [rbp-1FF8h]
  _DWORD v58[2042]; // [rsp+80h] [rbp-1FE8h] BYREF

  *a5 = 0;
  v11 = *(_QWORD *)(a3 + 8);
  v48[0] = a2;
  *a6 = v11;
  v52 = 0;
  v50[0] = 2;
  v51 = (unsigned int)sub_EEB7E0(a3, a2, a7);
  if ( (*(_BYTE *)(a3 + 1) & 6) != 0 )
  {
    v55 = sub_A732E0(*(_QWORD *)(a1 + 248), a3);
    v47 = v55;
    v53 = 9;
    v54 = 0;
    v56 = 0;
    v57 = 0;
    sub_1A19220((unsigned int)v58, a1, (unsigned int)&v53, (unsigned int)v50, (unsigned int)v48, 1, 0, 1);
    if ( (unsigned __int8)sub_1A0B790(v58) )
    {
      v27 = 0;
      *a6 = v47;
      *a5 = 1;
      goto LABEL_11;
    }
    if ( (unsigned __int8)sub_1A0B7F0(v58, a1, v37, v38, v39, v44) )
      goto LABEL_10;
    sub_1A0BB10(v58);
  }
  v14 = *(_QWORD *)(a3 + 8);
  v15 = *(_QWORD *)(v48[0] + 8LL);
  v49 = v14;
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 48 )
    v16 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) != 48 || !v16 )
    goto LABEL_9;
  if ( v17 == v16 || (unsigned __int8)sub_183BD10(a1, a4, v15, v14, v12, v13) )
  {
    v29 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL];
    v30 = 0;
    if ( (v29 & 8) != 0 )
      v30 = *(__int64 *)((char *)&qword_18 + (v29 & 0xFFFFFFFFFFFFFFF0LL));
    v31 = *(_QWORD *)(a1 + 248);
    v32 = v30 | ((unsigned __int8)v15 | (unsigned __int8)v29) & 7;
    v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_6D5440(&v49) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v33 + 16) == 13 && ((*(_WORD *)(v33 + 18) >> 3) & 0x1FF) == 0x1B3 )
      v32 &= ~8uLL;
    v34 = *(_QWORD *)&byte_8[v49 & 0xFFFFFFFFFFFFFFF0LL];
    v35 = 0;
    if ( (v34 & 8) != 0 )
      v35 = *(__int64 *)((char *)&qword_18 + (v34 & 0xFFFFFFFFFFFFFFF0LL));
    v36 = v35 | ((unsigned __int8)v49 | (unsigned __int8)v34) & 7;
    if ( (unsigned int)v32 >> 9 == (unsigned int)v36 >> 9
      || (LOBYTE(v40) = sub_F56A30((unsigned int)v36 >> 9, (unsigned int)v32 >> 9, v31), v21 = v40, (_BYTE)v40) )
    {
      if ( ((v36 >> 4) & 3) != ((v32 >> 4) & 3) && (v36 & 0x30) != 0 && (v32 & 0x30) != 0
        || HIDWORD(v32) != HIDWORD(v36)
        || ((v36 >> 6) & 7) != ((v32 >> 6) & 7)
        || ((unsigned __int8)v32 & (unsigned __int8)~(_BYTE)v36 & 7) != 0
        || (v32 & 8) != 0 && (v36 & 8) == 0 )
      {
        return 0;
      }
      v53 = 9;
      v56 = 0;
      v54 = 0;
      v55 = v49;
      v57 = 0;
      sub_1A19220((unsigned int)v58, a1, (unsigned int)&v53, (unsigned int)v50, (unsigned int)v48, 1, 0, 1);
      if ( v58[0] )
      {
        *a5 = 1;
        v27 = 0;
        goto LABEL_11;
      }
      v27 = sub_1A0B7F0(v58, a1, v45, 0, v41, v42);
      if ( !v27 )
        goto LABEL_11;
      goto LABEL_10;
    }
  }
  else
  {
    v20 = sub_183BD10(a1, a4, v49, v15, v18, v19);
    v21 = 0;
    if ( !v20 )
    {
LABEL_9:
      v49 = sub_F67970(&v49, *(_QWORD *)(a1 + 248));
      v55 = v49;
      v53 = 9;
      v54 = 0;
      v56 = 0;
      v57 = 0;
      sub_1A19220((unsigned int)v58, a1, (unsigned int)&v53, (unsigned int)v50, (unsigned int)v48, 1, 0, 1);
      v22 = v58[0];
      v23 = v49;
      *a5 = v58[0] != 0;
      *a6 = v23;
      v27 = sub_1A0B7F0(v58, v43, v24, v25, v22, v26);
      if ( !v27 )
      {
LABEL_11:
        v46 = v27;
        sub_1A0BB10(v58);
        return v46;
      }
LABEL_10:
      v27 = sub_1A22930(v58, a1, &v53, v50, v48, 1);
      goto LABEL_11;
    }
  }
  return v21;
}
