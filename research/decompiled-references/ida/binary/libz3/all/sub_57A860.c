_QWORD *__fastcall sub_57A860(__int64 a1, _QWORD *a2, unsigned int a3, _DWORD *a4)
{
  char **v4; // r12
  char **v5; // r14
  char **exception; // rbp
  _QWORD *v7; // r14
  __int64 *v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  _QWORD *v21; // rbp
  unsigned int v22; // r14d
  unsigned int v23; // eax
  unsigned int v24; // r15d
  _QWORD *v25; // rsi
  unsigned int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  size_t v29; // rsi
  unsigned int *v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // r13d
  size_t v33; // rsi
  unsigned int *v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r12
  unsigned int v41; // edx
  _DWORD *v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rax
  unsigned int v45; // r13d
  size_t v46; // rsi
  unsigned int *v47; // rax
  __int64 v48; // rax
  int v49; // edx
  _QWORD *v50; // rax
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  unsigned int v55; // [rsp+8h] [rbp-90h]
  __int64 v56; // [rsp+8h] [rbp-90h]
  __int64 v57; // [rsp+8h] [rbp-90h]
  unsigned int v58; // [rsp+18h] [rbp-80h]
  _QWORD *v59; // [rsp+30h] [rbp-68h] BYREF
  __int64 v60; // [rsp+38h] [rbp-60h] BYREF
  __int64 v61[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = nullptr;
  sub_180C5A0(v61, "product_relation");
  if ( *(_QWORD *)(a2[1] + 16LL) == v61[0] )
  {
    v11 = nullptr;
    v12 = sub_5790D0(a2);
    v13 = v12[4];
    if ( v13 )
    {
      v14 = 0;
      do
      {
        if ( v14 >= *(_DWORD *)(v13 - 4) )
          break;
        v15 = sub_4C4920(*(_QWORD *)(a1 + 24), *(_QWORD *)(v13 + 8LL * v14));
        v16 = v15;
        if ( v11 )
        {
          v17 = *((_DWORD *)v11 - 1);
          if ( v17 == *((_DWORD *)v11 - 2) )
          {
            v28 = (3 * v17 + 1) >> 1;
            v29 = 8 * v28 + 8;
            if ( 8 * v17 + 8 >= (unsigned int)v29 || v17 >= v28 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v58 = (3 * v17 + 1) >> 1;
            v56 = v16;
            v30 = (unsigned int *)sub_186B300(v11 - 1, v29);
            v11 = (__int64 *)(v30 + 2);
            v16 = v56;
            *v30 = v58;
            LODWORD(v30) = v30[1];
            v20 = &v11[(unsigned int)v30];
            v19 = (_DWORD)v30 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v11[v18];
          }
        }
        else
        {
          v57 = v15;
          v50 = (_QWORD *)sub_186B270(0x18u);
          v16 = v57;
          v20 = v50 + 1;
          *v50 = 2;
          v19 = 1;
          v11 = v20;
        }
        *v20 = v16;
        ++v14;
        *((_DWORD *)v11 - 1) = v19;
        v13 = v12[4];
      }
      while ( v13 );
    }
    if ( v12[2] )
    {
      v59 = nullptr;
      sub_52CD90(&v59, v12 + 2);
      v21 = v59;
      if ( a3 )
      {
        if ( v59 )
        {
          v22 = *((_DWORD *)v59 - 1);
          v23 = *a4 + 1;
          v55 = v22 - a3;
          v24 = v22 < a3;
          if ( v23 < v22 )
          {
            v25 = &v59[v23];
            v26 = 1;
            if ( a3 != 1 && a4[1] == v23 )
              goto LABEL_20;
            while ( 1 )
            {
              v27 = v23++;
              v21[v27 - v26] = *v25;
              if ( v23 >= v22 )
                break;
              if ( a3 == v26 )
              {
                v51 = v23 - a3;
                do
                {
                  v52 = v23++;
                  v53 = v21[v52];
                  v54 = v51++;
                  v21[v54] = v53;
                }
                while ( v23 < v22 );
                break;
              }
              while ( 1 )
              {
                ++v25;
                if ( a3 == v26 || a4[v26] != v23 )
                  break;
LABEL_20:
                ++v23;
                ++v26;
                if ( v23 >= v22 )
                  goto LABEL_21;
              }
            }
          }
LABEL_21:
          if ( v22 >= a3 )
          {
            *((_DWORD *)v21 - 1) = v22 - a3;
            v7 = (_QWORD *)sub_186B270(0x18u);
            if ( v11 )
              v24 = *((_DWORD *)v11 - 1);
            goto LABEL_37;
          }
LABEL_32:
          while ( 1 )
          {
            v35 = *((_DWORD *)v21 - 2);
            if ( v35 >= v55 )
              break;
            v32 = (3 * v35 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v35 + 8 >= (unsigned int)v33 || v35 >= v32 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (unsigned int *)sub_186B300(v21 - 1, v33);
            *v34 = v32;
            v21 = v34 + 2;
          }
          *((_DWORD *)v21 - 1) = v55;
          v36 = 8LL * v22;
          v37 = 8LL * v55;
          if ( v36 != v37 )
            memset(&v21[(unsigned __int64)v36 / 8], 0, v37 - v36);
          v7 = (_QWORD *)sub_186B270(0x18u);
          if ( v11 )
            v24 = *((_DWORD *)v11 - 1);
          else
            v24 = 0;
LABEL_37:
          v59 = v21;
          v60 = 0;
          sub_52CD90(&v60, &v59);
          v7[2] = 0;
          *v7 = &off_1C51628;
          v7[1] = v60;
          if ( !v24 )
          {
            sub_186B220(v21 - 1);
            if ( !v11 )
              return v7;
            goto LABEL_47;
          }
          goto LABEL_38;
        }
LABEL_28:
        v55 = -a3;
        v31 = (_QWORD *)sub_186B270(0x18u);
        *v31 = 2;
        v21 = v31 + 1;
        v22 = 0;
        goto LABEL_32;
      }
      v7 = (_QWORD *)sub_186B270(0x18u);
      if ( v11 )
      {
        v24 = *((_DWORD *)v11 - 1);
        if ( v21 )
          goto LABEL_37;
LABEL_53:
        v7[1] = 0;
        v21 = nullptr;
        *v7 = &off_1C51628;
        v7[2] = 0;
        if ( !v24 )
        {
LABEL_47:
          sub_186B220(v11 - 1);
          return v7;
        }
LABEL_38:
        v38 = (_QWORD *)sub_186B270(0x18u);
        *v38 = 2;
        v39 = v38 + 1;
        v40 = 0;
        v41 = 1;
        v7[2] = v39;
        v42 = v39;
        while ( 1 )
        {
          v43 = v11[v40++];
          *v39 = v43;
          *(v42 - 1) = v41;
          if ( (unsigned int)v40 >= v24 )
            break;
          if ( *(v42 - 2) == v41 )
          {
            v45 = (3 * v41 + 1) >> 1;
            v46 = 8 * v45 + 8;
            if ( 8 * v41 + 8 >= (unsigned int)v46 || v41 >= v45 )
            {
              v4 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v61, "Overflow encountered when expanding vector");
              *v4 = (char *)off_1C63128;
              sub_2333C0(v4 + 1, v61);
              sub_233E40((__int64)v61);
              __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v47 = (unsigned int *)sub_186B300(v42 - 2, v46);
            v42 = v47 + 2;
            *v47 = v45;
            v48 = v47[1];
            v7[2] = v42;
            v49 = v48;
            v39 = &v42[2 * v48];
            v41 = v49 + 1;
          }
          else
          {
            v44 = v41++;
            v39 = &v42[2 * v44];
          }
        }
        if ( v21 )
          sub_186B220(v21 - 1);
        goto LABEL_47;
      }
      if ( v21 )
      {
        v24 = 0;
        goto LABEL_37;
      }
    }
    else
    {
      if ( a3 )
        goto LABEL_28;
      v7 = (_QWORD *)sub_186B270(0x18u);
      if ( v11 )
      {
        v24 = *((_DWORD *)v11 - 1);
        goto LABEL_53;
      }
    }
    v7[1] = 0;
    *v7 = &off_1C51628;
    v7[2] = 0;
  }
  return v7;
}

