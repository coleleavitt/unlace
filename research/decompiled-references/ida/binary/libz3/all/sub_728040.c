__int64 __fastcall sub_728040(__int64 a1, size_t a2, void (__fastcall ****a3)(void *))
{
  __int64 *v3; // r12
  __int64 v4; // rax
  size_t v6; // rbx
  unsigned int v7; // r14d
  _QWORD *v8; // rdx
  __int64 v9; // r12
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  char v15; // dl
  unsigned int v16; // edx
  __int64 v17; // r15
  int v18; // edx
  __int64 *v19; // rax
  _QWORD *v20; // rax
  void (__fastcall ***v21)(void *); // rbx
  bool v22; // zf
  __int64 *v24; // rdi
  unsigned int v25; // ecx
  unsigned int v26; // r13d
  unsigned int *v27; // rax
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  unsigned int v32; // r12d
  __int64 v33; // rsi
  char v34; // dl
  unsigned int v35; // edx
  __int64 v36; // r14
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rdi
  char *v40; // rcx
  int v41; // edx
  char *v42; // rsi
  unsigned __int64 v43; // rdx
  char *v44; // r8
  char *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rax
  int v48; // esi
  __int64 *v49; // rax
  std::ostream *v50; // r14
  _BYTE *v51; // r15
  char v52; // si
  std::ostream *v53; // rax
  void (__fastcall ***v54)(void *); // r12
  __int64 v55; // rax
  void (__fastcall ***v56)(void *); // rbp
  void (__fastcall ***v57)(void *); // r14
  __int64 (__fastcall *v58)(__int64, unsigned int); // rax
  char **exception; // rbx
  __int64 v60; // rdx
  __int64 *v62; // [rsp+8h] [rbp-60h]
  void *ptr[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(__int64 **)a2;
  if ( (*(_BYTE *)(*(_QWORD *)a2 + 123LL) & 0x20) != 0 )
  {
    v21 = *a3;
    if ( !*a3 )
      goto LABEL_27;
    v22 = (*((_DWORD *)v21 + 2))-- == 1;
    if ( !v22 )
      goto LABEL_27;
LABEL_97:
    (**v21)(v21);
    sub_186B220(v21);
LABEL_27:
    *a3 = nullptr;
    return (__int64)a3;
  }
  v4 = v3[9];
  v6 = a2;
  if ( !v4 )
  {
LABEL_35:
    if ( (unsigned int)sub_12374F0(*(_QWORD *)(a1 + 32), a2) != 1 )
      goto LABEL_25;
    goto LABEL_36;
  }
  a2 = *v3;
  v7 = 0;
LABEL_9:
  v14 = v4;
  v15 = *(_BYTE *)(v4 + 3) >> 6;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_11;
LABEL_23:
    v17 = *(_QWORD *)(a1 + 32);
    if ( v7 >= *(_DWORD *)(v14 + 4) + 1 )
      goto LABEL_24;
    goto LABEL_14;
  }
  do
  {
    v14 = *(_QWORD *)(v14 + 16);
    v15 = *(_BYTE *)(v14 + 3) >> 6;
  }
  while ( !v15 );
  if ( v15 == 1 )
    goto LABEL_23;
LABEL_11:
  if ( v15 == 2 )
    v16 = *(_DWORD *)(v14 + 4) - 1;
  else
    v16 = *(_DWORD *)(v14 + 4);
  v17 = *(_QWORD *)(a1 + 32);
  if ( v7 < v16 )
  {
LABEL_14:
    if ( (*((_BYTE *)v3 + 123) & 0x20) != 0 )
    {
      v8 = *(_QWORD **)(v17 + 1432);
      v9 = *(_QWORD *)(a2 + 864);
      if ( !v8 )
        goto LABEL_20;
      goto LABEL_5;
    }
    v18 = 17;
    while ( 1 )
    {
      if ( *(char *)(v4 + 3) >= 0 )
      {
        if ( v7 == *(_DWORD *)(v4 + 4) )
        {
          v19 = (__int64 *)(v4 + 8);
LABEL_19:
          v8 = *(_QWORD **)(v17 + 1432);
          v9 = *v19;
          if ( !v8 )
          {
LABEL_20:
            v20 = (_QWORD *)sub_186B270(0x18u);
            v8 = v20 + 1;
            *v20 = 2;
            v12 = 1;
            *(_QWORD *)(v17 + 1432) = v8;
            v13 = v8;
            goto LABEL_7;
          }
LABEL_5:
          v10 = *((_DWORD *)v8 - 1);
          if ( v10 == *((_DWORD *)v8 - 2) )
          {
            v25 = (3 * v10 + 1) >> 1;
            a2 = 8 * v25 + 8;
            v26 = v25;
            if ( 8 * v10 + 8 >= (unsigned int)a2 || v10 >= v25 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_10AD8E((__int64 *)ptr, "Overflow encountered when expanding vector", v60);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, ptr);
              sub_233E40((__int64)ptr);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v27 = (unsigned int *)sub_186B300(v8 - 1, a2);
            v28 = v27[1];
            v8 = v27 + 2;
            *(_QWORD *)(v17 + 1432) = v27 + 2;
            *v27 = v26;
            LODWORD(v27) = v28;
            v13 = &v8[v28];
            v12 = (_DWORD)v27 + 1;
          }
          else
          {
            v11 = v10;
            v12 = v10 + 1;
            v13 = &v8[v11];
          }
LABEL_7:
          *v13 = v9;
          v3 = *(__int64 **)v6;
          ++v7;
          *((_DWORD *)v8 - 1) = v12;
          v4 = v3[9];
          if ( !v4 )
            goto LABEL_35;
          a2 = *v3;
          goto LABEL_9;
        }
      }
      else if ( *(_BYTE *)(v4 + 3) >> 6 != 2 )
      {
        v19 = (__int64 *)(*(_QWORD *)(v4 + 16) + 8LL * v7);
        goto LABEL_19;
      }
      v4 = *(_QWORD *)(v4 + 16);
      if ( !--v18 )
      {
        v24 = (__int64 *)(a2 + 616);
        a2 = (size_t)(v3 + 9);
        sub_233F80(v24, (_DWORD *)v3 + 18);
        v19 = (__int64 *)(*(_QWORD *)(v3[9] + 16) + 8LL * v7);
        goto LABEL_19;
      }
    }
  }
LABEL_24:
  if ( (unsigned int)sub_12374F0(v17, a2) != 1 )
  {
LABEL_25:
    v21 = *a3;
    if ( !*a3 )
      goto LABEL_27;
    v22 = (*((_DWORD *)v21 + 2))-- == 1;
    if ( !v22 )
      goto LABEL_27;
    goto LABEL_97;
  }
LABEL_36:
  sub_EE4A20("Number of flips:");
  v29 = *(__int64 **)v6;
  v30 = *(_QWORD *)(*(_QWORD *)v6 + 72LL);
  if ( !v30 )
    goto LABEL_82;
  v31 = *v29;
  v32 = 0;
  while ( 2 )
  {
    v33 = v30;
    v34 = *(_BYTE *)(v30 + 3) >> 6;
    if ( v34 )
    {
      if ( v34 != 1 )
      {
LABEL_40:
        if ( v34 == 2 )
          v35 = *(_DWORD *)(v33 + 4) - 1;
        else
          v35 = *(_DWORD *)(v33 + 4);
        goto LABEL_42;
      }
    }
    else
    {
      do
      {
        v33 = *(_QWORD *)(v33 + 16);
        v34 = *(_BYTE *)(v33 + 3) >> 6;
      }
      while ( !v34 );
      if ( v34 != 1 )
        goto LABEL_40;
    }
    v35 = *(_DWORD *)(v33 + 4) + 1;
LABEL_42:
    if ( v32 >= v35 )
      break;
    v36 = *(_QWORD *)(a1 + 32);
    if ( (*((_BYTE *)v29 + 123) & 0x20) != 0 )
    {
      v37 = *(_QWORD *)(v31 + 864);
      goto LABEL_45;
    }
    v48 = 18;
    while ( 1 )
    {
      if ( !--v48 )
      {
        v62 = v29;
        sub_233F80((__int64 *)(v31 + 616), (_DWORD *)v29 + 18);
        v49 = (__int64 *)(*(_QWORD *)(v62[9] + 16) + 8LL * v32);
        goto LABEL_69;
      }
      if ( *(char *)(v30 + 3) >= 0 )
        break;
      if ( *(_BYTE *)(v30 + 3) >> 6 != 2 )
      {
        v49 = (__int64 *)(*(_QWORD *)(v30 + 16) + 8LL * v32);
        goto LABEL_69;
      }
LABEL_71:
      v30 = *(_QWORD *)(v30 + 16);
    }
    if ( v32 != *(_DWORD *)(v30 + 4) )
      goto LABEL_71;
    v49 = (__int64 *)(v30 + 8);
LABEL_69:
    v37 = *v49;
LABEL_45:
    v38 = *(unsigned int *)(v36 + 896);
    v39 = *(unsigned int *)(v37 + 12);
    v40 = *(char **)(v36 + 888);
    v41 = v38 - 1;
    v38 <<= 6;
    v42 = &v40[v38];
    v43 = (unsigned __int64)((unsigned int)v39 & v41) << 6;
    v44 = &v40[v43];
    if ( v43 == v38 )
    {
LABEL_56:
      while ( v44 != v40 )
      {
        v47 = *(_QWORD *)v40;
        if ( *(_QWORD *)v40 > 1u )
        {
          if ( *(_DWORD *)(v47 + 12) == (_DWORD)v39 && v37 == v47 )
          {
            v45 = v40;
            goto LABEL_74;
          }
        }
        else if ( !v47 )
        {
          break;
        }
        v40 += 64;
      }
LABEL_52:
      BUG();
    }
    v45 = &v40[v43];
    while ( 2 )
    {
      v46 = *(_QWORD *)v45;
      if ( *(_QWORD *)v45 <= 1u )
      {
        if ( !v46 )
          goto LABEL_52;
        goto LABEL_49;
      }
      if ( *(_DWORD *)(v46 + 12) != (_DWORD)v39 || v37 != v46 )
      {
LABEL_49:
        v45 += 64;
        if ( v42 == v45 )
          goto LABEL_56;
        continue;
      }
      break;
    }
LABEL_74:
    if ( (v45[20] & 1) != 0 || *((_DWORD *)v45 + 4) != 1 )
    {
      v50 = (std::ostream *)sub_180B150(v39, v42);
      std::__ostream_insert<char,std::char_traits<char>>();
      v51 = *(_BYTE **)((char *)v50 + *(_QWORD *)(*(_QWORD *)v50 - 24LL) + 240);
      if ( v51 )
      {
        if ( v51[56] )
        {
          v52 = v51[67];
        }
        else
        {
          std::ctype<char>::_M_widen_init();
          v52 = 10;
          v58 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v51 + 48LL);
          if ( v58 != sub_26BE90 )
            v52 = v58((__int64)v51, 10u);
        }
        v53 = (std::ostream *)std::ostream::put(v50, v52);
        std::ostream::flush(v53);
        sub_1872CE0("");
        sub_1873130(107, 183);
      }
      std::__throw_bad_cast();
    }
    v29 = *(__int64 **)v6;
    ++v32;
    v30 = *(_QWORD *)(*(_QWORD *)v6 + 72LL);
    if ( v30 )
    {
      v31 = *v29;
      continue;
    }
    break;
  }
LABEL_82:
  if ( (*((_BYTE *)v29 + 123) & 4) != 0 )
  {
    sub_727540((__int64 *)ptr, (__int64 *)(*(_QWORD *)(a1 + 32) + 768LL));
    v54 = (void (__fastcall ***)(void *))ptr[0];
    v55 = sub_1336B20(ptr[0]);
    v56 = (void (__fastcall ***)(void *))v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
    v57 = *a3;
    if ( *a3 )
    {
      v22 = (*((_DWORD *)v57 + 2))-- == 1;
      if ( v22 )
      {
        (**v57)(v57);
        sub_186B220(v57);
      }
    }
    *a3 = v56;
    if ( v54 )
    {
      v22 = (*((_DWORD *)v54 + 4))-- == 1;
      if ( v22 )
      {
        (**v54)(v54);
        sub_186B220(v54);
      }
    }
    v29 = *(__int64 **)v6;
  }
  return sub_ED2DA0(v29);
}

