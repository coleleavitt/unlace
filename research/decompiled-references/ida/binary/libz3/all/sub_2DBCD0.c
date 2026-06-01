__int64 __fastcall sub_2DBCD0(__int64 a1, std::istream *a2, _DWORD **a3)
{
  char **exception; // rbp
  std::istream *v4; // rbx
  int v5; // r15d
  __int64 (__fastcall *v6)(); // rax
  int v7; // ebp
  __int64 result; // rax
  int v9; // eax
  int v10; // r12d
  unsigned __int64 v11; // r14
  __int64 v12; // r13
  int v13; // eax
  bool v14; // zf
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  __int64 *v18; // rdx
  int v19; // eax
  int v20; // r11d
  int v21; // eax
  __int64 v22; // r8
  int v23; // eax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  int v27; // r11d
  __int64 v28; // r12
  _QWORD *v29; // rax
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  unsigned __int64 v38; // rbp
  __int64 *v39; // rbx
  __int64 v40; // rsi
  int v41; // edx
  int v42; // r8d
  int v43; // r9d
  int v44; // edx
  char *v45; // r12
  unsigned int v46; // r12d
  void *v47; // rdi
  _DWORD *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  char **v51; // rbp
  void *v52; // [rsp+0h] [rbp-C8h]
  int v53[2]; // [rsp+8h] [rbp-C0h]
  int v54; // [rsp+10h] [rbp-B8h]
  int v55; // [rsp+10h] [rbp-B8h]
  int v56; // [rsp+10h] [rbp-B8h]
  void *v57; // [rsp+10h] [rbp-B8h]
  void *v58; // [rsp+10h] [rbp-B8h]
  std::istream **v59; // [rsp+18h] [rbp-B0h]
  std::istream *v60; // [rsp+18h] [rbp-B0h]
  int v61; // [rsp+18h] [rbp-B0h]
  __int64 *v62; // [rsp+20h] [rbp-A8h]
  unsigned int v63; // [rsp+28h] [rbp-A0h]
  unsigned int v64; // [rsp+2Ch] [rbp-9Ch]
  int v65[2]; // [rsp+30h] [rbp-98h]
  _DWORD **v66; // [rsp+38h] [rbp-90h]
  int v67; // [rsp+40h] [rbp-88h]
  void *v68; // [rsp+48h] [rbp-80h]
  std::istream *v69; // [rsp+50h] [rbp-78h] BYREF
  int v70; // [rsp+58h] [rbp-70h]
  int v71; // [rsp+5Ch] [rbp-6Ch]
  __int64 v72; // [rsp+60h] [rbp-68h]
  __int64 v73[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD v74[9]; // [rsp+80h] [rbp-48h] BYREF

  v4 = a2;
  *(_QWORD *)v65 = a1;
  v66 = a3;
  v5 = std::istream::get(a2);
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 72LL);
  if ( v6 == sub_2DD1A0 )
    *(_QWORD *)v53 = *(_QWORD *)(a1 + 8);
  else
    *(_QWORD *)v53 = ((__int64 (__fastcall *)(__int64))v6)(a1);
  v63 = 0;
  v7 = 0;
  *(_BYTE *)(a1 + 746) = 1;
LABEL_4:
  while ( 2 )
  {
    while ( 1 )
    {
      result = (unsigned int)v5;
      if ( v5 > 8 )
        break;
      if ( v5 == -1 )
        return result;
LABEL_6:
      v64 = 0;
      if ( (unsigned int)(v5 - 48) <= 9 )
      {
        v9 = v5;
        v10 = 0;
        do
        {
          v10 = v9 + 10 * v10 - 48;
          v9 = std::istream::get(v4);
        }
        while ( (unsigned int)(v9 - 48) <= 9 );
        v64 = v10;
        v5 = v9;
      }
      v11 = 0;
      v12 = 0;
      v72 = *(_QWORD *)v53;
      v59 = &v69;
      v62 = v73;
      while ( 1 )
      {
        v69 = v4;
        v70 = v5;
        v71 = v7;
        v19 = sub_2DAE90((__int64)v59);
        v4 = v69;
        v5 = v70;
        v20 = v19;
        v7 = v71;
        if ( !v19 )
          break;
        v21 = -v19;
        v54 = v20;
        if ( v21 < 0 )
          v21 = v20;
        v22 = *(_QWORD *)(*(_QWORD *)v53 + 840LL);
        v73[0] = 8LL * v21 + 1;
        v23 = sub_15E3510(*(_QWORD *)v53, v62, 0, 0, v22, 0);
        v26 = sub_15DC610(
                v53[0],
                v23,
                0,
                0,
                v24,
                v25,
                (int)v52,
                v53[0],
                v54,
                (int)v59,
                (int)v62,
                v63,
                v65[0],
                (int)v66,
                v67,
                v68);
        v27 = v55;
        v28 = v26;
        if ( v26 )
        {
          v13 = *(_DWORD *)(v26 + 8) + 1;
          *(_DWORD *)(v28 + 8) = v13;
          if ( v12 )
          {
            v14 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v14 )
            {
              sub_15D7BC0(*(_QWORD *)v53, v12);
              if ( v55 >= 0 )
              {
LABEL_14:
                v12 = v28;
                goto LABEL_15;
              }
            }
            else if ( v55 >= 0 )
            {
              goto LABEL_14;
            }
          }
          else
          {
            v12 = v28;
            if ( v55 >= 0 )
              goto LABEL_16;
          }
        }
        else
        {
          if ( v12 )
          {
            v14 = (*(_DWORD *)(v12 + 8))-- == 1;
            if ( v14 )
            {
              sub_15D7BC0(*(_QWORD *)v53, v12);
              v27 = v55;
            }
          }
          if ( v27 >= 0 )
            goto LABEL_28;
        }
        v34 = sub_15E1A70(v53[0]);
        v12 = v34;
        if ( v34 )
        {
          v13 = *(_DWORD *)(v34 + 8) + 1;
          *(_DWORD *)(v12 + 8) = v13;
          if ( v28 )
          {
            v14 = (*(_DWORD *)(v28 + 8))-- == 1;
            if ( v14 )
              sub_15D7BC0(*(_QWORD *)v53, v28);
LABEL_15:
            v13 = *(_DWORD *)(v12 + 8);
          }
LABEL_16:
          *(_DWORD *)(v12 + 8) = v13 + 1;
          if ( !v11 )
            goto LABEL_29;
          goto LABEL_17;
        }
        if ( v28 )
        {
          v14 = (*(_DWORD *)(v28 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(*(_QWORD *)v53, v28);
        }
LABEL_28:
        v12 = 0;
        if ( !v11 )
        {
LABEL_29:
          v29 = (_QWORD *)sub_186B270(0x18u);
          v11 = (unsigned __int64)(v29 + 1);
          v18 = v29 + 1;
          *v29 = 2;
          v17 = 1;
          goto LABEL_19;
        }
LABEL_17:
        v15 = *(_DWORD *)(v11 - 4);
        if ( v15 == *(_DWORD *)(v11 - 8) )
        {
          v30 = (3 * v15 + 1) >> 1;
          v31 = 8 * v30 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v31 || v15 >= v30 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v62, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v62);
            sub_233E40((__int64)v62);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = (unsigned int *)sub_186B300((void *)(v11 - 8), v31);
          v33 = v32[1];
          v11 = (unsigned __int64)(v32 + 2);
          *v32 = v30;
          LODWORD(v32) = v33;
          v18 = (__int64 *)(v11 + 8 * v33);
          v17 = (_DWORD)v32 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = (__int64 *)(v11 + 8 * v16);
        }
LABEL_19:
        *v18 = v12;
        *(_DWORD *)(v11 - 4) = v17;
      }
      if ( v11 )
      {
        v35 = sub_15EC240(*(_QWORD *)v53, *(unsigned int *)(v11 - 4));
        v36 = v35;
        if ( v35 )
          ++*(_DWORD *)(v35 + 8);
        v37 = *(unsigned int *)(v11 - 4);
        if ( v11 < v11 + 8 * v37 )
        {
          v56 = v7;
          v38 = v11 + 8 * v37;
          v60 = v4;
          v39 = (__int64 *)v11;
          do
          {
            while ( 1 )
            {
              v40 = *v39;
              if ( *v39 )
              {
                v14 = (*(_DWORD *)(v40 + 8))-- == 1;
                if ( v14 )
                  break;
              }
              if ( (unsigned __int64)++v39 >= v38 )
                goto LABEL_58;
            }
            ++v39;
            sub_15D7BC0(*(_QWORD *)v53, v40);
          }
          while ( (unsigned __int64)v39 < v38 );
LABEL_58:
          v7 = v56;
          v4 = v60;
        }
        sub_186B220((void *)(v11 - 8));
        if ( v12 )
        {
LABEL_60:
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(*(_QWORD *)v53, v12);
        }
        if ( v64 >= v63 )
        {
          sub_2F2620(v65[0], v36, v41, v63, v42, v43, v52);
          goto LABEL_64;
        }
LABEL_107:
        v73[0] = 0;
        v73[1] = 0;
        v74[0] = 1;
        v47 = qword_1C7F2C0;
        v74[1] = 0;
        if ( (v64 & 0x80000000) != 0 )
        {
          v58 = qword_1C7F2C0;
          sub_1830C40(qword_1C7F2C0, v73, v64);
          v47 = v58;
        }
        else
        {
          LODWORD(v73[0]) = v64;
        }
        sub_182CBA0(v47, v74);
        BYTE4(v74[0]) &= ~1u;
        LODWORD(v74[0]) = 1;
        v61 = sub_2FBD30(*(_QWORD *)v65, v36, v73, &qword_18D6CD0);
        v57 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v73);
        sub_182CBA0(v57, v74);
        v48 = *v66;
        if ( !*v66 )
        {
          v50 = (_QWORD *)sub_186B270(0x10u);
          *v50 = 2;
          v48 = v50 + 1;
          *v66 = v48;
          goto LABEL_112;
        }
        if ( !*(v48 - 1) )
        {
          if ( !*(v48 - 2) )
          {
            v51 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v73, "Overflow encountered when expanding vector");
            *v51 = (char *)off_1C63128;
            sub_2333C0(v51 + 1, v73);
            sub_233E40((__int64)v73);
            __cxa_throw(v51, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_112:
          ++*(v48 - 1);
          *v48 = v61;
        }
LABEL_64:
        if ( v36 )
        {
LABEL_65:
          v14 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(*(_QWORD *)v53, v36);
        }
      }
      else
      {
        v49 = sub_15EC240(*(_QWORD *)v53, 0);
        v36 = v49;
        if ( v49 )
        {
          ++*(_DWORD *)(v49 + 8);
          if ( v12 )
            goto LABEL_60;
          if ( v64 < v63 )
            goto LABEL_107;
          sub_2F2620(v65[0], v49, v41, v63, v42, v43, v52);
          goto LABEL_65;
        }
        if ( v12 )
          goto LABEL_60;
        if ( v64 < v63 )
          goto LABEL_107;
        sub_2F2620(v65[0], 0, v41, v63, v42, v43, v52);
      }
    }
    while ( (int)result <= 13 )
    {
LABEL_38:
      v7 += result == 10;
LABEL_32:
      result = std::istream::get(v4);
      if ( (int)result <= 8 )
      {
        v5 = result;
        if ( (_DWORD)result == -1 )
          return result;
        goto LABEL_6;
      }
    }
    if ( (_DWORD)result == 32 )
      goto LABEL_32;
    if ( (_DWORD)result != 99 )
    {
      if ( (_DWORD)result != 112 )
      {
        v5 = result;
        goto LABEL_6;
      }
      while ( 1 )
      {
        LODWORD(result) = std::istream::get(v4);
        if ( (int)result <= 8 )
          break;
        if ( (int)result <= 13 )
        {
          v7 += result == 10;
        }
        else if ( (_DWORD)result != 32 )
        {
          break;
        }
      }
      v44 = 119;
      v45 = "wcnf";
      while ( (_DWORD)result )
      {
        if ( v44 == (_DWORD)result )
        {
          ++v45;
          LODWORD(result) = std::istream::get(v4);
          v44 = *v45;
          if ( *v45 )
            continue;
        }
        goto LABEL_83;
      }
      while ( 2 )
      {
        if ( (int)result > 8 && ((int)result <= 13 || (_DWORD)result == 32) )
        {
          LODWORD(result) = std::istream::get(v4);
LABEL_83:
          if ( (_DWORD)result == 10 )
            goto LABEL_100;
          continue;
        }
        break;
      }
      if ( (unsigned int)(result - 48) <= 9 )
      {
        do
          LODWORD(result) = std::istream::get(v4);
        while ( (unsigned int)(result - 48) <= 9 );
        if ( (_DWORD)result == 10 )
          goto LABEL_100;
      }
      while ( (int)result > 8 && ((int)result <= 13 || (_DWORD)result == 32) )
      {
        LODWORD(result) = std::istream::get(v4);
        if ( (_DWORD)result == 10 )
          goto LABEL_100;
      }
      if ( (unsigned int)(result - 48) <= 9 )
      {
        do
          LODWORD(result) = std::istream::get(v4);
        while ( (unsigned int)(result - 48) <= 9 );
        if ( (_DWORD)result == 10 )
        {
LABEL_100:
          v63 = -1;
          ++v7;
          goto LABEL_32;
        }
      }
      while ( (int)result > 8 && ((_DWORD)result == 32 || (int)result <= 13) )
      {
        LODWORD(result) = std::istream::get(v4);
        v63 = -1;
        if ( (_DWORD)result == 10 )
          goto LABEL_38;
      }
      v5 = result;
      v63 = 0;
      if ( (unsigned int)(result - 48) <= 9 )
      {
        v46 = 0;
        do
        {
          v46 = result + 10 * v46 - 48;
          LODWORD(result) = std::istream::get(v4);
        }
        while ( (unsigned int)(result - 48) <= 9 );
        v63 = v46;
        v5 = result;
      }
      continue;
    }
    break;
  }
  while ( 1 )
  {
    result = std::istream::get(v4);
    if ( (_DWORD)result == -1 )
      return result;
    if ( (_DWORD)result == 10 )
    {
      ++v7;
      v5 = std::istream::get(v4);
      goto LABEL_4;
    }
  }
}

