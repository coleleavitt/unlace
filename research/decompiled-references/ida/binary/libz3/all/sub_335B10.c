char __fastcall sub_335B10(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v5; // r13
  unsigned int v6; // ebp
  __int64 v8; // r15
  void *v9; // rdi
  void *v10; // rax
  int v11; // esi
  __int64 v12; // r13
  int v13; // eax
  void *v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  void *v18; // rdi
  int v19; // eax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax
  void *v24; // r15
  __int64 v25; // r14
  __int64 v26; // r13
  int v27; // eax
  int v28; // eax
  void *v29; // r15
  int v30; // eax
  int v31; // eax
  void *v32; // r15
  int v33; // eax
  int v34; // eax
  __int64 v35; // rax
  _DWORD *v36; // rbp
  __int64 v38; // rdi
  unsigned int v39; // eax
  char v40; // dl
  void *v41; // rdi
  int v42; // eax
  void *v43; // r13
  int v44; // eax
  void *v45; // r13
  int v46; // eax
  void *v47; // r14
  void *v48; // r13
  void *v49; // rdi
  char v50; // al
  __int64 v51; // rsi
  __int64 v52; // r13
  char *v53; // rsi
  __int64 v54; // rdi
  void *v55; // rdi
  int v56; // eax
  void *v57; // r13
  int v58; // eax
  void *v59; // r13
  int v60; // eax
  void *v61; // r14
  void *v62; // r13
  __int64 v64; // [rsp+0h] [rbp-E8h]
  void *v65; // [rsp+0h] [rbp-E8h]
  void *v66; // [rsp+0h] [rbp-E8h]
  __int64 v67; // [rsp+8h] [rbp-E0h]
  __int64 v69; // [rsp+18h] [rbp-D0h]
  void *v70; // [rsp+18h] [rbp-D0h]
  __int64 v71; // [rsp+18h] [rbp-D0h]
  __int64 v72; // [rsp+20h] [rbp-C8h]
  void *v73; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v74[2]; // [rsp+40h] [rbp-A8h] BYREF
  void *v75; // [rsp+50h] [rbp-98h] BYREF
  __int64 v76; // [rsp+58h] [rbp-90h]
  __int64 v77; // [rsp+60h] [rbp-88h] BYREF
  __int64 v78; // [rsp+68h] [rbp-80h]
  __int64 v79; // [rsp+70h] [rbp-78h] BYREF
  __int64 v80; // [rsp+78h] [rbp-70h]
  __int64 v81; // [rsp+80h] [rbp-68h] BYREF
  __int64 v82; // [rsp+88h] [rbp-60h]
  __int64 v83; // [rsp+90h] [rbp-58h] BYREF
  __int64 v84; // [rsp+98h] [rbp-50h]
  __int64 v85; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-40h]

  v5 = 96LL * a2;
  v6 = a2;
  v8 = v5 + *(_QWORD *)(a1 + 24);
  v9 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v8 + 20) & 1) != 0
    || *(_DWORD *)(v8 + 16) != 1
    || (*(_BYTE *)(a3 + 20) & 1) != 0
    || *(_DWORD *)(a3 + 16) != 1 )
  {
    v64 = a3 + 32;
    v67 = a3 + 64;
    if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v8, a3) )
      goto LABEL_4;
  }
  else
  {
    v10 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v8 + 4) & 1) == 0 )
    {
      v40 = *(_BYTE *)(a3 + 4);
      if ( (v40 & 1) == 0 )
      {
        v11 = *(_DWORD *)a3;
        v64 = a3 + 32;
        v67 = a3 + 64;
        if ( *(_DWORD *)v8 < *(_DWORD *)a3 )
        {
LABEL_6:
          *(_BYTE *)(v8 + 4) &= ~1u;
          v12 = a3 + 16;
          *(_DWORD *)v8 = v11;
          if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
            goto LABEL_7;
          goto LABEL_39;
        }
        goto LABEL_35;
      }
    }
    if ( (int)sub_182C7B0(qword_1C7F2C0, v8, a3) < 0 )
    {
      v64 = a3 + 32;
      v67 = a3 + 64;
      goto LABEL_4;
    }
  }
  v9 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v8 + 4) & 1) != 0 )
    goto LABEL_36;
  v40 = *(_BYTE *)(a3 + 4);
LABEL_35:
  if ( (v40 & 1) == 0 )
  {
    LOBYTE(v39) = *(_DWORD *)v8 == *(_DWORD *)a3;
    if ( *(_DWORD *)v8 != *(_DWORD *)a3 )
      return v39;
    goto LABEL_68;
  }
LABEL_36:
  LOBYTE(v39) = (unsigned int)sub_182C7B0(v9, v8, a3) == 0;
  if ( !(_BYTE)v39 )
    return v39;
LABEL_68:
  if ( (*(_BYTE *)(v8 + 20) & 1) != 0 || (*(_BYTE *)(a3 + 20) & 1) != 0 )
    LOBYTE(v39) = (unsigned int)sub_182C7B0(v9, v8 + 16, a3 + 16) == 0;
  else
    LOBYTE(v39) = *(_DWORD *)(v8 + 16) == *(_DWORD *)(a3 + 16);
  if ( !(_BYTE)v39 )
    return v39;
  v49 = qword_1C7F2C0;
  v64 = a3 + 32;
  v71 = v8 + 32;
  if ( (*(_BYTE *)(v8 + 52) & 1) != 0
    || *(_DWORD *)(v8 + 48) != 1
    || (*(_BYTE *)(a3 + 52) & 1) != 0
    || *(_DWORD *)(a3 + 48) != 1 )
  {
    v67 = a3 + 64;
    if ( (unsigned __int8)sub_1848D40(qword_1C7F2C0, v71, v64) )
      goto LABEL_4;
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 36) & 1) == 0 )
    {
      v50 = *(_BYTE *)(a3 + 36);
      if ( (v50 & 1) == 0 )
      {
        v67 = a3 + 64;
        if ( *(_DWORD *)(v8 + 32) < *(_DWORD *)(a3 + 32) )
          goto LABEL_4;
        goto LABEL_77;
      }
    }
    v67 = a3 + 64;
    if ( (int)sub_182C7B0(qword_1C7F2C0, v71, v64) < 0 )
      goto LABEL_4;
  }
  v49 = qword_1C7F2C0;
  if ( (*(_BYTE *)(v8 + 36) & 1) != 0 )
    goto LABEL_102;
  v50 = *(_BYTE *)(a3 + 36);
LABEL_77:
  if ( (v50 & 1) == 0 )
  {
    v39 = *(_DWORD *)(a3 + 32);
    if ( *(_DWORD *)(v8 + 32) != v39 )
      return v39;
    goto LABEL_79;
  }
LABEL_102:
  v39 = sub_182C7B0(v49, v71, v64);
  if ( v39 )
    return v39;
LABEL_79:
  if ( (*(_BYTE *)(v8 + 52) & 1) != 0 || (*(_BYTE *)(a3 + 52) & 1) != 0 )
    LOBYTE(v39) = (unsigned int)sub_182C7B0(v49, v8 + 48, a3 + 48) == 0;
  else
    LOBYTE(v39) = *(_DWORD *)(v8 + 48) == *(_DWORD *)(a3 + 48);
  if ( !(_BYTE)v39 )
    return v39;
  v51 = v8 + 64;
  v67 = a3 + 64;
  if ( (*(_BYTE *)(v8 + 84) & 1) != 0
    || *(_DWORD *)(v8 + 80) != 1
    || (*(_BYTE *)(a3 + 84) & 1) != 0
    || *(_DWORD *)(a3 + 80) != 1 )
  {
    LOBYTE(v39) = sub_1848D40(qword_1C7F2C0, v51, v67);
    if ( !(_BYTE)v39 )
      return v39;
  }
  else
  {
    if ( (*(_BYTE *)(v8 + 68) & 1) != 0 || (*(_BYTE *)(a3 + 68) & 1) != 0 )
      v39 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v51, v67) >> 31;
    else
      LOBYTE(v39) = *(_DWORD *)(v8 + 64) < *(_DWORD *)(a3 + 64);
    if ( !(_BYTE)v39 )
      return v39;
  }
LABEL_4:
  v10 = qword_1C7F2C0;
  v8 = v5 + *(_QWORD *)(a1 + 24);
  if ( (*(_BYTE *)(a3 + 4) & 1) == 0 )
  {
    v11 = *(_DWORD *)a3;
    goto LABEL_6;
  }
  v70 = qword_1C7F2C0;
  sub_182C690(qword_1C7F2C0, v5 + *(_QWORD *)(a1 + 24), a3);
  v12 = a3 + 16;
  v10 = v70;
  if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
  {
LABEL_7:
    v13 = *(_DWORD *)(a3 + 16);
    v14 = qword_1C7F2C0;
    *(_BYTE *)(v8 + 20) &= ~1u;
    *(_DWORD *)(v8 + 16) = v13;
    if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
      goto LABEL_8;
    goto LABEL_40;
  }
LABEL_39:
  sub_182C690(v10, v8 + 16, v12);
  v14 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 36) & 1) == 0 )
  {
LABEL_8:
    v15 = *(_DWORD *)(a3 + 32);
    *(_BYTE *)(v8 + 36) &= ~1u;
    *(_DWORD *)(v8 + 32) = v15;
    v16 = a3 + 48;
    v72 = a3 + 48;
    if ( (*(_BYTE *)(a3 + 52) & 1) == 0 )
      goto LABEL_9;
    goto LABEL_41;
  }
LABEL_40:
  sub_182C690(v14, v8 + 32, v64);
  v16 = a3 + 48;
  v72 = a3 + 48;
  if ( (*(_BYTE *)(a3 + 52) & 1) == 0 )
  {
LABEL_9:
    v17 = *(_DWORD *)(a3 + 48);
    v18 = qword_1C7F2C0;
    *(_BYTE *)(v8 + 52) &= ~1u;
    *(_DWORD *)(v8 + 48) = v17;
    if ( (*(_BYTE *)(a3 + 68) & 1) == 0 )
      goto LABEL_10;
    goto LABEL_42;
  }
LABEL_41:
  sub_182C690(v14, v8 + 48, v16);
  v18 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a3 + 68) & 1) == 0 )
  {
LABEL_10:
    v19 = *(_DWORD *)(a3 + 64);
    *(_BYTE *)(v8 + 68) &= ~1u;
    *(_DWORD *)(v8 + 64) = v19;
    v20 = a3 + 80;
    v69 = a3 + 80;
    if ( (*(_BYTE *)(a3 + 84) & 1) == 0 )
      goto LABEL_11;
LABEL_43:
    sub_182C690(v18, v8 + 80, v20);
    if ( !(unsigned int)((__int64 (*)(void))sub_180B130)() )
      goto LABEL_12;
LABEL_44:
    if ( (unsigned __int8)sub_186A530() )
    {
      sub_186A4C0();
      if ( a4 )
      {
        v52 = sub_180B150();
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_2FE070((char **)&v75, (int *)a3);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v75 != &v77 )
          operator delete(v75, v77 + 1);
        v53 = ")\n";
        v54 = v52;
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        sub_180B150();
        std::__ostream_insert<char,std::char_traits<char>>();
        v55 = qword_1C7F2C0;
        v75 = nullptr;
        v76 = 0;
        v77 = 1;
        v78 = 0;
        if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v75, a3);
        else
          LODWORD(v75) = *(_DWORD *)a3;
        if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
        {
          sub_182C690(v55, &v77, v12);
        }
        else
        {
          v56 = *(_DWORD *)(a3 + 16);
          BYTE4(v77) &= ~1u;
          LODWORD(v77) = v56;
        }
        v79 = 0;
        v57 = qword_1C7F2C0;
        v80 = 0;
        v81 = 1;
        v82 = 0;
        if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v79, v64);
        else
          LODWORD(v79) = *(_DWORD *)(a3 + 32);
        if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
        {
          sub_182C690(v57, &v81, v72);
        }
        else
        {
          v58 = *(_DWORD *)(a3 + 48);
          BYTE4(v81) &= ~1u;
          LODWORD(v81) = v58;
        }
        v83 = 0;
        v59 = qword_1C7F2C0;
        v84 = 0;
        v85 = 1;
        v86 = 0;
        if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v83, v67);
        else
          LODWORD(v83) = *(_DWORD *)(a3 + 64);
        if ( (*(_BYTE *)(a3 + 84) & 1) != 0 )
        {
          sub_182C690(v59, &v85, v69);
        }
        else
        {
          v60 = *(_DWORD *)(a3 + 80);
          BYTE4(v85) &= ~1u;
          LODWORD(v85) = v60;
        }
        sub_1831620(qword_1C7F2C0, &v75);
        sub_1831620(qword_1C7F2C0, &v79);
        sub_1831620(qword_1C7F2C0, &v83);
        sub_2FE070((char **)&v73, (int *)&v75);
        std::__ostream_insert<char,std::char_traits<char>>();
        if ( v73 != v74 )
          operator delete(v73, v74[0] + 1LL);
        std::__ostream_insert<char,std::char_traits<char>>();
        v66 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v83);
        sub_182CBA0(v66, &v85);
        v61 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v79);
        sub_182CBA0(v61, &v81);
        v62 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v75);
        v53 = (char *)&v77;
        v54 = (__int64)v62;
        sub_182CBA0(v62, &v77);
      }
      sub_186A500(v54, v53);
    }
    else if ( a4 )
    {
      sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_2FE070((char **)&v75, (int *)a3);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v75 != &v77 )
        operator delete(v75, v77 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
    else
    {
      sub_180B150();
      std::__ostream_insert<char,std::char_traits<char>>();
      v41 = qword_1C7F2C0;
      v75 = nullptr;
      v76 = 0;
      v77 = 1;
      v78 = 0;
      if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v75, a3);
      else
        LODWORD(v75) = *(_DWORD *)a3;
      if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
      {
        sub_182C690(v41, &v77, v12);
      }
      else
      {
        v42 = *(_DWORD *)(a3 + 16);
        BYTE4(v77) &= ~1u;
        LODWORD(v77) = v42;
      }
      v79 = 0;
      v43 = qword_1C7F2C0;
      v80 = 0;
      v81 = 1;
      v82 = 0;
      if ( (*(_BYTE *)(a3 + 36) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v79, v64);
      else
        LODWORD(v79) = *(_DWORD *)(a3 + 32);
      if ( (*(_BYTE *)(a3 + 52) & 1) != 0 )
      {
        sub_182C690(v43, &v81, v72);
      }
      else
      {
        v44 = *(_DWORD *)(a3 + 48);
        BYTE4(v81) &= ~1u;
        LODWORD(v81) = v44;
      }
      v83 = 0;
      v45 = qword_1C7F2C0;
      v84 = 0;
      v85 = 1;
      v86 = 0;
      if ( (*(_BYTE *)(a3 + 68) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v83, v67);
      else
        LODWORD(v83) = *(_DWORD *)(a3 + 64);
      if ( (*(_BYTE *)(a3 + 84) & 1) != 0 )
      {
        sub_182C690(v45, &v85, v69);
      }
      else
      {
        v46 = *(_DWORD *)(a3 + 80);
        BYTE4(v85) &= ~1u;
        LODWORD(v85) = v46;
      }
      sub_1831620(qword_1C7F2C0, &v75);
      sub_1831620(qword_1C7F2C0, &v79);
      sub_1831620(qword_1C7F2C0, &v83);
      sub_2FE070((char **)&v73, (int *)&v75);
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v73 != v74 )
        operator delete(v73, v74[0] + 1LL);
      std::__ostream_insert<char,std::char_traits<char>>();
      v65 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v83);
      sub_182CBA0(v65, &v85);
      v47 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v79);
      sub_182CBA0(v47, &v81);
      v48 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v75);
      sub_182CBA0(v48, &v77);
    }
    goto LABEL_12;
  }
LABEL_42:
  sub_182C690(v18, v8 + 64, v67);
  v20 = a3 + 80;
  v69 = a3 + 80;
  if ( (*(_BYTE *)(a3 + 84) & 1) != 0 )
    goto LABEL_43;
LABEL_11:
  v21 = *(_DWORD *)(a3 + 80);
  *(_BYTE *)(v8 + 84) &= ~1u;
  *(_DWORD *)(v8 + 80) = v21;
  if ( (unsigned int)sub_180B130(v18) )
    goto LABEL_44;
LABEL_12:
  v22 = *(_QWORD *)(a1 + 72);
  ++v6;
  for ( ; v22; v22 = *(_QWORD *)(a1 + 72) )
  {
    if ( v6 >= *(_DWORD *)(v22 - 4) )
      break;
    v23 = sub_33DD50(*(_QWORD *)(a1 + 16), v6);
    v24 = qword_1C7F2C0;
    v25 = v23;
    v26 = *(_QWORD *)(a1 + 24) + 96LL * v6;
    if ( (*(_BYTE *)(v23 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, *(_QWORD *)(a1 + 24) + 96LL * v6, v23);
      if ( (*(_BYTE *)(v25 + 20) & 1) == 0 )
      {
LABEL_16:
        v28 = *(_DWORD *)(v25 + 16);
        v29 = qword_1C7F2C0;
        *(_BYTE *)(v26 + 20) &= ~1u;
        *(_DWORD *)(v26 + 16) = v28;
        if ( (*(_BYTE *)(v25 + 36) & 1) == 0 )
          goto LABEL_17;
        goto LABEL_29;
      }
    }
    else
    {
      v27 = *(_DWORD *)v23;
      *(_BYTE *)(v26 + 4) &= ~1u;
      *(_DWORD *)v26 = v27;
      if ( (*(_BYTE *)(v25 + 20) & 1) == 0 )
        goto LABEL_16;
    }
    sub_182C690(v24, v26 + 16, v25 + 16);
    v29 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v25 + 36) & 1) == 0 )
    {
LABEL_17:
      v30 = *(_DWORD *)(v25 + 32);
      *(_BYTE *)(v26 + 36) &= ~1u;
      *(_DWORD *)(v26 + 32) = v30;
      if ( (*(_BYTE *)(v25 + 52) & 1) == 0 )
        goto LABEL_18;
      goto LABEL_30;
    }
LABEL_29:
    sub_182C690(v29, v26 + 32, v25 + 32);
    if ( (*(_BYTE *)(v25 + 52) & 1) == 0 )
    {
LABEL_18:
      v31 = *(_DWORD *)(v25 + 48);
      v32 = qword_1C7F2C0;
      *(_BYTE *)(v26 + 52) &= ~1u;
      *(_DWORD *)(v26 + 48) = v31;
      if ( (*(_BYTE *)(v25 + 68) & 1) == 0 )
        goto LABEL_19;
      goto LABEL_31;
    }
LABEL_30:
    sub_182C690(v29, v26 + 48, v25 + 48);
    v32 = qword_1C7F2C0;
    if ( (*(_BYTE *)(v25 + 68) & 1) == 0 )
    {
LABEL_19:
      v33 = *(_DWORD *)(v25 + 64);
      *(_BYTE *)(v26 + 68) &= ~1u;
      *(_DWORD *)(v26 + 64) = v33;
      if ( (*(_BYTE *)(v25 + 84) & 1) != 0 )
        goto LABEL_32;
      goto LABEL_20;
    }
LABEL_31:
    sub_182C690(v32, v26 + 64, v25 + 64);
    if ( (*(_BYTE *)(v25 + 84) & 1) != 0 )
    {
LABEL_32:
      sub_182C690(v32, v26 + 80, v25 + 80);
      goto LABEL_12;
    }
LABEL_20:
    v34 = *(_DWORD *)(v25 + 80);
    ++v6;
    *(_BYTE *)(v26 + 84) &= ~1u;
    *(_DWORD *)(v26 + 80) = v34;
  }
  v35 = *(_QWORD *)(a1 + 88);
  if ( v35 )
    ++*(_DWORD *)(v35 + 16);
  v36 = *(_DWORD **)(a1 + 96);
  if ( v36 )
  {
    if ( v36[4]-- == 1 )
    {
      (**(void (__fastcall ***)(_DWORD *))v36)(v36);
      sub_186B220(v36);
      v35 = *(_QWORD *)(a1 + 88);
    }
  }
  v38 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 96) = v35;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 64LL))(v38, a1 + 104);
  LOBYTE(v39) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 168LL))(
                  *(_QWORD *)(a1 + 8),
                  a1 + 88);
  return v39;
}

