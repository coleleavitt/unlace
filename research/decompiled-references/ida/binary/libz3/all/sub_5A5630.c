__int64 __fastcall sub_5A5630(__int64 a1, __int64 a2)
{
  char **exception; // r13
  char **v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // r15
  __int64 v9; // r14
  unsigned int *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // r11
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // eax
  _QWORD *v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rax
  int v22; // r14d
  __int64 v23; // rax
  unsigned int v25; // r9d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rsi
  int v29; // r14d
  _QWORD *v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  unsigned int v33; // r14d
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  unsigned int v36; // r15d
  size_t v37; // rsi
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rsi
  void *v43; // r15
  unsigned int v44; // r8d
  unsigned int *v45; // rax
  int v46; // r14d
  unsigned int v47; // ecx
  unsigned int v48; // r12d
  unsigned int v49; // esi
  __int64 v50; // rdx
  unsigned int v51; // esi
  __int64 v52; // rdx
  char i; // al
  void *v54; // r12
  __int64 v55; // rax
  void *v56; // r14
  unsigned int v57; // ecx
  unsigned int v58; // r12d
  int v59; // r14d
  __int64 v60; // rdx
  void (***ptr)(void); // [rsp+0h] [rbp-E0h]
  void (***v62)(void); // [rsp+8h] [rbp-D8h]
  void (***v63)(void); // [rsp+10h] [rbp-D0h]
  __int64 v64; // [rsp+18h] [rbp-C8h]
  void *v65; // [rsp+20h] [rbp-C0h]
  unsigned int v66; // [rsp+28h] [rbp-B8h]
  unsigned int v67; // [rsp+28h] [rbp-B8h]
  unsigned int v68; // [rsp+2Ch] [rbp-B4h]
  unsigned int v69; // [rsp+2Ch] [rbp-B4h]
  __int64 v70; // [rsp+30h] [rbp-B0h]
  unsigned int v71; // [rsp+30h] [rbp-B0h]
  unsigned int v72; // [rsp+30h] [rbp-B0h]
  unsigned __int8 v73; // [rsp+38h] [rbp-A8h]
  unsigned int v74; // [rsp+40h] [rbp-A0h]
  unsigned int v75; // [rsp+48h] [rbp-98h]
  unsigned int *sa; // [rsp+50h] [rbp-90h]
  _QWORD *sb; // [rsp+50h] [rbp-90h]
  _QWORD *sc; // [rsp+50h] [rbp-90h]
  _DWORD *s; // [rsp+50h] [rbp-90h]
  unsigned int *v80; // [rsp+58h] [rbp-88h]
  unsigned int *v81; // [rsp+68h] [rbp-78h] BYREF
  unsigned int *v82; // [rsp+70h] [rbp-70h] BYREF
  _DWORD *v83; // [rsp+78h] [rbp-68h] BYREF
  __int64 v84; // [rsp+80h] [rbp-60h] BYREF
  unsigned int *v85; // [rsp+88h] [rbp-58h] BYREF
  __int64 v86[10]; // [rsp+90h] [rbp-50h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v83 = nullptr;
  v70 = *(_QWORD *)(v4 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  if ( !v5 || (v6 = *(_DWORD *)(v5 - 4), (v74 = v6) == 0) )
  {
    v10 = *(unsigned int **)(*(_QWORD *)(a1 + 104) + 16LL);
    v74 = 0;
    if ( v10 )
    {
      v29 = *(v10 - 1);
      v10 = nullptr;
      v80 = nullptr;
      v22 = v29 - 1;
    }
    else
    {
      v22 = -1;
      v80 = nullptr;
    }
    goto LABEL_40;
  }
  v7 = v6;
  v9 = 0;
  v80 = nullptr;
  v10 = nullptr;
  do
  {
    while ( 1 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4 * v9);
      if ( !*(_BYTE *)(a2 + v9) )
        break;
      if ( v19 == -1 )
      {
        if ( v83 )
          sub_186B220(v83 - 2);
        v73 = 0;
        if ( !v10 )
        {
          if ( !v80 )
            return v73;
          goto LABEL_37;
        }
LABEL_25:
        sub_186B220(v10 - 2);
LABEL_26:
        if ( !v80 )
          return v73;
LABEL_37:
        sub_186B220(v80 - 2);
        return v73;
      }
      if ( !v10 || (v20 = *(v10 - 1), (_DWORD)v20 == *(v10 - 2)) )
      {
        sa = (unsigned int *)(*(_QWORD *)(a1 + 56) + 4 * v9);
        v82 = v10;
        sub_2FD3F0(&v82);
        v10 = v82;
        v19 = *sa;
        v20 = *(v82 - 1);
      }
      ++v9;
      v10[v20] = v19;
      ++*(v10 - 1);
      if ( v9 == v7 )
        goto LABEL_17;
    }
    if ( v19 != -1 )
    {
      if ( !v80 || (v11 = *(v80 - 1), (_DWORD)v11 == *(v80 - 2)) )
      {
        v81 = v80;
        sub_2FD3F0(&v81);
        v80 = v81;
        v11 = *(v81 - 1);
      }
      v12 = (__int64)v83;
      v80[v11] = v9;
      v13 = *(_QWORD *)(a1 + 16);
      ++*(v80 - 1);
      v14 = (_QWORD *)(v13 + 8 * v9);
      if ( v12 )
      {
        v15 = *(_DWORD *)(v12 - 4);
        if ( v15 == *(_DWORD *)(v12 - 8) )
        {
          v25 = (3 * v15 + 1) >> 1;
          v26 = 8 * v25 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v26 || v15 >= v25 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v86, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v86);
            sub_233E40((__int64)v86);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v75 = (3 * v15 + 1) >> 1;
          sb = v14;
          v27 = (unsigned int *)sub_186B300((void *)(v12 - 8), v26);
          v28 = v27[1];
          v12 = (__int64)(v27 + 2);
          v83 = v27 + 2;
          v14 = sb;
          *v27 = v75;
          LODWORD(v27) = v28;
          v18 = (_QWORD *)(v12 + 8 * v28);
          v17 = (_DWORD)v27 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = (_QWORD *)(v12 + 8 * v16);
        }
      }
      else
      {
        sc = (_QWORD *)(v13 + 8 * v9);
        v30 = (_QWORD *)sub_186B270(0x18u);
        v12 = (__int64)(v30 + 1);
        *v30 = 2;
        v14 = sc;
        v17 = 1;
        v83 = (_DWORD *)v12;
        v18 = (_QWORD *)v12;
      }
      *v18 = *v14;
      *(_DWORD *)(v12 - 4) = v17;
    }
    ++v9;
  }
  while ( v9 != v7 );
LABEL_17:
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 16LL);
  if ( v21 )
    v22 = *(_DWORD *)(v21 - 4) - 1;
  else
    v22 = -1;
  if ( !v10 || (v23 = *(v10 - 1), (_DWORD)v23 == *(v10 - 2)) )
  {
LABEL_40:
    v82 = v10;
    sub_2FD3F0(&v82);
    v10 = v82;
    v23 = *(v82 - 1);
  }
  v10[v23] = v22;
  ++*(v10 - 1);
  if ( !v80 )
  {
    if ( v83 )
      sub_186B220(v83 - 2);
    sub_186B220(v10 - 2);
    return 1;
  }
  if ( *(v80 - 1) )
  {
    v73 = (*(__int64 (__fastcall **)(_QWORD, _DWORD **))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88), &v83);
    if ( !v73 )
      goto LABEL_79;
    v63 = (void (***)(void))sub_4C5900(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), *(_QWORD *)(a1 + 104), *(v10 - 1), v10);
    v31 = ((__int64 (__fastcall *)(void (***)(void), _QWORD))(*v63)[2])(v63, *(_QWORD *)(a1 + 104));
    v32 = sub_4C3EF0(v70, *(_QWORD *)(v31 + 8));
    v65 = (void *)sub_4FC950(v32, &v83, v31);
    s = v83;
    if ( v83 )
    {
      v33 = *(v83 - 1);
      if ( !v33 )
      {
        s = nullptr;
        v40 = sub_5A4FB0(*(_QWORD *)(a1 + 8), (__int64 *)&v83, nullptr, -1);
        goto LABEL_52;
      }
      v34 = (_QWORD *)sub_186B270(0xAu);
      *v34 = 2;
      v35 = v34 + 1;
      s = v35;
      while ( 1 )
      {
        v39 = *((_DWORD *)v35 - 2);
        if ( v39 >= v33 )
          break;
        v36 = (3 * v39 + 1) >> 1;
        v37 = v36 + 8;
        if ( v39 + 8 >= (unsigned int)v37 || v39 >= v36 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v86, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v86);
          sub_233E40((__int64)v86);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v38 = (unsigned int *)sub_186B300(s - 2, v37);
        *v38 = v36;
        s = v38 + 2;
        v35 = v38 + 2;
      }
      *(s - 1) = v33;
      memset(s, 0, v33);
    }
    v40 = sub_5A4FB0(*(_QWORD *)(a1 + 8), (__int64 *)&v83, (char *)s, -1);
LABEL_52:
    v41 = v40;
    v64 = v40;
    v62 = (void (***)(void))sub_4C4940(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), v40, (__int64)v65, 0);
    ((void (__fastcall *)(void (***)(void), __int64, void *, _QWORD))(*v62)[2])(v62, v41, v65, 0);
    v84 = 0;
    if ( v83 )
      v42 = (unsigned int)*(v83 - 1);
    else
      v42 = 0;
    sub_647A70(0, v42, &v84);
    ptr = (void (***)(void))sub_4C9050(
                              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
                              a1,
                              v64,
                              *(v80 - 1),
                              (__int64)v80,
                              v84,
                              *(v80 - 1),
                              v80,
                              0);
    v43 = (void *)((__int64 (__fastcall *)(void (***)(void), __int64, __int64))(*ptr)[2])(ptr, a1, v64);
    v85 = nullptr;
    v44 = *(v80 - 1);
    if ( v74 )
    {
      if ( !v44 )
      {
        v46 = 0;
        v47 = 0;
        v48 = 0;
        v45 = nullptr;
        goto LABEL_58;
      }
      v45 = nullptr;
      v46 = 0;
      v47 = 0;
      v48 = 0;
      while ( v80[v48] == v46 )
      {
        v51 = v48 + v74 - v44;
        if ( !v45 || (v52 = *(v45 - 1), (_DWORD)v52 == *(v45 - 2)) )
        {
          v67 = v47;
          v69 = v44;
          v71 = v48 + v74 - v44;
          sub_2FD3F0(&v85);
          v45 = v85;
          v47 = v67;
          v44 = v69;
          v51 = v71;
          v52 = *(v85 - 1);
        }
        v45[v52] = v51;
        ++v48;
        ++v46;
        ++*(v45 - 1);
        if ( v74 == v46 )
          goto LABEL_90;
        while ( v48 >= v44 )
        {
          v50 = *(v45 - 1);
          v49 = v47 + 1;
          if ( (_DWORD)v50 == *(v45 - 2) )
            goto LABEL_65;
LABEL_60:
          v45[v50] = v47;
          ++v46;
          ++*(v45 - 1);
          if ( v46 == v74 )
            goto LABEL_90;
          if ( v48 >= v44 )
          {
            v57 = v49 + 1;
            v58 = v49;
            v59 = v46 - v49;
            while ( 1 )
            {
              v60 = *(v45 - 1);
              if ( *(v45 - 2) == (_DWORD)v60 )
              {
                v72 = v57;
                sub_2FD3F0(&v85);
                v45 = v85;
                v57 = v72;
                v60 = *(v85 - 1);
              }
              v45[v60] = v58;
              ++*(v45 - 1);
              if ( v57 + v59 >= v74 )
                break;
              v58 = v57++;
            }
            goto LABEL_90;
          }
          v47 = v49;
        }
      }
LABEL_58:
      v49 = v47 + 1;
      if ( !v45 || (v50 = *(v45 - 1), (_DWORD)v50 == *(v45 - 2)) )
      {
LABEL_65:
        v66 = v47;
        v68 = v44;
        sub_2FD3F0(&v85);
        v45 = v85;
        v47 = v66;
        v44 = v68;
        v50 = *(v85 - 1);
      }
      goto LABEL_60;
    }
LABEL_90:
    v86[0] = 0;
    for ( i = sub_647B40(&v85, v86); i; i = sub_647B40(&v85, v86) )
    {
      v54 = (void *)sub_4C4930(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), (__int64)v43);
      v55 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v54 + 16LL))(v54, v43);
      v56 = (void *)v55;
      if ( v43 && v43 != (void *)v55 )
        sub_4D63B0(v43);
      if ( v86[0] )
        *(_DWORD *)(v86[0] - 4) = 0;
      v43 = v56;
      (**(void (__fastcall ***)(void *))v54)(v54);
      sub_186B220(v54);
    }
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)a1 + 88LL))(a1, v43);
    if ( v86[0] )
      sub_186B220((void *)(v86[0] - 8));
    if ( v85 )
      sub_186B220(v85 - 2);
    if ( v43 )
      sub_4D63B0(v43);
    sub_4CFDD0(ptr);
    if ( v84 )
      sub_186B220((void *)(v84 - 8));
    sub_54D7B0(v62);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    if ( s )
      sub_186B220(s - 2);
    if ( v65 )
      sub_4D63B0(v65);
    sub_4CFE00(v63);
LABEL_79:
    if ( !v83 )
    {
      sub_186B220(v10 - 2);
      sub_186B220(v80 - 2);
      return v73;
    }
    sub_186B220(v83 - 2);
    sub_186B220(v10 - 2);
    goto LABEL_26;
  }
  if ( v83 )
  {
    sub_186B220(v83 - 2);
    v73 = 1;
    goto LABEL_25;
  }
  sub_186B220(v10 - 2);
  v73 = 1;
  sub_186B220(v80 - 2);
  return v73;
}

