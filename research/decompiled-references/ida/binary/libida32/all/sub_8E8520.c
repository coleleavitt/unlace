__int64 __fastcall sub_8E8520(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int *a4,
        __int64 a5,
        unsigned __int64 a6,
        _BYTE *a7,
        size_t n,
        int a9,
        int a10)
{
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  int v18; // r10d
  _BOOL4 v19; // edi
  int v20; // edx
  _BOOL4 v21; // eax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // r11
  int v25; // r10d
  char *v26; // rdx
  char *v27; // rcx
  _BYTE *v28; // rax
  _BYTE *v29; // r15
  _BYTE *v30; // r15
  unsigned __int64 v31; // rax
  _BYTE *v32; // r15
  int v33; // r14d
  int v34; // eax
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // r14d
  __int64 v40; // r15
  __int64 i; // r8
  unsigned int v42; // esi
  int v43; // r11d
  int v44; // eax
  unsigned int v45; // eax
  int v46; // esi
  int v47; // eax
  __int64 v48; // r10
  unsigned int v49; // edx
  unsigned int v50; // r9d
  _BOOL4 v51; // edi
  unsigned int v52; // eax
  int v53; // esi
  int v54; // r10d
  int v55; // eax
  int v56; // eax
  int v57; // edx
  int v58; // esi
  int v59; // eax
  __int64 v60; // rdx
  int v61; // eax
  unsigned int v62; // eax
  int v63; // edx
  char v64; // cl
  __int64 v65; // rax
  int v66; // eax
  char *dest; // [rsp+10h] [rbp-D8h]
  _QWORD *v69; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v70; // [rsp+18h] [rbp-D0h]
  int v71; // [rsp+24h] [rbp-C4h]
  __int64 v72; // [rsp+30h] [rbp-B8h]
  _DWORD *v73; // [rsp+30h] [rbp-B8h]
  int v74; // [rsp+38h] [rbp-B0h]
  _BYTE *v75; // [rsp+38h] [rbp-B0h]
  __int64 v76; // [rsp+38h] [rbp-B0h]
  char *v77; // [rsp+40h] [rbp-A8h]
  __int64 v78; // [rsp+48h] [rbp-A0h]
  __int64 v79; // [rsp+50h] [rbp-98h]
  __int64 v80; // [rsp+58h] [rbp-90h]
  __int64 v81; // [rsp+60h] [rbp-88h]
  __int64 v82; // [rsp+68h] [rbp-80h]
  _BYTE v83[16]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v84; // [rsp+80h] [rbp-68h]
  __int64 v85; // [rsp+88h] [rbp-60h]
  int v86; // [rsp+90h] [rbp-58h]
  __int64 v87; // [rsp+9Ch] [rbp-4Ch] BYREF
  int v88; // [rsp+A4h] [rbp-44h]
  unsigned __int64 v89; // [rsp+A8h] [rbp-40h]

  v89 = __readfsqword(0x28u);
  v87 = *a3;
  v88 = *((_DWORD *)a3 + 2);
  if ( a10 )
  {
    v37 = *(_QWORD *)a2;
    v38 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
    v39 = v38;
    if ( *(_DWORD *)(a2 + 72) == 1 )
      v39 = *(_DWORD *)(a2 + 76);
    if ( (_DWORD)v38 )
    {
      v40 = (unsigned int)(v38 - 1);
      for ( i = 0; ; ++i )
      {
        v48 = v37 + 8 * i;
        v49 = *(_DWORD *)v48;
        v50 = *(_DWORD *)v48 - 1;
        v51 = *(_WORD *)(v48 + 4) == 0 && v39 != (_DWORD)i;
        if ( v50 <= 2 )
        {
          v42 = v51 + v50;
          if ( v51 + v50 == 3 )
          {
            v43 = *(_DWORD *)a3 - 1;
            v44 = *a4 - 1;
          }
          else
          {
            v43 = *((_DWORD *)a3 + v42);
            v44 = a4[v42];
          }
          if ( v44 == v43 )
          {
            v52 = v51 + v49 - 1;
            if ( v51 + v49 == 1 )
              goto LABEL_52;
            v53 = *(_DWORD *)a3;
            v54 = *(_DWORD *)a3 - 1;
            if ( v51 + v49 == 4 )
              goto LABEL_59;
            goto LABEL_49;
          }
          v45 = v44 + 3;
          *(_DWORD *)v48 = v45;
          if ( v45 > 3 )
            goto LABEL_40;
        }
        else
        {
          v45 = *(_DWORD *)v48;
          if ( v49 > 3 )
          {
LABEL_40:
            *((_DWORD *)a3 + 2) = *((_DWORD *)a3 + 1);
            v46 = *(_DWORD *)a3;
            *(_DWORD *)a3 = v45 - 3;
            *((_DWORD *)a3 + 1) = v46;
LABEL_41:
            v42 = v51 + v50;
            if ( v49 > 3 )
              goto LABEL_42;
            goto LABEL_52;
          }
        }
        v52 = v51 + v45 - 1;
        if ( !v52 )
          goto LABEL_41;
        v53 = *(_DWORD *)a3;
        v54 = *(_DWORD *)a3 - 1;
        if ( v52 == 3 )
          goto LABEL_59;
LABEL_49:
        v54 = *((_DWORD *)a3 + v52);
        if ( v52 <= 1 )
        {
          v55 = *((_DWORD *)a3 + 2);
          goto LABEL_51;
        }
LABEL_59:
        v55 = *((_DWORD *)a3 + 1);
LABEL_51:
        *((_DWORD *)a3 + 1) = v53;
        v42 = v51 + v50;
        *((_DWORD *)a3 + 2) = v55;
        *(_DWORD *)a3 = v54;
        if ( v49 > 3 )
        {
LABEL_42:
          a4[2] = a4[1];
          v47 = *a4;
          *a4 = v49 - 3;
          a4[1] = v47;
          goto LABEL_43;
        }
LABEL_52:
        if ( v42 )
        {
          v56 = *a4;
          v57 = *a4 - 1;
          if ( v42 == 3 || (v57 = a4[v42], v42 > 1) )
            v58 = a4[1];
          else
            v58 = a4[2];
          a4[2] = v58;
          a4[1] = v56;
          *a4 = v57;
        }
LABEL_43:
        if ( v40 == i )
          break;
        v37 = *(_QWORD *)a2;
      }
    }
  }
  if ( a6 <= 2 )
    return -70;
  v71 = *(_DWORD *)(a1 + 8);
  dest = (char *)(a5 + 3);
  v80 = *(_QWORD *)(a2 + 32);
  v81 = *(_QWORD *)(a2 + 40);
  v14 = *(_QWORD *)(a2 + 16);
  v78 = *(_QWORD *)a2;
  v77 = *(char **)(a1 + 3520);
  v15 = *(_QWORD *)(a2 + 24) - v14;
  v16 = (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3;
  v17 = *(_QWORD *)(a1 + 3200);
  v79 = *(_QWORD *)(a2 + 48);
  v18 = *(_DWORD *)(a1 + 260);
  v19 = 1;
  v69 = v77 + 212;
  if ( v16 )
  {
    v20 = *(_DWORD *)(a1 + 304);
    v19 = v15 / v16 > 0x13;
    v21 = 0;
    if ( v20 != 1 )
      goto LABEL_5;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 304);
    v21 = 0;
    if ( v20 != 1 )
    {
LABEL_5:
      v21 = 1;
      if ( v20 != 2 )
      {
        v21 = 0;
        if ( v18 == 1 )
          v21 = *(_DWORD *)(a1 + 256) != 0;
      }
    }
  }
  v74 = *(_DWORD *)(a1 + 260);
  v72 = *(_QWORD *)(a1 + 3208);
  v22 = sub_8EFCD0((_DWORD)dest, (int)a6 - 3, v14, v15, (_DWORD)v69, 8708, v17, v72, v18, v21, v19, v71);
  v23 = v22;
  if ( v22 > 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_21;
  v24 = v72;
  v25 = v74;
  v26 = &dest[v22];
  if ( (__int64)(a6 - 3 - v22) <= 3 )
  {
    if ( a6 - 3 < n )
      return -70;
LABEL_22:
    v33 = *(_DWORD *)(a1 + 912);
    if ( !*(_DWORD *)(a1 + 944) )
    {
LABEL_62:
      v23 = 0;
      goto LABEL_63;
    }
LABEL_23:
    if ( v33 )
      goto LABEL_81;
LABEL_24:
    if ( a6 >= n + 3 )
    {
      v34 = a9 + 8 * n;
      *(_WORD *)a5 = v34;
      *(_BYTE *)(a5 + 2) = BYTE2(v34);
      memcpy(dest, a7, n);
      v23 = n + 3;
      if ( n + 3 > 0xFFFFFFFFFFFFFF88LL )
        return v23;
      *a3 = v87;
      *((_DWORD *)a3 + 2) = v88;
      goto LABEL_27;
    }
    return -70;
  }
  v27 = (char *)(v17 + 2064);
  v73 = (_DWORD *)(v72 + 2064);
  if ( v16 <= 0x7F )
  {
    v28 = v26 + 1;
    *v26 = v16;
    if ( !v16 )
    {
      *(_QWORD *)(v24 + 2064) = *(_QWORD *)(v17 + 2064);
      *(_QWORD *)(v24 + 5608) = *(_QWORD *)(v17 + 5608);
      qmemcpy(
        (void *)((v24 + 2072) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v27 - ((char *)v73 - ((v24 + 2072) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v73 - (((_DWORD)v24 + 2072) & 0xFFFFFFF8) + 3552) >> 3));
      v23 = v28 - dest;
      goto LABEL_71;
    }
  }
  else if ( v16 > 0x7EFF )
  {
    *v26 = -1;
    *(_WORD *)(v26 + 1) = v16 - 32512;
    v28 = v26 + 3;
  }
  else
  {
    v26[1] = v16;
    *v26 = BYTE1(v16) + 0x80;
    v28 = v26 + 2;
  }
  v82 = v24;
  v29 = v28 + 1;
  v75 = v28;
  sub_8E7B10((__int64)v83, (__int64 *)a2, v16, v27, v73, (__int64)(v28 + 1), a5 + a6, v25, v77, v69, 0x2204u);
  v23 = v84;
  if ( v84 > 0xFFFFFFFFFFFFFF88LL
    || (v30 = &v29[v84],
        *v75 = 16 * v83[4] + (v83[0] << 6) + 4 * v83[8],
        v76 = v85,
        v31 = sub_8F0CA0(
                (_DWORD)v30,
                (int)a5 + (int)a6 - (int)v30,
                (int)v82 + 2836,
                v81,
                (_DWORD)v73,
                v79,
                v82 + 4288,
                v80,
                v78,
                v16,
                v86,
                v71),
        v23 = v31,
        v31 > 0xFFFFFFFFFFFFFF88LL) )
  {
LABEL_21:
    if ( a6 - 3 < n || v23 != -70 )
      return v23;
    goto LABEL_22;
  }
  v32 = &v30[v31];
  if ( v76 && v76 + v31 <= 3 )
    goto LABEL_22;
  v23 = v32 - dest;
LABEL_71:
  if ( !v23 || v23 == -70 && a6 - 3 >= n )
    goto LABEL_22;
  if ( v23 > 0xFFFFFFFFFFFFFF88LL )
    return v23;
  v62 = *(_DWORD *)(a1 + 260);
  v63 = *(_DWORD *)(a1 + 944);
  v33 = *(_DWORD *)(a1 + 912);
  v64 = v62 - 1;
  if ( v62 <= 7 )
    v64 = 6;
  if ( v23 >= n - 2 - (n >> v64) )
  {
    if ( !v63 )
      goto LABEL_62;
    goto LABEL_23;
  }
  if ( v63 || v23 > 0x18 )
  {
    if ( v33 )
      goto LABEL_81;
    goto LABEL_66;
  }
LABEL_63:
  v70 = v23;
  v59 = sub_8E5710(a7, n);
  v23 = v70;
  if ( v59 )
  {
    if ( v33 )
    {
LABEL_81:
      v23 = sub_8E68C0((_QWORD *)(a1 + 912), (__int64 *)a2, (__int64)&v87);
      if ( v23 <= 0xFFFFFFFFFFFFFF88LL )
      {
        v65 = *(_QWORD *)(a1 + 3200);
        v23 = 0;
        *(_QWORD *)(a1 + 3200) = *(_QWORD *)(a1 + 3208);
        *(_QWORD *)(a1 + 3208) = v65;
      }
      return v23;
    }
    goto LABEL_85;
  }
  if ( v33 )
    goto LABEL_81;
  if ( !v70 )
    goto LABEL_24;
LABEL_66:
  if ( v23 != 1 )
  {
    v60 = *(_QWORD *)(a1 + 3208);
    *(_QWORD *)(a1 + 3208) = *(_QWORD *)(a1 + 3200);
    *(_QWORD *)(a1 + 3200) = v60;
    v61 = a9 + 8 * v23 + 4;
    v23 += 3LL;
    *(_WORD *)a5 = v61;
    *(_BYTE *)(a5 + 2) = BYTE2(v61);
    goto LABEL_27;
  }
LABEL_85:
  if ( a6 == 3 )
    return -70;
  v23 = 4;
  v66 = a9 + 8 * n + 2;
  *(_BYTE *)(a5 + 3) = *a7;
  *(_WORD *)a5 = v66;
  *(_BYTE *)(a5 + 2) = BYTE2(v66);
  *a3 = v87;
  *((_DWORD *)a3 + 2) = v88;
LABEL_27:
  v35 = *(_QWORD *)(a1 + 3200);
  if ( *(_DWORD *)(v35 + 5604) == 2 )
    *(_DWORD *)(v35 + 5604) = 1;
  return v23;
}

