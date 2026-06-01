__int64 __fastcall sub_DE0BF0(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // r10
  unsigned int v6; // r14d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // r9
  int v14; // esi
  unsigned int v15; // edx
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 *i; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  int v24; // edx
  unsigned int v25; // r15d
  __int64 v26; // rdx
  _QWORD *v27; // rsi
  __int64 v28; // rdi
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // eax
  char *v32; // rax
  char *v33; // r8
  __int64 v34; // rax
  char *v35; // r15
  __int64 v36; // r10
  unsigned int v37; // r11d
  char *v38; // r9
  char *v39; // rcx
  __int64 v40; // rax
  char *v41; // rdx
  char *v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v45; // r12
  unsigned __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v49; // eax
  unsigned int v50; // [rsp+8h] [rbp-80h]
  char *v51; // [rsp+8h] [rbp-80h]
  _BYTE v52[88]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 168);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 160);
    if ( !v5 )
      goto LABEL_25;
    v6 = *(_DWORD *)(v4 + 4LL * (unsigned int)(*(_DWORD *)(v4 - 4) - a2));
    v7 = *(_DWORD *)(v5 - 4);
    v8 = v7 - 1;
    if ( v6 >= v7 )
    {
      *(_DWORD *)(v5 - 4) = v6;
      goto LABEL_25;
    }
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 160);
    if ( !v5 )
      goto LABEL_26;
    v6 = *(_DWORD *)(4LL * (unsigned int)-a2);
    v49 = *(_DWORD *)(v5 - 4);
    v8 = v49 - 1;
    if ( v6 >= v49 )
    {
      *(_DWORD *)(v5 - 4) = v6;
      goto LABEL_26;
    }
  }
  v9 = 8LL * v8;
  v10 = 8 * (v8 - (unsigned __int64)(v8 - v6));
  while ( 1 )
  {
    v11 = *(_QWORD *)(v5 + v9);
    v12 = *(unsigned int *)(a1 + 144);
    v13 = *(__int64 **)(a1 + 136);
    v14 = *(_DWORD *)(v11 + 12);
    v15 = v12 - 1;
    v12 *= 8;
    v16 = (__int64 *)((char *)v13 + v12);
    v17 = 8LL * (v14 & v15);
    v18 = &v13[(unsigned __int64)v17 / 8];
    if ( v17 != v12 )
    {
      for ( i = &v13[(unsigned __int64)v17 / 8]; v16 != i; ++i )
      {
        v20 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v20 + 12) == v14 && v11 == v20 )
          {
LABEL_34:
            v27 = i + 1;
            v28 = *(unsigned int *)(a1 + 148);
            if ( v16 == i + 1 )
              v27 = *(_QWORD **)(a1 + 136);
            v29 = v28 - 1;
            if ( *v27 )
            {
              *i = 1;
              v30 = *(_DWORD *)(a1 + 152);
              *(_DWORD *)(a1 + 148) = v29;
              v31 = v30 + 1;
              if ( v29 < 0x40 )
                v29 = 64;
              *(_DWORD *)(a1 + 152) = v31;
              if ( v29 < v31 )
              {
                if ( !(unsigned __int8)sub_186AF10(v28) )
                {
                  v50 = *(_DWORD *)(a1 + 144);
                  v32 = (char *)sub_186B270(8LL * v50);
                  v33 = v32;
                  if ( v50 )
                    v33 = (char *)memset(v32, 0, 8LL * v50);
                  v34 = *(unsigned int *)(a1 + 144);
                  v35 = *(char **)(a1 + 136);
                  v36 = 8 * v34;
                  v37 = v34 - 1;
                  v38 = &v35[8 * v34];
                  v39 = &v33[8 * v34];
                  if ( v35 != v38 )
                  {
                    do
                    {
                      if ( *(_QWORD *)v35 > 1u )
                      {
                        v40 = 8LL * (*(_DWORD *)(*(_QWORD *)v35 + 12LL) & v37);
                        v41 = &v33[v40];
                        if ( v36 == v40 )
                        {
LABEL_70:
                          if ( v33 == v41 )
                          {
LABEL_75:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v42 = v33;
                          while ( *(_QWORD *)v42 )
                          {
                            v42 += 8;
                            if ( v41 == v42 )
                              goto LABEL_75;
                          }
                        }
                        else
                        {
                          v42 = &v33[v40];
                          while ( *(_QWORD *)v42 )
                          {
                            v42 += 8;
                            if ( v39 == v42 )
                              goto LABEL_70;
                          }
                        }
                        *(_QWORD *)v42 = *(_QWORD *)v35;
                      }
                      v35 += 8;
                    }
                    while ( v38 != v35 );
                    v38 = *(char **)(a1 + 136);
                  }
                  if ( v38 )
                  {
                    v51 = v33;
                    sub_186B220(v38);
                    v33 = v51;
                  }
                  *(_QWORD *)(a1 + 136) = v33;
                  *(_DWORD *)(a1 + 152) = 0;
                }
                v5 = *(_QWORD *)(a1 + 160);
              }
            }
            else
            {
              *i = 0;
              *(_DWORD *)(a1 + 148) = v29;
            }
            goto LABEL_12;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_12;
        }
      }
    }
    if ( v13 != v18 )
      break;
LABEL_12:
    v21 = v9 - 8;
    if ( v10 == v9 )
      goto LABEL_22;
LABEL_13:
    v9 = v21;
  }
  i = *(__int64 **)(a1 + 136);
  while ( 1 )
  {
    v22 = *i;
    if ( (unsigned __int64)*i <= 1 )
      break;
    if ( *(_DWORD *)(v22 + 12) == v14 && v11 == v22 )
      goto LABEL_34;
LABEL_18:
    if ( v18 == ++i )
      goto LABEL_12;
  }
  if ( v22 )
    goto LABEL_18;
  v21 = v9 - 8;
  if ( v10 != v9 )
    goto LABEL_13;
LABEL_22:
  v4 = *(_QWORD *)(a1 + 168);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = v6;
  if ( v4 )
LABEL_25:
    *(_DWORD *)(v4 - 4) -= a2;
LABEL_26:
  result = *(_QWORD *)(a1 + 184);
  if ( result )
    v24 = *(_DWORD *)(result - 4);
  else
    v24 = 0;
  v25 = *(_DWORD *)(result + 4LL * (unsigned int)(v24 - a2));
  v26 = *(_QWORD *)(a1 + 176);
  if ( v26 )
  {
    if ( v25 == *(_DWORD *)(v26 - 4) )
      goto LABEL_30;
LABEL_53:
    sub_15F01E0(v52, *(_QWORD *)a1);
    v26 = *(_QWORD *)(a1 + 176);
    if ( v26 )
    {
      v43 = *(_DWORD *)(v26 - 4);
      v44 = v43 - 1;
      if ( v25 >= v43 )
      {
        result = *(_QWORD *)(a1 + 184);
      }
      else
      {
        v45 = 8LL * v44;
        v46 = 8 * (v44 - (unsigned __int64)(v44 - v25));
        do
        {
          v47 = sub_15F0420(v52);
          sub_15FDF20(v47, v45 + *(_QWORD *)(a1 + 176));
          v48 = v45;
          v45 -= 8;
        }
        while ( v46 != v48 );
        v26 = *(_QWORD *)(a1 + 176);
        result = *(_QWORD *)(a1 + 184);
        if ( !v26 )
          goto LABEL_31;
      }
LABEL_30:
      *(_DWORD *)(v26 - 4) = v25;
    }
    else
    {
      result = *(_QWORD *)(a1 + 184);
    }
  }
  else if ( v25 )
  {
    goto LABEL_53;
  }
LABEL_31:
  if ( result )
    *(_DWORD *)(result - 4) -= a2;
  return result;
}

