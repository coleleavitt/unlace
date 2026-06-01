__int64 __fastcall sub_1682280(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  char v6; // al
  void *v7; // r14
  size_t v8; // r12
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r12
  __int64 v23; // rax
  _QWORD *v24; // rbp
  char *v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // r12
  unsigned int v29; // esi
  unsigned int v30; // edx
  __int64 *v31; // rax
  unsigned __int64 *v32; // r14
  __int64 v33; // rax
  unsigned __int64 *v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // r15
  unsigned __int8 v39; // bp
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r15
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  int v50; // r10d
  __int64 *v51; // r14
  int v52; // eax
  int v53; // eax
  bool v54; // zf
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+0h] [rbp-A8h]
  __int64 v63; // [rsp+0h] [rbp-A8h]
  int v64; // [rsp+0h] [rbp-A8h]
  int v65; // [rsp+0h] [rbp-A8h]
  __int64 v66; // [rsp+0h] [rbp-A8h]
  unsigned __int64 v67; // [rsp+0h] [rbp-A8h]
  __int64 v68; // [rsp+0h] [rbp-A8h]
  __int64 *v69; // [rsp+8h] [rbp-A0h]
  __int64 *v70; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v71; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v72; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v73; // [rsp+18h] [rbp-90h] BYREF
  void *src; // [rsp+20h] [rbp-88h] BYREF
  size_t n; // [rsp+28h] [rbp-80h]
  __int64 v76; // [rsp+30h] [rbp-78h] BYREF
  __int64 *v77; // [rsp+40h] [rbp-68h] BYREF
  __int64 v78; // [rsp+48h] [rbp-60h]
  __int64 *v79; // [rsp+50h] [rbp-58h]
  __int64 v80; // [rsp+58h] [rbp-50h]
  __int16 v81; // [rsp+60h] [rbp-48h]

  v6 = *((_BYTE *)a2 + 32);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v77 = a3;
      v78 = a4;
      v81 = 261;
    }
    else
    {
      if ( *((_BYTE *)a2 + 33) == 1 )
      {
        a5 = a2[1];
        a2 = (__int64 *)*a2;
      }
      else
      {
        v6 = 2;
      }
      v77 = a2;
      v78 = a5;
      v79 = a3;
      v80 = a4;
      LOBYTE(v81) = v6;
      HIBYTE(v81) = 5;
    }
  }
  else
  {
    v81 = 256;
  }
  sub_2253560(&src, &v77);
  v7 = src;
  v8 = n;
  v9 = sub_2244B30(src, n);
  v10 = (unsigned int)sub_2244CB0(a1 + 552, v7, v8, v9);
  v11 = (__int64 *)(*(_QWORD *)(a1 + 552) + 8 * v10);
  if ( *v11 )
  {
    if ( *v11 != -8 )
    {
      sub_989490(&v73, v11, 0);
      v15 = *v73;
      v16 = *(_QWORD *)(*v73 + 8);
      if ( v16 )
        goto LABEL_26;
      goto LABEL_10;
    }
    --*(_DWORD *)(a1 + 568);
  }
  v23 = *(_QWORD *)(a1 + 576);
  *(_QWORD *)(a1 + 656) += v8 + 17;
  v24 = (_QWORD *)((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v25 = (char *)v24 + v8 + 17;
  if ( *(_QWORD *)(a1 + 584) >= (unsigned __int64)v25 && v23 )
  {
    *(_QWORD *)(a1 + 576) = v25;
  }
  else
  {
    v65 = v10;
    v70 = v11;
    v49 = sub_986170(a1 + 576, v8 + 17, v8 + 17, 3, (__int64)v11, v10);
    v11 = v70;
    LODWORD(v10) = v65;
    v24 = (_QWORD *)v49;
  }
  v26 = v24 + 2;
  if ( v8 )
  {
    v69 = v11;
    v64 = v10;
    v48 = memcpy(v24 + 2, v7, v8);
    v11 = v69;
    LODWORD(v10) = v64;
    v26 = v48;
  }
  *((_BYTE *)v26 + v8) = 0;
  *v24 = v8;
  v24[1] = 0;
  *v11 = (__int64)v24;
  ++*(_DWORD *)(a1 + 564);
  v27 = sub_22450D0(a1 + 552, (unsigned int)v10);
  sub_989490(&v73, (__int64 *)(*(_QWORD *)(a1 + 552) + 8LL * v27), 0);
  v15 = *v73;
  v16 = *(_QWORD *)(*v73 + 8);
  if ( v16 )
  {
LABEL_26:
    LODWORD(v21) = 0;
    if ( (*(_BYTE *)(v16 + 3) & 2) == 0 )
      goto LABEL_16;
    goto LABEL_27;
  }
LABEL_10:
  v17 = *(_QWORD *)(a1 + 672);
  if ( v17 )
  {
    v62 = v15;
    v18 = (*(__int64 (__fastcall **)(__int64, void *, size_t))(*(_QWORD *)v17 + 16LL))(v17, v7, v8);
    v15 = v62;
    v16 = v18;
    *(_QWORD *)(v62 + 8) = v18;
    if ( v18 )
      goto LABEL_26;
  }
  v19 = *(_QWORD *)(a1 + 576);
  *(_QWORD *)(a1 + 656) += 24LL;
  v16 = (v19 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v12 = v16 + 24;
  if ( *(_QWORD *)(a1 + 584) >= v16 + 24 && v19 )
  {
    *(_QWORD *)(a1 + 576) = v12;
  }
  else
  {
    v66 = v15;
    v55 = sub_986170(a1 + 576, 24, 24, 3, v15, v14);
    v15 = v66;
    v16 = v55;
  }
  v20 = *(_QWORD *)v16 & 0xFFFFF80000000000LL;
  *(_QWORD *)(v16 + 8) = 0;
  LODWORD(v21) = 0;
  *(_QWORD *)v16 = v20 | 0x1FFFC05;
  *(_QWORD *)(v15 + 8) = v16;
  *(_QWORD *)(v16 + 16) = v15;
  if ( (*(_BYTE *)(v16 + 3) & 2) == 0 )
    goto LABEL_16;
LABEL_27:
  LODWORD(v21) = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 21LL) & 2) == 0 )
    goto LABEL_16;
  v28 = *(_QWORD *)(a1 + 1704);
  v72 = v16;
  v29 = *(_DWORD *)(v28 + 16);
  if ( !v29 )
  {
    v73 = nullptr;
    goto LABEL_90;
  }
  v30 = (v29 - 1) & (((unsigned int)v16 >> 9) ^ ((unsigned int)v16 >> 4));
  v31 = (__int64 *)(*(_QWORD *)v28 + 16LL * v30);
  v15 = *v31;
  if ( v16 != *v31 )
  {
    v50 = 1;
    v51 = nullptr;
    if ( v15 != -4096 )
    {
      while ( 1 )
      {
        if ( v15 == -8192 && !v51 )
          v51 = v31;
        v14 = (unsigned int)(v50 + 1);
        v30 = (v29 - 1) & (v50 + v30);
        v31 = (__int64 *)(*(_QWORD *)v28 + 16LL * v30);
        v15 = *v31;
        if ( v16 == *v31 )
          goto LABEL_30;
        if ( v15 == -4096 )
        {
          if ( v51 )
            goto LABEL_69;
          break;
        }
        ++v50;
      }
    }
    v51 = v31;
LABEL_69:
    v52 = *(_DWORD *)(v28 + 8);
    v12 = 3 * v29;
    v73 = v51;
    v53 = v52 + 1;
    v13 = (unsigned int)(4 * v53);
    if ( (unsigned int)v13 < (unsigned int)v12 )
    {
      v12 = v29 - *(_DWORD *)(v28 + 12) - v53;
      v13 = v29 >> 3;
      if ( (unsigned int)v12 > (unsigned int)v13 )
      {
LABEL_71:
        v54 = *v51 == -4096;
        *(_DWORD *)(v28 + 8) = v53;
        if ( !v54 )
          --*(_DWORD *)(v28 + 12);
        *v51 = v16;
        v21 = 0;
        v32 = (unsigned __int64 *)(v51 + 1);
        v16 = v72;
        *v32 = 0;
        goto LABEL_37;
      }
LABEL_91:
      sub_12F12D0(v28, v29, v12, v13, v15, v14);
      sub_12EC520((__int64 *)v28, (__int64 *)&v72, &v73);
      v16 = v72;
      v51 = v73;
      v53 = *(_DWORD *)(v28 + 8) + 1;
      goto LABEL_71;
    }
LABEL_90:
    v29 *= 2;
    goto LABEL_91;
  }
LABEL_30:
  v32 = (unsigned __int64 *)(v31 + 1);
  v33 = v31[1];
  v34 = (unsigned __int64 *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
  v21 = v33 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v33 && (v33 & 4) != 0 )
  {
    v21 = 0;
    if ( !v34 )
      goto LABEL_37;
    v21 = *v34;
  }
  while ( v21 && (*(_BYTE *)(v21 + 12) & 3) == 2 )
    v21 = *(_QWORD *)v21;
LABEL_37:
  if ( (*(_BYTE *)(v16 + 4) & 0x10) != 0 )
  {
    sub_145CD30(a1);
    if ( (*(_BYTE *)(v16 + 3) & 2) == 0 )
    {
LABEL_86:
      v39 = 0;
      goto LABEL_48;
    }
  }
  else if ( (*(_BYTE *)(v16 + 3) & 2) == 0 )
  {
    v39 = 0;
LABEL_88:
    v42 = 0;
    goto LABEL_61;
  }
  v35 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v35 + 21) & 2) == 0 && *(char *)(v35 + 22) >= 0 )
    goto LABEL_86;
  v36 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
  if ( !v36 )
    goto LABEL_86;
  v37 = *v32 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !*v32 || (*v32 & 4) == 0 || (v38 = *v32 & 0xFFFFFFFFFFFFFFF8LL, !v37) )
  {
    v58 = *(_QWORD *)(a1 + 128);
    *(_QWORD *)(a1 + 208) += 32LL;
    v59 = (v58 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    if ( *(_QWORD *)(a1 + 136) >= v59 + 32 && v58 )
    {
      *(_QWORD *)(a1 + 128) = v59 + 32;
      v38 = (v58 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v67 = v37;
      v60 = sub_986170(a1 + 128, 32, 32, 4, v37, v14);
      v37 = v67;
      v38 = v60;
      v59 = v60 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)(v38 + 8) = 0;
    *(_DWORD *)(v38 + 16) = 0;
    *(_QWORD *)(v38 + 24) = 0;
    *(_QWORD *)v38 = v37;
    *(_BYTE *)(v38 + 20) = 0;
    *v32 = v59 | 4;
    v36 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
  }
  if ( *(_DWORD *)(v38 + 16) != v36 )
    sub_14476F0(a1, v16, v38);
  v39 = *(_BYTE *)(v38 + 20);
LABEL_48:
  v40 = v72;
  if ( (*(_BYTE *)(v72 + 4) & 0x10) != 0 )
  {
    v63 = v72;
    sub_145CD30(a1);
    v40 = v63;
  }
  if ( (*(_BYTE *)(v40 + 3) & 2) == 0 )
    goto LABEL_88;
  v41 = *(_QWORD *)(a1 + 56);
  if ( (*(_BYTE *)(v41 + 21) & 2) != 0 || (v42 = 0, *(char *)(v41 + 22) < 0) )
  {
    v43 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
    if ( v43 )
    {
      v44 = *v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !*v32 || (*v32 & 4) == 0 || (v45 = *v32 & 0xFFFFFFFFFFFFFFF8LL, !v44) )
      {
        v56 = *(_QWORD *)(a1 + 128);
        *(_QWORD *)(a1 + 208) += 32LL;
        v57 = (v56 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        if ( *(_QWORD *)(a1 + 136) >= v57 + 32 && v56 )
        {
          *(_QWORD *)(a1 + 128) = v57 + 32;
          v45 = (v56 + 15) & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v71 = v44;
          v68 = v40;
          v61 = sub_986170(a1 + 128, 32, 32, 4, v40, v44);
          v44 = v71;
          v40 = v68;
          v45 = v61;
          v57 = v61 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)(v45 + 8) = 0;
        *(_DWORD *)(v45 + 16) = 0;
        *(_QWORD *)(v45 + 24) = 0;
        *(_QWORD *)v45 = v44;
        *(_BYTE *)(v45 + 20) = 0;
        *v32 = v57 | 4;
        v43 = *(_DWORD *)(*(_QWORD *)(a1 + 1704) + 48LL);
      }
      if ( *(_DWORD *)(v45 + 16) != v43 )
        sub_14476F0(a1, v40, v45);
      v46 = *(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v45 + 8) & 4) != 0 )
        v42 = *(unsigned int *)(v46 + 8);
      else
        v42 = v46 != 0;
      goto LABEL_61;
    }
    goto LABEL_88;
  }
LABEL_61:
  if ( !v21
    || (*(_BYTE *)(v21 + 12) & 3) != 0
    || (v47 = v21 & 0xFFFFFFFFFFFFFFFBLL | (4LL * v39), LODWORD(v21) = 1, (v47 & 0xFFFFFFFFFFFFFFF8LL) == 0) )
  {
    LOBYTE(v21) = v42 != 0;
  }
LABEL_16:
  if ( src != &v76 )
    operator delete(src);
  return (unsigned int)v21;
}
