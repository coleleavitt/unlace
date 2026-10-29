__int64 __fastcall sub_CFE780(_QWORD *a1, __int64 a2)
{
  char **v2; // rbp
  char **exception; // rbp
  _QWORD *v6; // rdx
  unsigned int v7; // r13d
  unsigned int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // r12
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
  unsigned int v30; // r12d
  size_t v31; // rsi
  unsigned int *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  __int64 v38; // [rsp+10h] [rbp-48h] BYREF
  __int64 v39; // [rsp+18h] [rbp-40h]

  v6 = (_QWORD *)a1[11];
  v7 = *(_DWORD *)(a2 + 16);
  if ( v6 )
  {
    v8 = *((_DWORD *)v6 - 1);
    if ( v8 == *((_DWORD *)v6 - 2) )
    {
      v30 = (3 * v8 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v8 + 8 >= (unsigned int)v31 || v8 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_CF7210(&v38, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v38);
        sub_233E40((__int64)&v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v6 - 1, v31);
      v33 = v32[1];
      v6 = v32 + 2;
      *v32 = v30;
      a1[11] = v32 + 2;
      LODWORD(v32) = v33;
      v11 = &v6[v33];
      v10 = (_DWORD)v32 + 1;
    }
    else
    {
      v9 = v8;
      v10 = v8 + 1;
      v11 = &v6[v9];
    }
  }
  else
  {
    v34 = (_QWORD *)sub_186B270(0x18u);
    v6 = v34 + 1;
    *v34 = 2;
    v10 = 1;
    a1[11] = v6;
    v11 = v6;
  }
  *v11 = 0;
  *((_DWORD *)v6 - 1) = v10;
  v12 = a1[20];
  if ( v12 && (v13 = *(_DWORD *)(v12 - 4), v7 < v13) && (v14 = v13 - v7 - 1, (v15 = *(_QWORD *)(v12 + 8 * v14)) != 0) )
  {
    if ( !*(_WORD *)(v15 + 4) && (*(_BYTE *)(v15 + 30) & 1) != 0 || (v26 = *(_DWORD *)(a1[66] + 4 * v14), v26 == v13) )
    {
      v38 = v15;
      ++*(_DWORD *)(v15 + 8);
      sub_CF8D70(a1 + 7, &v38);
    }
    else
    {
      v27 = v13 - v26;
      v28 = v27;
      v29 = sub_1680FB0(a1[4], v15, v27);
      if ( v29 )
      {
        v38 = v29;
        ++*(_DWORD *)(v29 + 8);
        sub_CF8D70(a1 + 7, &v38);
      }
      else
      {
        v36 = a1[1];
        v38 = 0;
        v39 = v36;
        sub_1585D20(a1 + 21, v15, 0, v28, 0, &v38);
        v37 = v38;
        if ( v38 )
          ++*(_DWORD *)(v38 + 8);
        sub_CF8D70(a1 + 7, &v37);
        sub_1584390(a1, v15, v28, v38);
        sub_CF71F0(v38, v39);
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
          sub_CF7210(&v38, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, &v38);
          sub_233E40((__int64)&v38);
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
      v35 = (_QWORD *)sub_186B270(0x18u);
      v18 = v35 + 1;
      *v35 = 2;
      result = 1;
      a1[7] = v18;
      v21 = v18;
    }
    *v21 = a2;
    *((_DWORD *)v18 - 1) = result;
  }
  return result;
}

