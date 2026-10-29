__int64 __fastcall sub_BBF690(__int64 a1, __int64 a2, char a3, char a4, double a5)
{
  bool v6; // zf
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  void *v9; // rdi
  void *v10; // rbx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rcx
  _DWORD *v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  char v23; // r15
  __int64 v24; // rax
  __int64 v25; // r15
  int v26; // eax
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rax
  int v33; // eax
  int v34; // r8d
  int v35; // r9d
  int v36; // [rsp-8h] [rbp-138h]
  int v37; // [rsp+0h] [rbp-130h]
  __int64 *v38; // [rsp+8h] [rbp-128h]
  __int64 *v39; // [rsp+10h] [rbp-120h]
  __int64 v40; // [rsp+18h] [rbp-118h]
  int v41; // [rsp+20h] [rbp-110h]
  __int64 *v42; // [rsp+20h] [rbp-110h]
  __int64 v43; // [rsp+28h] [rbp-108h]
  __int64 *v44; // [rsp+30h] [rbp-100h]
  _QWORD *v45; // [rsp+38h] [rbp-F8h]
  unsigned int v46; // [rsp+40h] [rbp-F0h]
  bool v47; // [rsp+47h] [rbp-E9h]
  void *v48; // [rsp+48h] [rbp-E8h]
  __int64 v50; // [rsp+50h] [rbp-E0h]
  int v51; // [rsp+50h] [rbp-E0h]
  int v53; // [rsp+58h] [rbp-D8h]
  __int64 v54; // [rsp+60h] [rbp-D0h]
  __int64 v55; // [rsp+78h] [rbp-B8h] BYREF
  __int64 v56; // [rsp+80h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+88h] [rbp-A8h]
  __int64 v58; // [rsp+90h] [rbp-A0h] BYREF
  __int64 v59; // [rsp+98h] [rbp-98h]
  _QWORD v60[2]; // [rsp+A0h] [rbp-90h] BYREF
  _QWORD v61[2]; // [rsp+B0h] [rbp-80h] BYREF
  _QWORD v62[2]; // [rsp+C0h] [rbp-70h] BYREF
  _QWORD v63[2]; // [rsp+D0h] [rbp-60h] BYREF
  __int64 (__fastcall **v64)(); // [rsp+E0h] [rbp-50h] BYREF
  _QWORD *v65; // [rsp+E8h] [rbp-48h] BYREF
  _QWORD v66[8]; // [rsp+F0h] [rbp-40h] BYREF

  v6 = *(_WORD *)(a2 + 4) == 0;
  v60[0] = 0;
  v60[1] = 0;
  v61[0] = 1;
  v61[1] = 0;
  v62[0] = 0;
  v62[1] = 0;
  v63[0] = 1;
  v63[1] = 0;
  if ( !v6
    || (v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *v7 != *(_DWORD *)(a1 + 1744)
    || v7[1] != 12
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 490);
  }
  v54 = *(_QWORD *)(a2 + 32);
  v8 = sub_1461420(a1 + 3424);
  if ( !(_BYTE)v8 )
  {
    v9 = qword_1C7F2C0;
    goto LABEL_7;
  }
  LOBYTE(v12) = sub_BB1F40(a1, a2, (__int64)v60);
  v8 = v12;
  if ( !(_BYTE)v12 )
  {
    v9 = qword_1C7F2C0;
    goto LABEL_7;
  }
  LOBYTE(v13) = sub_BB1FE0(a1, a2, (__int64)v62);
  v8 = v13;
  v9 = qword_1C7F2C0;
  if ( !(_BYTE)v13 )
    goto LABEL_7;
  if ( (v60[0] & 0x100000000LL) != 0 || (v62[0] & 0x100000000LL) != 0 )
  {
    v9 = qword_1C7F2C0;
    LOBYTE(v8) = (unsigned int)sub_182C7B0(qword_1C7F2C0, v60, v62) == 0;
  }
  else
  {
    LOBYTE(v8) = LODWORD(v60[0]) == LODWORD(v62[0]);
  }
  if ( !(_BYTE)v8 )
  {
LABEL_15:
    v9 = qword_1C7F2C0;
    goto LABEL_7;
  }
  if ( (v61[0] & 0x100000000LL) != 0 || (v63[0] & 0x100000000LL) != 0 )
    v47 = (unsigned int)sub_182C7B0(v9, v61, v63) == 0;
  else
    v47 = LODWORD(v61[0]) == LODWORD(v63[0]);
  if ( !v47 )
  {
LABEL_24:
    v9 = qword_1C7F2C0;
    v8 = 0;
    goto LABEL_7;
  }
  if ( a3 )
  {
    if ( LODWORD(v60[0]) )
      goto LABEL_24;
LABEL_27:
    v48 = (void *)(a1 + 1848);
    v8 = sub_1407860(a1 + 1848, a1 + 2032, v54);
    if ( (_BYTE)v8 )
      goto LABEL_24;
    if ( (unsigned __int8)sub_1407860(v48, a1 + 2056, v54) )
      goto LABEL_15;
    v8 = sub_1407860(v48, a1 + 2072, v54);
    if ( (_BYTE)v8 )
      goto LABEL_24;
    if ( (unsigned __int8)sub_1407860(v48, a1 + 2080, v54) )
      goto LABEL_15;
    v45 = sub_BB04C0(*(_QWORD **)(a1 + 4176), *(_DWORD *)(a1 + 4184), v54);
    if ( v45 )
      goto LABEL_15;
    v66[0] = v14;
    v65 = (_QWORD *)(a1 + 4176);
    v40 = a1 + 3944;
    v64 = off_1C4D780;
    v44 = (__int64 *)&v64;
    sub_BD1A90(a1 + 3944, &v64);
    v64 = (__int64 (__fastcall **)())v54;
    sub_4A3CA0(a1 + 4176, (__int64 **)&v64);
    v17 = *(_QWORD *)(a1 + 24);
    v43 = v17;
    if ( v54 )
      ++*(_DWORD *)(v54 + 8);
    v6 = *(_QWORD *)(a1 + 1840) == 0;
    v56 = 0;
    v58 = 0;
    v57 = v17;
    v59 = v17;
    if ( v6 )
      sub_16669E0(a1 + 1832);
    v18 = (_DWORD *)sub_166A700(*(_QWORD *)(a1 + 1840), (unsigned int)v60, 1, v17, v15, v16);
    v46 = sub_966380(a1, (_DWORD *)a2, v18);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v46) == 0xFF
      || !a4
      && (v64 = (__int64 (__fastcall **)())&dword_14,
          v65 = nullptr,
          v66[0] = 1,
          v66[1] = 0,
          sub_182CBA0(qword_1C7F2C0, v66),
          LODWORD(v66[0]) = 1,
          BYTE4(v66[0]) &= ~1u,
          v23 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)&v64, (__int64)v60),
          sub_25A130((char *)&v64),
          v23 == 1)
      && !a3 )
    {
      v8 = 0;
      v50 = v54;
LABEL_44:
      sub_BB0560(v58, v59);
      sub_BB0560(v56, v57);
      sub_BB0560(v50, v43);
      goto LABEL_15;
    }
    if ( !LODWORD(v60[0]) )
    {
      v24 = sub_15D1F10(v54);
      v25 = *(_QWORD *)(a1 + 1736);
      v26 = sub_15D2D60(v25, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v24);
      v28 = sub_15DC610(v25, v26, 0, 0, v36, v27, v37, (int)v38, (int)v39, v40, v41, v43, (int)&v64, 0, v46, v48);
      v50 = v28;
      if ( v28 )
        ++*(_DWORD *)(v28 + 8);
      sub_BB0560(v54, v43);
      goto LABEL_40;
    }
    v50 = v54;
    if ( a3 )
    {
LABEL_40:
      v19 = sub_BB2190(a1, v50, v54);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v19) == 1 )
      {
        v8 = 0;
      }
      else
      {
        sub_BBF3C0((_QWORD *)a1, v46 ^ 1, v19, 0xFFFFFFFE, 0xFFFFFFFE, 0xFFFFFFFE, a5);
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9464LL) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 9468LL) )
        {
          v21 = (_QWORD *)sub_186B270(0x18u);
          v22 = *(_QWORD *)(a1 + 24);
          ++*(_DWORD *)(a2 + 8);
          *v21 = &off_1C57DC0;
          v21[1] = a2;
          v21[2] = v22;
          v64 = off_1C57E10;
          v65 = (_QWORD *)a1;
          v66[0] = v21;
          sub_BD1BE0(v40, v44);
        }
        v8 = v47;
      }
      goto LABEL_44;
    }
    v53 = sub_182D020(qword_1C7F2C0, v60);
    v29 = v54;
    v42 = *(__int64 **)(a1 + 24);
    v64 = (__int64 (__fastcall **)())v42;
    if ( v53 )
    {
      v39 = &v58;
      v51 = 0;
      v38 = &v55;
      do
      {
        sub_14078B0(v48, v29, &v56, &v58);
        v55 = v56;
        if ( v56 )
          ++*(_DWORD *)(v56 + 8);
        v65 = v45;
        sub_BB70A0(&v65, &v55);
        v45 = v65;
        if ( v29 != v58 )
        {
          sub_BB0560(v29, v43);
          v29 = v58;
          if ( v58 )
            ++*(_DWORD *)(v58 + 8);
        }
        ++v51;
      }
      while ( v51 != v53 );
      if ( v45 )
        v53 = *((_DWORD *)v45 - 1);
      else
        v53 = 0;
      v42 = *(__int64 **)(a1 + 24);
    }
    v30 = sub_15D1F10(*v45);
    v31 = *(_QWORD *)(a1 + 1736);
    if ( v53 )
    {
      if ( v53 == 1 )
      {
        v50 = *v45;
        goto LABEL_73;
      }
      v32 = sub_15E1AF0(v31);
    }
    else
    {
      v33 = sub_15D2D60(v31, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v30);
      v32 = sub_15DC610(
              v31,
              v33,
              0,
              0,
              v34,
              v35,
              v37,
              (int)v38,
              (int)v39,
              v40,
              (int)v42,
              v43,
              (int)&v64,
              (int)v45,
              v46,
              v48);
    }
    v50 = v32;
LABEL_73:
    if ( v50 )
      ++*(_DWORD *)(v50 + 8);
    sub_BB0560(v29, (__int64)v42);
    v65 = v45;
    sub_2334C0(v44);
    goto LABEL_40;
  }
  v9 = qword_1C7F2C0;
  v8 = (v61[0] & 0x100000000LL) == 0;
  if ( (v61[0] & 0x100000000LL) == 0 )
  {
    v8 = 0;
    if ( LODWORD(v61[0]) == 1 )
    {
      v20 = sub_182CFA0(qword_1C7F2C0, v60);
      v9 = qword_1C7F2C0;
      v8 = v20;
      if ( (_BYTE)v20 )
      {
        if ( (unsigned __int64)sub_182D020(qword_1C7F2C0, v60) >> 32 )
        {
          v9 = qword_1C7F2C0;
          v8 = 0;
          goto LABEL_7;
        }
        goto LABEL_27;
      }
    }
  }
LABEL_7:
  sub_182CBA0(v9, v62);
  sub_182CBA0(v9, v63);
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v60);
  sub_182CBA0(v10, v61);
  return v8;
}

