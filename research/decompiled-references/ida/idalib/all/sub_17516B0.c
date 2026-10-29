__int64 __fastcall sub_17516B0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int8 a5,
        double a6)
{
  unsigned int v9; // r12d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  unsigned __int64 v25; // rdi
  __int64 v26; // r13
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void **v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  _BOOL8 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  void *v44; // rdx
  char *v45; // rdi
  __int64 v46; // r14
  __int64 v47; // rbp
  void **v48; // r15
  __int64 v50; // [rsp+18h] [rbp-250h]
  __int64 v51; // [rsp+20h] [rbp-248h]
  int v52; // [rsp+2Ch] [rbp-23Ch]
  __int64 v53; // [rsp+30h] [rbp-238h]
  int v54; // [rsp+38h] [rbp-230h]
  _BYTE v55[16]; // [rsp+40h] [rbp-228h] BYREF
  _BYTE v56[56]; // [rsp+50h] [rbp-218h] BYREF
  __int64 v57; // [rsp+88h] [rbp-1E0h]
  void *ptr; // [rsp+A0h] [rbp-1C8h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-1C0h]
  __int64 v60[12]; // [rsp+B0h] [rbp-1B8h] BYREF
  int v61; // [rsp+110h] [rbp-158h]
  char v62; // [rsp+114h] [rbp-154h]
  void *v63; // [rsp+120h] [rbp-148h] BYREF
  int v64; // [rsp+128h] [rbp-140h]
  _DWORD v65[25]; // [rsp+130h] [rbp-138h] BYREF
  char v66; // [rsp+194h] [rbp-D4h]
  char v67; // [rsp+198h] [rbp-D0h]
  __int64 v68; // [rsp+1A0h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+1A8h] [rbp-C0h]
  __int64 v70; // [rsp+1B0h] [rbp-B8h] BYREF
  unsigned int v71; // [rsp+1B8h] [rbp-B0h]
  void *v72; // [rsp+1F0h] [rbp-78h] BYREF
  __int64 v73; // [rsp+1F8h] [rbp-70h]
  __int64 v74; // [rsp+200h] [rbp-68h] BYREF
  __int64 v75; // [rsp+208h] [rbp-60h]
  char v76; // [rsp+210h] [rbp-58h]
  char v77; // [rsp+211h] [rbp-57h]
  char v78; // [rsp+212h] [rbp-56h]
  __int64 v79; // [rsp+218h] [rbp-50h]

  if ( (unsigned __int8)sub_B8E180(a2 + 72) || (unsigned int)sub_B778D0(a2) == 3 )
  {
    *(_BYTE *)(a3 + 128) = 1;
    return 0;
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x25 )
      goto LABEL_16;
    v11 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v11 & 4) != 0 )
      v12 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v12 )
      BUG();
    v13 = *(_QWORD *)(v12 + 64);
    if ( v13 && (*(_BYTE *)(v13 + 10) & 0x20) != 0 )
    {
      v14 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
      if ( (v14 & 4) != 0 )
        v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v15 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v15 )
        v15 -= 64LL;
      v16 = sub_B96F60(v15);
      return (unsigned int)sub_17516B0(a1, v16, a3, a4, 1);
    }
    else
    {
LABEL_16:
      v17 = a2 + 72;
LABEL_17:
      while ( !v17 )
      {
LABEL_38:
        if ( !sub_B8E490(a2 + 72) )
          goto LABEL_41;
LABEL_39:
        v17 = sub_B8E650(v17);
      }
      while ( 1 )
      {
        if ( (*(_BYTE *)(v17 + 8) & 0x7Fu) - 35 > 3
          || ((v18 = *(_QWORD *)(sub_B8C1B0(v17) + 16), (v18 & 4) != 0)
            ? (v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF8LL))
            : (v19 = v18 & 0xFFFFFFFFFFFFFFF8LL),
              !v19
           || v19 == 64
           || (v20 = *(_QWORD *)(v19 + 64)) == 0
           || (*(_BYTE *)(v20 + 10) & 0x20) == 0
           || (unsigned int)sub_B77890(v17 - 72) != 42) )
        {
          if ( !sub_B8E490(a2 + 72) )
            break;
        }
        if ( (*(_BYTE *)(v17 + 8) & 0x7Fu) - 35 > 3 )
          goto LABEL_39;
        v21 = *(_QWORD *)(sub_B8C1B0(v17) + 16);
        v22 = (v21 & 4) != 0 ? *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF8LL) : v21 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v22 )
          goto LABEL_39;
        if ( v22 == 64 )
          goto LABEL_39;
        v23 = *(_QWORD *)(v22 + 64);
        if ( !v23 || (*(_BYTE *)(v23 + 10) & 0x20) == 0 || (unsigned int)sub_B77890(v17 - 72) != 42 )
          goto LABEL_39;
        v24 = *(_QWORD *)(sub_B8C1B0(v17) + 16);
        if ( (v24 & 4) != 0 )
          v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = *(_QWORD *)(sub_B8C1B0(v25) + 16);
        if ( (v26 & 4) != 0 )
        {
          v17 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
          goto LABEL_17;
        }
        v17 = v26 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v17 )
          goto LABEL_38;
      }
LABEL_41:
      v29 = *(_QWORD *)(a1 + 544);
      v68 = a1;
      v69 = 1;
      v50 = v29;
      v30 = *(_QWORD *)(a1 + 512);
      *(_QWORD *)(a1 + 512) = 0;
      v51 = v30;
      v31 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      v57 = v31;
      LODWORD(v31) = *(_DWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 544) = v17;
      v52 = v31;
      v54 = *(_DWORD *)(a1 + 2632);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      v32 = (void **)&v70;
      do
      {
        *v32 = (void *)-4096LL;
        v32 += 2;
      }
      while ( &v72 != v32 );
      v77 = a5 ^ 1;
      v72 = &v74;
      v73 = 0x100000000LL;
      v33 = *(_QWORD *)(a1 + 11280);
      v76 = 0;
      v75 = v33;
      v78 = 0;
      v79 = 0;
      v60[0] = 0;
      *(_QWORD *)(a1 + 11280) = &v68;
      sub_1744760((__int64)&v63, a1, a2, (__int64)&v68, v27, v28, (__int64)ptr, v59, v60[0]);
      if ( v67 )
      {
        v35 = 0;
        if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3
          && ((v53 = sub_1703690(a2, a1, v34, 0),
               v36 = sub_B8C1B0(a2 + 72),
               v35 = v53,
               v37 = *(_QWORD *)(v36 + 16),
               (v37 & 4) != 0)
            ? (v38 = *(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF8LL))
            : (v38 = v37 & 0xFFFFFFFFFFFFFFF8LL),
              v38) )
        {
          v39 = v38 - 64;
          v40 = v39 != 0;
        }
        else
        {
          v40 = 0;
          v39 = 0;
        }
        sub_19A2CD0(v56, a1, v39, v35, v40);
        v41 = a5;
        ptr = v60;
        v59 = 0x400000000LL;
        if ( v64 )
        {
          sub_1744960((__int64 *)&ptr, (__int64 *)&v63);
          v41 = a5;
        }
        v61 = v65[24];
        v62 = v66;
        sub_1A2F130(v55, a1, a2, &ptr, &v68, v41);
        if ( ptr != v60 )
          free(ptr);
        v42 = a4;
        if ( !a4 )
          v42 = *(unsigned int *)(a2 + 24);
        v43 = *(_QWORD *)(a2 + 56);
        if ( (v43 & 4) != 0 )
          v44 = (void *)((v43 & 0xFFFFFFFFFFFFFFF8LL) + 40);
        else
          v44 = &unk_23DED40;
        ptr = v60;
        v59 = 0x400000000LL;
        v9 = sub_1750770(a1, a2, (__int64)v44, 1u, (__int64)&ptr, (__int64)&v63, a6, (v42 << 32) | v42, a3);
        if ( ptr != v60 )
          free(ptr);
        sub_146B590((__int64)v55);
        sub_19A2DA0(v56);
        if ( v67 && v63 != v65 )
          free(v63);
      }
      else
      {
        v9 = 1;
      }
      v45 = (char *)v72;
      if ( !v76 )
      {
        if ( (_DWORD)v73 )
        {
          v46 = 0;
          v47 = 8LL * (unsigned int)(v73 - 1) + 8;
          do
          {
            v48 = *(void ***)&v45[v46];
            if ( v48 )
            {
              if ( *v48 != v48 + 2 )
                free(*v48);
              operator delete(v48, 0x30u);
              v45 = (char *)v72;
            }
            v46 += 8;
          }
          while ( v46 != v47 );
        }
        v76 = 1;
        *(_QWORD *)(v68 + 11280) = v75;
      }
      if ( v45 != (char *)&v74 )
        free(v45);
      if ( (v69 & 1) == 0 )
        operator delete(v70, 16LL * v71, 8);
      if ( v50 )
      {
        *(_QWORD *)(a1 + 544) = v50;
        *(_QWORD *)(a1 + 512) = v51;
        *(_QWORD *)(a1 + 9944) = v57;
        *(_DWORD *)(a1 + 80) = v52;
        *(_DWORD *)(a1 + 2632) = v54;
      }
    }
  }
  return v9;
}
