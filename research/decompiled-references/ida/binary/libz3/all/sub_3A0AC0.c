__int64 __fastcall sub_3A0AC0(__int64 a1, int a2, __int64 *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  int v7; // edx
  __int64 v8; // rdi
  __int64 v9; // r12
  unsigned int *v10; // rbx
  __int64 v11; // r15
  unsigned int v12; // eax
  __int64 v13; // rdx
  _DWORD *v14; // rsi
  unsigned int v15; // eax
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r9d
  __int64 v20; // r13
  int v21; // eax
  unsigned int v22; // r13d
  unsigned int v24; // ecx
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rdx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int *v30; // r10
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned int *v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rcx
  __int64 v39; // rsi
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // r12
  unsigned int *v43; // r14
  __int64 v44; // rsi
  _QWORD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // r13
  char **exception; // r12
  int v51; // [rsp+0h] [rbp-A0h]
  __int64 v52; // [rsp+0h] [rbp-A0h]
  int v53; // [rsp+8h] [rbp-98h]
  unsigned int v54; // [rsp+Ch] [rbp-94h]
  int v55; // [rsp+10h] [rbp-90h]
  __int64 v56; // [rsp+18h] [rbp-88h]
  __int64 v57; // [rsp+18h] [rbp-88h]
  _QWORD *v59; // [rsp+20h] [rbp-80h]
  _DWORD *ptr; // [rsp+28h] [rbp-78h]
  char *ptra; // [rsp+28h] [rbp-78h]
  unsigned int *ptrb; // [rsp+28h] [rbp-78h]
  __int64 v63; // [rsp+30h] [rbp-70h] BYREF
  int v64[2]; // [rsp+38h] [rbp-68h] BYREF
  __int64 v65; // [rsp+40h] [rbp-60h]
  unsigned int *v66; // [rsp+48h] [rbp-58h] BYREF
  __int64 v67[10]; // [rsp+50h] [rbp-50h] BYREF

  if ( a2 == 1 )
  {
    v6 = *a3;
    v7 = *(_DWORD *)(*a3 + 32);
    v63 = *(_QWORD *)(a1 + 8);
    v8 = v63;
    v51 = v63;
    v56 = v63;
    if ( v7 )
    {
      v9 = 0;
      v10 = nullptr;
      v11 = 0;
      ptr = nullptr;
      do
      {
        v17 = sub_15DB5C0(v8, (unsigned int)v9, *(_QWORD *)(v6 + 8LL * (unsigned int)v9 + 48));
        v67[0] = v17;
        if ( v17 )
          ++*(_DWORD *)(v17 + 8);
        *(_QWORD *)v64 = v11;
        sub_399930((unsigned int **)v64, v67);
        v20 = *(_QWORD *)(v6 + 8LL * (unsigned int)v9 + 48);
        v11 = *(_QWORD *)v64;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        if ( !v10 || (v21 = *(v10 - 1), v21 == *(v10 - 2)) )
        {
          v66 = v10;
          v65 = v56;
          sub_39BE00(&v66);
          v10 = v66;
          v56 = v65;
          v21 = *(v66 - 1);
        }
        *(_QWORD *)&v10[2 * v21] = v20;
        *(v10 - 1) = v21 + 1;
        if ( ptr )
        {
          v12 = *(ptr - 1);
          if ( v12 == *(ptr - 2) )
          {
            v24 = (3 * v12 + 1) >> 1;
            v25 = 8 * v24 + 8;
            if ( 8 * v12 + 8 >= (unsigned int)v25 || v12 >= v24 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_399470(v67, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = (3 * v12 + 1) >> 1;
            v26 = (unsigned int *)sub_186B300(ptr - 2, v25);
            v27 = v26[1];
            v14 = v26 + 2;
            ptr = v26 + 2;
            *v26 = v54;
            LODWORD(v26) = v27;
            v16 = &v14[2 * v27];
            v15 = (_DWORD)v26 + 1;
          }
          else
          {
            v13 = v12;
            v14 = ptr;
            v15 = v12 + 1;
            v16 = &ptr[2 * v13];
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0x18u);
          *v46 = 2;
          v16 = v46 + 1;
          ptr = v16;
          v15 = 1;
          v14 = v16;
        }
        *v16 = 8 * v9++ + 1;
        *(v14 - 1) = v15;
        v8 = *(_QWORD *)(a1 + 8);
      }
      while ( (unsigned int)v9 < *(_DWORD *)(v6 + 32) );
      v28 = *(v10 - 1) >> 1;
      if ( v28 )
      {
        v29 = *(v10 - 1) - 1;
        v30 = v10;
        v19 = v29 - v28;
        do
        {
          v31 = v29;
          v32 = *(_QWORD *)v30;
          --v29;
          v30 += 2;
          v33 = &v10[2 * v31];
          v18 = *(_QWORD *)v33;
          *((_QWORD *)v30 - 1) = *(_QWORD *)v33;
          *(_QWORD *)v33 = v32;
        }
        while ( v19 != v29 );
      }
      v34 = v15 >> 1;
      if ( v15 >> 1 )
      {
        v35 = v15 - 1;
        v36 = ptr;
        v19 = v35 - v34;
        do
        {
          v37 = v35--;
          v36 += 2;
          v38 = (__int64 *)&ptr[2 * v37];
          v39 = *((_QWORD *)v36 - 1);
          v18 = *v38;
          *((_QWORD *)v36 - 1) = *v38;
          *v38 = v39;
        }
        while ( v19 != v35 );
      }
      if ( v11 )
        v40 = *(_DWORD *)(v11 - 4);
      else
        v40 = 0;
      v41 = sub_15DC610(v8, v6, v40, v11, v18, v19, v51, v53, (int)v67, v56, a1, (char)ptr, v63, v64[0], v65, v66);
    }
    else
    {
      v11 = 0;
      v10 = nullptr;
      v41 = sub_15DC610(v63, v6, 0, 0, a5, a6, v63, v53, v55, v63, a1, 0, v63, v64[0], v65, v66);
    }
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    if ( v11 && *(_DWORD *)(v11 - 4) )
    {
      if ( v10 )
        v47 = *(v10 - 1);
      else
        v47 = 0;
      v48 = sub_15DB6A0(v59[1], 1, v47, v10, ptra, v41, 0, &qword_18D6CD0, &qword_18D6CD0, 0, 0, 0, 0);
      v49 = v48;
      if ( v48 )
        ++*(_DWORD *)(v48 + 8);
      sub_399450(v42, v52);
      v42 = v49;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v59 + 32LL))(v59, v42);
    if ( ptra )
      sub_186B220(ptra - 8);
    if ( v10 )
    {
      ptrb = v10;
      v43 = &v10[2 * *(v10 - 1)];
      if ( v10 < v43 )
      {
        do
        {
          while ( 1 )
          {
            v44 = *(_QWORD *)ptrb;
            if ( *(_QWORD *)ptrb )
            {
              if ( (*(_DWORD *)(v44 + 8))-- == 1 )
                break;
            }
            ptrb += 2;
            if ( ptrb >= v43 )
              goto LABEL_42;
          }
          sub_15D7BC0(v57, v44);
          ptrb += 2;
        }
        while ( ptrb < v43 );
      }
LABEL_42:
      sub_186B220(v10 - 2);
    }
    *(_QWORD *)v64 = v11;
    sub_2334C0(&v63);
    sub_399450(v42, v52);
  }
  else
  {
    return 0;
  }
  return v22;
}

