unsigned __int64 __fastcall serialize_dynamic_register_set(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rcx
  const char **v3; // r14
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  const char **v8; // rbp
  size_t v9; // rdx
  const char *v10; // r15
  __int64 v11; // rdx
  size_t v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  size_t v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // rbp
  size_t v18; // rax
  size_t v20; // rdx
  __int64 v21; // r14
  unsigned __int64 v22; // r13
  unsigned __int64 v23; // rdx
  int *v24; // rax
  int *v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  size_t v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 *v30; // rbp
  char v31; // dl
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r14
  size_t v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  const char *v38; // rsi
  size_t v39; // rdx
  size_t v40; // rax
  const char *v41; // r14
  size_t v42; // rdx
  size_t v43; // rax
  size_t v44; // rax
  size_t v45; // rax
  int *v46; // rax
  unsigned __int64 v47; // rsi
  int *v48; // rdi
  unsigned __int64 v49; // [rsp+10h] [rbp-D8h]
  __int64 v50; // [rsp+20h] [rbp-C8h]
  __int64 v52; // [rsp+30h] [rbp-B8h] BYREF
  int v53; // [rsp+38h] [rbp-B0h] BYREF
  int *v54; // [rsp+40h] [rbp-A8h]
  int *v55; // [rsp+48h] [rbp-A0h]
  int *v56; // [rsp+50h] [rbp-98h]
  __int64 v57; // [rsp+58h] [rbp-90h]
  unsigned __int64 v58; // [rsp+60h] [rbp-88h] BYREF
  __int64 v59; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v60; // [rsp+70h] [rbp-78h]
  __int64 *v61; // [rsp+78h] [rbp-70h]
  __int64 *v62; // [rsp+80h] [rbp-68h]
  __int64 v63; // [rsp+88h] [rbp-60h]
  _BYTE v64[5]; // [rsp+9Eh] [rbp-4Ah] BYREF
  _BYTE v65[5]; // [rsp+A3h] [rbp-45h] BYREF
  unsigned __int64 v66[8]; // [rsp+A8h] [rbp-40h] BYREF

  v2 = *a2;
  v3 = (const char **)a2[6];
  v66[0] = __readfsqword(0x28u);
  v50 = v2;
  v49 = a2[1];
  if ( v2 != 0 && v49 != 0 && v3 )
  {
    v5 = pack_dd(v64, v65, 4294967041LL) - (_QWORD)v64;
    if ( v5 )
      sub_806A00(a1, v64, v5);
    if ( *v3 )
    {
      v6 = 0;
      do
        ++v6;
      while ( v3[v6] );
      v7 = pack_dd(v64, v65, (unsigned int)v6) - (_QWORD)v64;
      if ( v7 )
        sub_806A00(a1, v64, v7);
      v8 = &v3[v6];
      do
      {
        v10 = *v3;
        if ( *v3 )
        {
          v9 = strlen(*v3) + 1;
        }
        else
        {
          v9 = 1;
          v10 = &byte_22CD811;
        }
        ++v3;
        sub_806A00(a1, v10, v9);
      }
      while ( v3 != v8 );
    }
    else
    {
      v20 = pack_dd(v64, v65, 0) - (_QWORD)v64;
      if ( v20 )
        sub_806A00(a1, v64, v20);
    }
    v21 = 0;
    v22 = 0;
    v53 = 0;
    v54 = nullptr;
    v55 = &v53;
    v56 = &v53;
    v57 = 0;
    do
    {
      v23 = *(_QWORD *)(v50 + 32 * v22 + 16);
      if ( v23 )
      {
        v24 = v54;
        v25 = &v53;
        v58 = *(_QWORD *)(v50 + 32 * v22 + 16);
        v59 = v21;
        if ( !v54 )
          goto LABEL_38;
        do
        {
          while ( 1 )
          {
            v26 = *((_QWORD *)v24 + 2);
            v27 = *((_QWORD *)v24 + 3);
            if ( *((_QWORD *)v24 + 4) < v23 )
              break;
            v25 = v24;
            v24 = *((int **)v24 + 2);
            if ( !v26 )
              goto LABEL_36;
          }
          v24 = *((int **)v24 + 3);
        }
        while ( v27 );
LABEL_36:
        if ( v25 == &v53 || v23 < *((_QWORD *)v25 + 4) )
        {
LABEL_38:
          sub_8086E0(&v52, v25, &v58);
          ++v21;
        }
      }
      ++v22;
    }
    while ( v22 < v49 );
    LODWORD(v59) = 0;
    v60 = nullptr;
    v61 = &v59;
    v62 = &v59;
    v63 = 0;
    v28 = pack_dd(v64, v65, (unsigned int)v21) - (_QWORD)v64;
    if ( v28 )
      sub_806A00(a1, v64, v28);
    v29 = 0;
    v30 = (unsigned __int64 *)(v50 + 16);
    do
    {
      if ( *v30 )
      {
        sub_8085C0(&v58, v30);
        if ( v31 )
        {
          if ( (*((_BYTE *)v30 - 7) & 1) != 0 )
          {
            v33 = 1;
            v34 = 1;
          }
          else
          {
            v32 = *((_BYTE *)v30 - 3);
            if ( v32 == 1 )
            {
              v33 = 16;
              v34 = 16;
            }
            else
            {
              if ( v32 != 2 )
              {
                if ( !under_debugger )
                  interr(1783);
                BUG();
              }
              v33 = 32;
              v34 = 32;
            }
          }
          v35 = pack_dd(v64, v65, v33) - (_QWORD)v64;
          if ( v35 )
            sub_806A00(a1, v64, v35);
          v36 = 8 * v34;
          v37 = 0;
          do
          {
            if ( *(_QWORD *)(*v30 + v37) )
            {
              v38 = *(const char **)(*v30 + v37);
              v39 = strlen(v38) + 1;
            }
            else
            {
              v39 = 1;
              v38 = &byte_22CD811;
            }
            sub_806A00(a1, v38, v39);
            v37 += 8;
          }
          while ( v37 != v36 );
        }
      }
      ++v29;
      v30 += 4;
    }
    while ( v29 < v49 );
    v40 = pack_dd(v64, v65, (unsigned int)v49) - (_QWORD)v64;
    if ( v40 )
      sub_806A00(a1, v64, v40);
    v17 = v50;
    v16 = 0;
    do
    {
      v41 = *(const char **)v17;
      if ( *(_QWORD *)v17 )
      {
        v42 = strlen(*(const char **)v17) + 1;
      }
      else
      {
        v42 = 1;
        v41 = &byte_22CD811;
      }
      sub_806A00(a1, v41, v42);
      v43 = pack_dd(v64, v65, *(unsigned int *)(v17 + 8)) - (_QWORD)v64;
      if ( v43 )
        sub_806A00(a1, v64, v43);
      v44 = pack_dd(v64, v65, *(unsigned __int8 *)(v17 + 12)) - (_QWORD)v64;
      if ( v44 )
        sub_806A00(a1, v64, v44);
      v45 = pack_dd(v64, v65, *(unsigned __int8 *)(v17 + 13)) - (_QWORD)v64;
      if ( v45 )
        sub_806A00(a1, v64, v45);
      v46 = v54;
      v47 = *(_QWORD *)(v17 + 16);
      if ( v54 )
      {
        v48 = &v53;
        do
        {
          if ( *((_QWORD *)v46 + 4) >= v47 )
          {
            v48 = v46;
            v46 = *((int **)v46 + 2);
          }
          else
          {
            v46 = *((int **)v46 + 3);
          }
        }
        while ( v46 );
        v11 = 0;
        if ( v48 != &v53 && v47 >= *((_QWORD *)v48 + 4) )
          v11 = (unsigned int)*((_QWORD *)v48 + 5) + 1;
      }
      else
      {
        v11 = 0;
      }
      v12 = pack_dd(v64, v65, v11) - (_QWORD)v64;
      if ( v12 )
        sub_806A00(a1, v64, v12);
      v15 = pack_dq(v64, v66, *(unsigned int *)(v17 + 24) + 1LL, v13, v14) - (_QWORD)v64;
      if ( v15 )
        sub_806A00(a1, v64, v15);
      ++v16;
      v17 += 32;
    }
    while ( v16 < v49 );
    v18 = pack_dd(v64, v65, *((unsigned int *)a2 + 24)) - (_QWORD)v64;
    if ( v18 )
      sub_806A00(a1, v64, v18);
    sub_806AC0(v60);
    sub_806C90(v54);
  }
  return v66[0] - __readfsqword(0x28u);
}

