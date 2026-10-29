__int64 __fastcall sub_954EE0(_QWORD *a1, const char *a2, double a3)
{
  char **exception; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(); // rax
  __int64 v7; // rax
  unsigned int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // r12
  int v11; // r13d
  __int64 v12; // rax
  __int64 *v13; // rdx
  __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  __int64 *v19; // rcx
  char v20; // al
  __int64 v21; // rbp
  char v22; // r12
  __int64 (__fastcall *v23)(); // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  int v27; // r15d
  __int64 v28; // rax
  _QWORD *v29; // rdx
  __int64 v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 *v34; // rcx
  __int64 v35; // rdi
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 v40; // rax
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // r13d
  unsigned int v46; // eax
  unsigned int *v47; // rax
  __int64 v48; // rcx
  unsigned int v49; // r15d
  unsigned int v50; // ecx
  unsigned int *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rdx
  _QWORD *v54; // rdx
  __int64 v55[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = (_QWORD *)*a1;
  if ( (_BYTE)a2 )
  {
    if ( (unsigned int)sub_180B130(a1) > 0x63 )
    {
      if ( (unsigned __int8)sub_186A530(a3) )
      {
        sub_186A4C0(a3);
        v43 = v4[148];
        if ( v43 )
        {
          a1 = (_QWORD *)*(unsigned int *)(v43 - 4);
          if ( (_DWORD)a1 )
          {
            v44 = sub_180B150(a1, a2);
            a2 = "(smt.final-check \"quantifiers\")\n";
            a1 = (_QWORD *)v44;
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
        sub_186A500(a1, a2);
      }
      else
      {
        v40 = v4[148];
        if ( v40 )
        {
          a2 = (const char *)*(unsigned int *)(v40 - 4);
          if ( (_DWORD)a2 )
          {
            sub_180B150(a1, a2);
            a2 = "(smt.final-check \"quantifiers\")\n";
            std::__ostream_insert<char,std::char_traits<char>>();
          }
        }
      }
    }
    v20 = sub_ADDE00(v4 + 3);
    v21 = v4[149];
    v22 = v20;
    v23 = *(__int64 (__fastcall **)())(*(_QWORD *)v21 + 88LL);
    if ( v23 == sub_957620 )
    {
      v24 = *(_QWORD *)(v21 + 16);
      if ( *(_BYTE *)(v24 + 562) )
      {
        v25 = *(_QWORD *)(**(_QWORD **)(v21 + 8) + 1184LL);
        if ( v25 )
        {
          if ( *(_DWORD *)(v25 - 4) && *(_DWORD *)(v21 + 68) < *(_DWORD *)(v24 + 188) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v21 + 40) + 48LL))(*(_QWORD *)(v21 + 40), 0);
            v26 = *(_QWORD *)(v21 + 24);
            LODWORD(a2) = 24;
            v27 = *(_DWORD *)(v21 + 68);
            v28 = sub_180C100(v26 + 8400, 24);
            v29 = *(_QWORD **)(v26 + 9456);
            v30 = v28;
            *(_QWORD *)v28 = &off_1C4C070;
            *(_QWORD *)(v28 + 8) = v21 + 68;
            *(_DWORD *)(v28 + 16) = v27;
            if ( v29 )
            {
              v31 = *((_DWORD *)v29 - 1);
              if ( v31 == *((_DWORD *)v29 - 2) )
              {
                v49 = (3 * v31 + 1) >> 1;
                v50 = 8 * v49 + 8;
                if ( 8 * v31 + 8 >= v50 || v31 >= v49 )
                  goto LABEL_49;
                LODWORD(a2) = 8 * v49 + 8;
                v51 = (unsigned int *)sub_186B300(v29 - 1, v50);
                v52 = v51[1];
                v29 = v51 + 2;
                *(_QWORD *)(v26 + 9456) = v51 + 2;
                *v51 = v49;
                LODWORD(v51) = v52;
                v34 = &v29[v52];
                v33 = (_DWORD)v51 + 1;
              }
              else
              {
                v32 = v31;
                v33 = v31 + 1;
                v34 = &v29[v32];
              }
            }
            else
            {
              v54 = (_QWORD *)sub_186B270(0x18u);
              *v54 = 2;
              v33 = 1;
              v29 = v54 + 1;
              *(_QWORD *)(v26 + 9456) = v29;
              v34 = v29;
            }
            *v34 = v30;
            *((_DWORD *)v29 - 1) = v33;
            ++*(_DWORD *)(v21 + 68);
          }
        }
      }
      v35 = v4[1];
    }
    else
    {
      LODWORD(a2) = 1;
      v42 = ((__int64 (__fastcall *)(_QWORD, __int64))v23)(v4[149], 1);
      v35 = v4[1];
      v8 = v42;
      if ( v42 )
      {
        if ( !(unsigned __int8)sub_8E8560(v35) )
          return v8;
        return 1;
      }
    }
    if ( (unsigned __int8)sub_8E8560(v35) != 1 && v22 )
    {
      if ( !*(_BYTE *)(v4[2] + 204LL) )
        return (unsigned __int8)sub_956B40((_DWORD)v4, (_DWORD)a2, v36, v37, v38, v39) ^ 1u;
      return 0;
    }
    return 1;
  }
  v5 = v4[149];
  v6 = *(__int64 (__fastcall **)())(*(_QWORD *)v5 + 88LL);
  if ( v6 != sub_957620 )
    return ((__int64 (__fastcall *)(__int64, _QWORD))v6)(v5, 0);
  v7 = *(_QWORD *)(v5 + 16);
  if ( *(_BYTE *)(v7 + 212) )
  {
    if ( *(_BYTE *)(v7 + 562) )
    {
      v9 = *(_QWORD *)(**(_QWORD **)(v5 + 8) + 1184LL);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 - 4) && *(_DWORD *)(v5 + 68) < *(_DWORD *)(v7 + 188) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 40) + 48LL))(*(_QWORD *)(v5 + 40), 0);
          v10 = *(_QWORD *)(v5 + 24);
          v11 = *(_DWORD *)(v5 + 68);
          v12 = sub_180C100(v10 + 8400, 24);
          v13 = *(__int64 **)(v10 + 9456);
          v14 = v12;
          *(_QWORD *)v12 = &off_1C4C070;
          *(_QWORD *)(v12 + 8) = v5 + 68;
          *(_DWORD *)(v12 + 16) = v11;
          if ( !v13 )
          {
            v53 = (_QWORD *)sub_186B270(0x18u);
            *v53 = 2;
            v18 = 1;
            v13 = v53 + 1;
            *(_QWORD *)(v10 + 9456) = v13;
            v19 = v13;
            goto LABEL_12;
          }
          v15 = *((_DWORD *)v13 - 1);
          v16 = *((_DWORD *)v13 - 2);
          if ( v15 != v16 )
          {
            v17 = v15;
            v18 = v15 + 1;
            v19 = &v13[v17];
LABEL_12:
            *v19 = v14;
            v8 = 0;
            *((_DWORD *)v13 - 1) = v18;
            ++*(_DWORD *)(v5 + 68);
            return v8;
          }
          v45 = (3 * v16 + 1) >> 1;
          v46 = 8 * v45 + 8;
          if ( 8 * v16 + 8 < v46 && v16 < v45 )
          {
            v47 = (unsigned int *)sub_186B300(v13 - 1, v46);
            v48 = v47[1];
            v13 = (__int64 *)(v47 + 2);
            *(_QWORD *)(v10 + 9456) = v47 + 2;
            *v47 = v45;
            LODWORD(v47) = v48;
            v19 = &v13[v48];
            v18 = (_DWORD)v47 + 1;
            goto LABEL_12;
          }
LABEL_49:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v55, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v55);
          sub_233E40((__int64)v55);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
      }
    }
  }
  return 0;
}

