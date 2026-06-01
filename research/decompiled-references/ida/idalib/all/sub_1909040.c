unsigned __int64 __fastcall sub_1909040(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int64 *v8; // r12
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  unsigned __int64 v14; // rax
  unsigned __int16 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  unsigned __int16 *v20; // r13
  unsigned __int16 v21; // ax
  __int64 i; // r14
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned int v29; // edi
  __int64 *v30; // rsi
  __int64 v31; // rdi
  char v32; // dl
  char v33; // dl
  __int64 v34; // r15
  _WORD *v35; // rax
  unsigned __int16 v36; // dx
  unsigned int v37; // eax
  __int64 *v38; // rsi
  unsigned int v39; // ecx
  unsigned int v40; // eax
  _QWORD *v41; // r14
  _QWORD *v42; // r12
  unsigned __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rsi
  unsigned __int64 v48; // r12
  __int64 v49; // rbx
  __int64 *v50; // rsi
  unsigned int v51; // ecx
  __int64 v52; // rbx
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  unsigned int v57; // eax
  char v58; // r13
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 v61; // rax
  unsigned int v62; // eax
  __int64 *v63; // rdx
  __int64 v64; // r8
  __int64 *v65; // r14
  __int64 v66; // rdx
  unsigned int v67; // eax
  char v68; // al
  __int64 v69; // rax
  __int64 v70; // rdx
  unsigned int v71; // eax
  __int64 v72; // rcx
  unsigned int v73; // eax
  char v74; // [rsp+0h] [rbp-F8h]
  __int64 v75; // [rsp+0h] [rbp-F8h]
  __int64 v76; // [rsp+0h] [rbp-F8h]
  __int64 v77; // [rsp+0h] [rbp-F8h]
  __int64 *v78; // [rsp+8h] [rbp-F0h]
  int v79; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v80; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+28h] [rbp-D0h] BYREF
  __int64 v82[25]; // [rsp+30h] [rbp-C8h] BYREF

  v8 = a2;
  v10 = a3;
  v11 = *a2 & 0xFFFFFFFFFFFFFFFELL;
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v12 + 16) == 13 )
  {
    v13 = (*(_WORD *)(v12 + 18) >> 3) & 0x1FF;
    if ( v13 > 0x1F1u )
    {
      switch ( v13 )
      {
        case 0x1F2u:
          v35 = (_WORD *)sub_BFB9F0(v11);
          v36 = *v35 & 0x1FF;
          if ( (unsigned int)v36 - 23 > 1 )
          {
            v38 = (__int64 *)(a1 + 8);
            v39 = 5283;
            goto LABEL_67;
          }
          if ( v36 != 23 || sub_1BE70F0(a1, v35, 0, 0, 0, 0) )
            return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL);
          break;
        case 0x1F6u:
          return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19104LL);
        case 0x1F3u:
          break;
        default:
          a2 = (unsigned __int64 *)(*a2 & 0xFFFFFFFFFFFFFFFELL);
          v14 = sub_1907C70(a1, a2, a7, a8, a3, a4, a5, a6);
          *v8 = v14;
          if ( v14 == 1 )
            return 0;
          v11 = v14 & 0xFFFFFFFFFFFFFFFELL;
          goto LABEL_8;
      }
LABEL_66:
      v38 = (__int64 *)(a1 + 8);
      v39 = 4041;
LABEL_67:
      sub_168B9F0((__int64)v82, v38, v10, v39, 0);
      v81 = sub_EEC8C0(*v8 & 0xFFFFFFFFFFFFFFFELL, (__int64)v38, *(double *)a7.m128i_i64);
      sub_1587DB0((__int64)v82, &v81);
      sub_15F7200(v82);
      return 0;
    }
  }
LABEL_8:
  if ( (*(_DWORD *)v11 & 0x10000) != 0 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL);
  v16 = (unsigned __int16 *)sub_BFB9F0(v11);
  v19 = *(_QWORD *)(a1 + 232);
  v20 = v16;
  v21 = *v16 & 0x1FF;
  if ( (*(_BYTE *)(v19 + 47) & 0x20) != 0 && v21 == 71 )
  {
    if ( *((char *)v20 + 2) < 0 )
    {
      v40 = sub_C00A40((unsigned __int64)v20, (__int64)a2, v19, v17, v18);
      sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), v40, 0x1260u, 0);
      sub_15F7200(v82);
      return 0;
    }
  }
  else if ( (*(_BYTE *)v19 & 1) != 0 && v21 == 4 )
  {
    v19 = *((unsigned __int8 *)v20 + 2);
    LOBYTE(v19) = (unsigned __int8)v19 >> 3;
    if ( (_BYTE)v19 == 5 )
      return *(_QWORD *)(*((_QWORD *)v20 + 2) + 8LL);
  }
  for ( i = (__int64)v20; ; v21 = *(_WORD *)i & 0x1FF )
  {
    if ( v21 == 71 )
    {
      v23 = *(_QWORD *)(i + 16);
      goto LABEL_51;
    }
    if ( v21 <= 0x47u )
    {
      if ( v21 != 20 )
      {
        if ( v21 == 46 )
        {
          if ( (*(_QWORD *)i & 0x80000LL) != 0 )
            goto LABEL_19;
        }
        else if ( v21 != 4 || (unsigned int)(*(_BYTE *)(i + 2) >> 3) - 10 > 2 )
        {
          goto LABEL_19;
        }
        goto LABEL_41;
      }
      i = *(_QWORD *)(i + 24);
      continue;
    }
    if ( v21 == 94 )
      break;
    if ( v21 != 123 )
    {
      if ( v21 != 79 )
        goto LABEL_19;
LABEL_41:
      i = *(_QWORD *)(i + 16);
      continue;
    }
    if ( sub_9ECBA0(i, (__int64)a2, v19, v17, v18) )
      v19 = *(_QWORD *)(i + 16);
    else
      v19 = *(_QWORD *)(i + 24);
    if ( (*(_WORD *)v19 & 0x1FF) != 0x4F )
      goto LABEL_19;
    i = *(_QWORD *)(v19 + 16);
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) > 4u )
      goto LABEL_19;
  }
  v23 = *(_QWORD *)(i + 24);
LABEL_51:
  if ( !v23 )
  {
LABEL_19:
    v23 = 0;
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(v23 + 28) & 0x7Fu) - 34 <= 5 )
  {
    v37 = sub_EEB7E0((unsigned __int64)v20, (__int64)a2, *(double *)a7.m128i_i64);
    if ( !(unsigned __int8)sub_1BE0140(a1, v23, 1, v37) )
      return 0;
  }
LABEL_20:
  v24 = sub_C0EE30((__int64)v20, *(_QWORD *)(a1 + 248), v19, v17, v18);
  if ( (unsigned int)(v24 - 8) <= 1 )
  {
    sub_1DBADC0(a1);
    v74 = v32;
    sub_1DBADC0(a1);
    sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), v10, v33 == 0 ? 5686 : 5209, 0);
    v80 = *((_QWORD *)v20 + 1);
    v34 = sub_162B6D0((__int64)v82, &v80);
    v81 = sub_EEC8C0((unsigned __int64)v20, (__int64)&v80, *(double *)a7.m128i_i64);
    sub_1587DB0(v34, &v81);
    sub_15F7200(v82);
    if ( v74 )
      return 0;
    v20 = (unsigned __int16 *)sub_1A0BDC0(a1, *((_QWORD *)v20 + 1), *v8 & 0xFFFFFFFFFFFFFFFELL, 1);
    *v8 = (unsigned __int64)v20;
    goto LABEL_32;
  }
  v28 = *v20;
  LOWORD(v28) = v28 & 0x1FF;
  if ( (_WORD)v28 == 30 )
    return sub_A70010(*(_QWORD *)(a1 + 248), *((_QWORD *)v20 + 1));
  if ( v24 == 6 )
  {
    if ( (_WORD)v28 == 71 )
    {
      v41 = *((_QWORD **)v20 + 2);
      sub_18CFE50(a1, v10, *v8 & 0xFFFFFFFFFFFFFFFELL, (__int64)v41, *(double *)a7.m128i_i64);
      v42 = *(_QWORD **)(a1 + 248);
      v43 = sub_B72690((__int64)(v41 + 9));
      if ( v43 )
        v43 -= 64LL;
      v46 = 0;
      if ( (*(_QWORD *)v20 & 0x80000LL) != 0 )
        v46 = *((_QWORD *)v20 + 4);
      v47 = *((_QWORD *)v20 + 1);
      v48 = sub_ABBA20(v42, v47, v46, v43, v44, v45);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 16LL) & 1) != 0 )
      {
        v54 = (*(__int64 (__fastcall **)(_QWORD *))(*v41 + 32LL))(v41);
        v56 = *(_QWORD *)(v54 + 80) >> 16;
        if ( (*(_QWORD *)(v54 + 80) & 0x40000LL) != 0
          || (v56 = (*(_QWORD *)(v54 + 80) >> 16) & 8LL, (_DWORD)v56)
          || (unsigned int)sub_B984E0(v54) )
        {
          v57 = *(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
          v58 = v57 == 3 || v57 <= 1;
          if ( !v58 && (*(_BYTE *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          {
            v82[0] = a1;
            v60 = sub_C1D490((__int64)v41, v47, v56, v55);
            v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v61 + 16) != 13 || ((*(_WORD *)(v61 + 18) >> 3) & 0x1FF) != 0x1B3 )
            {
              v71 = sub_B77620((__int64)v41);
              v58 = sub_18D4430(v82, v60, v10, v71);
              v77 = v41[15];
              v73 = sub_B76070((__int64)v41, v60, v77, v72);
              v63 = (__int64 *)v77;
              v64 = v77 + 8LL * v73;
              if ( v64 == v77 )
                goto LABEL_109;
              goto LABEL_107;
            }
            v75 = v41[15];
            v62 = sub_B76070((__int64)v41, v60, v75, v59);
            v63 = (__int64 *)v75;
            v64 = v75 + 8LL * v62;
            if ( v75 != v64 )
            {
LABEL_107:
              v65 = v63;
              do
              {
                v66 = *v65;
                v78 = (__int64 *)v64;
                ++v65;
                v76 = v66;
                v67 = sub_B73090(v66);
                v68 = sub_18D4430(v82, *(_QWORD *)(v76 + 48), v10, v67);
                v64 = (__int64)v78;
                v58 |= v68;
              }
              while ( v78 != v65 );
LABEL_109:
              if ( v58 )
                return 0;
            }
          }
        }
      }
LABEL_85:
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
        sub_1E63330(a1, v10, v48, 1, 0);
      return v48;
    }
    goto LABEL_66;
  }
  v29 = v24 & 0xFFFFFFFD;
  if ( (v24 & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
      if ( (_WORD)v28 == 71 )
      {
        v25 = *((_QWORD *)v20 + 2);
        if ( v25 )
        {
          if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 35 <= 3 )
            sub_18CFE50(a1, v10, *v8 & 0xFFFFFFFFFFFFFFFELL, v25, *(double *)a7.m128i_i64);
        }
      }
      goto LABEL_32;
    }
    v30 = (__int64 *)(a1 + 8);
    v29 = 2;
    if ( (_WORD)v28 != 17 )
    {
      sub_168B9F0((__int64)v82, v30, v10, 0x14A2u, 0);
      v80 = *((_QWORD *)v20 + 1);
      v53 = sub_162B6D0((__int64)v82, &v80);
      v81 = sub_EEC8C0((unsigned __int64)v20, (__int64)&v80, *(double *)a7.m128i_i64);
      sub_1587DB0(v53, &v81);
      sub_15F7200(v82);
      return 0;
    }
    goto LABEL_90;
  }
  v30 = (__int64 *)(a1 + 8);
  v25 = (*((_BYTE *)v20 + 1) >> 3) & 7;
  if ( (_DWORD)v25 == 1 )
    goto LABEL_90;
  v30 = (__int64 *)(a1 + 8);
  v29 = 1;
  if ( (_DWORD)v25 == 2 )
    goto LABEL_90;
  v30 = (__int64 *)(a1 + 8);
  v29 = 4;
  if ( (_DWORD)v25 == 5 )
    goto LABEL_90;
  if ( !v23 )
    goto LABEL_30;
  v25 = *(_BYTE *)(v23 + 28) & 0x7F;
  if ( (unsigned int)(unsigned __int8)v25 - 40 > 6 )
  {
    if ( (_BYTE)v25 != 48 )
    {
      if ( (_BYTE)v25 != 71 )
      {
        if ( (unsigned int)(unsigned __int8)v25 - 49 > 2 && (_BYTE)v25 != 32 )
          goto LABEL_30;
        if ( (_WORD)v28 != 71 )
          goto LABEL_30;
        if ( (*(_QWORD *)v20 & 0x80000LL) == 0 )
          goto LABEL_30;
        if ( !*((_QWORD *)v20 + 4) )
          goto LABEL_30;
        v28 = *(unsigned __int16 *)(*v8 & 0xFFFFFFFFFFFFFFFELL);
        LOWORD(v28) = v28 & 0x1FF;
        if ( (_WORD)v28 == 20 )
          goto LABEL_30;
        v28 = *(_QWORD *)(v23 + 16);
        v25 = v28 & 0xFFFFFFFFFFFFFFF8LL;
        LOBYTE(v28) = v28 & 4;
        if ( (_BYTE)v28 )
          v25 = *(_QWORD *)v25;
        if ( !v25 )
          goto LABEL_30;
        v28 = (*(_BYTE *)(v25 + 8) + 70) & 0x7F;
        if ( (unsigned __int8)v28 > 3u )
          goto LABEL_30;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 48)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 43 <= 1 )
        {
          sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), v10, 0xD3Fu, 0);
          v80 = *(_QWORD *)(v23 + 40);
          v69 = sub_15894B0((__int64)v82, &v80);
          v81 = *(_QWORD *)(v23 + 48);
          sub_162B6D0(v69, &v81);
          sub_15F7200(v82);
          return 0;
        }
        while ( (*(_BYTE *)(v25 + 11) & 1) != 0 )
        {
          v25 = sub_B72690(v25);
          if ( !v25 )
            BUG();
        }
        v70 = 0;
        if ( (*(_QWORD *)v20 & 0x80000LL) != 0 )
          v70 = *((_QWORD *)v20 + 4);
        v48 = sub_ABBA20(*(_QWORD **)(a1 + 248), *((_QWORD *)v20 + 1), v70, v25 - 64, v26, v27);
        goto LABEL_85;
      }
      return *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL);
    }
    v30 = (__int64 *)(a1 + 8);
    v29 = 2;
LABEL_90:
    LODWORD(v80) = v29;
    sub_168B9F0((__int64)v82, v30, v10, 0x1457u, 0);
    v49 = sub_1588370((__int64)v82, (unsigned int *)&v80);
    v81 = sub_EEC8C0((unsigned __int64)v20, (__int64)&v80, *(double *)a7.m128i_i64);
    sub_1587DB0(v49, &v81);
    sub_15F7200(v82);
    return 0;
  }
  v28 = *(_BYTE *)(v23 + 96) & 7;
  if ( (_BYTE)v28 == 5 )
  {
    v28 = *(_QWORD *)(a1 + 232);
    if ( (*(_BYTE *)(v28 + 1) & 8) == 0 )
    {
      v30 = (__int64 *)(a1 + 8);
      v29 = 3;
      goto LABEL_90;
    }
  }
LABEL_30:
  if ( v24 == 2 )
  {
    sub_168B9F0((__int64)v82, (__int64 *)(a1 + 8), v10, 0x1637u, 0);
    v81 = sub_EEC8C0((unsigned __int64)v20, a1 + 8, *(double *)a7.m128i_i64);
    sub_1587DB0((__int64)v82, &v81);
    sub_15F7200(v82);
  }
LABEL_32:
  v31 = *(_QWORD *)(a1 + 248);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 1) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 35 <= 1 )
    return sub_A74EC0(v31, *((_QWORD *)v20 + 1));
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v31 + 17448) + 248LL) - 55) > 1 )
    goto LABEL_77;
  v80 = *((_QWORD *)v20 + 1);
  if ( sub_F65EB0(&v80) )
  {
    v50 = (__int64 *)(a1 + 8);
    v51 = 5465;
    goto LABEL_94;
  }
  if ( !sub_F65F60(*(_QWORD *)(v80 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
LABEL_77:
    sub_16C7C60(a1, v20, v28, v25, v26, v27);
    return sub_A70010(*(_QWORD *)(a1 + 248), *((_QWORD *)v20 + 1));
  }
  v50 = (__int64 *)(a1 + 8);
  v51 = 5478;
LABEL_94:
  sub_168B9F0((__int64)v82, v50, v10, v51, 0);
  v79 = 1;
  v52 = sub_1587D10((__int64)v82, &v79);
  v81 = sub_EEC8C0(*v8 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v79, *(double *)a7.m128i_i64);
  sub_1587DB0(v52, &v81);
  sub_15F7200(v82);
  return 0;
}
