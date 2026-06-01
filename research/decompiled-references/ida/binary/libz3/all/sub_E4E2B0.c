__int64 __fastcall sub_E4E2B0(_BYTE *a1, unsigned __int64 a2, __int64 a3, double a4)
{
  _BYTE *v5; // rbp
  __int64 (*v6)(void); // rax
  _QWORD *v7; // r15
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD **v9; // rdx
  __int64 (__fastcall *v10)(__int64); // rax
  int v11; // ebx
  int v12; // ebx
  _QWORD **v13; // r15
  __int64 (__fastcall *v14)(__int64); // rax
  int v15; // eax
  int v16; // ebx
  _QWORD *v17; // rdx
  __int64 (__fastcall *v18)(__int64); // rax
  _QWORD **v19; // r15
  __int64 (__fastcall *v20)(__int64); // rax
  int v21; // eax
  __int64 v22; // rdx
  int v23; // r15d
  _QWORD **v24; // rdx
  __int64 (__fastcall *v25)(__int64); // rax
  int v26; // r13d
  int v27; // eax
  int v28; // eax
  int v29; // ebx
  unsigned int v30; // ebx
  __int64 v31; // rdi
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  _QWORD *v36; // rax
  int v37; // esi
  unsigned int v38; // r13d
  _QWORD *v39; // rdi
  __int64 (__fastcall *v40)(__int64); // rax
  _QWORD *v41; // rdi
  __int64 (__fastcall *v42)(__int64); // rdx
  __int64 v43; // rax
  __int64 v44; // rdi
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdi
  __int64 v48; // rdi
  int v49; // eax
  __int64 v50; // rdi
  __int64 (__fastcall *v51)(__int64); // rax
  _QWORD *v52; // rdi
  __int64 (*v53)(void); // rdx
  _QWORD *v54; // rdi
  _QWORD *v55; // rdi
  _QWORD *v56; // rdi
  _QWORD *v57; // rdi
  __int64 v58; // rax
  __int64 (__fastcall *v59)(__int64); // rax
  int v60; // eax
  int v61; // r13d
  __int64 (__fastcall *v63)(__int64); // rax
  __int64 v64; // rax
  __int16 v65; // dx
  __int64 (__fastcall *v66)(__int64); // rax
  int v67; // r15d
  __int64 (__fastcall *v68)(__int64); // rax
  __int64 v69; // rax
  __int16 v70; // dx
  __int64 v71; // [rsp+0h] [rbp-78h]
  int v72; // [rsp+0h] [rbp-78h]
  int v73; // [rsp+0h] [rbp-78h]
  _QWORD **v74; // [rsp+0h] [rbp-78h]
  __int64 v75; // [rsp+0h] [rbp-78h]
  __int64 v76; // [rsp+8h] [rbp-70h]
  _BYTE v77[8]; // [rsp+18h] [rbp-60h] BYREF
  __int64 (__fastcall **v78)(); // [rsp+20h] [rbp-58h] BYREF
  int v79; // [rsp+28h] [rbp-50h]
  _QWORD *v80; // [rsp+30h] [rbp-48h]
  char v81; // [rsp+38h] [rbp-40h]

  v5 = a1;
  *(_WORD *)(a1 + 97) = 1;
  v6 = *(__int64 (**)(void))(*(_QWORD *)a1 + 248LL);
  if ( (char *)v6 == (char *)sub_E4C8B0 )
  {
    v7 = *((_QWORD **)a1 + 13);
    v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 248LL);
    if ( v8 == sub_E4C8B0 )
    {
      v9 = (_QWORD **)v7[13];
      v10 = (__int64 (__fastcall *)(__int64))(*v9)[31];
      if ( v10 == sub_E4C8B0 )
      {
        v71 = v7[13];
        v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[13] + 248LL))(v9[13]);
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v71 + 112) + 248LL))(*(_QWORD *)(v71 + 112)) + v11;
      }
      else
      {
        v12 = v10(v7[13]);
      }
      v13 = (_QWORD **)v7[14];
      v14 = (__int64 (__fastcall *)(__int64))(*v13)[31];
      if ( v14 == sub_E4C8B0 )
      {
        v72 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[13] + 248LL))(v13[13]);
        v15 = (*(__int64 (__fastcall **)(_QWORD *))(*v13[14] + 248LL))(v13[14]) + v72;
      }
      else
      {
        v15 = v14((__int64)v13);
      }
      v16 = v15 + v12;
    }
    else
    {
      v16 = v8(*((_QWORD *)a1 + 13));
    }
    v17 = *((_QWORD **)a1 + 14);
    v18 = *(__int64 (__fastcall **)(__int64))(*v17 + 248LL);
    if ( v18 == sub_E4C8B0 )
    {
      v19 = (_QWORD **)v17[13];
      v20 = (__int64 (__fastcall *)(__int64))(*v19)[31];
      if ( v20 == sub_E4C8B0 )
      {
        v76 = *((_QWORD *)a1 + 14);
        v73 = (*(__int64 (__fastcall **)(_QWORD *))(*v19[13] + 248LL))(v19[13]);
        v21 = (*(__int64 (__fastcall **)(_QWORD *))(*v19[14] + 248LL))(v19[14]);
        v22 = v76;
        v23 = v21 + v73;
      }
      else
      {
        v75 = *((_QWORD *)a1 + 14);
        v45 = v20((__int64)v19);
        v22 = v75;
        v23 = v45;
      }
      v24 = *(_QWORD ***)(v22 + 112);
      v25 = (__int64 (__fastcall *)(__int64))(*v24)[31];
      if ( v25 == sub_E4C8B0 )
      {
        v74 = v24;
        v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v24[13] + 248LL))(v24[13]);
        a1 = v74[14];
        v27 = v26 + (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 248LL))(a1);
      }
      else
      {
        a1 = v24;
        v27 = v25((__int64)v24);
      }
      v28 = v23 + v27;
    }
    else
    {
      a1 = *((_BYTE **)a1 + 14);
      v28 = v18((__int64)a1);
    }
    v29 = v28 + v16;
  }
  else
  {
    v29 = v6();
  }
  v30 = a2 | v29;
  if ( v30 || v5[120] )
  {
    v31 = *((_QWORD *)v5 + 14);
    v5[96] = 1;
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v31 + 368LL))(v31, (unsigned int)a2, a3);
  }
  if ( !v5[96] )
    goto LABEL_33;
  if ( *((_DWORD *)v5 + 32) != -1 )
  {
    if ( (unsigned int)sub_180B130(a1) > 0xE )
    {
      if ( (unsigned __int8)sub_186A530(a4) )
      {
        sub_186A4C0(a4);
        v47 = sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v47, "(combined-solver \"using solver 2 (with timeout)\")\n");
      }
      else
      {
        sub_180B150(a1, a2);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    v36 = *((_QWORD **)v5 + 14);
    v37 = *((_DWORD *)v5 + 32);
    v79 = 0;
    v80 = v36;
    v78 = &off_1C5CE28;
    v81 = 0;
    sub_18561B0((unsigned int)v77, v37, (unsigned int)&v78, v33, v34, v35);
    a2 = 0;
    v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v5 + 14) + 368LL))(
            *((_QWORD *)v5 + 14),
            0,
            a3);
    a1 = v77;
    sub_1856400(v77);
    if ( v38 )
      goto LABEL_22;
    v46 = *((_DWORD *)v5 + 31);
    if ( v46 == 1 )
    {
      v59 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 232LL);
      if ( v59 == sub_E490E0 )
      {
        a1 = *((_BYTE **)v5 + 13);
        v60 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 232LL))(a1);
      }
      else
      {
        a1 = v5;
        v60 = v59((__int64)v5);
      }
      v61 = v60;
      if ( v60 )
      {
        do
        {
          v63 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 240LL);
          if ( v63 == sub_E490F0 )
          {
            a1 = *((_BYTE **)v5 + 13);
            a2 = v30;
            v64 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 240LL))(a1, v30);
          }
          else
          {
            a2 = v30;
            a1 = v5;
            v64 = ((__int64 (__fastcall *)(_BYTE *, _QWORD))v63)(v5, v30);
          }
          v65 = *(_WORD *)(v64 + 4);
          if ( v65 ? v65 == 2 : (*(_BYTE *)(v64 + 30) & 2) != 0 )
            goto LABEL_46;
        }
        while ( v61 != ++v30 );
      }
    }
    else if ( v46 != 2 )
    {
      if ( v46 )
      {
        sub_1872CE0("");
        sub_1873130(114, 112);
      }
LABEL_46:
      v38 = 0;
LABEL_22:
      if ( v81 )
        goto LABEL_23;
      v78 = &off_1C5CE28;
      return v38;
    }
LABEL_23:
    v78 = &off_1C5CE28;
    if ( !v81 )
      goto LABEL_30;
    v39 = v80;
    v40 = *(__int64 (__fastcall **)(__int64))(*v80 + 72LL);
    if ( v40 == sub_E4A320 )
    {
      v41 = (_QWORD *)v80[13];
      v42 = *(__int64 (__fastcall **)(__int64))(*v41 + 72LL);
      if ( v42 != v40 )
        goto LABEL_88;
      v39 = (_QWORD *)v41[13];
      v40 = *(__int64 (__fastcall **)(__int64))(*v39 + 72LL);
      if ( v40 == v42 )
      {
        v41 = (_QWORD *)v39[13];
        v42 = *(__int64 (__fastcall **)(__int64))(*v41 + 72LL);
        if ( v42 == v40 )
        {
          a1 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v41[13] + 72LL))(v41[13]);
LABEL_29:
          sub_18296D0(a1);
          goto LABEL_30;
        }
LABEL_88:
        a1 = (_BYTE *)v42((__int64)v41);
        goto LABEL_29;
      }
    }
    a1 = (_BYTE *)v40((__int64)v39);
    goto LABEL_29;
  }
  if ( (unsigned int)sub_180B130(a1) > 0xE )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v50 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v50, "(combined-solver \"using solver 2 (without a timeout)\")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  a2 = 0;
  v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v5 + 14) + 368LL))(
          *((_QWORD *)v5 + 14),
          0,
          a3);
  if ( v38 )
    return v38;
  v49 = *((_DWORD *)v5 + 31);
  if ( v49 == 1 )
  {
    v66 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 232LL);
    if ( v66 == sub_E490E0 )
      v67 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 13) + 232LL))(*((_QWORD *)v5 + 13));
    else
      v67 = v66((__int64)v5);
    if ( v67 )
    {
      do
      {
        v68 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 240LL);
        a2 = v30;
        if ( v68 == sub_E490F0 )
          v69 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v5 + 13) + 240LL))(*((_QWORD *)v5 + 13), v30);
        else
          v69 = ((__int64 (__fastcall *)(_BYTE *, _QWORD))v68)(v5, v30);
        v70 = *(_WORD *)(v69 + 4);
        if ( v70 )
        {
          if ( v70 == 2 )
            return v38;
        }
        else if ( (*(_BYTE *)(v69 + 30) & 2) != 0 )
        {
          return v38;
        }
        ++v30;
      }
      while ( v67 != v30 );
    }
  }
  else if ( v49 != 2 )
  {
    if ( v49 )
    {
      sub_1872CE0("");
      sub_1873130(114, 112);
    }
    return v38;
  }
  v51 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 72LL);
  if ( v51 != sub_E4A320 )
  {
    v54 = v5;
    goto LABEL_92;
  }
  v52 = *((_QWORD **)v5 + 13);
  v53 = *(__int64 (**)(void))(*v52 + 72LL);
  if ( (char *)v53 != (char *)v51 )
    goto LABEL_105;
  v54 = (_QWORD *)v52[13];
  v51 = *(__int64 (__fastcall **)(__int64))(*v54 + 72LL);
  if ( (char *)v51 != (char *)v53 )
    goto LABEL_92;
  v55 = (_QWORD *)v54[13];
  v53 = *(__int64 (**)(void))(*v55 + 72LL);
  if ( (char *)v53 != (char *)v51 )
    goto LABEL_105;
  v54 = (_QWORD *)v55[13];
  v51 = *(__int64 (__fastcall **)(__int64))(*v54 + 72LL);
  if ( (char *)v51 != (char *)v53 )
    goto LABEL_92;
  v56 = (_QWORD *)v54[13];
  v53 = *(__int64 (**)(void))(*v56 + 72LL);
  if ( (char *)v53 != (char *)v51 )
    goto LABEL_105;
  v54 = (_QWORD *)v56[13];
  v51 = *(__int64 (__fastcall **)(__int64))(*v54 + 72LL);
  if ( (char *)v51 != (char *)v53 )
  {
LABEL_92:
    a1 = (_BYTE *)v51((__int64)v54);
    goto LABEL_71;
  }
  v57 = (_QWORD *)v54[13];
  v53 = *(__int64 (**)(void))(*v57 + 72LL);
  if ( (char *)v53 == (char *)v51 )
  {
    v54 = (_QWORD *)v57[13];
    v51 = *(__int64 (__fastcall **)(__int64))(*v54 + 72LL);
    if ( (char *)v51 == (char *)v53 )
    {
      a1 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v54[13] + 72LL))(v54[13]);
      goto LABEL_71;
    }
    goto LABEL_92;
  }
LABEL_105:
  a1 = (_BYTE *)v53();
LABEL_71:
  if ( !(unsigned __int8)sub_18290A0(a1) )
    return v38;
LABEL_30:
  if ( (unsigned int)sub_180B130(a1) > 0xE )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v43 = sub_180B150(a1, a2);
      a2 = (unsigned __int64)"(combined-solver \"solver 2 failed, trying solver1\")\n";
      a1 = (_BYTE *)v43;
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(a1, "(combined-solver \"solver 2 failed, trying solver1\")\n");
    }
    else
    {
      v58 = sub_180B150(a1, a2);
      a2 = (unsigned __int64)"(combined-solver \"solver 2 failed, trying solver1\")\n";
      a1 = (_BYTE *)v58;
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
LABEL_33:
  if ( (unsigned int)sub_180B130(a1) > 0xE )
  {
    if ( (unsigned __int8)sub_186A530(a4) )
    {
      sub_186A4C0(a4);
      v48 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v48, "(combined-solver \"using solver 1\")\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  v44 = *((_QWORD *)v5 + 13);
  v5[98] = 1;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v44 + 368LL))(v44, 0, a3);
}

