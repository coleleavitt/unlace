__int64 __fastcall sub_B467F0(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, int a5, int a6)
{
  char **v6; // rbp
  char **v7; // rbp
  char **exception; // rbp
  __int64 v10; // rax
  __int64 *v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // rbx
  unsigned int i; // ebx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _DWORD *v20; // rcx
  __int64 *j; // rcx
  __int64 v23; // rdx
  unsigned int **v24; // r12
  __int64 v25; // rax
  unsigned int **v26; // r14
  __int64 v27; // r13
  char v28; // al
  _QWORD *v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  _QWORD *v33; // rcx
  char v34; // al
  __int64 v35; // r12
  _QWORD *v36; // rdx
  unsigned int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rcx
  unsigned int v41; // r15d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rcx
  unsigned int v45; // edx
  __int64 v46; // rcx
  int v47; // edx
  __int64 *v48; // rcx
  unsigned int v49; // r13d
  unsigned int v50; // ecx
  unsigned int *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // r12d
  unsigned int v54; // ecx
  unsigned int *v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rax
  int v60; // [rsp+0h] [rbp-68h]
  int v61; // [rsp+0h] [rbp-68h]
  int v62; // [rsp+8h] [rbp-60h]
  int v63; // [rsp+8h] [rbp-60h]
  __int64 v64; // [rsp+10h] [rbp-58h] BYREF
  void *v65; // [rsp+18h] [rbp-50h]

  v10 = *(_QWORD *)(a1 + 448);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = *(__int64 **)(a1 + 456);
  if ( v11 )
  {
    *((_DWORD *)v11 - 1) = 0;
    if ( !a2 )
      goto LABEL_11;
  }
  else if ( !a2 )
  {
    return a1 + 448;
  }
  if ( (unsigned __int8)sub_163DF10((int)a1 + 128, *a2, (int)a3, a4, a5, a6, v60, v62, v64, v65) )
  {
    v16 = a2;
  }
  else
  {
    v16 = (_QWORD *)a2[2];
    if ( a2 == v16 )
    {
LABEL_9:
      v11 = *(__int64 **)(a1 + 456);
      goto LABEL_10;
    }
    while ( !(unsigned __int8)sub_163DF10((int)a1 + 128, *v16, v12, v13, v14, v15, v61, v63, v64, v65) )
    {
      v16 = (_QWORD *)v16[2];
      if ( a2 == v16 )
        goto LABEL_9;
    }
  }
  v34 = *((_BYTE *)v16 + 44);
  if ( (v34 & 1) != 0 )
  {
    v11 = *(__int64 **)(a1 + 456);
    *a3 = v16;
LABEL_10:
    if ( !v11 )
      return a1 + 448;
    goto LABEL_11;
  }
  *((_BYTE *)v16 + 44) = v34 | 1;
  v11 = *(__int64 **)(a1 + 456);
  if ( v11 )
  {
    v45 = *((_DWORD *)v11 - 1);
    if ( v45 == *((_DWORD *)v11 - 2) )
    {
      v53 = (3 * v45 + 1) >> 1;
      v54 = 8 * v53 + 8;
      if ( 8 * v45 + 8 >= v54 || v45 >= v53 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v64, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v64);
        sub_233E40((__int64)&v64);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v55 = (unsigned int *)sub_186B300(v11 - 1, v54);
      v11 = (__int64 *)(v55 + 2);
      v56 = v55[1];
      *v55 = v53;
      *(_QWORD *)(a1 + 456) = v55 + 2;
      LODWORD(v55) = v56;
      v48 = &v11[v56];
      v47 = (_DWORD)v55 + 1;
    }
    else
    {
      v46 = v45;
      v47 = v45 + 1;
      v48 = &v11[v46];
    }
  }
  else
  {
    v59 = (_QWORD *)sub_186B270(0x18u);
    v47 = 1;
    *v59 = 2;
    v11 = v59 + 1;
    *(_QWORD *)(a1 + 456) = v11;
    v48 = v11;
  }
  *v48 = (__int64)v16;
  *((_DWORD *)v11 - 1) = v47;
  *a3 = v16;
LABEL_11:
  for ( i = 0; i < *((_DWORD *)v11 - 1); ++i )
  {
    v18 = (_QWORD *)v11[i];
    v19 = *v18;
    if ( !*(_WORD *)(*v18 + 4LL) )
    {
      v20 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
      if ( v20 )
      {
        if ( *(_DWORD *)(a1 + 144) == *v20 )
        {
          if ( v20[1] )
          {
            if ( v20[1] == 2 )
            {
              v24 = (unsigned int **)(v19 + 32);
              v25 = *(unsigned int *)(v19 + 24);
              v26 = &v24[v25];
              if ( v25 * 8 )
              {
                do
                {
                  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * **v24);
                  v28 = *(_BYTE *)(v27 + 44);
                  if ( (v28 & 1) == 0 )
                  {
                    *(_BYTE *)(v27 + 44) = v28 | 1;
                    v29 = *(_QWORD **)(a1 + 456);
                    if ( v29 )
                    {
                      v30 = *((_DWORD *)v29 - 1);
                      if ( v30 == *((_DWORD *)v29 - 2) )
                      {
                        v41 = (3 * v30 + 1) >> 1;
                        v42 = 8 * v41 + 8;
                        if ( 8 * v30 + 8 >= v42 || v30 >= v41 )
                        {
                          v6 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(&v64, "Overflow encountered when expanding vector");
                          *v6 = (char *)off_1C63128;
                          sub_2333C0(v6 + 1, &v64);
                          sub_233E40((__int64)&v64);
                          __cxa_throw(
                            v6,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v43 = (unsigned int *)sub_186B300(v29 - 1, v42);
                        v44 = v43[1];
                        v29 = v43 + 2;
                        *v43 = v41;
                        *(_QWORD *)(a1 + 456) = v43 + 2;
                        LODWORD(v43) = v44;
                        v33 = &v29[v44];
                        v32 = (_DWORD)v43 + 1;
                      }
                      else
                      {
                        v31 = v30;
                        v32 = v30 + 1;
                        v33 = &v29[v31];
                      }
                    }
                    else
                    {
                      v57 = (_QWORD *)sub_186B270(0x18u);
                      *v57 = 2;
                      v32 = 1;
                      v29 = v57 + 1;
                      *(_QWORD *)(a1 + 456) = v29;
                      v33 = v29;
                    }
                    *v33 = v27;
                    *((_DWORD *)v29 - 1) = v32;
                  }
                  ++v24;
                }
                while ( v26 != v24 );
              }
            }
          }
          else
          {
            v35 = v18[14];
            v36 = *(_QWORD **)(a1 + 448);
            if ( v36 )
            {
              v37 = *((_DWORD *)v36 - 1);
              if ( v37 == *((_DWORD *)v36 - 2) )
              {
                v49 = (3 * v37 + 1) >> 1;
                v50 = 8 * v49 + 8;
                if ( 8 * v37 + 8 >= v50 || v37 >= v49 )
                {
                  v7 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v64, "Overflow encountered when expanding vector");
                  *v7 = (char *)off_1C63128;
                  sub_2333C0(v7 + 1, &v64);
                  sub_233E40((__int64)&v64);
                  __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v51 = (unsigned int *)sub_186B300(v36 - 1, v50);
                v52 = v51[1];
                v36 = v51 + 2;
                *v51 = v49;
                *(_QWORD *)(a1 + 448) = v51 + 2;
                LODWORD(v51) = v52;
                v40 = &v36[v52];
                v39 = (_DWORD)v51 + 1;
              }
              else
              {
                v38 = v37;
                v39 = v37 + 1;
                v40 = &v36[v38];
              }
            }
            else
            {
              v58 = (_QWORD *)sub_186B270(0x18u);
              *v58 = 2;
              v39 = 1;
              v36 = v58 + 1;
              *(_QWORD *)(a1 + 448) = v36;
              v40 = v36;
            }
            *v40 = v35;
            *((_DWORD *)v36 - 1) = v39;
          }
        }
      }
    }
    v11 = *(__int64 **)(a1 + 456);
    if ( !v11 )
      return a1 + 448;
  }
  for ( j = &v11[*((unsigned int *)v11 - 1)]; v11 != j; *(_BYTE *)(v23 + 44) &= ~1u )
    v23 = *v11++;
  return a1 + 448;
}

