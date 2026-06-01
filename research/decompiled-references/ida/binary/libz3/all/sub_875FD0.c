__int64 __fastcall sub_875FD0(__int64 a1)
{
  char **exception; // rbp
  char **v2; // rbp
  char **v3; // rbp
  __int64 v5; // rax
  unsigned int v6; // r13d
  __int64 result; // rax
  __int64 v8; // rbp
  _DWORD *v9; // rdi
  unsigned int v10; // ebp
  size_t v11; // rsi
  unsigned int *v12; // rax
  unsigned int v13; // eax
  __int64 v14; // r12
  _QWORD *v15; // rdi
  __int64 v16; // rbp
  _QWORD *v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 *v20; // r14
  __int64 v21; // r15
  unsigned int v22; // eax
  char *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r9
  int *v27; // rax
  int v28; // edx
  int v29; // esi
  int v30; // edx
  int v31; // r8d
  int i; // edx
  unsigned int v33; // r14d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // eax
  __int64 v37; // rax
  _QWORD *v38; // rdi
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  unsigned int v42; // eax
  __int64 v43; // r14
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // r8
  int *v49; // rdx
  __int64 v50; // rdi
  int v51; // ecx
  __int64 v52; // rax
  __int64 v53; // r14
  int v54; // eax
  _QWORD *v55; // r14
  char *v56; // rax
  unsigned int v57; // esi
  unsigned int v58; // eax
  __int64 v59; // [rsp+8h] [rbp-70h]
  __int64 v60[11]; // [rsp+20h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
    v6 = *(_DWORD *)(v5 - 4);
  else
    v6 = 0;
  result = *(_QWORD *)(a1 + 472);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  v8 = *(_QWORD *)(a1 + 480);
  if ( !v8 )
  {
    v9 = *(_DWORD **)(a1 + 488);
    if ( v9 )
    {
LABEL_7:
      *(v9 - 1) = 0;
      if ( !v6 )
      {
        if ( result )
        {
          *(_DWORD *)(result - 4) = 0;
          if ( v8 )
            *(_DWORD *)(v8 - 4) = 0;
          return result;
        }
        if ( !v8 )
          return result;
LABEL_90:
        *(_DWORD *)(v8 - 4) = 0;
        return result;
      }
LABEL_12:
      while ( 1 )
      {
        v13 = *(v9 - 2);
        if ( v13 >= v6 )
          break;
        v10 = (3 * v13 + 1) >> 1;
        v11 = 4 * v10 + 8;
        if ( 4 * v13 + 8 >= (unsigned int)v11 || v13 >= v10 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v12 = (unsigned int *)sub_186B300(v9 - 2, v11);
        v9 = v12 + 2;
        *v12 = v10;
        *(_QWORD *)(a1 + 488) = v12 + 2;
      }
      *(v9 - 1) = v6;
      v14 = v6;
      memset(v9, 255, 4LL * v6);
      v15 = *(_QWORD **)(a1 + 472);
      if ( v15 )
      {
        v16 = *((unsigned int *)v15 - 1);
        if ( (unsigned int)v16 >= v6 )
        {
          v17 = *(_QWORD **)(a1 + 480);
          *((_DWORD *)v15 - 1) = v6;
          if ( v17 )
          {
            v18 = *((unsigned int *)v17 - 1);
            if ( (unsigned int)v18 >= v6 )
            {
              *((_DWORD *)v17 - 1) = v6;
              v14 = v6;
LABEL_18:
              v19 = 0;
              while ( 1 )
              {
                v59 = 8 * v19;
                v20 = *(__int64 **)(*(_QWORD *)(a1 + 88) + 8 * v19);
                v21 = *v20;
                v22 = sub_7E5100(a1, v19);
                result = (__int64)sub_8748D0(a1, v19, v22);
                if ( !*(_WORD *)(v21 + 4) )
                {
                  result = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 24LL);
                  if ( result )
                  {
                    if ( *(_DWORD *)result == *(_DWORD *)(a1 + 112) )
                    {
                      if ( *(_DWORD *)(result + 4) == 2 )
                      {
                        v47 = *(_QWORD *)(a1 + 488);
                        v48 = v20[22];
                        v49 = (int *)(v47 + 4 * v19);
                        result = (unsigned int)*v49;
                        if ( (int)result >= 0 )
                        {
                          v50 = (int)result;
                          v51 = *(_DWORD *)(v47 + 4LL * (int)result);
                          if ( v51 < -1 )
                          {
                            result = 8LL * (int)result;
                            v59 = 8 * v50;
                          }
                          else
                          {
                            if ( v51 == -1 )
                            {
                              v53 = (int)result;
                              goto LABEL_72;
                            }
                            do
                            {
                              v52 = v51;
                              v51 = *(_DWORD *)(v47 + 4LL * v51);
                              v53 = v52;
                            }
                            while ( v51 >= 0 );
                            *v49 = v52;
                            v49 = (int *)(v47 + 4 * v50);
                            v54 = *v49;
                            if ( *v49 >= 0 )
                            {
                              while ( 2 )
                              {
                                v50 = v54;
LABEL_72:
                                *v49 = v53;
                                v49 = (int *)(v47 + 4 * v50);
                                v54 = *v49;
                                if ( *v49 >= 0 )
                                  continue;
                                break;
                              }
                            }
                            result = 8 * v53;
                            v59 = 8 * v53;
                          }
                        }
                        v55 = (_QWORD *)(*(_QWORD *)(a1 + 472) + v59);
                        if ( !*v55 )
                          *v55 = v48;
                        goto LABEL_19;
                      }
                      if ( *(_DWORD *)(result + 4) )
                      {
                        if ( *(_DWORD *)(result + 4) == 4 )
                        {
                          v23 = (char *)(v20[22] + 88);
                          if ( *(int *)v23 >> 8 == -1 )
                          {
LABEL_88:
                            v25 = 0x3FFFFFFFCLL;
                            v24 = 0xFFFFFFFFLL;
                          }
                          else
                          {
                            while ( *v23 != *(_DWORD *)(a1 + 12) )
                            {
                              v23 = *((char **)v23 + 1);
                              if ( !v23 )
                                goto LABEL_88;
                            }
                            v24 = (unsigned int)(*(int *)v23 >> 8);
                            v25 = 4 * v24;
                          }
                          v26 = *(_QWORD *)(a1 + 488);
                          v27 = (int *)(v26 + v25);
                          v28 = *v27;
                          if ( *v27 >= 0 )
                          {
                            v24 = v28;
                            v29 = *(_DWORD *)(v26 + 4LL * v28);
                            if ( v29 >= -1 )
                            {
                              if ( v29 == -1 )
                              {
                                v31 = *v27;
                                goto LABEL_37;
                              }
                              do
                              {
                                v30 = v29;
                                v29 = *(_DWORD *)(v26 + 4LL * v29);
                                v31 = v30;
                              }
                              while ( v29 >= 0 );
                              *v27 = v30;
                              v27 = (int *)(v26 + 4 * v24);
                              for ( i = *v27; *v27 >= 0; i = *v27 )
                              {
                                v24 = i;
LABEL_37:
                                *v27 = v31;
                                v27 = (int *)(v26 + 4 * v24);
                              }
                              v24 = v31;
                            }
                          }
                          result = *(_QWORD *)(a1 + 472) + 8 * v24;
                          if ( !*(_QWORD *)result )
                            *(_QWORD *)result = v20;
                        }
                      }
                      else
                      {
                        v56 = (char *)(v20[22] + 88);
                        if ( *(int *)v56 >> 8 == -1 )
                        {
LABEL_87:
                          v57 = -1;
                        }
                        else
                        {
                          while ( *(_DWORD *)(a1 + 12) != *v56 )
                          {
                            v56 = *((char **)v56 + 1);
                            if ( !v56 )
                              goto LABEL_87;
                          }
                          v57 = *(int *)v56 >> 8;
                        }
                        v58 = sub_7E5100(a1, v57);
                        result = (__int64)sub_8748D0(a1, v19, v58);
                      }
                    }
                  }
                }
LABEL_19:
                if ( ++v19 == v14 )
                  return result;
              }
            }
            goto LABEL_52;
          }
LABEL_56:
          v18 = 0;
          v44 = (_QWORD *)sub_186B270(0x18u);
          v17 = v44 + 1;
          *v44 = 2;
          *(_QWORD *)(a1 + 480) = v44 + 1;
          goto LABEL_52;
        }
      }
      else
      {
        v16 = 0;
        v45 = (_QWORD *)sub_186B270(0x18u);
        v15 = v45 + 1;
        *v45 = 2;
        *(_QWORD *)(a1 + 472) = v45 + 1;
      }
      while ( 1 )
      {
        v36 = *((_DWORD *)v15 - 2);
        if ( v36 >= v6 )
          break;
        v33 = (3 * v36 + 1) >> 1;
        v34 = 8 * v33 + 8;
        if ( 8 * v36 + 8 >= (unsigned int)v34 || v36 >= v33 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int *)sub_186B300(v15 - 1, v34);
        v15 = v35 + 2;
        *v35 = v33;
        *(_QWORD *)(a1 + 472) = v35 + 2;
      }
      v37 = v16;
      *((_DWORD *)v15 - 1) = v6;
      v17 = *(_QWORD **)(a1 + 480);
      v38 = &v15[v37];
      if ( v37 == v6 )
      {
        if ( !v17 )
          goto LABEL_56;
      }
      else
      {
        memset(v38, 0, 8LL * v6 - v37 * 8);
        if ( !v17 )
          goto LABEL_56;
      }
      v18 = *((unsigned int *)v17 - 1);
      if ( (unsigned int)v18 >= v6 )
      {
        *((_DWORD *)v17 - 1) = v6;
        goto LABEL_18;
      }
LABEL_52:
      while ( 1 )
      {
        v42 = *((_DWORD *)v17 - 2);
        if ( v42 >= v6 )
          break;
        v39 = (3 * v42 + 1) >> 1;
        v40 = 8 * v39 + 8;
        if ( 8 * v42 + 8 >= (unsigned int)v40 || v42 >= v39 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v60, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v41 = (unsigned int *)sub_186B300(v17 - 1, v40);
        v17 = v41 + 2;
        *v41 = v39;
        *(_QWORD *)(a1 + 480) = v41 + 2;
      }
      v43 = v18;
      *((_DWORD *)v17 - 1) = v6;
      if ( v43 != v6 )
        memset(&v17[v43], 0, 8LL * v6 - v43 * 8);
      goto LABEL_18;
    }
    if ( !v6 )
    {
      if ( !result )
        return result;
      goto LABEL_59;
    }
LABEL_65:
    v46 = (_QWORD *)sub_186B270(0x10u);
    v9 = v46 + 1;
    *v46 = 2;
    *(_QWORD *)(a1 + 488) = v46 + 1;
    goto LABEL_12;
  }
  v9 = *(_DWORD **)(a1 + 488);
  *(_DWORD *)(v8 - 4) = 0;
  if ( v9 )
    goto LABEL_7;
  if ( v6 )
    goto LABEL_65;
  if ( !result )
    goto LABEL_90;
LABEL_59:
  *(_DWORD *)(result - 4) = 0;
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  return result;
}

