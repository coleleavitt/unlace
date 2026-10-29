_QWORD *__fastcall sub_5FEED0(_QWORD *a1, _QWORD *a2, int a3, int a4, int a5, int a6)
{
  char **exception; // r12
  unsigned __int8 v9; // bl
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rbx
  bool v16; // zf
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rsi
  int v21; // eax
  _QWORD *v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v26; // r8d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // [rsp+0h] [rbp-B0h]
  unsigned int v34; // [rsp+Ch] [rbp-A4h]
  __int64 v35; // [rsp+10h] [rbp-A0h]
  __int64 v36; // [rsp+10h] [rbp-A0h]
  _BYTE v37[5]; // [rsp+1Bh] [rbp-95h]
  __int64 v38; // [rsp+28h] [rbp-88h] BYREF
  __int64 v39; // [rsp+30h] [rbp-80h] BYREF
  __int64 v40; // [rsp+38h] [rbp-78h]
  __int64 v41; // [rsp+40h] [rbp-70h] BYREF
  int v42; // [rsp+48h] [rbp-68h]
  __int64 v43; // [rsp+50h] [rbp-60h] BYREF
  int v44; // [rsp+58h] [rbp-58h]
  __int64 v45; // [rsp+60h] [rbp-50h] BYREF
  int v46; // [rsp+68h] [rbp-48h]

  v9 = a4;
  v10 = *a2;
  a1[1] = 0;
  v38 = 0;
  *a1 = v10;
  v33 = v10;
  v39 = 0;
  v40 = v10;
  sub_62B3F0(a3, v10, (unsigned int)&v38, a4, a5, a6);
  v11 = v38;
  v12 = 0;
  v37[4] = 0;
  *(_DWORD *)v37 = v9 ^ 1;
  if ( v38 )
  {
    v13 = *(_DWORD *)&v37[1];
    if ( *(_DWORD *)&v37[1] >= *(_DWORD *)(v38 - 4) )
    {
LABEL_15:
      v15 = v12;
    }
    else
    {
      while ( 1 )
      {
        v14 = sub_15DB5C0(*a2, v13, *(_QWORD *)(v11 + 8LL * v13));
        v15 = v14;
        if ( v14 )
          ++*(_DWORD *)(v14 + 8);
        if ( v12 )
        {
          v16 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v16 )
            sub_15D7BC0(v33, v12);
        }
        v41 = v15;
        v45 = 0;
        v46 = 0;
        v42 = v37[0];
        v43 = 0;
        v44 = 0;
        sub_FA4800(
          (_DWORD)a2 + 448,
          2,
          (_DWORD)a2 + 644,
          (unsigned int)&v41,
          (unsigned int)&v43,
          (unsigned int)&v45,
          (__int64)&v39);
        v17 = v39;
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v18 = (_QWORD *)a1[1];
        if ( v18 )
        {
          v19 = *((_DWORD *)v18 - 1);
          if ( v19 == *((_DWORD *)v18 - 2) )
          {
            v26 = (3 * v19 + 1) >> 1;
            v27 = 8 * v26 + 8;
            if ( 8 * v19 + 8 >= (unsigned int)v27 || v19 >= v26 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v45, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v45);
              sub_233E40((__int64)&v45);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v34 = (3 * v19 + 1) >> 1;
            v35 = v17;
            v28 = (unsigned int *)sub_186B300(v18 - 1, v27);
            v29 = v28[1];
            v18 = v28 + 2;
            a1[1] = v28 + 2;
            v17 = v35;
            *v28 = v34;
            LODWORD(v28) = v29;
            v22 = &v18[v29];
            v21 = (_DWORD)v28 + 1;
          }
          else
          {
            v20 = v19;
            v21 = v19 + 1;
            v22 = &v18[v20];
          }
        }
        else
        {
          v36 = v17;
          v30 = (_QWORD *)sub_186B270(0x18u);
          v18 = v30 + 1;
          *v30 = 2;
          v17 = v36;
          v21 = 1;
          a1[1] = v18;
          v22 = v18;
        }
        *v22 = v17;
        *((_DWORD *)v18 - 1) = v21;
        v11 = v38;
        ++*(_DWORD *)&v37[1];
        if ( !v38 )
          break;
        v12 = v15;
        v13 = *(_DWORD *)&v37[1];
        if ( *(_DWORD *)&v37[1] >= *(_DWORD *)(v38 - 4) )
          goto LABEL_15;
      }
    }
    v23 = v39;
    if ( v39 )
    {
      v24 = v40;
      v16 = (*(_DWORD *)(v39 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v24, v23);
    }
    if ( v15 )
    {
      v16 = (*(_DWORD *)(v15 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v33, v15);
    }
  }
  else
  {
    v31 = v39;
    if ( !v39 )
      return a1;
    v32 = v40;
    v16 = (*(_DWORD *)(v39 + 8))-- == 1;
    if ( !v16 )
      return a1;
    sub_15D7BC0(v32, v31);
  }
  if ( v38 )
    sub_186B220((void *)(v38 - 8));
  return a1;
}

