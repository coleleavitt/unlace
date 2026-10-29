__int64 __fastcall sub_852120(__int64 a1, __int64 a2, const __m128i *a3, char *a4)
{
  unsigned int v4; // r12d
  char v5; // si
  char v6; // al
  unsigned __int8 v9; // al
  __int64 v10; // r15
  unsigned int v11; // esi
  unsigned __int64 v12; // r8
  __int64 v13; // rbx
  int v14; // r13d
  __int64 *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rsi
  unsigned __int64 v22; // r12
  unsigned __int8 v23; // al
  __int64 v24; // rdx
  unsigned __int8 **v25; // rax
  unsigned int v26; // ecx
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int8 **v33; // rax
  unsigned __int8 **v34; // rbx
  void *v35; // rax
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rbx
  unsigned __int8 **v38; // rax
  unsigned __int8 **v39; // rbp
  int v40; // r12d
  __m128i v41; // xmm0
  __int64 v42; // r14
  void *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned __int64 v48; // r10
  char v49; // al
  unsigned __int8 **v50; // rax
  unsigned __int8 **v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r10
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rax
  __int64 v61; // rdi
  int v62; // eax
  _QWORD *v63; // rax
  _QWORD *v64; // rcx
  _QWORD *v65; // rdx
  unsigned __int8 **v66; // rdi
  __int64 v68; // [rsp+8h] [rbp-C0h]
  int v69; // [rsp+10h] [rbp-B8h]
  unsigned int v70; // [rsp+10h] [rbp-B8h]
  __int64 *v71; // [rsp+10h] [rbp-B8h]
  __int64 *v72; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+10h] [rbp-B8h]
  __int64 v74; // [rsp+10h] [rbp-B8h]
  __int64 v75; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+30h] [rbp-98h]
  unsigned __int64 v79; // [rsp+30h] [rbp-98h]
  unsigned __int64 v80; // [rsp+30h] [rbp-98h]
  unsigned __int64 v81; // [rsp+30h] [rbp-98h]
  __int64 v82; // [rsp+30h] [rbp-98h]
  __int64 v83; // [rsp+30h] [rbp-98h]
  __int64 v84; // [rsp+30h] [rbp-98h]
  unsigned __int64 v85; // [rsp+38h] [rbp-90h]
  unsigned __int64 v86; // [rsp+38h] [rbp-90h]
  __int64 v87; // [rsp+38h] [rbp-90h]
  unsigned int v88; // [rsp+40h] [rbp-88h]
  int v89; // [rsp+44h] [rbp-84h]
  unsigned __int16 v90; // [rsp+4Ch] [rbp-7Ch]
  __m128i v91; // [rsp+50h] [rbp-78h] BYREF
  _QWORD *v92; // [rsp+60h] [rbp-68h] BYREF
  __int64 v93; // [rsp+68h] [rbp-60h]
  void *v94; // [rsp+70h] [rbp-58h] BYREF
  __int64 v95; // [rsp+78h] [rbp-50h]
  _QWORD *v96; // [rsp+80h] [rbp-48h]
  __int64 v97; // [rsp+88h] [rbp-40h]

  v5 = *a4;
  if ( (*a4 & 1) != 0 )
  {
LABEL_2:
    v6 = 0;
    goto LABEL_37;
  }
  v9 = v5 & 2;
  if ( (v5 & 2) != 0 )
    goto LABEL_29;
  if ( *((_DWORD *)a4 + 8) != 1 )
  {
    if ( (*a4 & 8) == 0 || *((_QWORD *)a4 + 1) != *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * ((*(_DWORD *)a4 >> 4) - 1)) )
      goto LABEL_7;
LABEL_29:
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
    {
      sub_A2E130(a1, a2, 110, 0);
      v6 = 0;
      goto LABEL_37;
    }
    v24 = 2169;
    if ( (*a4 & 2) == 0 )
    {
      if ( *((_DWORD *)a4 + 8) != 1 || (v24 = 2173, (*a4 & 4) == 0) )
      {
        v24 = 2173;
        if ( (*a4 & 8) != 0 )
        {
          v24 = 2169;
          if ( *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * ((*(_DWORD *)a4 >> 4) - 1)) != *((_QWORD *)a4 + 1) )
            v24 = 2173;
        }
      }
    }
LABEL_33:
    v25 = (unsigned __int8 **)sub_A2E130(a1, a2, v24, 0);
    if ( v25 )
    {
      sub_823450(v25, 10);
      v6 = 0;
      goto LABEL_37;
    }
    goto LABEL_2;
  }
  if ( (v5 & 4) != 0
    || (*a4 & 8) != 0 && *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * ((*(_DWORD *)a4 >> 4) - 1)) == *((_QWORD *)a4 + 1) )
  {
    goto LABEL_29;
  }
LABEL_7:
  v10 = a3[1].m128i_i64[0];
  v11 = *(_DWORD *)v10;
  if ( (*(_BYTE *)(v10 + 4) & 1) != 0 )
  {
    if ( v11 <= 1 )
      goto LABEL_36;
  }
  else if ( !v11 )
  {
    goto LABEL_60;
  }
  v12 = a3[1].m128i_u64[1];
  v13 = 0;
  v14 = *((_DWORD *)a4 + 8);
  v90 = v4;
  while ( 1 )
  {
    v15 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (v12 & 1) == 0 )
    {
      v18 = *(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v18 & 1) == 0 && (((unsigned __int8)v12 | (unsigned __int8)v18) & 4) == 0 )
        goto LABEL_47;
    }
    if ( (_BYTE)v17 == 47 )
      break;
    if ( (_DWORD)v13 == v14 )
      goto LABEL_50;
LABEL_15:
    if ( (_DWORD)v13 == v14 - 1 )
    {
      if ( (_BYTE)v17 == 14 )
      {
        v16 = *v15;
        LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( (unsigned __int8)(v17 - 2) > 4u )
        {
LABEL_74:
          if ( (_BYTE)v17 == 14 )
          {
            v4 = v90;
            if ( *(_QWORD *)(*((_QWORD *)a4 + 3) + 8 * v13) <= 1u )
            {
              if ( *(_BYTE *)(v16 + 16) != 14 )
                sub_B0D320(v16);
              goto LABEL_50;
            }
            if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
            {
              v66 = (unsigned __int8 **)sub_A2E130(a1, a2, 2169, 0);
              if ( v66 )
              {
                sub_823450(v66, 10);
                v6 = 0;
                goto LABEL_37;
              }
              goto LABEL_2;
            }
            goto LABEL_114;
          }
LABEL_68:
          if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 56 > 1 )
          {
            if ( (unsigned int)(v17 - 56) > 1
              || (v79 = v12, v71 = v15, v47 = sub_B0D320(v16), v15 = v71, v12 = v79, (v16 = v47) == 0) )
            {
              v48 = *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * (unsigned int)v13) & 0xFFFFFFFFFFFFFFF8LL;
              if ( *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * (unsigned int)v13) <= 7u
                || (*(_BYTE *)(v48 + 28) & 0x7Fu) - 47 > 2 )
              {
                v83 = v12;
                v58 = sub_B0E910(*v15);
                v59 = *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * (unsigned int)v13) & 0xFFFFFFFFFFFFFFF8LL;
                if ( *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * (unsigned int)v13) <= 7u )
                {
                  v59 = 0;
                }
                else if ( (*(_BYTE *)(v59 + 28) & 0x7Fu) - 57 >= 3 )
                {
                  v59 = 0;
                }
                v10 = *(_QWORD *)(v10 + 8) + 56LL * (unsigned int)sub_84C340(v58, v59);
                v60 = sub_6E8B00(*(_QWORD *)(a1 + 16), v59);
                v12 = sub_81F6C0(v83, v60, 0);
              }
              else
              {
                if ( (*(_BYTE *)(v48 + 68) & 2) != 0 )
                {
                  v86 = *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * (unsigned int)v13) & 0xFFFFFFFFFFFFFFF8LL;
                  v80 = v12;
                  v72 = v15;
                  sub_A2CB40(a1);
                  v49 = sub_81F8C0(a1, a3->m128i_i64[0], a3->m128i_i64[1], 1);
                  v15 = v72;
                  v12 = v80;
                  v48 = v86;
                  if ( !v49 )
                  {
                    v4 = v90;
                    v50 = (unsigned __int8 **)sub_A2E130(a1, a2, 2167, 1);
                    v51 = v50;
                    if ( v50 )
                    {
                      sub_823450(v50, 10);
                      sub_8356A0(v51, v86, 0xAu);
                    }
                    sub_A2DD70(a1, *(unsigned int *)(v86 + 24), 105);
                    v6 = 0;
                    goto LABEL_37;
                  }
                }
                v81 = v48;
                v73 = v12;
                v52 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL));
                v53 = v73;
                v54 = v81;
                if ( *(_BYTE *)(v52 + 73) >> 5 == 2 )
                {
                  v55 = *(_QWORD *)(v10 + 8);
                  if ( !v55 )
                    goto LABEL_115;
                  if ( *(char *)(v55 + 29) < 0 )
                  {
                    v56 = sub_77A0C0(*(_QWORD *)(v10 + 8));
                    v54 = v81;
                    v53 = v73;
                    v55 = v56;
                  }
                  v57 = v54;
                  if ( *(char *)(v54 + 29) < 0 )
                  {
                    v87 = v53;
                    v82 = v55;
                    v74 = v54;
                    v57 = sub_77A0C0(v54);
                    v53 = v87;
                    v55 = v82;
                    v54 = v74;
                  }
                  if ( v57 != v55 )
                  {
LABEL_115:
                    v9 = 0;
                    goto LABEL_36;
                  }
                  v10 = *(_QWORD *)(v10 + 16);
                }
                else
                {
                  v61 = v81;
                  v84 = v73;
                  v75 = v54;
                  v62 = sub_83D880(v61);
                  v53 = v84;
                  v54 = v75;
                  v10 = *(_QWORD *)(v10 + 8) + 56LL * (unsigned int)(*(_DWORD *)(v10 + 16) + v62);
                }
                v12 = sub_81F6C0(v53, *(_QWORD *)(v54 + 48), (*(_BYTE *)(v54 + 68) & 2) != 0);
              }
              goto LABEL_58;
            }
          }
          v4 = v90;
          v36 = *(_QWORD *)(*((_QWORD *)a4 + 3) + 8 * v13);
          v37 = *(unsigned int *)(v16 + 20);
          if ( v36 != v37 )
          {
            if ( v37 >= v36 )
              goto LABEL_50;
            v38 = (unsigned __int8 **)sub_A2E240(a1, a2, 2179, 0);
            v39 = v38;
            if ( v38 )
            {
              sub_8356A0(v38, v36, 3u);
              sub_823450(v39, 0);
              sub_8356A0(v39, v37, 3u);
              v6 = 0;
              goto LABEL_37;
            }
            goto LABEL_2;
          }
LABEL_24:
          if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) != 0 )
          {
            v24 = 2169;
            goto LABEL_33;
          }
LABEL_114:
          sub_A2E130(a1, a2, 110, 0);
          v6 = 0;
          goto LABEL_37;
        }
      }
      else if ( (unsigned __int8)(v17 - 2) > 4u )
      {
        goto LABEL_68;
      }
    }
    else if ( (unsigned __int8)(v17 - 2) > 4u )
    {
      goto LABEL_74;
    }
    v19 = sub_6D9A50(*(_QWORD **)(a1 + 16), v12);
    v20 = v19;
    if ( !v19 || (unsigned int)*(unsigned __int8 *)(v19 + 16) - 2 > 1 )
      BUG();
    v21 = *(_QWORD *)(v19 + 40);
    v22 = *(_QWORD *)(*((_QWORD *)a4 + 3) + 8LL * (unsigned int)v13);
    v23 = *(_BYTE *)(v19 + 19);
    if ( (v23 & 2) != 0 )
    {
      LODWORD(v95) = *(_DWORD *)(v21 + 8);
      if ( (unsigned int)v95 <= 0x40 )
      {
        v94 = *(void **)v21;
        goto LABEL_22;
      }
      sub_2585B30(&v94);
    }
    else
    {
      LODWORD(v95) = 8 * ((v23 >> 2) & 0x1F);
      if ( (int)v95 <= 64 )
      {
        v94 = (void *)v21;
LABEL_22:
        if ( v22 >= (unsigned __int64)v94 )
        {
          v4 = v90;
          goto LABEL_24;
        }
        goto LABEL_56;
      }
      sub_2585A50(&v94, v21, 0);
    }
    v69 = v95;
    if ( (unsigned int)v95 <= 0x40 )
      goto LABEL_22;
    if ( v69 - (unsigned int)sub_2587400(&v94) > 0x40 )
    {
      if ( !v94 )
        goto LABEL_56;
      goto LABEL_55;
    }
    if ( v22 >= *(_QWORD *)v94 )
    {
      v4 = v90;
      if ( v94 )
        operator delete[](v94);
      goto LABEL_24;
    }
LABEL_55:
    operator delete[](v94);
LABEL_56:
    v31 = *(unsigned int *)(v10 + 16);
    v12 = *(_QWORD *)(v20 + 32);
    v32 = *(_QWORD *)(v10 + 8);
    if ( v22 >= v31 )
      v10 = v32 + 56 * v31;
    else
      v10 = v32 + 56 * v22;
LABEL_58:
    v13 = (unsigned int)(v13 + 1);
    if ( !*(_DWORD *)v10 )
    {
      v9 = 0;
      v4 = v90;
      if ( (_DWORD)v13 )
        goto LABEL_36;
LABEL_60:
      if ( !*(_BYTE *)(a1 + 962) )
      {
        v33 = (unsigned __int8 **)sub_A2E130(a1, a2, 2171, 0);
        v34 = v33;
        if ( v33 )
        {
          sub_823450(v33, 10);
          sub_823450(v34, *(_DWORD *)v10 == 1);
          v35 = (void *)sub_AC7B80(a2);
          LOBYTE(v95) = 1;
          v94 = v35;
          sub_839C90((__int64 *)v34, (__int64 *)&v94);
          v6 = 0;
          goto LABEL_37;
        }
      }
      goto LABEL_2;
    }
  }
  v40 = *(_DWORD *)(a1 + 888);
  v41 = _mm_loadu_si128(a3);
  v92 = *((_QWORD **)a4 + 3);
  v93 = (unsigned int)v13;
  v91 = v41;
  if ( !v40 )
    goto LABEL_46;
  v85 = v12;
  v42 = *(_QWORD *)(a1 + 872);
  v78 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  v43 = (void *)sub_69F620(v16, v17);
  v96 = nullptr;
  v94 = v43;
  v95 = v44;
  v97 = 0;
  v88 = v13;
  v89 = 1;
  v70 = (v40 - 1) & sub_84A6B0(v91.m128i_i64, (__int64)&v92);
  while ( 1 )
  {
    v45 = (_QWORD *)(v42 + 40LL * v70);
    if ( !(unsigned __int8)sub_69F550(&v91, v45) || v93 != v45[3] )
      goto LABEL_81;
    v28 = v92;
    v29 = &v92[v93];
    if ( v92 == v29 )
      break;
    v30 = (_QWORD *)v45[2];
    while ( *v28 == *v30 )
    {
      ++v28;
      ++v30;
      if ( v29 == v28 )
        goto LABEL_44;
    }
LABEL_81:
    if ( (unsigned __int8)sub_69F550(v45, &v94) )
    {
      v46 = v45[3];
      if ( v46 == v97 )
      {
        v63 = (_QWORD *)v45[2];
        v64 = &v63[v46];
        if ( v63 == v64 )
        {
LABEL_124:
          v13 = v88;
          v12 = v85;
          v15 = (__int64 *)v78;
          goto LABEL_46;
        }
        v65 = v96;
        while ( *v63 == *v65 )
        {
          ++v63;
          ++v65;
          if ( v64 == v63 )
            goto LABEL_124;
        }
      }
    }
    v70 = (v89 + v70) & (v40 - 1);
    ++v89;
  }
LABEL_44:
  v15 = (__int64 *)v78;
  v12 = v85;
  v13 = v88;
  if ( *(_DWORD *)(v42 + 40LL * v70 + 32) )
  {
    v12 = *(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFFALL | v85 & 2;
    v15 = (__int64 *)(*(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  }
LABEL_46:
  v16 = *v15;
  LODWORD(v17) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_47:
  if ( (_DWORD)v13 != v14 )
    goto LABEL_15;
  v4 = v90;
  if ( (_BYTE)v17 == 47 )
  {
    v68 = v12;
    sub_A2CB40(a1);
    if ( !sub_81F8C0(a1, a3->m128i_i64[0], a3->m128i_i64[1], 1) )
    {
      if ( (unsigned __int8)sub_836740(a1, a2, 0xAu, v68) )
      {
        v6 = 0;
        goto LABEL_37;
      }
    }
  }
LABEL_50:
  v9 = 1;
LABEL_36:
  v4 = v9;
  v6 = 1;
LABEL_37:
  v26 = v4;
  BYTE1(v26) = v6;
  return v26;
}

