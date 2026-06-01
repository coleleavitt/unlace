__int64 __fastcall sub_A68D90(__int64 a1, double a2)
{
  unsigned int v2; // r12d
  char *v5; // rax
  unsigned int *v6; // r13
  char *v7; // rbx
  unsigned int *v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // r12
  char *v12; // rdi
  __int64 v13; // rax
  char *v14; // rsi
  char *i; // rax
  int v16; // edx
  __int64 v17; // rax
  unsigned int **v18; // rcx
  __int64 v19; // rax
  unsigned int **v20; // r12
  unsigned int **v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned int v25; // edx
  __int64 v26; // rdi
  __int64 v27; // rax
  char *v28; // rsi
  char *k; // rax
  int v30; // ecx
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned int *v33; // rax
  char *m; // rax
  int v35; // ecx
  char *j; // rax
  int v37; // edx
  unsigned int v38; // r10d
  size_t v39; // rsi
  unsigned int *v40; // rax
  _QWORD *v41; // rax
  char **exception; // r13
  unsigned int *v43; // [rsp+8h] [rbp-B0h]
  unsigned int *v44; // [rsp+18h] [rbp-A0h]
  unsigned int v45; // [rsp+20h] [rbp-98h]
  unsigned int v46; // [rsp+24h] [rbp-94h]
  unsigned int v47; // [rsp+30h] [rbp-88h] BYREF
  unsigned int v48; // [rsp+34h] [rbp-84h] BYREF
  unsigned int *v49; // [rsp+38h] [rbp-80h] BYREF
  char *v50; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+4Ch] [rbp-6Ch]
  __int64 v53[11]; // [rsp+60h] [rbp-58h] BYREF

  v2 = 1;
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 464) + 145LL) )
    return v2;
  v5 = (char *)sub_186B270(0x40u);
  v6 = *(unsigned int **)(a1 + 824);
  v52 = 0;
  *((_DWORD *)v5 + 1) = 0x80000000;
  v7 = v5;
  *((_DWORD *)v5 + 3) = 0x80000000;
  *((_DWORD *)v5 + 5) = 0x80000000;
  *((_DWORD *)v5 + 7) = 0x80000000;
  *((_DWORD *)v5 + 9) = 0x80000000;
  *((_DWORD *)v5 + 11) = 0x80000000;
  *((_DWORD *)v5 + 13) = 0x80000000;
  *((_DWORD *)v5 + 15) = 0x80000000;
  if ( !v6 || (v43 = v6, v8 = nullptr, v9 = 8, v44 = &v6[*(v6 - 1)], v44 == v6) )
  {
    v49 = nullptr;
    v2 = sub_A68A30(a1, &v49, a2);
LABEL_34:
    sub_186B220(v7);
    return v2;
  }
  do
  {
    v10 = 8LL * v9;
    v12 = &v7[v10];
    v47 = *v43;
    v11 = v47;
    v13 = 8LL * (v47 & (v9 - 1));
    v14 = &v7[v13];
    if ( v13 != v10 )
    {
      for ( i = &v7[v13]; v12 != i; i += 8 )
      {
        v16 = *((_DWORD *)i + 1);
        if ( v16 + 0x80000000 > 1 )
        {
          if ( *(_DWORD *)i == v47 && v47 == v16 )
            goto LABEL_13;
        }
        else if ( v16 == 0x80000000 )
        {
          goto LABEL_12;
        }
      }
    }
    if ( v7 != v14 )
    {
      for ( j = v7; v14 != j; j += 8 )
      {
        v37 = *((_DWORD *)j + 1);
        if ( v37 + 0x80000000 > 1 )
        {
          if ( *(_DWORD *)j == v47 && v47 == v37 )
            goto LABEL_13;
        }
        else if ( v37 == 0x80000000 )
        {
          break;
        }
      }
    }
LABEL_12:
    v48 = v47;
    v50 = v7;
    v51 = v9;
    sub_9E1E20((__int64)&v50, (int *)&v48);
    v49 = v8;
    v7 = v50;
    v9 = v51;
    sub_98D100(&v49, &v47);
    v8 = v49;
LABEL_13:
    v17 = **(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * v11);
    v18 = (unsigned int **)(v17 + 32);
    v19 = *(unsigned int *)(v17 + 24);
    v20 = &v18[v19];
    if ( v19 * 8 )
    {
      v21 = v18;
      do
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
        if ( v22 )
        {
          v23 = **v21;
          if ( (unsigned int)v23 < *(_DWORD *)(v22 - 4) )
          {
            v24 = *(_QWORD *)(v22 + 8 * v23);
            if ( v24 )
            {
              v25 = sub_B39350(v24, *(unsigned int *)(a1 + 8));
              v26 = 8LL * v9;
              v27 = 8LL * (v25 & (v9 - 1));
              v28 = &v7[v27];
              if ( v27 != v26 )
              {
                for ( k = &v7[v27]; &v7[v26] != k; k += 8 )
                {
                  v30 = *((_DWORD *)k + 1);
                  if ( v30 + 0x80000000 > 1 )
                  {
                    if ( *(_DWORD *)k == v25 && v25 == v30 )
                      goto LABEL_29;
                  }
                  else if ( v30 == 0x80000000 )
                  {
                    goto LABEL_25;
                  }
                }
              }
              if ( v7 != v28 )
              {
                for ( m = v7; v28 != m; m += 8 )
                {
                  v35 = *((_DWORD *)m + 1);
                  if ( v35 + 0x80000000 > 1 )
                  {
                    if ( *(_DWORD *)m == v25 && v25 == v35 )
                      goto LABEL_29;
                  }
                  else if ( v35 == 0x80000000 )
                  {
                    break;
                  }
                }
              }
LABEL_25:
              LODWORD(v53[0]) = v25;
              v45 = v25;
              v50 = v7;
              v51 = v9;
              sub_9E1E20((__int64)&v50, (int *)v53);
              v31 = v45;
              v7 = v50;
              v9 = v51;
              if ( v8 )
              {
                v32 = *(v8 - 1);
                if ( (_DWORD)v32 == *(v8 - 2) )
                {
                  v38 = (unsigned int)(3 * v32 + 1) >> 1;
                  v39 = 4 * v38 + 8;
                  if ( 4 * (int)v32 + 8 >= (unsigned int)v39 || (unsigned int)v32 >= v38 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_98B3B0(v53, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v53);
                    sub_233E40((__int64)v53);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v46 = (unsigned int)(3 * v32 + 1) >> 1;
                  v40 = (unsigned int *)sub_186B300(v8 - 2, v39);
                  v8 = v40 + 2;
                  v31 = v45;
                  *v40 = v46;
                  v33 = &v40[v40[1] + 2];
                }
                else
                {
                  v33 = &v8[v32];
                }
              }
              else
              {
                v41 = (_QWORD *)sub_186B270(0x10u);
                v31 = v45;
                v8 = (unsigned int *)(v41 + 1);
                *v41 = 2;
                v33 = (unsigned int *)(v41 + 1);
              }
              *v33 = v31;
              ++*(v8 - 1);
            }
          }
        }
LABEL_29:
        ++v21;
      }
      while ( v20 != v21 );
    }
    ++v43;
  }
  while ( v44 != v43 );
  v49 = v8;
  v2 = sub_A68A30(a1, &v49, a2);
  if ( v8 )
    sub_186B220(v8 - 2);
  if ( v7 )
    goto LABEL_34;
  return v2;
}

