void __fastcall sub_DD4DC0(_QWORD *a1)
{
  __int64 v2; // rdi
  void (__noreturn *v3)(); // rax
  unsigned int v4; // eax
  __int64 v5; // rdi
  void (__noreturn *v6)(); // rcx
  __int64 v7; // r12
  void (__noreturn *v8)(); // rbp
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // r14
  _QWORD *v16; // rbp
  __int64 v17; // r13
  char *v18; // rax
  int *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  void (__noreturn *v24)(); // rcx
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned int v27; // ebp
  __int64 v28; // r14
  void (__noreturn *v29)(); // r13
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // r13
  unsigned int v33; // ebp
  __int64 v34; // r14
  void (__noreturn *v35)(); // r12
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  unsigned int v39; // ebp
  __int64 i; // rdi
  __int64 v41; // r15
  __int64 v42; // rax
  unsigned int v43; // edx
  __int64 v44; // rdi
  void (__noreturn *v45)(); // rax
  _QWORD *exception; // rbx
  __int64 v47; // rdi
  void (__noreturn *v48)(); // rax
  __int64 v49; // r13
  void (__noreturn *v50)(); // r12
  __int64 v51; // r14
  void (__noreturn *v52)(); // r13
  unsigned __int8 v53; // al
  __int64 v54; // rdi
  void (__noreturn *v55)(); // rax
  __int64 v56; // rdi
  void (__noreturn *v57)(); // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  void *ptr; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+8h] [rbp-C0h]
  int v62; // [rsp+10h] [rbp-B8h] BYREF
  char v63; // [rsp+14h] [rbp-B4h]
  __int64 v64; // [rsp+18h] [rbp-B0h]

  v2 = a1[179];
  v3 = *(void (__noreturn **)())(*(_QWORD *)v2 + 72LL);
  if ( v3 == sub_2D08E0 )
  {
    sub_1872CE0("");
    sub_1873130(114, 101);
  }
  switch ( ((__int64 (__fastcall *)(__int64, _QWORD))v3)(v2, *a1) )
  {
    case 0LL:
      sub_DBF570(*((unsigned int *)a1 + 356), (__int64)"invalid command argument, unsigned integer expected");
      v4 = sub_DC09F0((__int64)a1);
      v5 = a1[179];
      v6 = *(void (__noreturn **)())(*(_QWORD *)v5 + 80LL);
      if ( v6 == sub_2D0880 )
      {
        sub_1872CE0("");
        sub_1873130(114, 102);
      }
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v6)(v5, *a1, v4);
      goto LABEL_64;
    case 1LL:
      sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid command argument, true/false expected");
      ptr = (void *)a1[6];
      if ( (unsigned __int8)sub_2DD1C0((int)&ptr, "true") || (unsigned __int8)sub_2DD1C0((int)&ptr, "false") )
      {
        v51 = a1[179];
        v52 = *(void (__noreturn **)())(*(_QWORD *)v51 + 88LL);
        v53 = sub_2DD1C0((int)&ptr, "true");
        if ( v52 == sub_2D0850 )
        {
          sub_1872CE0("");
          sub_1873130(114, 103);
        }
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v52)(v51, *a1, v53);
        if ( *((_DWORD *)a1 + 356) != 9 )
          sub_DC0980(a1);
        return;
      }
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid command argument, true/false expected");
      goto LABEL_112;
    case 3LL:
      if ( ((*((_DWORD *)a1 + 356) - 6) & 0xFFFFFFFD) == 0 )
      {
        v49 = a1[179];
        v50 = *(void (__noreturn **)())(*(_QWORD *)v49 + 96LL);
        LODWORD(ptr) = 0;
        BYTE4(ptr) &= 0xFCu;
        v63 &= 0xFCu;
        v61 = 0;
        v62 = 1;
        v64 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)a1 + 14);
        if ( v50 == sub_2D0820 )
        {
          sub_1872CE0("");
          sub_1873130(114, 104);
        }
        goto LABEL_92;
      }
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid command argument, numeral expected");
      goto LABEL_112;
    case 4LL:
      if ( *((_DWORD *)a1 + 356) == 8 )
      {
        v49 = a1[179];
        v50 = *(void (__noreturn **)())(*(_QWORD *)v49 + 96LL);
        LODWORD(ptr) = 0;
        BYTE4(ptr) &= 0xFCu;
        v63 &= 0xFCu;
        v61 = 0;
        v62 = 1;
        v64 = 0;
        sub_27B950((__int64)qword_1C7F2C0, (__int64)&ptr, (int *)a1 + 14);
        if ( v50 == sub_2D0820 )
        {
          sub_1872CE0("");
          sub_1873130(114, 104);
        }
LABEL_92:
        ((void (__fastcall *)(__int64, _QWORD, void **))v50)(v49, *a1, &ptr);
        sub_25A130((char *)&ptr);
        if ( *((_DWORD *)a1 + 356) == 9 )
          return;
LABEL_65:
        sub_DC0980(a1);
        return;
      }
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid command argument, decimal expected");
      goto LABEL_112;
    case 5LL:
      if ( *((_DWORD *)a1 + 356) != 5 )
      {
        exception = __cxa_allocate_exception(0x30u);
        sub_305660(exception, "invalid command argument, string expected");
LABEL_112:
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
      }
      v47 = a1[179];
      v48 = *(void (__noreturn **)())(*(_QWORD *)v47 + 112LL);
      if ( v48 == sub_2D07C0 )
      {
        sub_1872CE0("");
        sub_1873130(114, 106);
      }
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))v48)(v47, *a1, a1[173]);
LABEL_64:
      if ( *((_DWORD *)a1 + 356) != 9 )
        goto LABEL_65;
      return;
    case 6LL:
      sub_DC1B40(a1);
      return;
    case 7LL:
      if ( *((_DWORD *)a1 + 356) == 3 )
        goto LABEL_62;
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid command argument, keyword expected");
      goto LABEL_112;
    case 8LL:
      sub_DBF580(*((unsigned int *)a1 + 356), (__int64)"invalid command argument, symbol expected");
LABEL_62:
      v44 = a1[179];
      v45 = *(void (__noreturn **)())(*(_QWORD *)v44 + 120LL);
      if ( v45 == sub_2D0790 )
      {
        sub_1872CE0("");
        sub_1873130(114, 107);
      }
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))v45)(v44, *a1, a1 + 6);
      goto LABEL_64;
    case 9LL:
      v37 = a1[206];
      if ( v37 )
        v38 = 8LL * *(unsigned int *)(v37 - 4);
      else
        v38 = 0;
      v39 = 0;
      sub_DBF660((__int64)a1, "invalid list of symbols, '(' expected");
      for ( i = *((unsigned int *)a1 + 356); (_DWORD)i != 2; *(_DWORD *)(v42 - 4) = v43 + 1 )
      {
        sub_DBF580(i, (__int64)"invalid list of symbols, symbol or ')' expected");
        v41 = a1[6];
        if ( *((_DWORD *)a1 + 356) != 9 )
          sub_DC0980(a1);
        v42 = a1[206];
        if ( !v42 || (v43 = *(_DWORD *)(v42 - 4), v43 == *(_DWORD *)(v42 - 8)) )
        {
          sub_41E8A0((unsigned int **)a1 + 206);
          v42 = a1[206];
          v43 = *(_DWORD *)(v42 - 4);
        }
        i = *((unsigned int *)a1 + 356);
        ++v39;
        *(_QWORD *)(v42 + 8LL * v43) = v41;
      }
      sub_DC0980(a1);
      v56 = a1[179];
      v57 = *(void (__noreturn **)())(*(_QWORD *)v56 + 128LL);
      if ( v57 != sub_2D0760 )
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))v57)(v56, *a1, v39, v38 + a1[206]);
        return;
      }
      v11 = 108;
      goto LABEL_46;
    case 10LL:
      sub_DC3500(a1, "invalid command argument, sort expected");
      v7 = a1[179];
      v8 = *(void (__noreturn **)())(*(_QWORD *)v7 + 136LL);
      v9 = sub_DC07A0(a1)[1];
      v10 = 0x7FFFFFFF8LL;
      if ( v9 )
        v10 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      if ( v8 != sub_2D0730 )
        goto LABEL_91;
      v11 = 109;
      goto LABEL_46;
    case 11LL:
      v31 = sub_DC07A0(a1)[1];
      if ( v31 )
        v32 = 8LL * *(unsigned int *)(v31 - 4);
      else
        v32 = 0;
      v33 = 0;
      sub_DBF660((__int64)a1, "expecting sort list starting with '('");
      while ( *((_DWORD *)a1 + 356) != 2 )
      {
        ++v33;
        sub_DC3500(a1, "expecting sort list starting with '('");
      }
      sub_DC0980(a1);
      v34 = a1[179];
      v35 = *(void (__noreturn **)())(*(_QWORD *)v34 + 144LL);
      v36 = sub_DC07A0(a1);
      if ( v35 == sub_2D0700 )
      {
        v11 = 110;
LABEL_46:
        sub_1872CE0("");
        v12 = 114;
LABEL_11:
        sub_1873130(v12, v11);
      }
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))v35)(v34, *a1, v33, v32 + v36[1]);
      return;
    case 12LL:
      sub_DD2CA0(a1);
      v7 = a1[179];
      v8 = *(void (__noreturn **)())(*(_QWORD *)v7 + 152LL);
      v9 = sub_DC2710(a1)[1];
      v10 = 0x7FFFFFFF8LL;
      if ( v9 )
        v10 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      if ( v8 != sub_2D08B0 )
        goto LABEL_91;
      v11 = 111;
      goto LABEL_46;
    case 13LL:
      v25 = sub_DC2710(a1)[1];
      if ( v25 )
        v26 = 8LL * *(unsigned int *)(v25 - 4);
      else
        v26 = 0;
      v27 = 0;
      sub_DBF660((__int64)a1, "invalid list of terms, '(' expected");
      while ( *((_DWORD *)a1 + 356) != 2 )
      {
        ++v27;
        sub_DD2CA0(a1);
      }
      sub_DC0980(a1);
      v28 = a1[179];
      v29 = *(void (__noreturn **)())(*(_QWORD *)v28 + 160LL);
      v30 = sub_DC2710(a1);
      if ( v29 != sub_2D06D0 )
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))v29)(v28, *a1, v27, v26 + v30[1]);
        return;
      }
      v11 = 112;
      goto LABEL_46;
    case 14LL:
      v22 = sub_DC41A0((__int64)a1);
      v23 = a1[179];
      v24 = *(void (__noreturn **)())(*(_QWORD *)v23 + 184LL);
      if ( v24 != sub_2D0640 )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64))v24)(v23, *a1, v22);
        return;
      }
      v11 = 115;
      goto LABEL_46;
    case 15LL:
      ptr = &v62;
      v61 = 0x1000000000LL;
      sub_DBF660((__int64)a1, "invalid list of function declaration references, '(' expected");
      while ( *((_DWORD *)a1 + 356) != 2 )
      {
        v13 = sub_DC41A0((__int64)a1);
        v14 = v61;
        v15 = v13;
        v16 = ptr;
        if ( (unsigned int)v61 >= HIDWORD(v61) )
        {
          v17 = (unsigned int)(2 * HIDWORD(v61));
          v18 = (char *)sub_186B270(8 * v17);
          v14 = v61;
          v19 = (int *)ptr;
          v16 = v18;
          if ( (_DWORD)v61 )
          {
            if ( (unsigned int)(v61 - 1) <= 2 || v18 == (char *)ptr + 8 )
            {
              v58 = 0;
              v59 = 8LL * (unsigned int)v61;
              do
              {
                v16[v58 / 8] = *(_QWORD *)&v19[v58 / 4];
                v58 += 8LL;
              }
              while ( v58 != v59 );
            }
            else
            {
              v20 = 0;
              v21 = 16LL * ((unsigned int)v61 >> 1);
              do
              {
                *(__m128i *)&v16[v20 / 8] = _mm_loadu_si128((const __m128i *)&v19[v20 / 4]);
                v20 += 16LL;
              }
              while ( v21 != v20 );
              if ( (v14 & 1) != 0 )
                v16[v14 & 0xFFFFFFFE] = *(_QWORD *)&v19[2 * (v14 & 0xFFFFFFFE)];
            }
          }
          if ( v19 != &v62 && v19 )
          {
            sub_186B220(v19);
            v14 = v61;
          }
          ptr = v16;
          HIDWORD(v61) = v17;
        }
        v16[v14] = v15;
        LODWORD(v61) = v14 + 1;
      }
      sub_DC0980(a1);
      v54 = a1[179];
      v55 = *(void (__noreturn **)())(*(_QWORD *)v54 + 192LL);
      if ( v55 == sub_2D0610 )
      {
        sub_1872CE0("");
        sub_1873130(114, 116);
      }
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, void *))v55)(v54, *a1, (unsigned int)v61, ptr);
      if ( ptr && ptr != &v62 )
        sub_186B220(ptr);
      return;
    case 16LL:
      sub_1872CE0("");
      sub_1873130(107, 2882);
    case 17LL:
      v11 = 2885;
      sub_1872CE0("");
      v12 = 107;
      goto LABEL_11;
    case 18LL:
      sub_DC4C60(a1);
      v7 = a1[179];
      v8 = *(void (__noreturn **)())(*(_QWORD *)v7 + 200LL);
      v9 = sub_DC0880(a1)[1];
      v10 = 0x7FFFFFFF8LL;
      if ( v9 )
        v10 = 8LL * (unsigned int)(*(_DWORD *)(v9 - 4) - 1);
      if ( v8 != sub_2D05E0 )
      {
LABEL_91:
        ((void (__fastcall *)(__int64, _QWORD, _QWORD))v8)(v7, *a1, *(_QWORD *)(v9 + v10));
        return;
      }
      v11 = 117;
      goto LABEL_46;
    case 19LL:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "invalid/unexpected argument");
      goto LABEL_112;
    default:
      exception = __cxa_allocate_exception(0x30u);
      sub_305660(exception, "unexpected argument");
      goto LABEL_112;
  }
}

