/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4790A0
// Address: 0x00000000004790A0

//----- (00000000004790A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_4790A0(char **a1, __int64 *a2)
{
  __int64 v2; // rcx
  const char **v3; // r14
  size_t v5; // rax
  __int64 v6; // rbp
  size_t v7; // rax
  const char **v8; // rbp
  size_t v9; // rdx
  char *v10; // r15
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r13
  unsigned __int64 *v31; // rbp
  char v32; // al
  __int64 v33; // rdx
  __int64 v34; // r14
  size_t v35; // rax
  __int64 v36; // r14
  __int64 v37; // r15
  const char *v38; // rsi
  size_t v39; // rdx
  size_t v40; // rax
  char *v41; // r14
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
    v5 = sub_47FB50(v64, (unsigned __int64)v65, 4294967041LL) - v64;
    if ( v5 )
      sub_4782C0(a1, v64, v5);
    if ( *v3 )
    {
      v6 = 0;
      do
        ++v6;
      while ( v3[v6] );
      v7 = sub_47FB50(v64, (unsigned __int64)v65, (unsigned int)v6) - v64;
      if ( v7 )
        sub_4782C0(a1, v64, v7);
      v8 = &v3[v6];
      do
      {
        v10 = (char *)*v3;
        if ( *v3 )
        {
          v9 = strlen(*v3) + 1;
        }
        else
        {
          v9 = 1;
          v10 = "";
        }
        ++v3;
        sub_4782C0(a1, v10, v9);
      }
      while ( v3 != v8 );
    }
    else
    {
      v18 = sub_47FB50(v64, (unsigned __int64)v65, 0) - v64;
      if ( v18 )
        sub_4782C0(a1, v64, v18);
    }
    v19 = 0;
    v20 = 0;
    v53 = 0;
    v54 = nullptr;
    v55 = &v53;
    v56 = &v53;
    v57 = 0;
    do
    {
      v21 = *(_QWORD *)(v50 + 32 * v20 + 16);
      if ( v21 )
      {
        v22 = v54;
        v23 = &v53;
        v58 = *(_QWORD *)(v50 + 32 * v20 + 16);
        v59 = v19;
        if ( !v54 )
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
        if ( v23 == &v53 || v21 < *((_QWORD *)v23 + 4) )
        {
LABEL_38:
          sub_478F20(&v52, v23, &v58);
          ++v19;
        }
      }
      ++v20;
    }
    while ( v20 < v49 );
    LODWORD(v59) = 0;
    v60 = nullptr;
    v61 = &v59;
    v62 = &v59;
    v63 = 0;
    v26 = sub_47FB50(v64, (unsigned __int64)v65, (unsigned int)v19) - v64;
    if ( v26 )
      sub_4782C0(a1, v64, v26);
    v30 = 0;
    v31 = (unsigned __int64 *)(v50 + 16);
    do
    {
      if ( *v31 )
      {
        sub_478E00(&v58, v31, v27, v28, v29);
        if ( (_BYTE)v27 )
        {
          if ( (*((_BYTE *)v31 - 7) & 1) != 0 )
          {
            v33 = 1;
            v34 = 1;
          }
          else
          {
            v32 = *((_BYTE *)v31 - 3);
            if ( v32 == 1 )
            {
              v33 = 16;
              v34 = 16;
            }
            else
            {
              if ( v32 != 2 )
              {
                if ( !byte_4C94E1 )
                  sub_481AC0(1783);
                BUG();
              }
              v33 = 32;
              v34 = 32;
            }
          }
          v35 = sub_47FB50(v64, (unsigned __int64)v65, v33) - v64;
          if ( v35 )
            sub_4782C0(a1, v64, v35);
          v36 = 8 * v34;
          v37 = 0;
          do
          {
            if ( *(_QWORD *)(*v31 + v37) )
            {
              v38 = *(const char **)(*v31 + v37);
              v39 = strlen(v38) + 1;
            }
            else
            {
              v39 = 1;
              v38 = "";
            }
            sub_4782C0(a1, v38, v39);
            v37 += 8;
          }
          while ( v37 != v36 );
        }
      }
      ++v30;
      v31 += 4;
    }
    while ( v30 < v49 );
    v40 = sub_47FB50(v64, (unsigned __int64)v65, (unsigned int)v49) - v64;
    if ( v40 )
      sub_4782C0(a1, v64, v40);
    v15 = v50;
    v14 = 0;
    do
    {
      v41 = *(char **)v15;
      if ( *(_QWORD *)v15 )
      {
        v42 = strlen(*(const char **)v15) + 1;
      }
      else
      {
        v42 = 1;
        v41 = "";
      }
      sub_4782C0(a1, v41, v42);
      v43 = sub_47FB50(v64, (unsigned __int64)v65, *(unsigned int *)(v15 + 8)) - v64;
      if ( v43 )
        sub_4782C0(a1, v64, v43);
      v44 = sub_47FB50(v64, (unsigned __int64)v65, *(unsigned __int8 *)(v15 + 12)) - v64;
      if ( v44 )
        sub_4782C0(a1, v64, v44);
      v45 = sub_47FB50(v64, (unsigned __int64)v65, *(unsigned __int8 *)(v15 + 13)) - v64;
      if ( v45 )
        sub_4782C0(a1, v64, v45);
      v46 = v54;
      v47 = *(_QWORD *)(v15 + 16);
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
      v12 = sub_47FB50(v64, (unsigned __int64)v65, v11) - v64;
      if ( v12 )
        sub_4782C0(a1, v64, v12);
      v13 = sub_47FC90(v64, (unsigned __int64)v66, *(_QWORD *)(v15 + 24) + 1LL) - v64;
      if ( v13 )
        sub_4782C0(a1, v64, v13);
      ++v14;
      v15 += 32;
    }
    while ( v14 < v49 );
    v16 = sub_47FB50(v64, (unsigned __int64)v65, *((unsigned int *)a2 + 24)) - v64;
    if ( v16 )
      sub_4782C0(a1, v64, v16);
    sub_478380(v60);
    sub_478550(v54);
  }
  return v66[0] - __readfsqword(0x28u);
}
// 479433: variable 'v27' is possibly undefined
// 479433: variable 'v28' is possibly undefined
// 479433: variable 'v29' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
