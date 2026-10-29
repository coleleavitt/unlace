__int64 __fastcall sub_989AC0(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  char **v3; // rbx
  char **exception; // rbx
  __int64 v8; // rdx
  unsigned int v9; // r12d
  __int64 i; // rax
  _QWORD *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned int j; // r14d
  __int64 v14; // rax
  _DWORD *v15; // rcx
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // esi
  __int64 v26; // rbx
  __int64 *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned int *v33; // rbx
  unsigned int *v34; // r14
  unsigned int v35; // esi
  unsigned __int64 v36; // rcx
  unsigned int v37; // ebx
  int v38; // esi
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rbx
  int v42; // esi
  char v43; // dl
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rbx
  __int64 v47; // rax
  unsigned int *v48; // rbx
  unsigned int *v49; // r14
  unsigned int v50; // esi
  unsigned int v51; // r8d
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rax
  unsigned int v55; // r8d
  unsigned int v56; // ecx
  unsigned int *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rdx
  unsigned __int8 v61; // [rsp+0h] [rbp-88h]
  unsigned __int64 v62; // [rsp+8h] [rbp-80h]
  unsigned int v63; // [rsp+8h] [rbp-80h]
  unsigned int v64; // [rsp+8h] [rbp-80h]
  unsigned int v65; // [rsp+8h] [rbp-80h]
  unsigned int v67; // [rsp+24h] [rbp-64h] BYREF
  unsigned __int64 v68; // [rsp+28h] [rbp-60h] BYREF
  __int64 v69[11]; // [rsp+30h] [rbp-58h] BYREF

  v68 = 2;
  v67 = -2;
  v61 = sub_989830(a1, a2, a3, (__int64 *)&v68, &v67);
  if ( v61 )
  {
    v8 = **(_QWORD **)(a1 + 40);
    if ( v8 )
    {
      v9 = *(_DWORD *)(v8 - 4);
      if ( v9 )
      {
        for ( i = --v9;
              *(_DWORD *)(a1 + 48) < (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8872LL)
                                                + 16LL * (*(_DWORD *)(v8 + 4 * i) >> 1)
                                                + 8)
                                    & 0xFFFFFFu)
           && v9;
              i = --v9 )
        {
          ;
        }
      }
    }
    else
    {
      v9 = 0;
    }
    v11 = *(_QWORD **)(a1 + 56);
    v12 = v68;
    j = v67;
    if ( v11 )
    {
      v14 = *((unsigned int *)v11 - 1);
      v15 = (_DWORD *)v11 + v14;
      if ( (_DWORD)v14 == *((_DWORD *)v11 - 2) )
      {
        v51 = (unsigned int)(3 * v14 + 1) >> 1;
        v52 = 4 * v51 + 8;
        if ( 4 * (int)v14 + 8 >= v52 || (unsigned int)v14 >= v51 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v69, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v69);
          sub_233E40((__int64)v69);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v64 = (unsigned int)(3 * v14 + 1) >> 1;
        v53 = (unsigned int *)sub_186B300(v11 - 1, v52);
        v11 = v53 + 2;
        *v53 = v64;
        v54 = v53[1];
        *(_QWORD *)(a1 + 56) = v11;
        v15 = (_DWORD *)v11 + v54;
      }
    }
    else
    {
      v59 = (_QWORD *)sub_186B270(0x10u);
      *v59 = 2;
      v11 = v59 + 1;
      *(_QWORD *)(a1 + 56) = v59 + 1;
      v15 = v59 + 1;
    }
    *v15 = -2;
    ++*((_DWORD *)v11 - 1);
    v16 = *(_QWORD **)(a1 + 72);
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v55 = (3 * v17 + 1) >> 1;
        v56 = 8 * v55 + 8;
        if ( 8 * v17 + 8 >= v56 || v17 >= v55 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v69, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v69);
          sub_233E40((__int64)v69);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v65 = (3 * v17 + 1) >> 1;
        v57 = (unsigned int *)sub_186B300(v16 - 1, v56);
        v58 = v57[1];
        v16 = v57 + 2;
        *v57 = v65;
        LODWORD(v57) = v58;
        *(_QWORD *)(a1 + 72) = v16;
        v20 = &v16[v58];
        v19 = (_DWORD)v57 + 1;
      }
      else
      {
        v18 = v17;
        v19 = v17 + 1;
        v20 = &v16[v18];
      }
    }
    else
    {
      v60 = (_QWORD *)sub_186B270(0x18u);
      *v60 = 2;
      v19 = 1;
      v16 = v60 + 1;
      *(_QWORD *)(a1 + 72) = v16;
      v20 = v16;
    }
    *v20 = 0;
    *((_DWORD *)v16 - 1) = v19;
    LODWORD(v69[0]) = 0;
    if ( a3 != -2 )
      sub_983080(a1, a3, v69);
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL) )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_AA5520(*(_QWORD *)(a1 + 24), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL) + 16LL, j ^ 1);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v21 = v12 & 7;
      if ( v21 != 2 )
      {
        if ( v21 > 2 )
        {
          if ( v21 != 3 )
          {
            sub_1872CE0("");
            sub_1873130(114, 558);
          }
          v31 = *(_QWORD *)(a1 + 328);
          v32 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v31 )
            *(_DWORD *)(v31 - 4) = 0;
          sub_984A90(a1, v32, a1 + 328);
          sub_AEC480(*(_QWORD *)(a1 + 24) + 7536LL, j, v32, a1 + 328);
          v33 = *(unsigned int **)(a1 + 328);
          if ( v33 )
          {
            v34 = &v33[*(v33 - 1)];
            while ( v34 != v33 )
            {
              v35 = *v33++;
              sub_983080(a1, v35, v69);
            }
          }
        }
        else if ( (v12 & 7) != 0 )
        {
          sub_983080(a1, v12 >> 3, v69);
        }
        else
        {
          v36 = v12 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 7) & 3u) - 2 <= 1 )
            ++*(_DWORD *)(v36 + 4LL * (*(_DWORD *)(v36 + 4) & 0xFFFFFF) + 8);
          v37 = *(_DWORD *)v36;
          if ( dword_1C7EC90 != j )
          {
            v38 = *(_DWORD *)(v36 + 8);
            v21 = 1;
            if ( v38 != j )
            {
              v62 = v36;
              sub_983080(a1, v38 ^ 1, v69);
              v36 = v62;
              v21 = 2;
            }
          }
          if ( v21 < v37 )
          {
            v63 = v9;
            v39 = v36 + 4LL * v21;
            v40 = v36;
            v41 = v36 + 4 * (v37 - 1 - v21 + (unsigned __int64)v21) + 4;
            do
            {
              v42 = *(_DWORD *)(v39 + 8);
              v39 += 4LL;
              sub_983080(a1, v42 ^ 1, v69);
            }
            while ( v41 != v39 );
            v9 = v63;
            v36 = v40;
          }
          v43 = *(_BYTE *)(v36 + 7);
          if ( (v43 & 0x40) != 0 )
          {
            v44 = v36 + 4LL * (*(_DWORD *)(v36 + 4) & 0xFFFFFF) + 8;
            if ( (v43 & 3u) - 2 < 2 )
              v44 = v36 + 4LL * (*(_DWORD *)(v36 + 4) & 0xFFFFFF) + 12;
            v45 = (__int64 *)((v44 + 7) & 0xFFFFFFFFFFFFFFF8LL);
            if ( (*(_BYTE *)(v36 + 7) & 0x20) != 0 )
              ++v45;
            v46 = *v45;
            if ( *v45 )
            {
              v47 = *(_QWORD *)(a1 + 328);
              if ( v47 )
                *(_DWORD *)(v47 - 4) = 0;
              sub_984A90(a1, v46, a1 + 328);
              sub_AEC480(*(_QWORD *)(a1 + 24) + 7536LL, j, v46, a1 + 328);
              v48 = *(unsigned int **)(a1 + 328);
              if ( v48 )
              {
                v49 = &v48[*(v48 - 1)];
                while ( v49 != v48 )
                {
                  v50 = *v48++;
                  sub_983080(a1, v50, v69);
                }
              }
            }
          }
        }
      }
      v22 = *(_QWORD *)(a1 + 24);
      v23 = **(_QWORD **)(a1 + 40);
      for ( j = *(_DWORD *)(v23 + 4LL * v9); ; j = *(_DWORD *)(v23 + 4LL * --v9) )
      {
        v24 = *(_QWORD *)(v22 + 8872) + 16LL * (j >> 1);
        if ( (*(_BYTE *)(v24 + 11) & 1) != 0 )
          break;
      }
      v12 = *(_QWORD *)v24;
      --v9;
      v25 = --LODWORD(v69[0]);
      *(_BYTE *)(v24 + 11) &= ~1u;
    }
    while ( v25 );
    **(_DWORD **)(a1 + 56) = j ^ 1;
    v26 = *(_QWORD *)(*(_QWORD *)(v22 + 8840) + 8LL * (j >> 1));
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    v27 = *(__int64 **)(a1 + 72);
    v28 = *v27;
    if ( *v27 )
    {
      v29 = *(_QWORD *)(a1 + 64);
      if ( (*(_DWORD *)(v28 + 8))-- == 1 )
      {
        sub_15D7BC0(v29, v28);
        v27 = *(__int64 **)(a1 + 72);
      }
    }
    *v27 = v26;
    sub_989970(a1, a2, a3);
  }
  return v61;
}

