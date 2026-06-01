__int64 __fastcall sub_C49810(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // r12
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // edx
  _QWORD *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // rdx
  unsigned int v20; // r12d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ebp
  __int64 v27; // rax
  unsigned int v28; // ebp
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rsi
  __int64 v35; // rdi
  _QWORD *v37; // rax
  char **exception; // rbp
  __int64 v39; // [rsp+8h] [rbp-40h] BYREF
  __int64 v40; // [rsp+10h] [rbp-38h] BYREF
  __int64 v41; // [rsp+18h] [rbp-30h]

  v4 = a1[20];
  if ( !v4
    || (v5 = *(_DWORD *)(a2 + 16), v6 = *(_DWORD *)(v4 - 4), v5 >= v6)
    || (v7 = v6 - v5 - 1, (v8 = *(_QWORD *)(v4 + 8 * v7)) == 0) )
  {
    v16 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v16 )
    {
      v17 = *((_DWORD *)v16 - 1);
      if ( v17 == *((_DWORD *)v16 - 2) )
      {
        v20 = (3 * v17 + 1) >> 1;
        v21 = 8 * v20 + 8;
        if ( 8 * v17 + 8 >= (unsigned int)v21 || v17 >= v20 )
          goto LABEL_34;
        v22 = (unsigned int *)sub_186B300(v16 - 1, v21);
        v23 = v22[1];
        v16 = v22 + 2;
        *v22 = v20;
        a1[7] = v22 + 2;
        LODWORD(v22) = v23;
        v19 = &v16[v23];
        result = (unsigned int)((_DWORD)v22 + 1);
      }
      else
      {
        v18 = v17;
        result = v17 + 1;
        v19 = &v16[v18];
      }
    }
    else
    {
      v32 = (_QWORD *)sub_186B270(0x18u);
      v16 = v32 + 1;
      *v32 = 2;
      result = 1;
      a1[7] = v16;
      v19 = v16;
    }
    *v19 = a2;
    *((_DWORD *)v16 - 1) = result;
    return result;
  }
  if ( *(_WORD *)(v8 + 4) || (*(_BYTE *)(v8 + 30) & 1) == 0 )
  {
    v24 = *(_DWORD *)(a1[66] + 4 * v7);
    if ( v24 != v6 )
    {
      v25 = v6 - v24;
      v26 = v25;
      v27 = sub_1680FB0(a1[4], v8, v25);
      if ( v27 )
      {
        v40 = v27;
        ++*(_DWORD *)(v27 + 8);
        sub_C41DD0(a1 + 7, &v40);
      }
      else
      {
        v33 = a1[1];
        v40 = 0;
        v41 = v33;
        sub_1585D20(a1 + 21, v8, 0, v26, 0, &v40);
        v39 = v40;
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        sub_C41DD0(a1 + 7, &v39);
        sub_1584390(a1, v8, v26, v40);
        v34 = v40;
        if ( v40 )
        {
          v35 = v41;
          if ( (*(_DWORD *)(v40 + 8))-- == 1 )
            sub_15D7BC0(v35, v34);
        }
      }
      goto LABEL_10;
    }
  }
  v9 = (_QWORD *)a1[7];
  ++*(_DWORD *)(v8 + 8);
  if ( !v9 )
  {
    v37 = (_QWORD *)sub_186B270(0x18u);
    v9 = v37 + 1;
    *v37 = 2;
    v12 = 1;
    a1[7] = v9;
    v13 = v9;
    goto LABEL_9;
  }
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 == *((_DWORD *)v9 - 2) )
  {
    v28 = (3 * v10 + 1) >> 1;
    v29 = 8 * v28 + 8;
    if ( 8 * v10 + 8 < (unsigned int)v29 && v10 < v28 )
    {
      v30 = (unsigned int *)sub_186B300(v9 - 1, v29);
      v31 = v30[1];
      v9 = v30 + 2;
      *v30 = v28;
      a1[7] = v30 + 2;
      LODWORD(v30) = v31;
      v13 = &v9[v31];
      v12 = (_DWORD)v30 + 1;
      goto LABEL_9;
    }
LABEL_34:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C418A0(&v40, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v40);
    sub_233E40((__int64)&v40);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = v10;
  v12 = v10 + 1;
  v13 = &v9[v11];
LABEL_9:
  *v13 = v8;
  *((_DWORD *)v9 - 1) = v12;
LABEL_10:
  result = a1[5];
  if ( result )
  {
    v15 = *(_DWORD *)(result - 4);
    if ( v15 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
  }
  return result;
}

