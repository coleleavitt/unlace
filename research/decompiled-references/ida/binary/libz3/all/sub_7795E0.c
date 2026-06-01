__int64 __fastcall sub_7795E0(_QWORD *a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v6; // rax
  int v7; // r8d
  int v8; // r9d
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned int v15; // eax
  unsigned int v16; // edx
  size_t v17; // rsi
  unsigned int v18; // r13d
  unsigned int *v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rsi
  bool v23; // zf
  __int64 *v24; // rbp
  unsigned __int64 v25; // r12
  _QWORD *v26; // rbp
  _QWORD *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  _QWORD *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  char **exception; // r12
  __int64 v35; // [rsp+0h] [rbp-88h]
  __int64 *v36; // [rsp+8h] [rbp-80h]
  int v37; // [rsp+10h] [rbp-78h]
  int v38; // [rsp+18h] [rbp-70h]
  int v39; // [rsp+20h] [rbp-68h]
  char v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+38h] [rbp-50h]
  int v43; // [rsp+40h] [rbp-48h]
  void *v44; // [rsp+48h] [rbp-40h]

  result = a1[5];
  LODWORD(v36) = (_DWORD)a2;
  if ( result )
  {
    v3 = *(unsigned int *)(result - 4);
    if ( (_DWORD)v3 )
    {
      v4 = *a2;
      v35 = a1[4];
      v39 = v35;
      if ( *a2 )
        ++*(_DWORD *)(v4 + 8);
      v6 = (_QWORD *)sub_186B270(0x18u);
      v6[1] = v4;
      v9 = v6 + 1;
      v10 = 8 * v3;
      v11 = 0;
      *v6 = 0x100000002LL;
      do
      {
        v12 = a1[4];
        sub_15DC610(v12, *(_QWORD *)(a1[5] + v11), 0, 0, v7, v8, v35, (int)v36, v37, v38, v39, v40, v41, v42, v43, v44);
        v13 = sub_15E1B70(v12);
        v14 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v15 = *((_DWORD *)v9 - 1);
        if ( v15 == *((_DWORD *)v9 - 2) )
        {
          v16 = (3 * v15 + 1) >> 1;
          v17 = 8 * v16 + 8;
          v18 = v16;
          if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v41, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v41);
            sub_233E40((__int64)&v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v19 = (unsigned int *)sub_186B300(v9 - 1, v17);
          *v19 = v18;
          v9 = v19 + 2;
          v15 = v19[1];
        }
        v11 += 8;
        v9[v15] = v14;
        *((_DWORD *)v9 - 1) = v15 + 1;
      }
      while ( v11 != v10 );
      v26 = (_QWORD *)a1[5];
      if ( v26 )
      {
        v27 = &v26[*((unsigned int *)v26 - 1)];
        if ( v26 >= v27 )
          goto LABEL_30;
        do
        {
          while ( 1 )
          {
            v28 = *v26;
            if ( *v26 )
            {
              v29 = a1[4];
              v23 = (*(_DWORD *)(v28 + 8))-- == 1;
              if ( v23 )
                break;
            }
            if ( ++v26 >= v27 )
              goto LABEL_29;
          }
          sub_15D7BC0(v29, v28);
          ++v26;
        }
        while ( v26 < v27 );
LABEL_29:
        v26 = (_QWORD *)a1[5];
        if ( v26 )
LABEL_30:
          *((_DWORD *)v26 - 1) = 0;
      }
      v20 = (_QWORD *)a1[7];
      if ( v20 )
      {
        v30 = &v20[*((unsigned int *)v20 - 1)];
        if ( v20 >= v30 )
          goto LABEL_14;
        do
        {
          v31 = *v20;
          if ( *v20 )
          {
            v32 = a1[6];
            v23 = (*(_DWORD *)(v31 + 8))-- == 1;
            if ( v23 )
              sub_15D7BC0(v32, v31);
          }
          ++v20;
        }
        while ( v20 < v30 );
        v20 = (_QWORD *)a1[7];
        if ( v20 )
LABEL_14:
          *((_DWORD *)v20 - 1) = 0;
      }
      v21 = sub_15EC1C0(v35, *((unsigned int *)v9 - 1));
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      v22 = *v36;
      *v36 = v21;
      if ( v22 && (v23 = *(_DWORD *)(v22 + 8) == 1, --*(_DWORD *)(v22 + 8), v23) )
      {
        v24 = v9;
        sub_15D7BC0(v35, v22);
        v25 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
        if ( (unsigned __int64)v9 >= v25 )
          return sub_186B220(v9 - 1);
      }
      else
      {
        v24 = v9;
        v25 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
        if ( (unsigned __int64)v9 >= v25 )
          return sub_186B220(v9 - 1);
      }
      do
      {
        v33 = *v24;
        if ( *v24 )
        {
          v23 = (*(_DWORD *)(v33 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v35, v33);
        }
        ++v24;
      }
      while ( (unsigned __int64)v24 < v25 );
      return sub_186B220(v9 - 1);
    }
  }
  return result;
}

