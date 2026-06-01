void __fastcall sub_E28B00(__int64 a1)
{
  __int64 v1; // r10
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 *v6; // rcx
  int v7; // edi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 *i; // rax
  __int64 v13; // rdx
  unsigned int *v14; // rbx
  unsigned int *v15; // r15
  unsigned int v16; // r13d
  __int64 v17; // rbp
  _BYTE *v18; // rax
  __int64 v19; // r14
  __int16 v20; // dx
  int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rax
  unsigned int *v26; // rax
  __int64 v27; // rax
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rbx
  _DWORD *v37; // r15
  int v38; // ecx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  char **exception; // rbx
  __int64 v44; // [rsp+0h] [rbp-98h]
  unsigned int v45; // [rsp+Ch] [rbp-8Ch]
  __int64 v46; // [rsp+10h] [rbp-88h]
  unsigned int *v47; // [rsp+10h] [rbp-88h]
  unsigned int *v48; // [rsp+18h] [rbp-80h]
  __int64 v49; // [rsp+28h] [rbp-70h]
  __int64 v50; // [rsp+40h] [rbp-58h] BYREF
  char v51; // [rsp+48h] [rbp-50h]

  v1 = *(_QWORD *)(a1 + 192);
  if ( v1 )
  {
    v3 = *(unsigned int *)(a1 + 280);
    do
    {
      if ( (unsigned int)v3 >= *(_DWORD *)(v1 - 4) )
        break;
      v4 = *(_QWORD *)(v1 + 8 * v3);
      v5 = *(unsigned int *)(a1 + 136);
      v6 = *(__int64 **)(a1 + 128);
      v7 = *(_DWORD *)(v4 + 12);
      v8 = v5 - 1;
      v5 *= 16;
      v9 = (__int64 *)((char *)v6 + v5);
      v10 = 16LL * (v7 & v8);
      v11 = &v6[(unsigned __int64)v10 / 8];
      if ( v10 != v5 )
      {
        for ( i = &v6[(unsigned __int64)v10 / 8]; v9 != i; i += 2 )
        {
          v13 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v13 + 12) == v7 && v4 == v13 )
            {
LABEL_14:
              v14 = (unsigned int *)i[1];
              if ( !v14 )
                goto LABEL_11;
              v15 = &v14[*(v14 - 1)];
              if ( v15 == v14 )
                goto LABEL_11;
              while ( 2 )
              {
                while ( 2 )
                {
                  v16 = *v14;
                  v17 = 40LL * *v14;
                  v18 = (_BYTE *)(v17 + *(_QWORD *)(a1 + 112));
                  if ( v18[32] )
                  {
LABEL_17:
                    if ( v15 == ++v14 )
                      goto LABEL_30;
                    continue;
                  }
                  break;
                }
                v19 = *(_QWORD *)v18;
                v20 = *(_WORD *)(*(_QWORD *)v18 + 4LL);
                if ( v20 )
                {
LABEL_20:
                  if ( v20 == 2 && !*(_DWORD *)(v19 + 16) )
                  {
                    sub_15D08E0(a1 + 216);
                    v21 = *(_DWORD *)(v19 + 72);
                    v50 = a1;
                    v51 = 1;
                    if ( v21 )
                    {
                      v46 = v17;
                      v22 = 0;
                      do
                      {
                        v23 = 16LL * *(unsigned int *)(v19 + 20) + 8 * v22++;
                        sub_E28370(&v50, a1 + 216, *(_QWORD *)(v19 + v23 + 80), 0);
                      }
                      while ( (unsigned int)v22 < *(_DWORD *)(v19 + 72) );
                      v17 = v46;
                      if ( !v51 )
                        goto LABEL_17;
                    }
                  }
                }
                else if ( (*(_BYTE *)(v19 + 30) & 1) == 0 )
                {
                  v32 = *(_DWORD **)(*(_QWORD *)(v19 + 16) + 24LL);
                  if ( v32 )
                  {
                    if ( !*v32 && v32[1] == 5 )
                    {
                      v33 = v19 + 32;
                      v34 = 8LL * *(unsigned int *)(v19 + 24);
                      if ( v34 )
                      {
                        v49 = *(_QWORD *)v18;
                        v35 = v19 + 32 + v34;
                        v48 = v14;
                        v36 = v33;
                        v44 = a1 + 216;
                        v45 = v16;
                        v47 = v15;
                        do
                        {
                          v37 = *(_DWORD **)v36;
                          if ( *(_WORD *)(*(_QWORD *)v36 + 4LL) == 2 && !v37[4] )
                          {
                            sub_15D08E0(v44);
                            v38 = v37[18];
                            v50 = a1;
                            v51 = 1;
                            if ( !v38 )
                              goto LABEL_47;
                            v39 = 0;
                            do
                            {
                              v40 = 16LL * (unsigned int)v37[5] + 8 * v39++;
                              sub_E28370(&v50, v44, *(_QWORD *)((char *)v37 + v40 + 80), 0);
                            }
                            while ( (unsigned int)v39 < v37[18] );
                            if ( v51 )
                            {
LABEL_47:
                              v16 = v45;
                              v15 = v47;
                              v14 = v48;
                              goto LABEL_26;
                            }
                          }
                          v36 += 8;
                        }
                        while ( v35 != v36 );
                        v19 = v49;
                        v16 = v45;
                        v15 = v47;
                        v14 = v48;
                        v20 = *(_WORD *)(v49 + 4);
                        goto LABEL_20;
                      }
                    }
                  }
                }
LABEL_26:
                v24 = *(_QWORD **)(a1 + 272);
                if ( v24 )
                {
                  v25 = *((unsigned int *)v24 - 1);
                  if ( (_DWORD)v25 == *((_DWORD *)v24 - 2) )
                  {
                    v28 = (unsigned int)(3 * v25 + 1) >> 1;
                    v29 = 4 * v28 + 8;
                    if ( 4 * (int)v25 + 8 >= (unsigned int)v29 || (unsigned int)v25 >= v28 )
                    {
                      exception = (char **)__cxa_allocate_exception(0x28u);
                      sub_24ABB0(&v50, "Overflow encountered when expanding vector");
                      *exception = (char *)off_1C63128;
                      sub_2333C0(exception + 1, &v50);
                      sub_233E40((__int64)&v50);
                      __cxa_throw(
                        exception,
                        (struct type_info *)&`typeinfo for'default_exception,
                        (void (*)(void *))sub_230E50);
                    }
                    v30 = (unsigned int *)sub_186B300(v24 - 1, v29);
                    v24 = v30 + 2;
                    *v30 = v28;
                    v31 = v30[1];
                    *(_QWORD *)(a1 + 272) = v24;
                    v26 = (unsigned int *)v24 + v31;
                  }
                  else
                  {
                    v26 = (unsigned int *)v24 + v25;
                  }
                }
                else
                {
                  v42 = (_QWORD *)sub_186B270(0x10u);
                  v24 = v42 + 1;
                  *v42 = 2;
                  *(_QWORD *)(a1 + 272) = v42 + 1;
                  v26 = (unsigned int *)(v42 + 1);
                }
                *v26 = v16;
                v27 = *(_QWORD *)(a1 + 112);
                ++v14;
                ++*((_DWORD *)v24 - 1);
                *(_BYTE *)(v27 + v17 + 32) = 1;
                if ( v15 == v14 )
                {
LABEL_30:
                  v1 = *(_QWORD *)(a1 + 192);
                  goto LABEL_11;
                }
                continue;
              }
            }
          }
          else if ( !v13 )
          {
            goto LABEL_11;
          }
        }
      }
      for ( ; v11 != v6; v6 += 2 )
      {
        v41 = *v6;
        if ( (unsigned __int64)*v6 > 1 )
        {
          if ( *(_DWORD *)(v41 + 12) == v7 && v4 == v41 )
          {
            i = v6;
            goto LABEL_14;
          }
        }
        else if ( !v41 )
        {
          break;
        }
      }
LABEL_11:
      v3 = (unsigned int)(*(_DWORD *)(a1 + 280) + 1);
      *(_DWORD *)(a1 + 280) = v3;
    }
    while ( v1 );
  }
}

