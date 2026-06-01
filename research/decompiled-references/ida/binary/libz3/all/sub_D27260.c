__int64 __fastcall sub_D27260(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r12
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rdx
  __int64 result; // rax
  int v17; // edx
  _QWORD *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned int v22; // r12d
  size_t v23; // rsi
  unsigned int *v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rdx
  unsigned int v28; // ebp
  __int64 v29; // rax
  unsigned int v30; // ebp
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 v37; // rdi
  _QWORD *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-40h] BYREF
  __int64 v41; // [rsp+10h] [rbp-38h] BYREF
  __int64 v42; // [rsp+18h] [rbp-30h]

  v6 = a1[20];
  if ( v6
    && (v7 = *(_DWORD *)(a2 + 16), v8 = *(_DWORD *)(v6 - 4), v7 < v8)
    && (v9 = v8 - v7 - 1, (v10 = *(_QWORD *)(v6 + 8 * v9)) != 0) )
  {
    if ( !*(_WORD *)(v10 + 4) && (*(_BYTE *)(v10 + 30) & 1) != 0 || (v26 = *(_DWORD *)(a1[66] + 4 * v9), v26 == v8) )
    {
      v11 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v10 + 8);
      if ( v11 )
      {
        v12 = *((_DWORD *)v11 - 1);
        if ( v12 == *((_DWORD *)v11 - 2) )
        {
          v30 = (3 * v12 + 1) >> 1;
          v31 = 8 * v30 + 8;
          if ( 8 * v12 + 8 >= (unsigned int)v31 || v12 >= v30 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_D240F0(&v41, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v41);
            sub_233E40((__int64)&v41);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v32 = (unsigned int *)sub_186B300(v11 - 1, v31);
          v33 = v32[1];
          v11 = v32 + 2;
          *v32 = v30;
          a1[7] = v32 + 2;
          LODWORD(v32) = v33;
          v15 = &v11[v33];
          v14 = (_DWORD)v32 + 1;
        }
        else
        {
          v13 = v12;
          v14 = v12 + 1;
          v15 = &v11[v13];
        }
      }
      else
      {
        v39 = (_QWORD *)sub_186B270(0x18u);
        v11 = v39 + 1;
        *v39 = 2;
        v14 = 1;
        a1[7] = v11;
        v15 = v11;
      }
      *v15 = v10;
      *((_DWORD *)v11 - 1) = v14;
    }
    else
    {
      v27 = v8 - v26;
      v28 = v27;
      v29 = sub_1680FB0(a1[4], v10, v27);
      if ( v29 )
      {
        v41 = v29;
        ++*(_DWORD *)(v29 + 8);
        sub_D270D0(a1 + 7, &v41);
      }
      else
      {
        v35 = a1[1];
        v41 = 0;
        v42 = v35;
        sub_1585D20(a1 + 21, v10, 0, v28, 0, &v41);
        v40 = v41;
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        sub_D270D0(a1 + 7, &v40);
        sub_1584390(a1, v10, v28, v41);
        v36 = v41;
        if ( v41 )
        {
          v37 = v42;
          if ( (*(_DWORD *)(v41 + 8))-- == 1 )
            sub_15D7BC0(v37, v36);
        }
      }
    }
    result = a1[5];
    if ( result )
    {
      v17 = *(_DWORD *)(result - 4);
      if ( v17 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v17 - 1) + 8) |= 2u;
    }
  }
  else
  {
    v18 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v18 )
    {
      v19 = *((_DWORD *)v18 - 1);
      if ( v19 == *((_DWORD *)v18 - 2) )
      {
        v22 = (3 * v19 + 1) >> 1;
        v23 = 8 * v22 + 8;
        if ( 8 * v19 + 8 >= (unsigned int)v23 || v19 >= v22 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(&v41, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v41);
          sub_233E40((__int64)&v41);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v24 = (unsigned int *)sub_186B300(v18 - 1, v23);
        v25 = v24[1];
        v18 = v24 + 2;
        *v24 = v22;
        a1[7] = v24 + 2;
        LODWORD(v24) = v25;
        v21 = &v18[v25];
        result = (unsigned int)((_DWORD)v24 + 1);
      }
      else
      {
        v20 = v19;
        result = v19 + 1;
        v21 = &v18[v20];
      }
    }
    else
    {
      v34 = (_QWORD *)sub_186B270(0x18u);
      v18 = v34 + 1;
      *v34 = 2;
      result = 1;
      a1[7] = v18;
      v21 = v18;
    }
    *v21 = a2;
    *((_DWORD *)v18 - 1) = result;
  }
  return result;
}

