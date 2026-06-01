__int64 __fastcall sub_A739A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // edi
  __int64 *v14; // rsi
  __int64 v15; // r8
  unsigned __int64 v16; // r13
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // r14
  __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // r13
  unsigned __int64 v45; // rax
  unsigned __int8 v46; // al
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int8 v49; // dl
  __int64 v50; // r13
  unsigned __int8 v51; // al
  unsigned __int8 v52; // dl
  unsigned __int64 v53; // rax
  int v54; // esi
  int v55; // r10d
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rax
  bool v60; // al
  __int64 *v61; // rax
  int v62; // eax
  __int64 *v63; // rax
  __int64 v64; // rcx
  unsigned __int8 v65; // [rsp+1h] [rbp-51h] BYREF
  unsigned __int64 v66; // [rsp+2h] [rbp-50h] BYREF
  __m128i v67[4]; // [rsp+Ah] [rbp-48h] BYREF

  v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
  v6 = v5 & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v7 + 17) & 4) != 0 )
    return 0;
  v8 = *(_QWORD *)&byte_8[v5 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v8 & 8) == 0
    || (v23 = v8 & 0xFFFFFFFFFFFFFFF0LL, a4 = *(unsigned int *)(v23 + 28), !*(_DWORD *)(v23 + 28))
    || (a4 &= 2u, result = 2, !(_DWORD)a4) )
  {
    v10 = sub_F3F500(v7, v6, v7, a4, a5);
    v66 = v10;
    if ( !v10 )
      return 0;
    v11 = *(unsigned int *)(a1 + 2240);
    v12 = *(_QWORD *)(a1 + 2224);
    if ( (_DWORD)v11 )
    {
      v13 = (v11 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
      v14 = (__int64 *)(v12 + 16LL * v13);
      v15 = *v14;
      if ( v10 == *v14 )
      {
LABEL_6:
        sub_A61B90((__m128 *)v67, v14, (_QWORD *)(16 * v11 + v12), a1 + 2224, 1);
        v16 = v67[0].m128i_i64[0];
        goto LABEL_7;
      }
      v54 = 1;
      if ( v15 != -4096 )
      {
        do
        {
          v55 = v54 + 1;
          v13 = (v11 - 1) & (v54 + v13);
          v14 = (__int64 *)(v12 + 16LL * v13);
          v56 = *v14;
          if ( v10 == *v14 )
            goto LABEL_6;
          v54 = v55;
        }
        while ( v56 != -4096 );
      }
    }
    sub_A61B90(
      (__m128 *)v67,
      (_QWORD *)(v12 + 16LL * (unsigned int)v11),
      (_QWORD *)(v12 + 16LL * (unsigned int)v11),
      a1 + 2224,
      1);
    v16 = v67[0].m128i_i64[0];
LABEL_7:
    v17 = (_QWORD *)(*(_QWORD *)(a1 + 2224) + 16LL * *(unsigned int *)(a1 + 2240));
    sub_A61B90((__m128 *)v67, v17, v17, a1 + 2224, 1);
    if ( v16 != v67[0].m128i_i64[0] )
      return *(unsigned __int8 *)(v16 + 8);
    v24 = v66;
    v65 = 0;
    if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 59 > 2 )
      goto LABEL_26;
    sub_6E4DB0((__int64 *)(*(_QWORD *)(v66 + 104) + 96LL), *(_QWORD *)(v66 + 104), v18, v19, v20, v21);
    if ( (*(_BYTE *)(*(_QWORD *)(v66 + 128) + 1LL) & 4) == 0 )
    {
LABEL_16:
      v29 = *(_QWORD *)(v66 + 104);
      sub_6E4DB0((__int64 *)(v29 + 96), v29, v25, v26, v27, v28);
      v34 = *(_QWORD *)(v66 + 128);
      if ( (*(_BYTE *)(v34 + 24) & 1) != 0 )
        v35 = sub_B72C40(v34, v29, v30);
      else
        v35 = *(_QWORD *)(v34 + 24);
      sub_6E4DB0((__int64 *)(*(_QWORD *)(v66 + 104) + 96LL), *(_QWORD *)(v66 + 104), v30, v31, v32, v33);
      v36 = *(_QWORD *)(v66 + 104);
      v37 = v35 + 24LL * *(unsigned int *)(*(_QWORD *)(v66 + 128) + 16LL);
      sub_6E4DB0((__int64 *)(v36 + 96), v36, v38, v39, v40, v41);
      v43 = *(_QWORD *)(v66 + 128);
      if ( (*(_BYTE *)(v43 + 24) & 1) != 0 )
        v44 = sub_B72C40(v43, v36, v42);
      else
        v44 = *(_QWORD *)(v43 + 24);
      for ( ; v44 != v37; v44 += 24 )
      {
        v67[0].m128i_i64[0] = **(_QWORD **)(v44 + 16);
        v45 = sub_6B4E70(v67);
        v46 = sub_A739A0(a1, v45);
        v49 = v65;
        if ( v46 > v65 )
        {
          v65 = v46;
          v49 = v46;
        }
        if ( v49 == 2 )
          goto LABEL_33;
      }
      v24 = v66;
LABEL_26:
      v50 = sub_B5ABC0(v24);
      if ( v50 )
      {
LABEL_27:
        v51 = sub_A739A0(a1, *(_QWORD *)(v50 + 48));
        v52 = v65;
        if ( v51 > v65 )
        {
          v65 = v51;
          v52 = v51;
        }
        if ( v52 != 2 )
        {
          while ( 1 )
          {
            v53 = *(_QWORD *)(v50 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            v50 = v53;
            if ( !v53 )
              break;
            if ( (*(_BYTE *)(v53 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_27;
          }
        }
      }
LABEL_33:
      sub_A737B0(v67, a1 + 2224, (__int64 *)&v66, &v65, v47, v48);
      return v65;
    }
    v57 = sub_A5C940(a1, v66);
    if ( (*(_BYTE *)(v57 + 29) & 1) == 0 )
      goto LABEL_43;
    v58 = sub_B68690(v57);
    v25 = *(_QWORD *)v58;
    v59 = *(_QWORD *)v58 + 8LL * *(unsigned int *)(v58 + 8);
    if ( v25 >= v59 )
    {
      if ( v25 == v59 )
        goto LABEL_43;
      if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 393 )
      {
        v63 = (__int64 *)(v59 + 8);
        do
        {
          v26 = (__int64)v63;
          if ( (__int64 *)v25 == v63 )
            goto LABEL_43;
          v64 = *v63++;
        }
        while ( *(_WORD *)(v64 + 36) != 393 );
      }
    }
    else
    {
      v26 = v25;
      while ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 393 )
      {
        v26 += 8;
        if ( v59 == v26 )
          goto LABEL_43;
      }
      if ( v59 == v26 )
        goto LABEL_43;
    }
    v26 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 393 )
    {
      v61 = (__int64 *)(v25 + 8);
      do
        v26 = *v61++;
      while ( *(_WORD *)(v26 + 36) != 393 );
    }
    v62 = *(_DWORD *)(v26 + 44);
    if ( v62 )
    {
      v60 = v62 == 2;
LABEL_44:
      if ( v60 )
        v65 = 1;
      goto LABEL_16;
    }
LABEL_43:
    v60 = (*(_BYTE *)(*(_QWORD *)(a1 + 2320) + 16LL) & 0x10) != 0;
    goto LABEL_44;
  }
  return result;
}

