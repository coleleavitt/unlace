__int64 __fastcall sub_595660(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 *v5; // r14
  __int64 *v6; // r15
  unsigned int v7; // r13d
  _QWORD *v8; // rax
  unsigned int v9; // r12d
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  int v16; // r12d
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned int v20; // edx
  __int64 result; // rax
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  int v25; // edx
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdi
  unsigned int v32; // edx
  int v33; // edx
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // r8
  _QWORD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  void *v40; // r14
  size_t v41; // rdx
  int v42; // eax
  __int64 v43; // r13
  _QWORD *v44; // rax
  _QWORD *v45; // r12
  _QWORD *v46; // rdx
  __int64 v47; // rax
  char *v48; // rdx
  unsigned int v49; // edi
  _QWORD *v50; // r15
  __int64 v51; // r13
  char *v52; // r14
  int v53; // ecx
  __int64 v54; // rdx
  _QWORD *v55; // rsi
  _QWORD *v56; // rdx
  __int64 v57; // rcx
  unsigned int v58; // eax
  char *v59; // r14
  char *v60; // r13
  __int64 v61; // rax
  char **exception; // rbx
  __int64 v63; // [rsp+8h] [rbp-80h]
  char *v64; // [rsp+8h] [rbp-80h]
  _QWORD *v65; // [rsp+18h] [rbp-70h]
  __int64 *v66[11]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 )
  {
    v4 = *((unsigned int *)v3 - 1);
    if ( !(_DWORD)v4 )
    {
      v3 = nullptr;
      v17 = 778;
      goto LABEL_12;
    }
    v5 = a2;
    v6 = &a2[v4];
    v7 = 2;
    v8 = (_QWORD *)sub_186B270(0x18u);
    v9 = 1;
    *v8 = 2;
    v10 = v8 + 1;
    v3 = v10;
    while ( 1 )
    {
      v11 = *v5++;
      *v10 = v11;
      *((_DWORD *)v3 - 1) = v9;
      if ( v6 == v5 )
        break;
      v7 = *((_DWORD *)v3 - 2);
      if ( v7 == v9 )
      {
        v7 = (3 * v7 + 1) >> 1;
        v13 = 8 * v7 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v13 || v9 >= v7 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v66, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v66);
          sub_233E40((__int64)v66);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(v3 - 1, v13);
        v3 = v14 + 2;
        *v14 = v7;
        v15 = v14[1];
        v16 = v15;
        v10 = &v3[v15];
        v9 = v16 + 1;
      }
      else
      {
        v12 = v9++;
        v10 = &v3[v12];
      }
    }
    if ( v9 )
    {
      v38 = sub_186B270(8LL * v7 + 8);
      v39 = *((unsigned int *)v3 - 1);
      *(_DWORD *)v38 = v7;
      v40 = (void *)v38;
      *(_DWORD *)(v38 + 4) = v9;
      v41 = 8 * v39;
      v66[0] = (__int64 *)(v38 + 8);
      if ( v41 <= 8 )
      {
        if ( v41 == 8 )
          *(_QWORD *)(v38 + 8) = *v3;
        v17 = sub_592970(v66, v9);
      }
      else
      {
        memcpy((void *)(v38 + 8), v3, v41);
        v17 = sub_592970(v66, v9);
      }
      sub_186B220(v40);
      goto LABEL_12;
    }
  }
  v17 = 778;
LABEL_12:
  v18 = *(unsigned int *)(a1 + 48);
  v19 = *(_QWORD *)(a1 + 40);
  v20 = v18 - 1;
  result = 16 * v18;
  v22 = v19 + result;
  v23 = 16LL * (v17 & v20);
  v24 = v19 + v23;
  if ( v23 == result )
  {
LABEL_32:
    if ( v19 != v24 )
    {
      result = *(_QWORD *)(a1 + 40);
      while ( 1 )
      {
        v33 = *(_DWORD *)(result + 4);
        if ( v33 == 2 )
        {
          if ( *(_DWORD *)result == v17 )
          {
            v34 = *(_QWORD **)(result + 8);
            if ( v34 )
            {
              v35 = *((unsigned int *)v34 - 1);
              if ( v3 )
              {
                if ( (_DWORD)v35 == *((_DWORD *)v3 - 1) )
                {
                  v36 = &v34[v35];
                  if ( v34 == v36 )
                    goto LABEL_25;
                  v37 = v3;
                  while ( *v34 == *v37 )
                  {
                    ++v34;
                    ++v37;
                    if ( v36 == v34 )
                      goto LABEL_25;
                  }
                }
              }
              else if ( !(_DWORD)v35 )
              {
                goto LABEL_25;
              }
            }
            else if ( !v3 || !*((_DWORD *)v3 - 1) )
            {
              goto LABEL_25;
            }
          }
        }
        else if ( !v33 )
        {
          goto LABEL_29;
        }
        result += 16;
        if ( v24 == result )
          goto LABEL_29;
      }
    }
    goto LABEL_29;
  }
  result = v19 + v23;
  while ( 1 )
  {
    v25 = *(_DWORD *)(result + 4);
    if ( v25 != 2 )
    {
      if ( !v25 )
        goto LABEL_29;
      goto LABEL_15;
    }
    if ( *(_DWORD *)result == v17 )
      break;
LABEL_15:
    result += 16;
    if ( v22 == result )
      goto LABEL_32;
  }
  v26 = *(_QWORD **)(result + 8);
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( v3 )
    {
      if ( (_DWORD)v27 == *((_DWORD *)v3 - 1) )
      {
        v28 = &v26[v27];
        if ( v26 == v28 )
          goto LABEL_25;
        v29 = v3;
        while ( *v26 == *v29 )
        {
          ++v26;
          ++v29;
          if ( v28 == v26 )
            goto LABEL_25;
        }
      }
    }
    else if ( !(_DWORD)v27 )
    {
      goto LABEL_25;
    }
    goto LABEL_15;
  }
  if ( v3 && *((_DWORD *)v3 - 1) )
    goto LABEL_15;
LABEL_25:
  v30 = result + 16;
  v31 = *(unsigned int *)(a1 + 52);
  if ( v22 == result + 16 )
    v30 = *(_QWORD *)(a1 + 40);
  v32 = v31 - 1;
  if ( !*(_DWORD *)(v30 + 4) )
  {
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(a1 + 52) = v32;
    goto LABEL_29;
  }
  *(_DWORD *)(result + 4) = 1;
  v42 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 52) = v32;
  result = (unsigned int)(v42 + 1);
  if ( v32 < 0x40 )
    v32 = 64;
  *(_DWORD *)(a1 + 56) = result;
  if ( v32 < (unsigned int)result )
  {
    result = sub_186AF10(v31);
    if ( !(_BYTE)result )
    {
      v43 = *(unsigned int *)(a1 + 48);
      v44 = (_QWORD *)sub_186B270(16 * v43);
      v45 = v44;
      v46 = &v44[2 * v43];
      if ( (_DWORD)v43 )
      {
        do
        {
          *v44 = 0;
          v44 += 2;
          *(v44 - 1) = 0;
        }
        while ( v44 != v46 );
      }
      v47 = *(unsigned int *)(a1 + 48);
      v48 = *(char **)(a1 + 40);
      v49 = v47 - 1;
      v50 = v48 + 8;
      v51 = 16 * v47;
      v52 = &v48[16 * v47];
      result = (__int64)&v45[2 * v47];
      v63 = result;
      if ( v48 == v52 )
      {
LABEL_83:
        if ( v48 )
        {
          v58 = *(_DWORD *)(a1 + 48);
          if ( v58 )
          {
            v59 = v48;
            v60 = &v48[16 * v58];
            do
            {
              while ( 1 )
              {
                v61 = *((_QWORD *)v59 + 1);
                if ( !v61 )
                  break;
                v59 += 16;
                v64 = v48;
                sub_186B220((void *)(v61 - 8));
                v48 = v64;
                if ( v59 == v60 )
                  goto LABEL_88;
              }
              v59 += 16;
            }
            while ( v59 != v60 );
          }
LABEL_88:
          result = sub_186B220(v48);
        }
        *(_QWORD *)(a1 + 40) = v45;
        *(_DWORD *)(a1 + 56) = 0;
        goto LABEL_29;
      }
      while ( 2 )
      {
        if ( *((_DWORD *)v50 - 1) == 2 )
        {
          v53 = *((_DWORD *)v50 - 2);
          v54 = 16LL * (v53 & v49);
          v55 = &v45[(unsigned __int64)v54 / 8];
          if ( v51 == v54 )
          {
LABEL_92:
            if ( v45 == v55 )
            {
LABEL_99:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v56 = v45;
            while ( *((_DWORD *)v56 + 1) )
            {
              v56 += 2;
              if ( v55 == v56 )
                goto LABEL_99;
            }
            *(_DWORD *)v56 = v53;
            *((_DWORD *)v56 + 1) = 2;
            if ( v50 != v56 + 1 )
            {
              v57 = v56[1];
              if ( v57 )
              {
LABEL_76:
                v65 = v56;
                sub_186B220((void *)(v57 - 8));
                v56 = v65;
              }
LABEL_77:
              v56[1] = 0;
              v56[1] = *v50;
              *v50 = 0;
            }
          }
          else
          {
            v56 = &v45[(unsigned __int64)v54 / 8];
            while ( *((_DWORD *)v56 + 1) )
            {
              v56 += 2;
              if ( (_QWORD *)v63 == v56 )
                goto LABEL_92;
            }
            *(_DWORD *)v56 = v53;
            *((_DWORD *)v56 + 1) = 2;
            if ( v50 != v56 + 1 )
            {
              v57 = v56[1];
              if ( v57 )
                goto LABEL_76;
              goto LABEL_77;
            }
          }
        }
        result = (__int64)(v50 + 1);
        if ( v52 == (char *)(v50 + 1) )
        {
          v48 = *(char **)(a1 + 40);
          goto LABEL_83;
        }
        v50 += 2;
        continue;
      }
    }
  }
LABEL_29:
  if ( v3 )
    return sub_186B220(v3 - 1);
  return result;
}

