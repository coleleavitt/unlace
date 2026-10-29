__int64 __fastcall sub_D28610(_QWORD *a1, __int64 a2)
{
  char **exception; // rbp
  char **v3; // rbp
  char **v4; // rbp
  _QWORD *v7; // rdx
  unsigned int v8; // r13d
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r12
  _QWORD *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  _QWORD *v21; // rdx
  __int64 result; // rax
  int v23; // edx
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rdx
  unsigned int v28; // r12d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // rdx
  unsigned int v34; // ebp
  __int64 v35; // rax
  unsigned int v36; // r12d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned int v41; // ebp
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdi
  _QWORD *v50; // rax
  __int64 v51; // [rsp+8h] [rbp-50h] BYREF
  __int64 v52; // [rsp+10h] [rbp-48h] BYREF
  __int64 v53; // [rsp+18h] [rbp-40h]

  v7 = (_QWORD *)a1[11];
  v8 = *(_DWORD *)(a2 + 16);
  if ( v7 )
  {
    v9 = *((_DWORD *)v7 - 1);
    if ( v9 == *((_DWORD *)v7 - 2) )
    {
      v36 = (3 * v9 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v9 + 8 >= (unsigned int)v37 || v9 >= v36 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_D240F0(&v52, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v52);
        sub_233E40((__int64)&v52);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v38 = (unsigned int *)sub_186B300(v7 - 1, v37);
      v39 = v38[1];
      v7 = v38 + 2;
      *v38 = v36;
      a1[11] = v38 + 2;
      LODWORD(v38) = v39;
      v12 = &v7[v39];
      v11 = (_DWORD)v38 + 1;
    }
    else
    {
      v10 = v9;
      v11 = v9 + 1;
      v12 = &v7[v10];
    }
  }
  else
  {
    v40 = (_QWORD *)sub_186B270(0x18u);
    v7 = v40 + 1;
    *v40 = 2;
    v11 = 1;
    a1[11] = v7;
    v12 = v7;
  }
  *v12 = 0;
  *((_DWORD *)v7 - 1) = v11;
  v13 = a1[20];
  if ( v13 && (v14 = *(_DWORD *)(v13 - 4), v8 < v14) && (v15 = v14 - v8 - 1, (v16 = *(_QWORD *)(v13 + 8 * v15)) != 0) )
  {
    if ( !*(_WORD *)(v16 + 4) && (*(_BYTE *)(v16 + 30) & 1) != 0 || (v32 = *(_DWORD *)(a1[66] + 4 * v15), v32 == v14) )
    {
      v17 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v16 + 8);
      if ( v17 )
      {
        v18 = *((_DWORD *)v17 - 1);
        if ( v18 == *((_DWORD *)v17 - 2) )
        {
          v41 = (3 * v18 + 1) >> 1;
          v42 = 8 * v41 + 8;
          if ( 8 * v18 + 8 >= (unsigned int)v42 || v18 >= v41 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_D240F0(&v52, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v52);
            sub_233E40((__int64)&v52);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v43 = (unsigned int *)sub_186B300(v17 - 1, v42);
          v44 = v43[1];
          v17 = v43 + 2;
          *v43 = v41;
          a1[7] = v43 + 2;
          LODWORD(v43) = v44;
          v21 = &v17[v44];
          v20 = (_DWORD)v43 + 1;
        }
        else
        {
          v19 = v18;
          v20 = v18 + 1;
          v21 = &v17[v19];
        }
      }
      else
      {
        v50 = (_QWORD *)sub_186B270(0x18u);
        v17 = v50 + 1;
        *v50 = 2;
        v20 = 1;
        a1[7] = v17;
        v21 = v17;
      }
      *v21 = v16;
      *((_DWORD *)v17 - 1) = v20;
    }
    else
    {
      v33 = v14 - v32;
      v34 = v33;
      v35 = sub_1680FB0(a1[4], v16, v33);
      if ( v35 )
      {
        v52 = v35;
        ++*(_DWORD *)(v35 + 8);
        sub_D270D0(a1 + 7, &v52);
      }
      else
      {
        v46 = a1[1];
        v52 = 0;
        v53 = v46;
        sub_1585D20(a1 + 21, v16, 0, v34, 0, &v52);
        v51 = v52;
        if ( v52 )
          ++*(_DWORD *)(v52 + 8);
        sub_D270D0(a1 + 7, &v51);
        sub_1584390(a1, v16, v34, v52);
        v47 = v52;
        if ( v52 )
        {
          v48 = v53;
          if ( (*(_DWORD *)(v52 + 8))-- == 1 )
            sub_15D7BC0(v48, v47);
        }
      }
    }
    result = a1[5];
    if ( result )
    {
      v23 = *(_DWORD *)(result - 4);
      if ( v23 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v23 - 1) + 8) |= 2u;
    }
  }
  else
  {
    v24 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v28 = (3 * v25 + 1) >> 1;
        v29 = 8 * v28 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v29 || v25 >= v28 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(&v52, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, &v52);
          sub_233E40((__int64)&v52);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v30 = (unsigned int *)sub_186B300(v24 - 1, v29);
        v31 = v30[1];
        v24 = v30 + 2;
        *v30 = v28;
        a1[7] = v30 + 2;
        LODWORD(v30) = v31;
        v27 = &v24[v31];
        result = (unsigned int)((_DWORD)v30 + 1);
      }
      else
      {
        v26 = v25;
        result = v25 + 1;
        v27 = &v24[v26];
      }
    }
    else
    {
      v45 = (_QWORD *)sub_186B270(0x18u);
      v24 = v45 + 1;
      *v45 = 2;
      result = 1;
      a1[7] = v24;
      v27 = v24;
    }
    *v27 = a2;
    *((_DWORD *)v24 - 1) = result;
  }
  return result;
}

