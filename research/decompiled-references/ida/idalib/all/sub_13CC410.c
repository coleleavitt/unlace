__int64 __fastcall sub_13CC410(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        unsigned __int64 a6,
        char *a7)
{
  char *v12; // rax
  __int64 v13; // r15
  char v14; // al
  unsigned __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  char v18; // dl
  _BYTE *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // eax
  unsigned __int64 *v28; // rsi
  unsigned __int64 v29; // r8
  char v30; // al
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 *v36; // r12
  unsigned __int64 v37; // rax
  unsigned __int64 *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r14
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rsi
  int v50; // esi
  __int64 v51; // rdi
  int v52; // esi
  unsigned int v53; // eax
  __int64 v54; // r8
  __int64 v55; // rax
  char v56; // al
  _QWORD *v57; // rdx
  _QWORD *v58; // r14
  unsigned int v59; // ecx
  __int64 v60; // r8
  unsigned int v61; // edi
  __int64 *v62; // rsi
  __int64 v63; // r9
  unsigned __int64 v64; // r15
  _QWORD *v65; // rdx
  __int64 v66; // rax
  _QWORD *v67; // rdi
  int v68; // edx
  unsigned __int64 v69; // rsi
  __int64 v70; // rax
  char v71; // al
  int v72; // esi
  int v73; // r9d
  __int64 v74; // r11
  int v75; // r11d
  unsigned __int64 *v76; // rbp
  int v77; // eax
  int v78; // eax
  bool v79; // zf
  int v80; // esi
  int v81; // r8d
  __int64 v82; // r11
  __int64 v83; // rdx
  _QWORD *v84; // r12
  int v85; // eax
  int v86; // esi
  __int64 v87; // rax
  __int64 v89; // [rsp+8h] [rbp-60h]
  __int64 v90; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v91; // [rsp+18h] [rbp-50h] BYREF
  __m128 v92[4]; // [rsp+20h] [rbp-48h] BYREF

  _InterlockedAdd64(&qword_2C86D78, 1u);
  if ( !byte_2C86D80 )
    sub_2241470(off_2C86D60);
  *a7 = 0;
  v12 = (char *)sub_13C2790(a1, a3);
  v13 = (__int64)v12;
  if ( a4 )
  {
    *v12 |= 2u;
    v46 = a3;
    sub_13C2790(*(_QWORD *)(a2 + 104), a3);
    v47 = a3;
    while ( 1 )
    {
      v48 = *(_QWORD *)(v47 + 8);
      if ( !v48 )
        break;
      v48 &= 0xFFFFFFFFFFFFFFF8LL;
      v49 = *(_QWORD *)(v47 + 8) & 4LL;
      v47 = v48;
      if ( !v49 || !v48 )
        goto LABEL_48;
    }
    v47 = 0;
LABEL_48:
    v50 = *(_DWORD *)(a2 + 1728);
    v51 = *(_QWORD *)(a2 + 1712);
    if ( !v50 )
      goto LABEL_6;
    v52 = v50 - 1;
    v53 = v52 & (((unsigned int)v48 >> 4) ^ ((unsigned int)v48 >> 9));
    v54 = *(_QWORD *)(v51 + 8LL * v53);
    if ( v54 != v47 )
    {
      if ( v54 == -4096 )
        goto LABEL_6;
      v81 = 1;
      while ( 1 )
      {
        v53 = v52 & (v81 + v53);
        v82 = *(_QWORD *)(v51 + 8LL * v53);
        if ( v82 == v47 )
          break;
        ++v81;
        if ( v82 == -4096 )
          goto LABEL_6;
      }
    }
    if ( !a5 || (*(_BYTE *)v13 & 4) != 0 )
      return 0;
    while ( 1 )
    {
      v55 = *(_QWORD *)(v46 + 8);
      if ( !v55 )
        break;
      v46 = v55 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v55 & 4) == 0 || !v46 )
        goto LABEL_55;
    }
    v46 = 0;
LABEL_55:
    sub_1402D90(a1 + 632, v46);
    v56 = *(_BYTE *)(v13 + 1);
    if ( (v56 & 1) != 0 )
    {
LABEL_6:
      v15 = *(_QWORD *)(v13 + 8);
      v16 = *(_QWORD *)(a1 + 1512);
      if ( (v15 & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_11;
        v17 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v16 + 32LL))(v16, v15 >> 1);
        *(_QWORD *)(v13 + 8) = v17;
        if ( !v17 )
          goto LABEL_11;
      }
      else
      {
        if ( !v15 )
          goto LABEL_11;
        v17 = *(_QWORD *)(v13 + 8);
        if ( (*(_BYTE *)(v15 + 4) & 0x10) != 0 )
        {
          v89 = *(_QWORD *)(v13 + 8);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
          v17 = v89;
        }
      }
      v18 = *(_BYTE *)(v17 + 3) & 2;
      if ( a6 )
      {
        if ( !v18 )
          goto LABEL_11;
        v57 = *(_QWORD **)(a2 + 1616);
        if ( !v57 )
          goto LABEL_11;
        v58 = (_QWORD *)(a2 + 1608);
        do
        {
          while ( v57[4] >= a6 )
          {
            v58 = v57;
            v57 = (_QWORD *)v57[2];
            if ( !v57 )
              goto LABEL_66;
          }
          v57 = (_QWORD *)v57[3];
        }
        while ( v57 );
LABEL_66:
        if ( (_QWORD *)(a2 + 1608) == v58 || v58[4] > a6 )
          goto LABEL_11;
        v59 = *((_DWORD *)v58 + 14);
        v60 = v58[5];
        if ( v59 )
        {
          v61 = (v59 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v62 = (__int64 *)(v60 + 16LL * v61);
          v63 = *v62;
          if ( *v62 == v17 )
          {
LABEL_70:
            sub_13C4310(v92, v62, (_QWORD *)(v60 + 16LL * v59), (__int64)(v58 + 5), 1);
            v64 = v92[0].m128_u64[0];
            goto LABEL_71;
          }
          v72 = 1;
          if ( v63 != -4096 )
          {
            do
            {
              v73 = v72 + 1;
              v61 = (v59 - 1) & (v72 + v61);
              v62 = (__int64 *)(v60 + 16LL * v61);
              v74 = *v62;
              if ( *v62 == v17 )
                goto LABEL_70;
              v72 = v73;
            }
            while ( v74 != -4096 );
          }
        }
        sub_13C4310(v92, (_QWORD *)(v60 + 16LL * v59), (_QWORD *)(v60 + 16LL * v59), (__int64)(v58 + 5), 1);
        v64 = v92[0].m128_u64[0];
LABEL_71:
        v65 = (_QWORD *)(v58[5] + 16LL * *((unsigned int *)v58 + 14));
        sub_13C4310(v92, v65, v65, (__int64)(v58 + 5), 1);
        if ( v92[0].m128_u64[0] != v64 )
        {
          v66 = *(_QWORD *)(v64 + 8);
          v67 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
          if ( !v66 || (v66 & 4) == 0 )
          {
LABEL_76:
            if ( !v67 || !sub_13F1C60(v67) || v68 )
              goto LABEL_11;
            goto LABEL_21;
          }
          if ( v67 )
          {
            v67 = (_QWORD *)*v67;
            goto LABEL_76;
          }
        }
LABEL_11:
        v19 = (_BYTE *)sub_13C2790(*(_QWORD *)(a2 + 104), a3);
        *v19 |= 1u;
        while ( 1 )
        {
          v22 = *(_QWORD *)(a3 + 8);
          if ( !v22 )
            break;
          v22 &= 0xFFFFFFFFFFFFFFF8LL;
          v23 = *(_QWORD *)(a3 + 8) & 4LL;
          a3 = v22;
          if ( !v23 || !v22 )
            goto LABEL_15;
        }
        a3 = 0;
LABEL_15:
        v24 = *(unsigned int *)(a2 + 1728);
        v91 = a3;
        v25 = a2 + 1712;
        if ( (_DWORD)v24 )
        {
          v26 = *(_QWORD *)(a2 + 1712);
          v27 = (v24 - 1) & (((unsigned int)v22 >> 4) ^ ((unsigned int)v22 >> 9));
          v28 = (unsigned __int64 *)(v26 + 8LL * v27);
          v29 = *v28;
          if ( a3 == *v28 )
          {
LABEL_17:
            sub_101F7C0(v92, v28, (_QWORD *)(v26 + 8 * v24), v25, 1);
            v30 = 0;
LABEL_18:
            *a7 = v30;
            return 1;
          }
          v75 = 1;
          v76 = nullptr;
          if ( v29 != -4096 )
          {
            while ( 1 )
            {
              if ( v29 == -8192 && !v76 )
                v76 = v28;
              v27 = (v24 - 1) & (v75 + v27);
              v28 = (unsigned __int64 *)(v26 + 8LL * v27);
              v29 = *v28;
              if ( a3 == *v28 )
                goto LABEL_17;
              if ( v29 == -4096 )
              {
                if ( v76 )
                  v28 = v76;
                break;
              }
              ++v75;
            }
          }
          v77 = *(_DWORD *)(a2 + 1720);
          v20 = (unsigned int)(3 * v24);
          v92[0].m128_u64[0] = (unsigned __int64)v28;
          v78 = v77 + 1;
          v21 = (unsigned int)(4 * v78);
          if ( (unsigned int)v21 < (unsigned int)v20 )
          {
            v20 = (unsigned int)(v24 - *(_DWORD *)(a2 + 1724) - v78);
            v21 = (unsigned int)v24 >> 3;
            if ( (unsigned int)v20 > (unsigned int)v21 )
            {
LABEL_98:
              v79 = *v28 == -4096;
              *(_DWORD *)(a2 + 1720) = v78;
              if ( !v79 )
                --*(_DWORD *)(a2 + 1724);
              *v28 = a3;
              sub_101F7C0(v92, v28, (_QWORD *)(v26 + 8 * v24), v25, 1);
              v30 = 1;
              goto LABEL_18;
            }
            v80 = v24;
LABEL_104:
            sub_1024740(a2 + 1712, v80, v24, v25, v20, v21);
            sub_101E950((__int64 *)(a2 + 1712), (__int64 *)&v91, v92);
            a3 = v91;
            v26 = *(_QWORD *)(a2 + 1712);
            v24 = *(unsigned int *)(a2 + 1728);
            v78 = *(_DWORD *)(a2 + 1720) + 1;
            v28 = (unsigned __int64 *)v92[0].m128_u64[0];
            v25 = a2 + 1712;
            goto LABEL_98;
          }
        }
        else
        {
          v92[0].m128_u64[0] = 0;
        }
        v80 = 2 * v24;
        goto LABEL_104;
      }
      if ( !v18 )
        goto LABEL_11;
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 21LL) & 2) == 0 )
      {
LABEL_21:
        _InterlockedAdd64(&qword_2C86D38, 1u);
        if ( !byte_2C86D40 )
          sub_2241470(off_2C86D20);
        return 0;
      }
      v90 = v17;
      v32 = *(_QWORD *)(a2 + 1704);
      if ( (unsigned __int8)sub_12EC520((__int64 *)v32, &v90, &v91) )
      {
        v36 = (unsigned __int64 *)(v91 + 8);
        goto LABEL_26;
      }
      v83 = *(unsigned int *)(v32 + 16);
      v84 = (_QWORD *)v91;
      v85 = *(_DWORD *)(v32 + 8) + 1;
      v86 = 2 * v83;
      v33 = (unsigned int)(3 * v83);
      v92[0].m128_u64[0] = v91;
      if ( 4 * v85 < (unsigned int)v33 )
      {
        v33 = (unsigned int)(v83 - *(_DWORD *)(v32 + 12) - v85);
        if ( (unsigned int)v33 > (unsigned int)v83 >> 3 )
        {
LABEL_116:
          v79 = *v84 == -4096;
          *(_DWORD *)(v32 + 8) = v85;
          if ( !v79 )
            --*(_DWORD *)(v32 + 12);
          v87 = v90;
          v36 = v84 + 1;
          *v36 = 0;
          *(v36 - 1) = v87;
LABEL_26:
          v37 = *v36;
          if ( !*v36 )
            goto LABEL_33;
          v38 = (unsigned __int64 *)(v37 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v37 & 4) != 0 )
          {
            if ( !v38 )
              goto LABEL_33;
            a6 = *v38;
          }
          else
          {
            a6 = v37 & 0xFFFFFFFFFFFFFFF8LL;
          }
          while ( a6 && (*(_BYTE *)(a6 + 12) & 3) == 2 )
            a6 = *(_QWORD *)a6;
LABEL_33:
          sub_12EEA40(v36, (_QWORD *)a2, v90, v33, v34, v35);
          v42 = sub_12EEA40(v36, (_QWORD *)a2, v90, v39, v40, v41);
          v43 = 0;
          if ( v42 )
          {
            v44 = *(_QWORD *)(v42 + 8);
            v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v44 & 4) != 0 )
              v43 = *(unsigned int *)(v45 + 8);
            else
              v43 = v45 != 0;
          }
          if ( (!a6 || (*(_BYTE *)(a6 + 12) & 3) != 0 || (a6 & 0xFFFFFFFFFFFFFFF8LL) == 0) && !v43 )
            goto LABEL_11;
          goto LABEL_21;
        }
        v86 = v83;
      }
      sub_12F12D0(v32, v86, v83, v33, v34, v35);
      sub_12EC520((__int64 *)v32, &v90, v92);
      v84 = (_QWORD *)v92[0].m128_u64[0];
      v85 = *(_DWORD *)(v32 + 8) + 1;
      goto LABEL_116;
    }
    if ( (v56 & 2) != 0 )
    {
      if ( *(char *)v13 >= 0 )
        goto LABEL_89;
      if ( (unsigned __int8)sub_13F49C0(a1 + 632, a3) )
        goto LABEL_6;
    }
  }
  else
  {
    v14 = *v12;
    if ( (v14 & 4) == 0 )
    {
      if ( (v14 & 2) == 0 )
        goto LABEL_6;
      if ( a5 )
      {
        v69 = a3;
        while ( 1 )
        {
          v70 = *(_QWORD *)(v69 + 8);
          if ( !v70 )
            break;
          v69 = v70 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v70 & 4) == 0 || !v69 )
            goto LABEL_86;
        }
        v69 = 0;
LABEL_86:
        sub_1402D90(a1 + 632, v69);
        v71 = *(_BYTE *)(v13 + 1);
        if ( (v71 & 1) != 0 )
          goto LABEL_6;
        if ( (v71 & 2) != 0 )
        {
          if ( *(char *)v13 >= 0 )
          {
LABEL_89:
            if ( !sub_13BF850(v13, *(_QWORD *)(a1 + 1512)) )
              return 0;
            goto LABEL_6;
          }
          if ( (unsigned __int8)sub_13F49C0(a1 + 632, a3) )
            goto LABEL_6;
        }
      }
    }
  }
  return 0;
}
