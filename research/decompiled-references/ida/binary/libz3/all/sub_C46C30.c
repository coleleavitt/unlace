__int64 __fastcall sub_C46C30(_QWORD *a1, __int64 a2)
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
  _QWORD *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 result; // rax
  int v20; // edx
  _QWORD *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  unsigned int v25; // r12d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ebp
  __int64 v32; // rax
  unsigned int v33; // r12d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned int v38; // ebp
  size_t v39; // rsi
  unsigned int *v40; // rax
  __int64 v41; // rdx
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rdi
  _QWORD *v47; // rax
  char **exception; // rbp
  __int64 v49; // [rsp+8h] [rbp-50h] BYREF
  __int64 v50; // [rsp+10h] [rbp-48h] BYREF
  __int64 v51; // [rsp+18h] [rbp-40h]

  v4 = (_QWORD *)a1[11];
  v5 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    v6 = *((_DWORD *)v4 - 1);
    if ( v6 == *((_DWORD *)v4 - 2) )
    {
      v33 = (3 * v6 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v6 + 8 >= (unsigned int)v34 || v6 >= v33 )
        goto LABEL_41;
      v35 = (unsigned int *)sub_186B300(v4 - 1, v34);
      v36 = v35[1];
      v4 = v35 + 2;
      *v35 = v33;
      a1[11] = v35 + 2;
      LODWORD(v35) = v36;
      v9 = &v4[v36];
      v8 = (_DWORD)v35 + 1;
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
    v37 = (_QWORD *)sub_186B270(0x18u);
    v4 = v37 + 1;
    *v37 = 2;
    v8 = 1;
    a1[11] = v4;
    v9 = v4;
  }
  *v9 = 0;
  *((_DWORD *)v4 - 1) = v8;
  v10 = a1[20];
  if ( !v10 || (v11 = *(_DWORD *)(v10 - 4), v5 >= v11) || (v12 = v11 - v5 - 1, (v13 = *(_QWORD *)(v10 + 8 * v12)) == 0) )
  {
    v21 = (_QWORD *)a1[7];
    ++*(_DWORD *)(a2 + 8);
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 - 1);
      if ( v22 == *((_DWORD *)v21 - 2) )
      {
        v25 = (3 * v22 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v22 + 8 >= (unsigned int)v26 || v22 >= v25 )
          goto LABEL_41;
        v27 = (unsigned int *)sub_186B300(v21 - 1, v26);
        v28 = v27[1];
        v21 = v27 + 2;
        *v27 = v25;
        a1[7] = v27 + 2;
        LODWORD(v27) = v28;
        v24 = &v21[v28];
        result = (unsigned int)((_DWORD)v27 + 1);
      }
      else
      {
        v23 = v22;
        result = v22 + 1;
        v24 = &v21[v23];
      }
    }
    else
    {
      v42 = (_QWORD *)sub_186B270(0x18u);
      v21 = v42 + 1;
      *v42 = 2;
      result = 1;
      a1[7] = v21;
      v24 = v21;
    }
    *v24 = a2;
    *((_DWORD *)v21 - 1) = result;
    return result;
  }
  if ( *(_WORD *)(v13 + 4) || (*(_BYTE *)(v13 + 30) & 1) == 0 )
  {
    v29 = *(_DWORD *)(a1[66] + 4 * v12);
    if ( v29 != v11 )
    {
      v30 = v11 - v29;
      v31 = v30;
      v32 = sub_1680FB0(a1[4], v13, v30);
      if ( v32 )
      {
        v50 = v32;
        ++*(_DWORD *)(v32 + 8);
        sub_C41DD0(a1 + 7, &v50);
      }
      else
      {
        v43 = a1[1];
        v50 = 0;
        v51 = v43;
        sub_1585D20(a1 + 21, v13, 0, v31, 0, &v50);
        v49 = v50;
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        sub_C41DD0(a1 + 7, &v49);
        sub_1584390(a1, v13, v31, v50);
        v44 = v50;
        if ( v50 )
        {
          v45 = v51;
          if ( (*(_DWORD *)(v50 + 8))-- == 1 )
            sub_15D7BC0(v45, v44);
        }
      }
      goto LABEL_13;
    }
  }
  v14 = (_QWORD *)a1[7];
  ++*(_DWORD *)(v13 + 8);
  if ( !v14 )
  {
    v47 = (_QWORD *)sub_186B270(0x18u);
    v14 = v47 + 1;
    *v47 = 2;
    v17 = 1;
    a1[7] = v14;
    v18 = v14;
    goto LABEL_12;
  }
  v15 = *((_DWORD *)v14 - 1);
  if ( v15 == *((_DWORD *)v14 - 2) )
  {
    v38 = (3 * v15 + 1) >> 1;
    v39 = 8 * v38 + 8;
    if ( 8 * v15 + 8 < (unsigned int)v39 && v15 < v38 )
    {
      v40 = (unsigned int *)sub_186B300(v14 - 1, v39);
      v41 = v40[1];
      v14 = v40 + 2;
      *v40 = v38;
      a1[7] = v40 + 2;
      LODWORD(v40) = v41;
      v18 = &v14[v41];
      v17 = (_DWORD)v40 + 1;
      goto LABEL_12;
    }
LABEL_41:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_C418A0(&v50, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v50);
    sub_233E40((__int64)&v50);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v16 = v15;
  v17 = v15 + 1;
  v18 = &v14[v16];
LABEL_12:
  *v18 = v13;
  *((_DWORD *)v14 - 1) = v17;
LABEL_13:
  result = a1[5];
  if ( result )
  {
    v20 = *(_DWORD *)(result - 4);
    if ( v20 )
      *(_BYTE *)(result + 16LL * (unsigned int)(v20 - 1) + 8) |= 2u;
  }
  return result;
}

