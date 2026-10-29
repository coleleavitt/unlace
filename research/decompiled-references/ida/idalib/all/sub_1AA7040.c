void __fastcall sub_1AA7040(__int64 *a1, __int64 a2, void *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v7; // r12
  unsigned __int8 v8; // al
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // r9
  __int64 *v13; // r10
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rsi
  int v19; // edx
  int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned __int64 v23; // r15
  __int64 *v24; // rax
  __int64 v25; // rsi
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 **v37; // rax
  __int64 *v38; // rdx
  __int64 *v39; // r15
  __int64 v40; // r14
  __int16 v41; // ax
  __int64 *v42; // rsi
  __int64 v43; // rax
  __int64 *v44; // rdi
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 *v47; // rbx
  __int64 *v48; // rax
  void *v49; // r13
  signed __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdi
  unsigned __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rbx
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 *v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // [rsp+8h] [rbp-100h]
  __int64 v85; // [rsp+8h] [rbp-100h]
  __int64 *v86; // [rsp+10h] [rbp-F8h]
  unsigned int v87; // [rsp+1Ch] [rbp-ECh]
  void *src; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v89; // [rsp+28h] [rbp-E0h]
  __int64 v90; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v91; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v92; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v93[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v94; // [rsp+B8h] [rbp-50h]
  unsigned int v95; // [rsp+C0h] [rbp-48h]
  char v96; // [rsp+C4h] [rbp-44h]

  v87 = a2;
  src = a3;
  v89 = a4;
  if ( !a5 )
    goto LABEL_74;
  v7 = (_BYTE *)a5;
  v8 = *(_BYTE *)(a5 + 28) & 0x7F;
  v9 = v8;
  v10 = (unsigned int)v8 - 34;
  if ( (unsigned int)v10 <= 5 )
    goto LABEL_3;
  if ( v8 == 71 )
  {
    v7 = *(_BYTE **)(a5 + 48);
    goto LABEL_70;
  }
  if ( (unsigned int)v8 - 49 <= 2 )
  {
    if ( (*(_QWORD *)(a5 + 48) & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
LABEL_74:
      sub_168B9F0((__int64)&v91, (__int64 *)(*a1 + 8), a2, 0xB47u, 0);
      sub_15F7200(&v91);
      return;
    }
    v73 = sub_F63270(*(_QWORD *)(*(_QWORD *)(a5 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v8, v10, a5, a6);
    v74 = (__int64)v73;
    if ( v73 )
    {
      if ( sub_B96EF0((__int64)v73) )
        goto LABEL_99;
      v75 = *(_QWORD *)(v74 + 128);
      if ( v75 && (*(_BYTE *)(v75 + 10) & 0x20) != 0 )
      {
LABEL_96:
        v7 = (_BYTE *)sub_B96F60(v74);
        goto LABEL_70;
      }
    }
    v9 = v7[28] & 0x7F;
  }
  if ( (unsigned int)(v9 - 40) > 6 )
    goto LABEL_74;
  v76 = sub_B73640((__int64)v7);
  if ( !v76 )
    goto LABEL_74;
  v81 = (__int64 *)(*(_QWORD *)(v76 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v81 )
    goto LABEL_74;
  v82 = sub_F63270(*v81, a2, v77, v78, v79, v80);
  v74 = (__int64)v82;
  if ( !v82 )
    goto LABEL_74;
  if ( !sub_B96EF0((__int64)v82) )
  {
    v83 = *(_QWORD *)(v74 + 128);
    if ( !v83 || (*(_BYTE *)(v83 + 10) & 0x20) == 0 )
      goto LABEL_74;
    goto LABEL_96;
  }
LABEL_99:
  v7 = *(_BYTE **)(sub_B96F10(v74) + 48);
LABEL_70:
  if ( !v7 )
    goto LABEL_74;
LABEL_3:
  v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v7 + 32LL))(v7);
  v12 = a1[24] & 1;
  if ( !v12 )
  {
    v22 = *((_DWORD *)a1 + 52);
    v13 = (__int64 *)a1[25];
    v21 = v22;
    if ( v22 )
    {
      v19 = v22 - 1;
      v15 = (v22 - 1) & (((unsigned int)v11 >> 4) ^ ((unsigned int)v11 >> 9));
      v16 = &v13[2 * v15];
      if ( v11 == *v16 )
      {
LABEL_12:
        v14 = 2LL * v21;
        goto LABEL_13;
      }
      if ( *v16 != -4096 )
      {
LABEL_6:
        v20 = 1;
        do
        {
          v15 = v19 & (v20 + v15);
          v16 = &v13[2 * v15];
          if ( v11 == *v16 )
          {
            if ( !v12 )
            {
              v21 = *((_DWORD *)a1 + 52);
              goto LABEL_12;
            }
            v14 = 8;
            goto LABEL_13;
          }
          ++v20;
        }
        while ( *v16 != -4096 );
        if ( !v12 )
        {
          v22 = *((_DWORD *)a1 + 52);
          goto LABEL_76;
        }
        v18 = 8;
        goto LABEL_77;
      }
    }
LABEL_76:
    v18 = 2LL * v22;
    goto LABEL_77;
  }
  v13 = a1 + 25;
  v14 = 8;
  v15 = ((unsigned __int8)((unsigned int)v11 >> 4) ^ (unsigned __int8)((unsigned int)v11 >> 9)) & 3;
  v16 = &a1[2 * (((unsigned __int8)((unsigned int)v11 >> 4) ^ (unsigned __int8)((unsigned int)v11 >> 9)) & 3) + 25];
  v17 = *v16;
  if ( v11 != *v16 )
  {
    v18 = 8;
    v19 = 3;
    if ( v17 != -4096 )
      goto LABEL_6;
LABEL_77:
    sub_1AA3AC0(&v91, &v13[v18], &v13[v18], (__int64)(a1 + 24), 1);
    v23 = v91.m128_u64[0];
    goto LABEL_14;
  }
LABEL_13:
  sub_1AA3AC0(&v91, v16, &v13[v14], (__int64)(a1 + 24), 1);
  v23 = v91.m128_u64[0];
LABEL_14:
  if ( (a1[24] & 1) != 0 )
  {
    v24 = a1 + 25;
    v25 = 8;
  }
  else
  {
    v24 = (__int64 *)a1[25];
    v25 = 2LL * *((unsigned int *)a1 + 52);
  }
  v26 = &v24[v25];
  sub_1AA3AC0(&v91, v26, v26, (__int64)(a1 + 24), 1);
  if ( v23 != v91.m128_u64[0] )
  {
    sub_168B9F0((__int64)&v91, a1, *(_DWORD *)(v23 + 8), 0xB65u, 0);
    sub_15F7200(&v91);
    sub_168B9F0((__int64)&v91, a1, v87, 0x1672u, 0);
    if ( v94 )
    {
      sub_1AA2FB0(v93, 19);
    }
    else if ( v96 )
    {
      v68 = sub_168B9E0(&v91);
      v71 = v92;
      if ( v92 )
        v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
      v90 = v71;
      v72 = sub_1587BC0(v68, &v90, v66, v67, v69, v70);
      sub_1AA2FB0((unsigned __int8 **)(*v72 + 32LL * v95 + 8), 19);
    }
    goto LABEL_19;
  }
  v86 = sub_1AA13D0((__int64)&src);
  if ( (v7[29] & 1) == 0
    || ((v31 = sub_B8C3D0((__int64)v7, (__int64)v26, v27, v28, v29, v30),
         v34 = *((unsigned int *)v31 + 2),
         v35 = *v31,
         v36 = v35 + 8 * v34,
         (v7[29] & 1) == 0)
      ? (v38 = nullptr)
      : (v84 = v35 + 8 * v34,
         v37 = (__int64 **)sub_B8C3D0((__int64)v7, (__int64)v26, v34, v36, v32, v33),
         v36 = v84,
         v38 = *v37),
        (__int64 *)v36 == v38) )
  {
LABEL_44:
    v49 = src;
    v50 = 8 * v89;
    v51 = sub_168B6C0((__int64)a1);
    v58 = sub_B33F30(v51, v87 | ((unsigned __int64)v87 << 32));
    v55 = 0;
    v56 = *(unsigned int *)(v58 + 52);
    v57 = v58;
    *(_DWORD *)(v58 + 48) = 0;
    LODWORD(v58) = 0;
    if ( v50 >> 3 > v56 )
    {
      sub_2237220(v57 + 40, v57 + 56, v50 >> 3, 8);
      v58 = *(unsigned int *)(v57 + 48);
      v55 = 8 * v58;
    }
    if ( v50 )
    {
      memcpy((void *)(*(_QWORD *)(v57 + 40) + v55), v49, v50);
      LODWORD(v58) = *(_DWORD *)(v57 + 48);
    }
    *(_DWORD *)(v57 + 48) = v58 + (v50 >> 3);
    sub_B8CC60((__int64)v7, v57, v56, v52, v53, v54);
    return;
  }
  v39 = v38;
  while ( 1 )
  {
    v40 = *v39;
    v41 = *(_WORD *)(*v39 + 36);
    if ( v41 != 319 )
      break;
    v42 = *(__int64 **)(v40 + 40);
    v43 = 8LL * *(unsigned int *)(v40 + 48);
    v44 = &v42[(unsigned __int64)v43 / 8];
    v45 = v43 >> 3;
    v46 = v43 >> 5;
    if ( v46 )
    {
      if ( *(_BYTE *)(*v42 + 8) == 3 )
      {
        v47 = *(__int64 **)(v40 + 40);
      }
      else
      {
        v47 = v42 + 1;
        if ( *(_BYTE *)(v42[1] + 8) != 3 )
        {
          v47 = v42 + 2;
          if ( *(_BYTE *)(v42[2] + 8) != 3 )
          {
            v47 = v42 + 3;
            v48 = &v42[4 * v46];
            if ( *(_BYTE *)(v42[3] + 8) != 3 )
            {
              while ( 1 )
              {
                v47 = v42 + 4;
                if ( v48 == v42 + 4 )
                {
                  v45 = v44 - v47;
                  goto LABEL_40;
                }
                if ( *(_BYTE *)(v42[4] + 8) == 3 )
                  goto LABEL_50;
                if ( *(_BYTE *)(v42[5] + 8) == 3 )
                {
                  v47 = v42 + 5;
                  goto LABEL_50;
                }
                if ( *(_BYTE *)(v42[6] + 8) == 3 )
                {
                  v47 = v42 + 6;
                  goto LABEL_50;
                }
                if ( *(_BYTE *)(v42[7] + 8) == 3 )
                  break;
                v42 += 4;
              }
              v47 = v42 + 7;
            }
          }
        }
      }
      goto LABEL_50;
    }
    v47 = *(__int64 **)(v40 + 40);
LABEL_40:
    if ( v45 == 2 )
      goto LABEL_64;
    if ( v45 != 3 )
    {
      if ( v45 != 1 )
        goto LABEL_43;
      goto LABEL_66;
    }
    if ( *(_BYTE *)(*v47 + 8) != 3 )
    {
      ++v47;
LABEL_64:
      if ( *(_BYTE *)(*v47 + 8) != 3 )
      {
        ++v47;
LABEL_66:
        if ( *(_BYTE *)(*v47 + 8) != 3 )
          goto LABEL_43;
      }
    }
LABEL_50:
    if ( v44 != v47 )
    {
      v85 = v36;
      if ( !sub_EADC50(*v86, *v47) )
      {
        sub_168B9F0((__int64)&v91, a1, *(_DWORD *)(*v86 + 12), 0xB4Fu, 0);
        sub_15F7200(&v91);
        sub_168B9F0((__int64)&v91, a1, *(_DWORD *)(*v47 + 16), 0x1675u, 0);
        LOBYTE(v90) = *(_BYTE *)(*v86 + 8);
        sub_1AA5620((__int64)&v91, (char *)&v90);
        sub_15F7200(&v91);
        return;
      }
      v41 = *(_WORD *)(v40 + 36);
      v36 = v85;
      break;
    }
LABEL_43:
    if ( (__int64 *)v36 == ++v39 )
      goto LABEL_44;
  }
  if ( v41 != 318 || !*(_DWORD *)(v40 + 28) )
    goto LABEL_43;
  sub_168B9F0((__int64)&v91, a1, *(_DWORD *)(*v86 + 12), 0xB4Du, 0);
  sub_15F7200(&v91);
  sub_168B9F0((__int64)&v91, a1, *(_DWORD *)(v40 + 28), 0x1675u, 0);
  if ( v94 )
  {
    sub_AE9DF0(v93, (__int64)"bind", 1u);
  }
  else if ( v96 )
  {
    v61 = sub_168B9E0(&v91);
    v64 = v92;
    if ( v92 )
      v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v92 + 32LL))(v92);
    v90 = v64;
    v65 = sub_1587BC0(v61, &v90, v59, v60, v62, v63);
    sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v95 + 8), (__int64)"bind", 1u);
  }
LABEL_19:
  sub_15F7200(&v91);
}
