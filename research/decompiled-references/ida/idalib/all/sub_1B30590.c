__int64 __fastcall sub_1B30590(unsigned __int64 a1, unsigned __int64 a2, double a3)
{
  _WORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 *v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  char v14; // r13
  __int64 v15; // r9
  char v16; // r14
  __int16 v17; // ax
  char v18; // al
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // edx
  void *v22; // rdi
  unsigned int v23; // edx
  _DWORD *v24; // rdi
  _DWORD *v25; // rdi
  bool v26; // cc
  __int64 v27; // rdi
  unsigned __int64 v28; // rbp
  unsigned __int64 *v29; // rax
  __int64 v31; // r12
  __int64 *v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned int v36; // r14d
  __int64 *v38; // r14
  unsigned int v39; // eax
  __int64 v40; // rsi
  __int64 *v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  unsigned int v49; // r14d
  __int64 *v51; // r14
  unsigned int v52; // eax
  __int64 v53; // rsi
  __int64 *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  unsigned int v61; // esi
  _QWORD *v62; // rdx
  char v63; // [rsp+Fh] [rbp-169h]
  char v64; // [rsp+Fh] [rbp-169h]
  bool v65; // [rsp+Fh] [rbp-169h]
  int v66; // [rsp+10h] [rbp-168h] BYREF
  __int64 v67; // [rsp+18h] [rbp-160h]
  unsigned int v68; // [rsp+20h] [rbp-158h] BYREF
  char v69; // [rsp+24h] [rbp-154h]
  __int64 v70; // [rsp+28h] [rbp-150h] BYREF
  unsigned int v71; // [rsp+30h] [rbp-148h]
  void *v72; // [rsp+60h] [rbp-118h] BYREF
  __int64 v73; // [rsp+68h] [rbp-110h]
  unsigned int v74; // [rsp+70h] [rbp-108h] BYREF
  char v75; // [rsp+74h] [rbp-104h]
  __int64 v76; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v77; // [rsp+80h] [rbp-F8h]
  __int16 v78; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+B8h] [rbp-C0h]
  unsigned int v80; // [rsp+C0h] [rbp-B8h] BYREF
  char v81; // [rsp+C4h] [rbp-B4h]
  void *v82; // [rsp+C8h] [rbp-B0h]
  unsigned int v83; // [rsp+D0h] [rbp-A8h]
  char v84; // [rsp+D4h] [rbp-A4h]

  v5 = (_WORD *)sub_BFBAE0(*(_QWORD *)(a2 + 24));
  v6 = sub_C03930((unsigned __int64)v5, a2);
  v9 = *(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v6) & 7;
  v10 = (__int64 *)(*(_QWORD *)&byte_8[v6 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v12 = (unsigned int)(v11 - 43);
  if ( (unsigned int)v12 <= 1 )
  {
    v9 = sub_F68450(*v10, a2, v9, v12, v7);
    v10 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
  }
  v13 = *(_QWORD *)a1;
  v14 = 1;
  if ( (v11 & 0xF7) != 0x22 )
  {
    v14 = 0;
    if ( (unsigned __int8)(v11 - 2) > 4u )
    {
      sub_168B9F0((__int64)&v78, (__int64 *)(v13 + 8), *(_DWORD *)(a1 + 44), 0x1185u, 0);
      v66 = 0;
      v31 = sub_1587D10((__int64)&v78, &v66);
      v72 = (void *)sub_EEC8C0(a2, (__int64)&v66, a3);
      sub_1587DB0(v31, (__int64 *)&v72);
      sub_15F7200(&v78);
      return 0;
    }
  }
  v16 = sub_1AEAC70(v13, a2, v9, v11 & 0xFFFFFFF7, v7, v8);
  v17 = *(_WORD *)a2 & 0x1FF;
  if ( v17 != 124 )
  {
    if ( v17 != 123 )
      BUG();
    v23 = *(unsigned __int8 *)(a1 + 41);
    v18 = 0;
    if ( (_BYTE)v23 )
      goto LABEL_15;
    goto LABEL_30;
  }
  v18 = 0;
  if ( *(_DWORD *)(a2 + 56) )
  {
    v19 = *(_QWORD *)(a2 + 40);
    if ( v19 )
    {
      v20 = *(_QWORD *)a1;
      v81 &= ~1u;
      v78 = 0;
      v79 = 0;
      v80 = 0;
      v18 = sub_C3F220(v19, (__int64)&v78, *(_QWORD *)(v20 + 248), 0, 0, v15);
      if ( v18 )
      {
        v21 = v83;
        LODWORD(v73) = v83;
        if ( v83 <= 0x40 )
        {
          v22 = v82;
          v72 = v82;
          goto LABEL_10;
        }
        v64 = v18;
        sub_2205510(&v72);
        v21 = v73;
        v22 = v72;
        v18 = v64;
        BYTE4(v73) = v84;
        if ( (unsigned int)v73 <= 0x40 )
        {
LABEL_10:
          if ( v21 )
            v18 = (__int64)((_QWORD)v22 << (64 - (unsigned __int8)v21)) >> (64 - (unsigned __int8)v21) != 1;
          goto LABEL_12;
        }
        v65 = *(_QWORD *)v72 != 1;
        operator delete[](v72);
        v18 = v65;
      }
LABEL_12:
      if ( v80 > 1 )
      {
        v63 = v18;
        sub_A4F8E0((int *)&v80);
        v18 = v63;
      }
      goto LABEL_14;
    }
    v59 = *v10;
    if ( (unsigned int)*(unsigned __int8 *)(*v10 + 16) - 2 <= 1 )
    {
      v60 = *(_QWORD *)(v59 + 40);
      if ( (*(_BYTE *)(v59 + 19) & 2) != 0 )
      {
        v61 = *(_DWORD *)(v60 + 8);
        v62 = *(_QWORD **)v60;
        if ( v61 > 0x40 )
        {
          v18 = *v62 != 1;
        }
        else
        {
          v18 = 1;
          if ( v61 )
            v18 = (__int64)((_QWORD)v62 << (64 - (unsigned __int8)v61)) >> (64 - (unsigned __int8)v61) != 1;
        }
      }
      else
      {
        v18 = v60 != 1;
      }
    }
  }
LABEL_14:
  v23 = *(unsigned __int8 *)(a1 + 41);
  if ( (_BYTE)v23 )
  {
LABEL_15:
    if ( !v14 && !v16 )
      goto LABEL_17;
    *(_BYTE *)(a1 + 41) = 0;
    goto LABEL_33;
  }
LABEL_30:
  if ( *(_DWORD *)(a1 + 12) == 87 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 232LL) + 64LL) > 0x31u )
  {
    if ( v14 && !*(_BYTE *)(a1 + 42) )
    {
      sub_168B9F0((__int64)&v78, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a1 + 44), 0x11FFu, 0);
      LODWORD(v72) = 1;
      sub_1587D10((__int64)&v78, (int *)&v72);
      sub_15F7200(&v78);
      goto LABEL_34;
    }
    *(_BYTE *)(a1 + 24) = 1;
LABEL_33:
    if ( !v14 )
    {
LABEL_17:
      if ( (*v5 & 0x1FF) == 0x62 )
      {
        v24 = *(_DWORD **)(a2 + 40);
        v68 = 0;
        LOWORD(v66) = 0;
        v67 = 0;
        v69 &= ~1u;
        LOWORD(v72) = 0;
        v73 = 0;
        v74 = 0;
        v75 &= ~1u;
        if ( (*v24 & 0x20000) == 0
          && (unsigned __int8)sub_C3F220(
                                (unsigned __int64)v24,
                                (__int64)&v66,
                                *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                                0,
                                0,
                                v15) )
        {
          v36 = v71;
          if ( !(v71 <= 0x40 ? v70 == 1 : v36 - 1 == (unsigned int)sub_2206780(&v70)) )
          {
            v38 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v39 = sub_C00A40(*(_QWORD *)(a2 + 40), (__int64)&v66, v33, v34, v35);
            v40 = (__int64)v38;
            sub_168B9F0((__int64)&v78, v38, v39, 0x11A5u, 0);
            sub_15F7200(&v78);
            v41 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v45 = sub_C00A40(*(_QWORD *)(a2 + 40), v40, v42, v43, v44);
            sub_168B9F0((__int64)&v78, v41, v45, 0x181Du, 0);
            sub_15F7200(&v78);
          }
        }
        v25 = *(_DWORD **)(a2 + 32);
        if ( v25
          && (*v25 & 0x20000) == 0
          && (unsigned __int8)sub_C3F220(
                                (unsigned __int64)v25,
                                (__int64)&v72,
                                *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                                0,
                                0,
                                v15) )
        {
          v49 = v77;
          if ( !(v77 <= 0x40 ? v76 == 0 : v49 == (unsigned int)sub_2206780(&v76)) )
          {
            v51 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v52 = sub_C00A40(*(_QWORD *)(a2 + 32), (__int64)&v72, v46, v47, v48);
            v53 = (__int64)v51;
            sub_168B9F0((__int64)&v78, v51, v52, 0x11A5u, 0);
            sub_15F7200(&v78);
            v54 = (__int64 *)(*(_QWORD *)a1 + 8LL);
            v58 = sub_C00A40(*(_QWORD *)(a2 + 32), v53, v55, v56, v57);
            sub_168B9F0((__int64)&v78, v54, v58, 0x181Eu, 0);
            sub_15F7200(&v78);
          }
        }
        v26 = v74 <= 1;
        *(_QWORD *)(a1 + 32) = v5;
        if ( !v26 )
          sub_A4F8E0((int *)&v74);
        if ( v68 > 1 )
          sub_A4F8E0((int *)&v68);
      }
      v27 = *(_QWORD *)(a1 + 16);
      v28 = a2 & 0xFFFFFFFFFFFFFFFDLL;
      if ( *(_DWORD *)(v27 + 12) <= *(_DWORD *)(v27 + 8) )
      {
        sub_1AF6AE0(v27, v28, 0);
      }
      else
      {
        v29 = (unsigned __int64 *)(*(_QWORD *)v27 + 16LL * *(unsigned int *)(v27 + 8));
        *v29 = v28;
        v29[1] = 0;
        ++*(_DWORD *)(v27 + 8);
      }
      v23 = 1;
      if ( !*(_QWORD *)(a1 + 32) )
        return (unsigned int)sub_1B2FFC0(a1, (unsigned __int64)v5);
      return v23;
    }
LABEL_34:
    *(_BYTE *)(a1 + 42) = 0;
    goto LABEL_17;
  }
  if ( !*(_BYTE *)(a1 + 40) || !v18 )
    goto LABEL_33;
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v32 = (__int64 *)(*(_QWORD *)a1 + 8LL);
    sub_168B9F0((__int64)&v78, v32, *(_DWORD *)(a1 + 44), 0xC09u, 0);
    v72 = (void *)sub_EEC8C0(a2, (__int64)v32, a3);
    sub_1587DB0((__int64)&v78, (__int64 *)&v72);
    sub_15F7200(&v78);
    return 0;
  }
  return v23;
}
