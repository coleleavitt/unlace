__int64 __fastcall sub_7B0E50(__int64 a1, unsigned int *a2, __m128i a3)
{
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  __int64 result; // rax
  unsigned int *v8; // r14
  unsigned int *v9; // r13
  unsigned int v10; // r12d
  __int64 (__fastcall *v11)(); // rax
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  __int64 (__fastcall *v17)(); // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(); // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(_QWORD); // rax
  __int64 v32; // rsi
  __int64 (__fastcall *v33)(); // rax
  __int64 v34; // rdi
  char *v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r12
  __int64 (__fastcall *v38)(_QWORD); // rax
  __int64 v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // r14
  __int64 v42; // r14
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  __int64 (__fastcall *v45)(); // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 (__fastcall *v52)(); // rax
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // rdi
  __int64 (__fastcall *v59)(_QWORD); // rax
  __int64 v60; // rsi
  __int64 (__fastcall *v61)(); // rax
  __int64 v62; // rdi
  __int64 v63; // r12
  __int64 (__fastcall *v64)(_QWORD); // rax
  __int64 v65; // rsi
  __int64 v66; // rbx
  __int64 v67; // rsi
  __int64 v68; // rbx
  __int64 v69; // rax
  char v70; // [rsp+8h] [rbp-70h]
  __int64 v71; // [rsp+8h] [rbp-70h]
  __int64 v72; // [rsp+8h] [rbp-70h]
  __int64 v73; // [rsp+10h] [rbp-68h]
  __int64 v74; // [rsp+18h] [rbp-60h]
  __int64 v75; // [rsp+18h] [rbp-60h]
  __int64 v76; // [rsp+18h] [rbp-60h]
  __int64 v77; // [rsp+18h] [rbp-60h]
  __int64 v78; // [rsp+20h] [rbp-58h]
  __int64 v79; // [rsp+20h] [rbp-58h]
  __int64 v80; // [rsp+28h] [rbp-50h]
  __int64 v81; // [rsp+28h] [rbp-50h]
  __int64 v82; // [rsp+28h] [rbp-50h]
  __int64 v83; // [rsp+28h] [rbp-50h]
  unsigned int *v84; // [rsp+38h] [rbp-40h] BYREF

  if ( a2[2] == 1 )
  {
    v40 = (unsigned int *)sub_81AF30(a2);
    result = sub_7B09F0((unsigned int *)a1, v40, -2, a3);
    if ( !(_BYTE)result )
      return result;
  }
  if ( a2[4] != -2 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 536LL);
    v6 = v5 == sub_7C55E0 ? sub_7C55E0(a1) : v5(a1);
    if ( v6 != 1 )
      return 1;
  }
  if ( (unsigned int)sub_7B0230((_QWORD *)a1, a2) == 1 )
    return 1;
  (*(void (__fastcall **)(unsigned int **, unsigned int *))(*(_QWORD *)a2 + 72LL))(&v84, a2);
  if ( !v84 )
    return 1;
  v8 = &v84[*(v84 - 1)];
  if ( v84 == v8 )
  {
LABEL_38:
    sub_186B220(v8 - 2);
    return 1;
  }
  v9 = v84;
  v73 = a1 + 80;
  do
  {
    v10 = *v9;
    v11 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
    if ( v11 == sub_7C5680 )
    {
      if ( *(_QWORD *)(a1 + 160) )
        goto LABEL_12;
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3296LL) + 24LL * (v10 >> 1));
    }
    else
    {
      v12 = ((__int64 (__fastcall *)(__int64, _QWORD))v11)(a1, v10);
    }
    if ( v12 )
    {
      v70 = sub_7E4330(a2, v73, v10);
      if ( v70 != (*(unsigned __int8 (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)a2 + 64LL))(a2, v10) )
      {
        sub_180B130(a2);
        if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
        {
          sub_186A4C0(*(double *)a3.m128i_i64);
          v13 = sub_180B150(a2, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7C5DC0(v13, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          v14 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7E42B0(v14, a2);
          v15 = std::operator<<<std::char_traits<char>>();
          v16 = (unsigned __int64)"\n";
          std::operator<<<std::char_traits<char>>();
          v74 = *(_QWORD *)(a1 + 24);
          v17 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 584LL);
          if ( v17 == sub_7C5800 )
          {
            v18 = *(_QWORD *)(a1 + 160);
            v19 = 8LL * v10;
            if ( v18 )
              v20 = *(_QWORD *)(v18 + 896) + v19;
            else
              v20 = *(_QWORD *)(v74 + 3280) + v19;
            v80 = v20;
          }
          else
          {
            v16 = v10;
            v15 = a1;
            v80 = ((__int64 (__fastcall *)(__int64, _QWORD))v17)(a1, v10);
          }
          v21 = sub_180B150(v15, v16);
          v78 = sub_7C5DC0(v21, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          v22 = sub_11B85B0(v74, v78, v80);
          std::operator<<<std::char_traits<char>>();
          v23 = v10 ^ 1;
          v75 = *(_QWORD *)(a1 + 24);
          v24 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 584LL);
          if ( v24 == sub_7C5800 )
          {
            v25 = *(_QWORD *)(a1 + 160);
            v26 = 8LL * (unsigned int)v23;
            if ( v25 )
              v27 = *(_QWORD *)(v25 + 896) + v26;
            else
              v27 = *(_QWORD *)(v75 + 3280) + v26;
            v81 = v27;
          }
          else
          {
            v22 = a1;
            v81 = ((__int64 (__fastcall *)(__int64))v24)(a1);
            v23 = v10 ^ 1;
          }
          v28 = sub_180B150(v22, v23);
          v29 = sub_7C5DC0(v28, (unsigned int)v23);
          std::__ostream_insert<char,std::char_traits<char>>();
          v30 = sub_11B85B0(v75, v29, v81);
          std::operator<<<std::char_traits<char>>();
          v71 = sub_180B150(v30, "\n");
          std::__ostream_insert<char,std::char_traits<char>>();
          v31 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
          if ( v31 == sub_7C55E0 )
            v32 = (unsigned int)sub_7C55E0(a1);
          else
            v32 = ((unsigned int (__fastcall *)(__int64, _QWORD))v31)(a1, v10);
          sub_17F35B0(v71, v32);
          std::__ostream_insert<char,std::char_traits<char>>();
          v33 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
          if ( v33 != sub_7C5680 )
            ((void (__fastcall *)(__int64, _QWORD))v33)(a1, v10);
          v34 = std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
          v35 = (char *)sub_180B150(v34, "\n");
          v36 = (__int64)a2;
          (*(void (__fastcall **)(unsigned int *, char *, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v35, v73, 1);
          if ( a2[4] != -2 )
          {
            v37 = sub_180B150(a2, v35);
            v38 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
            if ( v38 == sub_7C55E0 )
              v39 = (unsigned int)sub_7C55E0(a1);
            else
              v39 = ((unsigned int (__fastcall *)(__int64, _QWORD))v38)(a1, a2[4]);
            v36 = sub_17F35B0(v37, v39);
            v35 = "\n";
            std::operator<<<std::char_traits<char>>();
          }
          sub_186A500(v36, v35);
        }
        else
        {
          v41 = sub_180B150(a2, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7C5DC0(v41, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          v42 = std::ostream::_M_insert<unsigned long>();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_7E42B0(v42, a2);
          v43 = std::operator<<<std::char_traits<char>>();
          v44 = (unsigned __int64)"\n";
          std::operator<<<std::char_traits<char>>();
          v76 = *(_QWORD *)(a1 + 24);
          v45 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 584LL);
          if ( v45 == sub_7C5800 )
          {
            v46 = *(_QWORD *)(a1 + 160);
            v47 = 8LL * v10;
            if ( v46 )
              v48 = *(_QWORD *)(v46 + 896) + v47;
            else
              v48 = *(_QWORD *)(v76 + 3280) + v47;
            v82 = v48;
          }
          else
          {
            v44 = v10;
            v43 = a1;
            v82 = ((__int64 (__fastcall *)(__int64, _QWORD))v45)(a1, v10);
          }
          v49 = sub_180B150(v43, v44);
          v79 = sub_7C5DC0(v49, v10);
          std::__ostream_insert<char,std::char_traits<char>>();
          v50 = sub_11B85B0(v76, v79, v82);
          std::operator<<<std::char_traits<char>>();
          v51 = v10 ^ 1;
          v77 = *(_QWORD *)(a1 + 24);
          v52 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 584LL);
          if ( v52 == sub_7C5800 )
          {
            v53 = *(_QWORD *)(a1 + 160);
            v54 = 8LL * (unsigned int)v51;
            if ( v53 )
              v55 = *(_QWORD *)(v53 + 896) + v54;
            else
              v55 = *(_QWORD *)(v77 + 3280) + v54;
            v83 = v55;
          }
          else
          {
            v50 = a1;
            v83 = ((__int64 (__fastcall *)(__int64))v52)(a1);
            v51 = v10 ^ 1;
          }
          v56 = sub_180B150(v50, v51);
          v57 = sub_7C5DC0(v56, (unsigned int)v51);
          std::__ostream_insert<char,std::char_traits<char>>();
          v58 = sub_11B85B0(v77, v57, v83);
          std::operator<<<std::char_traits<char>>();
          v72 = sub_180B150(v58, "\n");
          std::__ostream_insert<char,std::char_traits<char>>();
          v59 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
          if ( v59 == sub_7C55E0 )
            v60 = (unsigned int)sub_7C55E0(a1);
          else
            v60 = ((unsigned int (__fastcall *)(__int64, _QWORD))v59)(a1, v10);
          sub_17F35B0(v72, v60);
          std::__ostream_insert<char,std::char_traits<char>>();
          v61 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 552LL);
          if ( v61 != sub_7C5680 )
            ((void (__fastcall *)(__int64, _QWORD))v61)(a1, v10);
          v62 = std::ostream::_M_insert<unsigned long>();
          std::operator<<<std::char_traits<char>>();
          v35 = (char *)sub_180B150(v62, "\n");
          v36 = (__int64)a2;
          (*(void (__fastcall **)(unsigned int *, char *, __int64, __int64))(*(_QWORD *)a2 + 136LL))(a2, v35, v73, 1);
          if ( a2[4] != -2 )
          {
            v63 = sub_180B150(a2, v35);
            v64 = *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1 + 536LL);
            if ( v64 == sub_7C55E0 )
              v65 = (unsigned int)sub_7C55E0(a1);
            else
              v65 = ((unsigned int (__fastcall *)(__int64, _QWORD))v64)(a1, a2[4]);
            v36 = sub_17F35B0(v63, v65);
            v35 = "\n";
            std::operator<<<std::char_traits<char>>();
          }
        }
        sub_180B130(v36);
        if ( (unsigned __int8)sub_186A530(*(double *)a3.m128i_i64) )
        {
          sub_186A4C0(*(double *)a3.m128i_i64);
          v66 = *(_QWORD *)(a1 + 24);
          v67 = sub_180B150(v36, v35);
          sub_11B8470(v66, v67);
          sub_186A500(v66, v67);
        }
        else
        {
          v68 = *(_QWORD *)(a1 + 24);
          v69 = sub_180B150(v36, v35);
          sub_11B8470(v68, v69);
        }
        sub_1872CE0("");
        sub_1873130(114, 1797);
      }
    }
LABEL_12:
    ++v9;
  }
  while ( v8 != v9 );
  result = 1;
  v8 = v84;
  if ( v84 )
    goto LABEL_38;
  return result;
}

