__int64 __fastcall sub_42B2D0(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  char **exception; // r14
  bool v8; // zf
  _QWORD **v9; // rdi
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  unsigned int v13; // r12d
  __int64 i; // r13
  __int64 v15; // rsi
  unsigned int v16; // r12d
  _QWORD *v17; // rbx
  _QWORD *v18; // r13
  __int64 v19; // rdi
  _QWORD **v20; // rdi
  __int64 (__fastcall *v21)(); // rax
  __int64 v23; // rax
  __int64 *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // r14
  __int64 v28; // rax
  __int64 *v29; // r15
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  _DWORD *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // ecx
  size_t v37; // rsi
  unsigned int v38; // r13d
  unsigned int *v39; // rax
  __int64 v40; // rdx
  __int64 *v41; // r13
  unsigned __int64 v42; // r14
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 *v46; // r11
  _DWORD *v47; // r10
  _DWORD *v48; // r14
  __int64 v49; // r13
  int v50; // r15d
  __int64 *v51; // rcx
  __int64 v52; // rdi
  unsigned int v53; // esi
  __int64 v54; // rax
  __int64 *v55; // r9
  __int64 *j; // rax
  __int64 v57; // rdx
  _QWORD *v58; // r13
  _QWORD *v59; // rsi
  _QWORD *v60; // rbx
  _QWORD *v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rdi
  int v64; // edx
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  __int64 *k; // rax
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rax
  _QWORD *v73; // r14
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v77; // [rsp+18h] [rbp-70h] BYREF
  __int64 v78; // [rsp+20h] [rbp-68h] BYREF
  __int64 *v79; // [rsp+28h] [rbp-60h]
  __int64 v80[11]; // [rsp+30h] [rbp-58h] BYREF

  v8 = *(_QWORD *)(a1 + 128) == 0;
  v77 = 0;
  if ( !v8 )
  {
    sub_1862300(&v77, "produce_models", 1);
    v9 = *(_QWORD ***)(a1 + 48);
    v10 = (__int64 (__fastcall *)())(*v9)[11];
    if ( v10 == sub_42C520 )
      (*(void (__fastcall **)(_QWORD *, __int64 *))(*v9[12] + 88LL))(v9[12], &v77);
    else
      ((void (__fastcall *)(_QWORD **, __int64 *))v10)(v9, &v77);
  }
  if ( *(_BYTE *)(a1 + 145) )
  {
    v11 = *(_QWORD *)(a1 + 56);
    if ( v11 )
    {
      v12 = *(unsigned int *)(v11 - 4);
      if ( (_DWORD)v12 )
      {
        v13 = *(_DWORD *)(a1 + 148);
        for ( i = 0; v12 != i; ++i )
        {
          if ( *(_BYTE *)(a1 + 144) )
          {
            if ( v13 != (_DWORD)i )
              goto LABEL_13;
          }
          else if ( (unsigned int)i < v13 )
          {
LABEL_13:
            v15 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * i);
            goto LABEL_10;
          }
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * i);
LABEL_10:
          sub_435610(*(_QWORD *)(a1 + 48), v15);
        }
      }
    }
  }
  v16 = sub_42A9E0((__int64 *)a1, a2, a3, a4);
  if ( v16 == -1 )
  {
    v23 = *(_QWORD *)(a1 + 48);
    v24 = *(__int64 **)(v23 + 96);
    v25 = *(_QWORD *)(v23 + 8);
    v79 = nullptr;
    v26 = *v24;
    v78 = v25;
    (*(void (__fastcall **)(__int64 *, __int64 *))(v26 + 24))(v24, &v78);
    v27 = v79;
    if ( v79 )
    {
      v28 = *((unsigned int *)v79 - 1);
      if ( (_DWORD)v28 )
      {
        v29 = &v79[v28];
        v30 = (_QWORD *)sub_186B270(0x18u);
        v31 = v30 + 1;
        *v30 = 2;
        v32 = 1;
        v33 = v31;
        while ( 1 )
        {
          v34 = *v27++;
          *v31 = v34;
          *(v33 - 1) = v32;
          if ( v29 == v27 )
            break;
          if ( *(v33 - 2) == v32 )
          {
            v36 = (3 * v32 + 1) >> 1;
            v37 = 8 * v36 + 8;
            v38 = v36;
            if ( 8 * v32 + 8 >= (unsigned int)v37 || v32 >= v36 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v80, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v80);
              sub_233E40((__int64)v80);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v39 = (unsigned int *)sub_186B300(v33 - 2, v37);
            v40 = v39[1];
            v33 = v39 + 2;
            *v39 = v38;
            LODWORD(v39) = v40;
            v31 = &v33[2 * v40];
            v32 = (_DWORD)v39 + 1;
          }
          else
          {
            v35 = v32++;
            v31 = &v33[2 * v35];
          }
        }
        v41 = v79;
        if ( v79 )
        {
          v42 = (unsigned __int64)&v79[*((unsigned int *)v79 - 1)];
          if ( (unsigned __int64)v79 >= v42 )
            goto LABEL_42;
          do
          {
            while ( 1 )
            {
              v43 = *v41;
              if ( *v41 )
              {
                v8 = (*(_DWORD *)(v43 + 8))-- == 1;
                if ( v8 )
                  break;
              }
              if ( (unsigned __int64)++v41 >= v42 )
                goto LABEL_41;
            }
            sub_15D7BC0(v78, v43);
            ++v41;
          }
          while ( (unsigned __int64)v41 < v42 );
LABEL_41:
          v41 = v79;
          if ( v79 )
LABEL_42:
            sub_186B220(v41 - 1);
        }
        *(_DWORD *)(a1 + 140) = -1;
        v44 = (unsigned int)*(v33 - 1);
        if ( (_DWORD)v44 )
        {
          v45 = *(unsigned int *)(a1 + 104);
          v46 = *(__int64 **)(a1 + 96);
          v47 = v33;
          v48 = &v33[2 * v44];
          v49 = 8 * v45;
          v50 = v45 - 1;
          v51 = &v46[v45];
          do
          {
            v52 = *(_QWORD *)v47;
            v53 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
            v54 = 8LL * (v50 & v53);
            v55 = &v46[(unsigned __int64)v54 / 8];
            if ( v54 != v49 )
            {
              for ( j = &v46[(unsigned __int64)v54 / 8]; v51 != j; ++j )
              {
                v57 = *j;
                if ( (unsigned __int64)*j > 1 )
                {
                  if ( *(_DWORD *)(v57 + 12) == v53 && v52 == v57 )
                  {
LABEL_75:
                    v70 = *(_QWORD *)(a1 + 88);
                    if ( v70 )
                    {
                      v71 = *(unsigned int *)(a1 + 140);
                      if ( (unsigned int)v71 > *(_DWORD *)(v70 - 4) )
                        v71 = *(unsigned int *)(v70 - 4);
                      if ( (_DWORD)v71 )
                      {
                        v72 = 0;
                        while ( *(_QWORD *)(v70 + 8 * v72) != v52 )
                        {
                          if ( ++v72 == v71 )
                            goto LABEL_52;
                        }
                        *(_DWORD *)(a1 + 140) = v72;
                      }
                    }
                    goto LABEL_52;
                  }
                }
                else if ( !v57 )
                {
                  goto LABEL_52;
                }
              }
            }
            if ( v46 != v55 )
            {
              for ( k = v46; v55 != k; ++k )
              {
                v69 = *k;
                if ( (unsigned __int64)*k > 1 )
                {
                  if ( *(_DWORD *)(v69 + 12) == v53 && v52 == v69 )
                    goto LABEL_75;
                }
                else if ( !v69 )
                {
                  break;
                }
              }
            }
LABEL_52:
            v47 += 2;
          }
          while ( v48 != v47 );
        }
        sub_186B220(v33 - 2);
LABEL_54:
        v58 = *(_QWORD **)(a1 + 120);
        v59 = v58;
        if ( !v58 )
          goto LABEL_19;
        v60 = (_QWORD *)v58[1];
        if ( !*(_DWORD *)(*(_QWORD *)a1 + 712LL) || *(_BYTE *)(a1 + 136) )
        {
          if ( v60 )
          {
            v61 = &v60[*((unsigned int *)v60 - 1)];
            if ( v60 >= v61 )
              goto LABEL_65;
            do
            {
              while ( 1 )
              {
                v62 = *v60;
                if ( *v60 )
                {
                  v63 = *v58;
                  v8 = (*(_DWORD *)(v62 + 8))-- == 1;
                  if ( v8 )
                    break;
                }
                if ( ++v60 >= v61 )
                  goto LABEL_64;
              }
              sub_15D7BC0(v63, v62);
              ++v60;
            }
            while ( v60 < v61 );
LABEL_64:
            v60 = (_QWORD *)v58[1];
            v59 = *(_QWORD **)(a1 + 120);
            if ( v60 )
LABEL_65:
              *((_DWORD *)v60 - 1) = 0;
          }
          (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48), v59);
          sub_432170(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 120), v64, v65, v66, v67);
          goto LABEL_19;
        }
        if ( !v60 )
          goto LABEL_96;
        v73 = &v60[*((unsigned int *)v60 - 1)];
        if ( v60 < v73 )
        {
          do
          {
            v74 = *v60;
            if ( *v60 )
            {
              v75 = *v58;
              v8 = (*(_DWORD *)(v74 + 8))-- == 1;
              if ( v8 )
                sub_15D7BC0(v75, v74);
            }
            ++v60;
          }
          while ( v60 < v73 );
          v60 = (_QWORD *)v58[1];
          if ( !v60 )
          {
            v59 = *(_QWORD **)(a1 + 120);
            goto LABEL_96;
          }
          v58 = *(_QWORD **)(a1 + 120);
        }
        *((_DWORD *)v60 - 1) = 0;
        v59 = v58;
LABEL_96:
        (*(void (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 48) + 384LL))(*(_QWORD *)(a1 + 48), v59);
        goto LABEL_19;
      }
      sub_186B220(v79 - 1);
    }
    *(_DWORD *)(a1 + 140) = -1;
    goto LABEL_54;
  }
  v17 = *(_QWORD **)(a1 + 128);
  if ( !v17 )
    goto LABEL_22;
  v18 = *(_QWORD **)(a1 + 48);
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*v18 + 32LL))(v18, *(_QWORD *)(a1 + 128));
  if ( *v17 )
  {
    v19 = v18[7];
    if ( v19 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 32LL))(v19, v17);
  }
LABEL_19:
  if ( *(_QWORD *)(a1 + 128) )
  {
    sub_1862300(&v77, "produce_models", 0);
    v20 = *(_QWORD ***)(a1 + 48);
    v21 = (__int64 (__fastcall *)())(*v20)[11];
    if ( v21 == sub_42C520 )
      (*(void (__fastcall **)(_QWORD *, __int64 *))(*v20[12] + 88LL))(v20[12], &v77);
    else
      ((void (__fastcall *)(_QWORD **, __int64 *))v21)(v20, &v77);
  }
LABEL_22:
  sub_18572D0(&v77);
  return v16;
}

