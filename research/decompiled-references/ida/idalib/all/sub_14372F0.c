__int64 __fastcall sub_14372F0(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  const void *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  size_t v12; // rdx
  unsigned __int64 v13; // r13
  char v14; // dl
  int v15; // r15d
  __int64 v17; // r13
  char *v18; // rcx
  __int64 v19; // rdi
  char *v20; // rsi
  char *v21; // rax
  char *v22; // rcx
  char *v23; // rax
  char *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // edi
  __int64 *v29; // rsi
  __int64 v30; // r9
  unsigned __int64 v31; // r14
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r9
  unsigned __int64 *v36; // rsi
  unsigned __int64 v37; // rdx
  char v38; // cl
  __int64 v39; // rcx
  __int64 v40; // r8
  char v41; // al
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // edi
  __int64 *v50; // rsi
  __int64 v51; // r9
  unsigned __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 *v55; // rcx
  unsigned __int64 v56; // r13
  int v57; // esi
  int v58; // r9d
  __int64 v59; // r10
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  int v62; // edx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  char *v66; // rdi
  char *v67; // rax
  __int64 v68; // rdi
  int v69; // esi
  int v70; // r9d
  __int64 v71; // r10
  unsigned int v72; // [rsp+8h] [rbp-C0h]
  __int64 v74; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v75; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v76; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v77; // [rsp+18h] [rbp-B0h]
  __m128 v78; // [rsp+20h] [rbp-A8h] BYREF
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __int64 v80; // [rsp+38h] [rbp-90h]
  int v81; // [rsp+40h] [rbp-88h]
  char v82; // [rsp+44h] [rbp-84h]
  char v83; // [rsp+48h] [rbp-80h] BYREF

  v2 = *(_DWORD *)(a1 + 1336);
  if ( !v2 )
    return 0;
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 1328) + 32LL * v2 - 32;
  if ( *(_BYTE *)(v4 + 12) == a2 )
  {
    v5 = a1;
    v3 = *(_QWORD *)v4;
    v6 = *(_QWORD *)(a1 + 56);
    v72 = *(_DWORD *)(v4 + 8);
    if ( *(char *)(v6 + 22) >= 0 )
    {
      if ( !(*(_BYTE *)(v6 + 201) >> 5) )
      {
LABEL_5:
        v7 = *(_QWORD *)(a1 + 1192);
        *(_DWORD *)(v5 + 1336) = v2 - 1;
        if ( v7 )
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 80LL))(v7, v3, v72, a2);
        sub_1464EA0(v5, v3, v72, 1);
        return v3;
      }
      v9 = *(const void **)(v6 + 488);
      v10 = *(_QWORD *)(v6 + 496);
      v11 = sub_FEEE40(v3);
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 != v10 || v12 && memcmp(*(const void **)v11, v9, v12) )
      {
        v2 = *(_DWORD *)(a1 + 1336);
        goto LABEL_5;
      }
    }
    v13 = *(unsigned int *)(v4 + 24);
    v80 = 8;
    v14 = 1;
    ptr = &v83;
    v15 = v13;
    v81 = 0;
    v82 = 1;
    if ( (_DWORD)v13 != *(_DWORD *)(a1 + 1816) )
    {
      v74 = v3;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 8 * v13);
LABEL_14:
      v18 = (char *)ptr;
      v19 = 8LL * HIDWORD(v80);
      v20 = (char *)ptr + v19;
      if ( ptr != (char *)ptr + v19 )
      {
        v21 = (char *)ptr;
        if ( v17 == *(_QWORD *)ptr )
        {
LABEL_74:
          v14 = 0;
          goto LABEL_21;
        }
        while ( 1 )
        {
          v21 += 8;
          if ( v20 == v21 )
            break;
          if ( v17 == *(_QWORD *)v21 )
            goto LABEL_74;
        }
      }
      if ( HIDWORD(v80) < (unsigned int)v80 )
      {
        ++HIDWORD(v80);
        *(_QWORD *)v20 = v17;
        v18 = (char *)ptr;
        v21 = (char *)ptr + v19;
LABEL_21:
        v22 = &v18[8 * HIDWORD(v80)];
        goto LABEL_22;
      }
      while ( 1 )
      {
        v21 = (char *)sub_2236760(&ptr, v17);
        v18 = (char *)ptr;
        if ( v82 )
          goto LABEL_21;
        v22 = (char *)ptr + 8 * (unsigned int)v80;
LABEL_22:
        if ( v22 != v21 && *(_QWORD *)v21 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v23 = v21 + 8;
          do
          {
            v24 = v23;
            if ( v22 == v23 )
              break;
            v23 += 8;
          }
          while ( *(_QWORD *)v24 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( !v14 )
          goto LABEL_70;
        v25 = *(_QWORD *)(a1 + 1704);
        v26 = *(unsigned int *)(v25 + 16);
        v27 = *(_QWORD *)v25;
        if ( (_DWORD)v26 )
        {
          v28 = (v26 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v29 = (__int64 *)(v27 + 16LL * v28);
          v30 = *v29;
          if ( v17 == *v29 )
            goto LABEL_30;
          v57 = 1;
          if ( v30 != -4096 )
            break;
        }
LABEL_78:
        sub_13C4310(
          &v78,
          (_QWORD *)(v27 + 16LL * (unsigned int)v26),
          (_QWORD *)(v27 + 16LL * (unsigned int)v26),
          v25,
          1);
        v31 = v78.m128_u64[0];
LABEL_31:
        v32 = *(_QWORD *)(a1 + 1704);
        v33 = (_QWORD *)(*(_QWORD *)v32 + 16LL * *(unsigned int *)(v32 + 16));
        sub_13C4310(&v78, v33, v33, v32, 1);
        if ( v78.m128_u64[0] == v31 )
          goto LABEL_70;
        if ( *(char *)(*(_QWORD *)(a1 + 56) + 22LL) < 0 )
        {
          v34 = a1 + 1648;
        }
        else
        {
          v34 = *(_QWORD *)(v4 + 16);
          if ( !v34 )
            goto LABEL_34;
        }
        if ( *(_QWORD *)(a1 + 1704) == v34 )
        {
          v34 = 0;
          goto LABEL_34;
        }
        v47 = *(unsigned int *)(v34 + 16);
        v48 = *(_QWORD *)v34;
        if ( !(_DWORD)v47 )
        {
LABEL_108:
          v77 = v34;
          sub_13C4310(
            &v78,
            (_QWORD *)(v48 + 16LL * (unsigned int)v47),
            (_QWORD *)(v48 + 16LL * (unsigned int)v47),
            v34,
            1);
          v52 = v78.m128_u64[0];
          v53 = v77;
          goto LABEL_64;
        }
        v49 = (v47 - 1) & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
        v50 = (__int64 *)(v48 + 16LL * v49);
        v51 = *v50;
        if ( v17 != *v50 )
        {
          v69 = 1;
          if ( v51 == -4096 )
            goto LABEL_108;
          while ( 1 )
          {
            v70 = v69 + 1;
            v49 = (v47 - 1) & (v69 + v49);
            v50 = (__int64 *)(v48 + 16LL * v49);
            v71 = *v50;
            if ( v17 == *v50 )
              break;
            v69 = v70;
            if ( v71 == -4096 )
              goto LABEL_108;
          }
        }
        v75 = v34;
        sub_13C4310(&v78, v50, (_QWORD *)(16 * v47 + v48), v34, 1);
        v52 = v78.m128_u64[0];
        v53 = v75;
LABEL_64:
        v76 = v52;
        sub_13C4310(
          &v78,
          (_QWORD *)(*(_QWORD *)v53 + 16LL * *(unsigned int *)(v53 + 16)),
          (_QWORD *)(*(_QWORD *)v53 + 16LL * *(unsigned int *)(v53 + 16)),
          v53,
          1);
        v34 = 0;
        if ( v76 != v78.m128_u64[0] )
        {
          v54 = *(_QWORD *)(v76 + 8);
          v55 = (unsigned __int64 *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
          v34 = v54 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v54 )
          {
            if ( (v54 & 4) != 0 )
            {
              v34 = 0;
              if ( v55 )
                v34 = *v55;
            }
          }
        }
LABEL_34:
        v35 = *(_QWORD *)(v31 + 8);
        v36 = (unsigned __int64 *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
        v37 = v35 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v35 )
        {
          if ( (v35 & 4) != 0 )
          {
            v37 = 0;
            if ( v36 )
              v37 = *v36;
          }
        }
        if ( v34 != v37 )
        {
          v38 = *(_BYTE *)(v37 + 12) & 3;
          if ( v38 != 2 )
          {
LABEL_43:
            if ( v38 || (v39 = *(_QWORD *)(v37 + 16)) == 0 )
            {
              if ( !v35
                || (v35 & 4) == 0
                || !v36
                || ((v60 = v36[3], v61 = v60 & 0xFFFFFFFFFFFFFFF8LL, (v60 & 4) == 0)
                  ? (v62 = v61 != 0)
                  : (v62 = *(_DWORD *)(v61 + 8)),
                    !v62) )
              {
LABEL_49:
                if ( *(char *)(*(_QWORD *)(a1 + 56) + 22LL) >= 0 )
                {
                  v42 = *(_QWORD *)(v31 + 8);
                  if ( v42 && (v42 & 4) != 0 && (v43 = (_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF8LL)) != nullptr )
                  {
                    *v43 = 0;
                    v44 = *(_QWORD *)(v31 + 8);
                    if ( v44 )
                    {
                      if ( (v44 & 4) != 0 )
                      {
                        v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( v45 )
                        {
                          v46 = *(_QWORD *)(v45 + 24);
                          if ( (v46 & 4) != 0 )
                            *(_DWORD *)((v46 & 0xFFFFFFFFFFFFFFF8LL) + 8) = 0;
                          else
                            *(_QWORD *)(v45 + 24) = 0;
                          *(_DWORD *)(v45 + 16) = 0;
                        }
                      }
                    }
                  }
                  else
                  {
                    *(_QWORD *)(v31 + 8) = 0;
                  }
                }
                goto LABEL_70;
              }
              LODWORD(v39) = 0;
            }
            else
            {
              LODWORD(v40) = 0;
              if ( !v35 || (v41 = v35, LODWORD(v35) = 0, (v41 & 4) == 0) || !v36 )
              {
LABEL_48:
                sub_1446F00(a1, v74, v17, v39, v40, v35, (__int64)&v78);
                goto LABEL_49;
              }
              v60 = v36[3];
            }
            v63 = v60 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v60 & 4) != 0 )
            {
              v40 = *(_QWORD *)v63;
              LODWORD(v35) = *(_DWORD *)(v63 + 8);
            }
            else
            {
              LODWORD(v40) = (_DWORD)v36 + 24;
              LODWORD(v35) = v63 != 0;
            }
            goto LABEL_48;
          }
          if ( (*(_BYTE *)(v37 + 12) & 8) != 0 )
          {
            while ( 1 )
            {
              v37 = *(_QWORD *)v37;
              if ( v34 == v37 )
                break;
              v38 = *(_BYTE *)(v37 + 12) & 3;
              if ( v38 != 2 )
                goto LABEL_43;
            }
          }
        }
LABEL_70:
        v56 = (unsigned int)(v15 + 1);
        v15 = v56;
        if ( (_DWORD)v56 == *(_DWORD *)(a1 + 1816) )
        {
          v64 = v56;
          v13 = *(unsigned int *)(v4 + 24);
          v5 = a1;
          v3 = v74;
          v15 = *(_DWORD *)(v4 + 24);
          goto LABEL_90;
        }
        v14 = v82;
        v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1808) + 8 * v56);
        if ( v82 )
          goto LABEL_14;
      }
      while ( 1 )
      {
        v58 = v57 + 1;
        v28 = (v26 - 1) & (v28 + v57);
        v29 = (__int64 *)(v27 + 16LL * v28);
        v59 = *v29;
        if ( v17 == *v29 )
          break;
        v57 = v58;
        if ( v59 == -4096 )
          goto LABEL_78;
      }
LABEL_30:
      sub_13C4310(&v78, v29, (_QWORD *)(16 * v26 + v27), v25, 1);
      v31 = v78.m128_u64[0];
      goto LABEL_31;
    }
    v64 = v13;
LABEL_90:
    if ( v64 != v13 )
    {
      if ( v64 <= v13 )
      {
        if ( v13 > *(unsigned int *)(v5 + 1820) )
        {
          sub_2237220(v5 + 1808, v5 + 1824, v13, 8);
          v64 = *(unsigned int *)(v5 + 1816);
        }
        v65 = *(_QWORD *)(v5 + 1808);
        v66 = (char *)(v65 + 8 * v64);
        v67 = (char *)(v65 + 8 * v13);
        if ( v66 != v67 )
          memset(v66, 0, 8 * ((unsigned __int64)(v67 - 8 - v66) >> 3) + 8);
      }
      *(_DWORD *)(v5 + 1816) = v15;
    }
    if ( *(char *)(*(_QWORD *)(v5 + 56) + 22LL) < 0 )
      *(_QWORD *)(v5 + 1704) = *(_QWORD *)(v4 + 16);
    v68 = *(_QWORD *)(v5 + 1192);
    --*(_DWORD *)(v5 + 1336);
    if ( v68 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v68 + 80LL))(v68, v3, v72, a2);
    sub_1464EA0(v5, v3, v72, 1);
    if ( !v82 )
      free(ptr);
  }
  return v3;
}
