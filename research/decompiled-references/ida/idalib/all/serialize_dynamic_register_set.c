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
  size_t v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // rbp
  size_t v16; // rax
  size_t v18; // rdx
  __int64 v19; // r14
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdx
  int *v22; // rax
  int *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  size_t v26; // rax
  unsigned __int64 v27; // r13
  unsigned __int64 *v28; // rbp
  char v29; // dl
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // r14
  size_t v33; // rax
  __int64 v34; // r14
  __int64 v35; // r15
  const char *v36; // rsi
  size_t v37; // rdx
  size_t v38; // rax
  const char *v39; // r14
  size_t v40; // rdx
  size_t v41; // rax
  size_t v42; // rax
  size_t v43; // rax
  int *v44; // rax
  unsigned __int64 v45; // rsi
  int *v46; // rdi
  unsigned __int64 v47; // [rsp+10h] [rbp-D8h]
  __int64 v48; // [rsp+20h] [rbp-C8h]
  __int64 v50; // [rsp+30h] [rbp-B8h] BYREF
  int v51; // [rsp+38h] [rbp-B0h] BYREF
  int *v52; // [rsp+40h] [rbp-A8h]
  int *v53; // [rsp+48h] [rbp-A0h]
  int *v54; // [rsp+50h] [rbp-98h]
  __int64 v55; // [rsp+58h] [rbp-90h]
  unsigned __int64 v56; // [rsp+60h] [rbp-88h] BYREF
  __int64 v57; // [rsp+68h] [rbp-80h] BYREF
  _QWORD *v58; // [rsp+70h] [rbp-78h]
  __int64 *v59; // [rsp+78h] [rbp-70h]
  __int64 *v60; // [rsp+80h] [rbp-68h]
  __int64 v61; // [rsp+88h] [rbp-60h]
  _BYTE v62[5]; // [rsp+9Eh] [rbp-4Ah] BYREF
  _BYTE v63[5]; // [rsp+A3h] [rbp-45h] BYREF
  unsigned __int64 v64[8]; // [rsp+A8h] [rbp-40h] BYREF

  v2 = *a2;
  v3 = (const char **)a2[6];
  v64[0] = __readfsqword(0x28u);
  v48 = v2;
  v47 = a2[1];
  if ( v2 != 0 && v47 != 0 && v3 )
  {
    v5 = pack_dd(v62, v63, 4294967041LL) - (_QWORD)v62;
    if ( v5 )
      sub_829D40(a1, v62, v5);
    if ( *v3 )
    {
      v6 = 0;
      do
        ++v6;
      while ( v3[v6] );
      v7 = pack_dd(v62, v63, (unsigned int)v6) - (_QWORD)v62;
      if ( v7 )
        sub_829D40(a1, v62, v7);
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
          v10 = &byte_22F0C30;
        }
        ++v3;
        sub_829D40(a1, v10, v9);
      }
      while ( v3 != v8 );
    }
    else
    {
      v18 = pack_dd(v62, v63, 0) - (_QWORD)v62;
      if ( v18 )
        sub_829D40(a1, v62, v18);
    }
    v19 = 0;
    v20 = 0;
    v51 = 0;
    v52 = nullptr;
    v53 = &v51;
    v54 = &v51;
    v55 = 0;
    do
    {
      v21 = *(_QWORD *)(v48 + 32 * v20 + 16);
      if ( v21 )
      {
        v22 = v52;
        v23 = &v51;
        v56 = *(_QWORD *)(v48 + 32 * v20 + 16);
        v57 = v19;
        if ( !v52 )
          goto LABEL_38;
        do
        {
          while ( 1 )
          {
            v24 = *((_QWORD *)v22 + 2);
            v25 = *((_QWORD *)v22 + 3);
            if ( *((_QWORD *)v22 + 4) < v21 )
              break;
            v23 = v22;
            v22 = *((int **)v22 + 2);
            if ( !v24 )
              goto LABEL_36;
          }
          v22 = *((int **)v22 + 3);
        }
        while ( v25 );
LABEL_36:
        if ( v23 == &v51 || v21 < *((_QWORD *)v23 + 4) )
        {
LABEL_38:
          sub_82BA20(&v50, v23, &v56);
          ++v19;
        }
      }
      ++v20;
    }
    while ( v20 < v47 );
    LODWORD(v57) = 0;
    v58 = nullptr;
    v59 = &v57;
    v60 = &v57;
    v61 = 0;
    v26 = pack_dd(v62, v63, (unsigned int)v19) - (_QWORD)v62;
    if ( v26 )
      sub_829D40(a1, v62, v26);
    v27 = 0;
    v28 = (unsigned __int64 *)(v48 + 16);
    do
    {
      if ( *v28 )
      {
        sub_82B900(&v56, v28);
        if ( v29 )
        {
          if ( (*((_BYTE *)v28 - 7) & 1) != 0 )
          {
            v31 = 1;
            v32 = 1;
          }
          else
          {
            v30 = *((_BYTE *)v28 - 3);
            if ( v30 == 1 )
            {
              v31 = 16;
              v32 = 16;
            }
            else
            {
              if ( v30 != 2 )
              {
                if ( !under_debugger )
                  interr(1783);
                BUG();
              }
              v31 = 32;
              v32 = 32;
            }
          }
          v33 = pack_dd(v62, v63, v31) - (_QWORD)v62;
          if ( v33 )
            sub_829D40(a1, v62, v33);
          v34 = 8 * v32;
          v35 = 0;
          do
          {
            if ( *(_QWORD *)(*v28 + v35) )
            {
              v36 = *(const char **)(*v28 + v35);
              v37 = strlen(v36) + 1;
            }
            else
            {
              v37 = 1;
              v36 = &byte_22F0C30;
            }
            sub_829D40(a1, v36, v37);
            v35 += 8;
          }
          while ( v35 != v34 );
        }
      }
      ++v27;
      v28 += 4;
    }
    while ( v27 < v47 );
    v38 = pack_dd(v62, v63, (unsigned int)v47) - (_QWORD)v62;
    if ( v38 )
      sub_829D40(a1, v62, v38);
    v15 = v48;
    v14 = 0;
    do
    {
      v39 = *(const char **)v15;
      if ( *(_QWORD *)v15 )
      {
        v40 = strlen(*(const char **)v15) + 1;
      }
      else
      {
        v40 = 1;
        v39 = &byte_22F0C30;
      }
      sub_829D40(a1, v39, v40);
      v41 = pack_dd(v62, v63, *(unsigned int *)(v15 + 8)) - (_QWORD)v62;
      if ( v41 )
        sub_829D40(a1, v62, v41);
      v42 = pack_dd(v62, v63, *(unsigned __int8 *)(v15 + 12)) - (_QWORD)v62;
      if ( v42 )
        sub_829D40(a1, v62, v42);
      v43 = pack_dd(v62, v63, *(unsigned __int8 *)(v15 + 13)) - (_QWORD)v62;
      if ( v43 )
        sub_829D40(a1, v62, v43);
      v44 = v52;
      v45 = *(_QWORD *)(v15 + 16);
      if ( v52 )
      {
        v46 = &v51;
        do
        {
          if ( *((_QWORD *)v44 + 4) >= v45 )
          {
            v46 = v44;
            v44 = *((int **)v44 + 2);
          }
          else
          {
            v44 = *((int **)v44 + 3);
          }
        }
        while ( v44 );
        v11 = 0;
        if ( v46 != &v51 && v45 >= *((_QWORD *)v46 + 4) )
          v11 = (unsigned int)*((_QWORD *)v46 + 5) + 1;
      }
      else
      {
        v11 = 0;
      }
      v12 = pack_dd(v62, v63, v11) - (_QWORD)v62;
      if ( v12 )
        sub_829D40(a1, v62, v12);
      v13 = pack_dq(v62, v64, *(_QWORD *)(v15 + 24) + 1LL) - (_QWORD)v62;
      if ( v13 )
        sub_829D40(a1, v62, v13);
      ++v14;
      v15 += 32;
    }
    while ( v14 < v47 );
    v16 = pack_dd(v62, v63, *((unsigned int *)a2 + 24)) - (_QWORD)v62;
    if ( v16 )
      sub_829D40(a1, v62, v16);
    sub_829E00(v58);
    sub_829FD0(v52);
  }
  return v64[0] - __readfsqword(0x28u);
}
