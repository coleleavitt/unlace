__int64 *__fastcall sub_55A110(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *exception; // r12
  _QWORD *v5; // rcx
  void *v6; // r8
  __int64 v7; // rdx
  _QWORD *v8; // r12
  _QWORD *v9; // rcx
  void *v10; // r8
  __int64 v11; // rdx
  unsigned int v13; // edx
  __int64 v14; // rsi
  __int64 v16; // r15
  _QWORD *v17; // rbx
  __int64 v18; // r8
  int v19; // eax
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  int v28; // r14d
  __int64 v29; // r8
  int v30; // eax
  int v31; // r8d
  int v32; // r9d
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // r10d
  __int64 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v40; // rdi
  bool v41; // zf
  __int64 *v42; // r12
  unsigned __int64 v43; // r13
  __int64 v44; // rsi
  unsigned int v46; // ecx
  size_t v47; // rsi
  unsigned int *v48; // rax
  unsigned int v49; // ecx
  size_t v50; // rsi
  unsigned int v51; // r14d
  unsigned int *v52; // rax
  __int64 v53; // r10
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // [rsp+0h] [rbp-98h]
  __int64 *v57; // [rsp+8h] [rbp-90h]
  __int64 v58; // [rsp+10h] [rbp-88h]
  int v59; // [rsp+18h] [rbp-80h]
  unsigned int v60; // [rsp+1Ch] [rbp-7Ch]
  int v61; // [rsp+20h] [rbp-78h]
  char v62[8]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v63; // [rsp+30h] [rbp-68h]
  int v64; // [rsp+38h] [rbp-60h]
  _QWORD *v65; // [rsp+40h] [rbp-58h] BYREF
  void *v66; // [rsp+48h] [rbp-50h]
  _QWORD v67[9]; // [rsp+50h] [rbp-48h] BYREF

  a1[1] = a3;
  v63 = a3;
  v13 = *(_DWORD *)(a2 + 520);
  LODWORD(v56) = a2;
  v57 = a1;
  v14 = v13 >> 1;
  *a1 = 0;
  if ( v13 >> 1 )
  {
    v16 = 0;
    v17 = nullptr;
    do
    {
      while ( 1 )
      {
        v28 = ((*(_DWORD *)(a4 + 4LL * ((unsigned int)(2 * v16) >> 5)) & (1 << (2 * v16 + 1))) != 0)
            | (2 * ((*(_DWORD *)(a4 + 4LL * ((unsigned int)(2 * v16) >> 5)) & (1 << ((2 * v16) & 0x1F))) != 0));
        if ( v28 != 1 )
          break;
        v29 = *(_QWORD *)(a3 + 840);
        *(_QWORD *)v62 = 8 * v16 + 1;
        v30 = sub_15E3510(a3, v62, 0, 0, v29, 0);
        sub_15DC610(a3, v30, 0, 0, v31, v32, v56, (int)v57, v58, v59, v61, v62[0], v63, v64, (int)v65, v66);
        v33 = sub_15E1A70(a3);
        v34 = v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        if ( v17 )
        {
          v35 = *((_DWORD *)v17 - 1);
          if ( v35 == *((_DWORD *)v17 - 2) )
          {
            v49 = (3 * v35 + 1) >> 1;
            v50 = 8 * v49 + 8;
            v51 = v49;
            if ( 8 * v35 + 8 >= (unsigned int)v50 || v35 >= v49 )
            {
              exception = __cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v65, "Overflow encountered when expanding vector");
              v5 = v65;
              v6 = v66;
              exception[1] = exception + 3;
              *exception = off_1C63128;
              if ( v5 == v67 )
              {
                qmemcpy(exception + 3, v67, (unsigned int)((_DWORD)v6 + 1));
              }
              else
              {
                v7 = v67[0];
                exception[1] = v5;
                exception[3] = v7;
              }
              exception[2] = v6;
              v66 = nullptr;
              v65 = v67;
              LOBYTE(v67[0]) = 0;
              sub_233E40((__int64)&v65);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v58 = v33;
            v52 = (unsigned int *)sub_186B300(v17 - 1, v50);
            *v52 = v51;
            v17 = v52 + 2;
            v34 = v58;
            v53 = v52[1];
            v36 = (__int64 *)&v52[2 * v53 + 2];
            v28 = v53 + 1;
          }
          else
          {
            v28 = v35 + 1;
            v36 = &v17[v35];
          }
        }
        else
        {
          v58 = v33;
          v54 = (_QWORD *)sub_186B270(0x18u);
          v17 = v54 + 1;
          *v54 = 2;
          v34 = v58;
          v36 = v54 + 1;
        }
        *v36 = v34;
        ++v16;
        *((_DWORD *)v17 - 1) = v28;
        v13 = *(_DWORD *)(v56 + 520);
        if ( (unsigned int)v16 >= v13 >> 1 )
          goto LABEL_18;
      }
      if ( v28 == 2 )
      {
        v18 = *(_QWORD *)(a3 + 840);
        *(_QWORD *)v62 = 8 * v16 + 1;
        v19 = sub_15E3510(a3, v62, 0, 0, v18, 0);
        v22 = sub_15DC610(a3, v19, 0, 0, v20, v21, v56, (int)v57, v58, v59, v61, v62[0], v63, v64, (int)v65, v66);
        v23 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        if ( v17 )
        {
          v24 = *((_DWORD *)v17 - 1);
          if ( v24 == *((_DWORD *)v17 - 2) )
          {
            v46 = (3 * v24 + 1) >> 1;
            v47 = 8 * v46 + 8;
            if ( 8 * v24 + 8 >= (unsigned int)v47 || v24 >= v46 )
            {
              v8 = __cxa_allocate_exception(0x28u);
              sub_24ABB0((__int64 *)&v65, "Overflow encountered when expanding vector");
              v9 = v65;
              v10 = v66;
              v8[1] = v8 + 3;
              *v8 = off_1C63128;
              if ( v9 == v67 )
              {
                qmemcpy(v8 + 3, v67, (unsigned int)((_DWORD)v10 + 1));
              }
              else
              {
                v11 = v67[0];
                v8[1] = v9;
                v8[3] = v11;
              }
              v8[2] = v10;
              v65 = v67;
              v66 = nullptr;
              LOBYTE(v67[0]) = 0;
              sub_233E40((__int64)&v65);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v60 = (3 * v24 + 1) >> 1;
            v58 = v23;
            v48 = (unsigned int *)sub_186B300(v17 - 1, v47);
            v17 = v48 + 2;
            v23 = v58;
            *v48 = v60;
            LODWORD(v48) = v48[1];
            v27 = &v17[(unsigned int)v48];
            v26 = (_DWORD)v48 + 1;
          }
          else
          {
            v25 = v24;
            v26 = v24 + 1;
            v27 = &v17[v25];
          }
        }
        else
        {
          v58 = v22;
          v55 = (_QWORD *)sub_186B270(0x18u);
          v17 = v55 + 1;
          *v55 = 2;
          v23 = v58;
          v26 = 1;
          v27 = v17;
        }
        *v27 = v23;
        *((_DWORD *)v17 - 1) = v26;
        v13 = *(_DWORD *)(v56 + 520);
      }
      ++v16;
    }
    while ( (unsigned int)v16 < v13 >> 1 );
LABEL_18:
    if ( v17 )
      v14 = *((unsigned int *)v17 - 1);
    else
      v14 = 0;
  }
  else
  {
    v17 = nullptr;
  }
  v37 = sub_15EC1C0(a3, v14);
  v38 = v37;
  if ( v37 )
    ++*(_DWORD *)(v37 + 8);
  v39 = *v57;
  if ( *v57 )
  {
    v40 = v57[1];
    v41 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( v41 )
      sub_15D7BC0(v40, v39);
  }
  *v57 = v38;
  if ( v17 )
  {
    v42 = v17;
    v43 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
    if ( (unsigned __int64)v17 < v43 )
    {
      do
      {
        while ( 1 )
        {
          v44 = *v42;
          if ( *v42 )
          {
            v41 = (*(_DWORD *)(v44 + 8))-- == 1;
            if ( v41 )
              break;
          }
          if ( (unsigned __int64)++v42 >= v43 )
            goto LABEL_32;
        }
        ++v42;
        sub_15D7BC0(a3, v44);
      }
      while ( (unsigned __int64)v42 < v43 );
    }
LABEL_32:
    sub_186B220(v17 - 1);
  }
  return v57;
}

