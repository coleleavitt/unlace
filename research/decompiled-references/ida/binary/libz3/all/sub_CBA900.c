__int64 __fastcall sub_CBA900(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdx
  unsigned int v5; // r13d
  unsigned int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // r12
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
  unsigned int v28; // r12d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  char **exception; // rbp
  __int64 v36; // [rsp+8h] [rbp-50h] BYREF
  __int64 v37; // [rsp+10h] [rbp-48h] BYREF
  __int64 v38; // [rsp+18h] [rbp-40h]

  v4 = (_QWORD *)a1[11];
  v5 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    if ( v6 == *((_DWORD *)v4 - 2) )
    {
      v28 = (3 * v6 + 1) >> 1;
      v29 = 8 * v28 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v29 || v6 >= v28 )
        goto LABEL_32;
      v30 = (unsigned int *)sub_186B300(v4 - 1, v29);
      v31 = v30[1];
      v4 = v30 + 2;
      *v30 = v28;
      a1[11] = v30 + 2;
      LODWORD(v30) = v31;
      v9 = &v4[v31];
      v8 = (_DWORD)v30 + 1;
    }
    else
    {
      v7 = v6;
      v8 = v6 + 1;
      v9 = &v4[v7];
    }
  }
  else
  {
    v32 = (_QWORD *)sub_186B270(0x18u);
    v4 = v32 + 1;
    *v32 = 2;
    v8 = 1;
    a1[11] = v4;
    v9 = v4;
  }
  *v9 = 0;
  *((_DWORD *)v4 - 1) = v8;
  v10 = a1[20];
  if ( !v10 || (v11 = *(_DWORD *)(v10 - 4), v5 >= v11) || (v12 = v11 - v5 - 1, (v13 = *(_QWORD *)(v10 + 8 * v12)) == 0) )
  {
    v16 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( !v16 )
    {
      v33 = (_QWORD *)sub_186B270(0x18u);
      v16 = v33 + 1;
      *v33 = 2;
      result = 1;
      a1[7] = v16;
      v19 = v16;
      goto LABEL_16;
    }
    v17 = *((_DWORD *)v16 - 1);
    if ( v17 != *((_DWORD *)v16 - 2) )
    {
      v18 = v17;
      result = v17 + 1;
      v19 = &v16[v18];
LABEL_16:
      *v19 = a2;
      *((_DWORD *)v16 - 1) = result;
      return result;
    }
    v20 = (3 * v17 + 1) >> 1;
    v21 = 8 * v20 + 8;
    if ( 8 * v17 + 8 < (unsigned int)v21 && v17 < v20 )
    {
      v22 = (unsigned int *)sub_186B300(v16 - 1, v21);
      v23 = v22[1];
      v16 = v22 + 2;
      *v22 = v20;
      a1[7] = v22 + 2;
      LODWORD(v22) = v23;
      v19 = &v16[v23];
      result = (unsigned int)((_DWORD)v22 + 1);
      goto LABEL_16;
    }
LABEL_32:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(&v37, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v37);
    sub_233E40((__int64)&v37);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( !*(_WORD *)(v13 + 4) && (*(_BYTE *)(v13 + 30) & 1) != 0 || (v24 = *(_DWORD *)(a1[66] + 4 * v12), v24 == v11) )
  {
    v37 = v13;
    ++*(_DWORD *)(v13 + 8);
    sub_CB55F0(a1 + 7, &v37);
  }
  else
  {
    v25 = v11 - v24;
    v26 = v25;
    v27 = sub_1680FB0(a1[4], v13, v25);
    if ( v27 )
    {
      v37 = v27;
      ++*(_DWORD *)(v27 + 8);
      sub_CB55F0(a1 + 7, &v37);
    }
    else
    {
      v34 = a1[1];
      v37 = 0;
      v38 = v34;
      sub_1585D20(a1 + 21, v13, 0, v26, 0, &v37);
      v36 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      sub_CB55F0(a1 + 7, &v36);
      sub_1584390(a1, v13, v26, v37);
      sub_CB1660(v37, v38);
    }
  }
  result = a1[5];
  if ( result )
  {
    v15 = *(_DWORD *)(result - 4);
    if ( v15 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v15 - 1) + 8) |= 2u;
  }
  return result;
}

