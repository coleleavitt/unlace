__int64 __fastcall sub_AC9EC0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v3; // edx
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // esi
  __int64 *v8; // r8
  __int64 (__fastcall ***v9)(); // rbp
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rdi
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(); // rax
  __int64 (__fastcall **v18)(); // r13
  __int64 (__fastcall **j)(); // rbx
  __int64 (__fastcall *v20)(); // r14
  __int64 (__fastcall **v21)(); // rsi
  __int64 (__fastcall **v22)(); // rdi
  bool v23; // zf
  void ***v24; // rax
  void **v25; // rbx
  __int64 *v26; // r15
  __int64 *v27; // r14
  __int64 v28; // rcx
  __int64 *v29; // r13
  __int64 v30; // rsi
  __int64 *v31; // rax
  __int64 v32; // rdi
  void *v33; // rdi
  void *v34; // rdi
  void *v35; // rdi
  __int64 (__fastcall **v36)(); // rax
  __int64 (__fastcall **v37)(); // rsi
  __int64 (__fastcall **v38)(); // rdi
  __int64 (__fastcall **v39)(); // rsi
  __int64 (__fastcall **v40)(); // rdi
  __int64 (__fastcall **v41)(); // r13
  __int64 (__fastcall **v42)(); // rbx
  __int64 (__fastcall *v43)(); // r15
  __int64 v44; // rsi
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 (__fastcall **v48)(); // rdi
  __int64 (__fastcall **v49)(); // rsi
  __int64 (__fastcall **v50)(); // rdi
  __int64 v51; // rdx
  _QWORD *v52; // rsi
  unsigned int v53; // edx
  int v54; // eax
  unsigned int v55; // eax
  _OWORD *v56; // rbx
  _OWORD *v57; // rdx
  _OWORD *v58; // rax
  void *v59; // rdi
  void **v60; // [rsp+0h] [rbp-58h]
  void ***v61; // [rsp+0h] [rbp-58h]
  unsigned int v62; // [rsp+0h] [rbp-58h]
  __int64 v63; // [rsp+8h] [rbp-50h]
  unsigned __int64 v64; // [rsp+10h] [rbp-48h]

  result = *(_QWORD *)(a1 + 64);
  if ( !result )
    return result;
  v3 = *(_DWORD *)(result - 4);
  if ( a2 >= v3 )
    goto LABEL_80;
  v63 = 8LL * a2;
  v64 = 8 * (a2 + (unsigned __int64)(v3 - a2 - 1) + 1);
  do
  {
    v5 = *(_QWORD *)(result + v63);
    v6 = sub_AC93B0(a1, v5);
    v7 = *(_DWORD *)(v5 + 12);
    v8 = *(__int64 **)(a1 + 40);
    v9 = (__int64 (__fastcall ***)())v6;
    v10 = *(unsigned int *)(a1 + 48);
    v11 = v10 - 1;
    v10 *= 16;
    v12 = (__int64 *)((char *)v8 + v10);
    v13 = 16LL * (v7 & v11);
    v14 = &v8[(unsigned __int64)v13 / 8];
    if ( v13 != v10 )
    {
      for ( i = &v8[(unsigned __int64)v13 / 8]; v12 != i; i += 2 )
      {
        v16 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v16 + 12) == v7 && v5 == v16 )
          {
LABEL_91:
            v52 = i + 2;
            if ( v12 == i + 2 )
              v52 = *(_QWORD **)(a1 + 40);
            v53 = *(_DWORD *)(a1 + 52) - 1;
            if ( *v52 )
            {
              *i = 1;
              v54 = *(_DWORD *)(a1 + 56);
              *(_DWORD *)(a1 + 52) = v53;
              v55 = v54 + 1;
              if ( v53 < 0x40 )
                v53 = 64;
              *(_DWORD *)(a1 + 56) = v55;
              if ( v53 < v55 && !(unsigned __int8)sub_186AF10(v14) )
              {
                v62 = *(_DWORD *)(a1 + 48);
                v56 = (_OWORD *)sub_186B270(16LL * v62);
                v57 = v56;
                v58 = &v56[v62];
                if ( v62 )
                {
                  if ( ((16 * (_BYTE)v62) & 0x10) == 0 || (v57 = v56 + 1, *v56 = 0, v56 + 1 != v58) )
                  {
                    do
                    {
                      *v57 = 0;
                      v57 += 2;
                      *(v57 - 1) = 0;
                    }
                    while ( v57 != v58 );
                  }
                }
                sub_AD64E0(*(_QWORD *)(a1 + 40), *(unsigned int *)(a1 + 48), v56);
                v59 = *(void **)(a1 + 40);
                if ( v59 )
                  sub_186B220(v59);
                *(_QWORD *)(a1 + 40) = v56;
                *(_DWORD *)(a1 + 56) = 0;
              }
            }
            else
            {
              *i = 0;
              *(_DWORD *)(a1 + 52) = v53;
            }
            goto LABEL_11;
          }
        }
        else if ( !v16 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v8 != v14 )
    {
      for ( i = *(__int64 **)(a1 + 40); v14 != i; i += 2 )
      {
        v51 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v51 + 12) == v7 && v5 == v51 )
            goto LABEL_91;
        }
        else if ( !v51 )
        {
          break;
        }
      }
    }
LABEL_11:
    if ( !v9 )
      goto LABEL_78;
    v17 = **v9;
    if ( v17 != sub_ACC3A0 )
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)()))v17)(v9);
      goto LABEL_77;
    }
    v18 = v9[14];
    *v9 = &off_1C56BE0;
    if ( v18 )
    {
      for ( j = &v18[*((unsigned int *)v18 - 1)]; j != v18; ++v18 )
      {
        v20 = *v18;
        if ( *v18 )
        {
          (**(void (__fastcall ***)(__int64 (__fastcall *)()))v20)(*v18);
          sub_186B220(v20);
        }
      }
    }
    v21 = v9[9];
    if ( v21 )
    {
      v22 = v9[10];
      v23 = (*((_DWORD *)v21 + 2))-- == 1;
      if ( v23 )
        sub_15D7BC0(v22, v21);
    }
    v24 = (void ***)v9[15];
    v9[9] = nullptr;
    if ( !v24 )
      goto LABEL_51;
    v25 = *v24;
    if ( !*v24 )
      goto LABEL_49;
    v60 = &v25[*((unsigned int *)v25 - 1)];
    if ( v25 == v60 )
      goto LABEL_48;
    do
    {
      v26 = (__int64 *)*v25;
      if ( !*v25 )
        goto LABEL_45;
      v27 = (__int64 *)v26[1];
      v28 = 2LL * *((unsigned int *)v26 + 4);
      v29 = &v27[v28];
      if ( v27 != &v27[v28] )
      {
        while ( (unsigned __int64)*v27 <= 1 )
        {
          v27 += 2;
          if ( v29 == v27 )
            goto LABEL_38;
        }
        if ( v29 != v27 )
        {
          v30 = *v27;
          if ( *v27 )
          {
            while ( 1 )
            {
              v32 = *v26;
              v23 = (*(_DWORD *)(v30 + 8))-- == 1;
              if ( !v23 )
                break;
              sub_15D7BC0(v32, v30);
              v31 = v27 + 2;
              if ( v29 == v27 + 2 )
                goto LABEL_38;
LABEL_34:
              while ( 1 )
              {
                v30 = *v31;
                v27 = v31;
                if ( (unsigned __int64)*v31 > 1 )
                  break;
                v31 += 2;
                if ( v29 == v31 )
                  goto LABEL_38;
              }
              if ( v29 == v31 )
                goto LABEL_38;
            }
          }
          v31 = v27 + 2;
          if ( v29 == v27 + 2 )
            goto LABEL_38;
          goto LABEL_34;
        }
      }
LABEL_38:
      v33 = (void *)v26[9];
      if ( v33 )
        sub_186B220(v33);
      v34 = (void *)v26[4];
      if ( v34 )
        sub_186B220(v34);
      v35 = (void *)v26[1];
      if ( v35 )
        sub_186B220(v35);
      sub_186B220(v26);
LABEL_45:
      ++v25;
    }
    while ( v60 != v25 );
    v24 = (void ***)v9[15];
    if ( v24 )
    {
      v25 = *v24;
      if ( *v24 )
      {
LABEL_48:
        v61 = v24;
        sub_186B220(v25 - 1);
        v24 = v61;
      }
LABEL_49:
      sub_186B220(v24);
    }
    v9[15] = nullptr;
LABEL_51:
    v36 = v9[14];
    if ( v36 )
      sub_186B220(v36 - 1);
    v37 = v9[12];
    if ( v37 )
    {
      v38 = v9[13];
      v23 = (*((_DWORD *)v37 + 2))-- == 1;
      if ( v23 )
        sub_15D7BC0(v38, v37);
    }
    v39 = v9[9];
    *v9 = &off_1C612D0;
    if ( v39 )
    {
      v40 = v9[10];
      v23 = (*((_DWORD *)v39 + 2))-- == 1;
      if ( v23 )
        sub_15D7BC0(v40, v39);
    }
    v41 = v9[8];
    if ( v41 )
    {
      v42 = &v41[*((unsigned int *)v41 - 1)];
      if ( v41 == v42 )
        goto LABEL_71;
      do
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = *((_QWORD *)v43 + 3);
          if ( v44 )
          {
            v45 = *((_QWORD *)v43 + 4);
            v23 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v45, v44);
          }
          v46 = *((_QWORD *)v43 + 1);
          if ( v46 )
          {
            v47 = *((_QWORD *)v43 + 2);
            v23 = (*(_DWORD *)(v46 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v47, v46);
          }
          sub_186B220(v43);
        }
        ++v41;
      }
      while ( v42 != v41 );
      v42 = v9[8];
      if ( v42 )
      {
LABEL_71:
        *((_DWORD *)v42 - 1) = 0;
        sub_186B220(v42 - 1);
      }
    }
    v48 = v9[5];
    if ( v48 )
      sub_186B220(v48);
    v49 = v9[2];
    if ( v49 )
    {
      v50 = v9[3];
      v23 = (*((_DWORD *)v49 + 2))-- == 1;
      if ( v23 )
        sub_15D7BC0(v50, v49);
    }
LABEL_77:
    sub_186B220(v9);
LABEL_78:
    v63 += 8;
    result = *(_QWORD *)(a1 + 64);
  }
  while ( v64 != v63 );
  if ( result )
LABEL_80:
    *(_DWORD *)(result - 4) = a2;
  return result;
}

