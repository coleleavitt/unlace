__int64 __fastcall sub_BBBEE0(__int64 a1, __int64 a2)
{
  char **exception; // r14
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // r10d
  _QWORD *v8; // rax
  __int64 v9; // rax
  char v10; // al
  int *v11; // rax
  int v12; // r14d
  unsigned int v13; // r14d
  __int64 v14; // rax
  unsigned int *v15; // r13
  unsigned int v16; // eax
  __int64 v17; // rdi
  char v18; // dl
  unsigned int v19; // r14d
  int v20; // edx
  __int64 v21; // rdx
  char v22; // cl
  char v23; // si
  __int64 v24; // rax
  char v25; // cl
  char v26; // r15
  _QWORD *v27; // rax
  _QWORD *v28; // r15
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rcx
  int v34; // eax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  unsigned int v38; // edi
  unsigned int v39; // ecx
  unsigned int *v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rdx
  void *v43; // [rsp+0h] [rbp-110h]
  char *v44; // [rsp+8h] [rbp-108h]
  void *v45; // [rsp+10h] [rbp-100h]
  char v46; // [rsp+13h] [rbp-FDh]
  int v47; // [rsp+14h] [rbp-FCh]
  __int64 v48; // [rsp+18h] [rbp-F8h]
  void *v49; // [rsp+20h] [rbp-F0h]
  __int64 v50; // [rsp+28h] [rbp-E8h]
  __int64 v51; // [rsp+28h] [rbp-E8h]
  void *v52; // [rsp+28h] [rbp-E8h]
  __int64 *v53; // [rsp+30h] [rbp-E0h]
  void *v54; // [rsp+38h] [rbp-D8h]
  __int64 v55; // [rsp+40h] [rbp-D0h] BYREF
  int v56[2]; // [rsp+48h] [rbp-C8h]
  __int64 v57; // [rsp+50h] [rbp-C0h]
  __int64 v58; // [rsp+58h] [rbp-B8h]
  __int64 v59[2]; // [rsp+60h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-A0h]
  __int64 v61; // [rsp+78h] [rbp-98h]
  __int64 v62; // [rsp+80h] [rbp-90h] BYREF
  __int64 v63; // [rsp+88h] [rbp-88h]
  __int64 v64; // [rsp+90h] [rbp-80h] BYREF
  __int64 v65; // [rsp+98h] [rbp-78h]
  int v66[2]; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-68h]
  _QWORD v68[2]; // [rsp+B0h] [rbp-60h] BYREF
  __int64 *v69; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-48h]
  __int64 v71; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 16);
  v53 = (__int64 *)a2;
  if ( qword_1C7ED88 == *(_QWORD *)(v4 + 8984) && !*(_BYTE *)(v4 + 2416) )
  {
    if ( sub_BB04C0(*(_QWORD **)(a1 + 1072), *(_DWORD *)(a1 + 1080), a2) )
      return v5;
    sub_16744A0(&v55, *(_QWORD *)(a1 + 24));
    if ( *(_WORD *)(a2 + 4)
      || (v8 = *(_QWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
      || *v8 != (*(unsigned int *)(a1 + 1744) | 0x2C00000000LL)
      || *(_DWORD *)(a2 + 24) != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1654);
    }
    v48 = *(_QWORD *)(a2 + 32);
    v59[0] = 0;
    v44 = (char *)v59;
    v9 = *(_QWORD *)a1;
    v59[1] = 0;
    v60 = 1;
    v61 = 0;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v9 + 416))(a1, a2, v59);
    if ( v10
      && (v60 & 0x100000000LL) == 0
      && (_DWORD)v60 == 1
      && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, v59)
      && !((unsigned __int64)sub_182D020(qword_1C7F2C0, v59) >> 32) )
    {
      v34 = sub_182D020(qword_1C7F2C0, v59);
      sub_1453BD0(
        a1 + 2696,
        v48,
        v34,
        v35,
        v36,
        v37,
        v43,
        (__int64)v59,
        v45,
        v48,
        (__int64)v49,
        v50,
        a2,
        (__int64)v54,
        v55,
        *(__int64 *)v56,
        v57,
        v58,
        v59[0]);
    }
    v11 = *(int **)(*(_QWORD *)(sub_15D1F10(v48) + 24) + 8LL);
    if ( *((_BYTE *)v11 + 8) )
      sub_DBF6E(0);
    v12 = *v11;
    v62 = 0;
    v63 = 0;
    v47 = v12;
    v64 = 1;
    v65 = 0;
    sub_182CBA0(qword_1C7F2C0, &v64);
    BYTE4(v64) &= ~1u;
    LODWORD(v64) = 1;
    if ( !v12 )
      goto LABEL_24;
    v46 = 1;
    v13 = 0;
    do
    {
      v14 = *(_QWORD *)(a1 + 24);
      LODWORD(v69) = v13;
      LOBYTE(v70) = 0;
      v51 = v14;
      *(_QWORD *)v66 = v48;
      v15 = (unsigned int *)sub_15DCAD0(v56[0], (int)v66, 0);
      sub_15D0DF0(&v69);
      if ( v15 )
        ++v15[2];
      v16 = sub_966440(a1, v15);
      v17 = *(_QWORD *)(a1 + 16);
      v18 = *(_BYTE *)(*(_QWORD *)(v17 + 8848) + v16);
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          sub_17F6290(&v69, v13);
          sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)&v62, (__int64)&v69, (__int64)&v62);
          sub_25A130((char *)&v69);
        }
      }
      else
      {
        sub_9936C0(v17, v16 >> 1);
        v46 = 0;
      }
      ++v13;
      sub_BB0560((__int64)v15, v51);
    }
    while ( v13 != v47 );
    if ( v46 )
    {
LABEL_24:
      v19 = 0;
      while ( 1 )
      {
        v69 = (_QWORD *)(byte_9 + 1);
        v70 = 0;
        v71 = 1;
        v72 = 0;
        sub_182CBA0(qword_1C7F2C0, &v71);
        LODWORD(v71) = 1;
        BYTE4(v71) &= ~1u;
        v26 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v62, (__int64)&v69);
        sub_25A130((char *)&v69);
        if ( v26 )
          break;
        *(_QWORD *)v66 = 10;
        ++v19;
        v67 = 0;
        v68[0] = 1;
        v68[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v68);
        BYTE4(v68[0]) &= ~1u;
        BYTE4(v69) &= 0xFCu;
        BYTE4(v71) &= 0xFCu;
        LODWORD(v68[0]) = 1;
        LODWORD(v69) = 0;
        v70 = 0;
        LODWORD(v71) = 1;
        v72 = 0;
        v52 = qword_1C7F2C0;
        sub_1833EB0(qword_1C7F2C0, &v62, v66, &v69);
        sub_182CBA0(v52, &v71);
        v20 = (int)v69;
        LODWORD(v69) = v62;
        LODWORD(v62) = v20;
        v21 = v70;
        v70 = v63;
        v63 = v21;
        v22 = BYTE4(v69) & 1;
        LOBYTE(v21) = BYTE4(v62) & 0xFC | BYTE4(v69) & 2;
        BYTE4(v69) = BYTE4(v62) & 1 | BYTE4(v69) & 0xFC | BYTE4(v62) & 2;
        BYTE4(v62) = v22 | v21;
        v23 = BYTE4(v64) & 2;
        LODWORD(v71) = v64;
        v24 = v65;
        v65 = v72;
        v72 = v24;
        LODWORD(v64) = 1;
        v25 = BYTE4(v64) & 1;
        BYTE4(v64) = BYTE4(v64) & 0xFC | BYTE4(v71) & 2;
        BYTE4(v71) = v25 | v23 | BYTE4(v71) & 0xFC;
        sub_25A130((char *)&v69);
        sub_25A130((char *)v66);
      }
      v69 = v53;
      sub_4A3CA0(a1 + 1072, &v69);
      v27 = (_QWORD *)sub_180C100(a1 + 3960, 24);
      v27[1] = a1 + 1072;
      v28 = v27;
      v29 = *(_QWORD **)(a1 + 3944);
      *v27 = off_1C4D780;
      v27[2] = v53;
      if ( v29 )
      {
        v30 = *((_DWORD *)v29 - 1);
        if ( v30 == *((_DWORD *)v29 - 2) )
        {
          v38 = (3 * v30 + 1) >> 1;
          v39 = 8 * v38 + 8;
          if ( 8 * v30 + 8 >= v39 || v30 >= v38 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_154526((__int64 *)&v69, "Overflow encountered when expanding vector", v3);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v69);
            sub_233E40((__int64)&v69);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v40 = (unsigned int *)sub_186B300(v29 - 1, v39);
          v41 = v40[1];
          v29 = v40 + 2;
          *v40 = v38;
          *(_QWORD *)(a1 + 3944) = v40 + 2;
          LODWORD(v40) = v41;
          v33 = &v29[v41];
          v32 = (_DWORD)v40 + 1;
        }
        else
        {
          v31 = v30;
          v32 = v30 + 1;
          v33 = &v29[v31];
        }
      }
      else
      {
        v42 = (_QWORD *)sub_186B270(0x18u);
        *v42 = 2;
        v32 = 1;
        v29 = v42 + 1;
        *(_QWORD *)(a1 + 3944) = v29;
        v33 = v29;
      }
      *v33 = v28;
      *((_DWORD *)v29 - 1) = v32;
      sub_1459E90(a1 + 2696, v48, v19);
    }
    sub_25A130((char *)&v62);
    sub_25A130(v44);
  }
  return 1;
}

