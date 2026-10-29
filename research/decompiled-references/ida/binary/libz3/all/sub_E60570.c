__int64 *__fastcall sub_E60570(__int64 *a1, __int64 a2)
{
  char **v2; // r13
  __int64 v3; // rdx
  char **v4; // r13
  __int64 v5; // rdx
  char **exception; // r13
  __int64 v7; // rdx
  char **v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  _QWORD *v12; // rbp
  unsigned int v13; // r15d
  unsigned int v14; // ebx
  unsigned int v15; // eax
  _DWORD *v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  _DWORD *v19; // rax
  char v20; // al
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  size_t v24; // rsi
  __int64 *v26; // rbx
  unsigned __int64 v27; // r14
  __int64 v28; // rsi
  unsigned int *v30; // rax
  __int64 *v31; // rcx
  int v32; // eax
  char v33; // al
  __int64 v34; // rcx
  _QWORD *v35; // rdx
  char v36; // al
  unsigned int *v37; // rax
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int v44; // r11d
  size_t v45; // rsi
  unsigned int *v46; // rax
  __int64 v47; // [rsp+0h] [rbp-B8h]
  unsigned int v48; // [rsp+8h] [rbp-B0h]
  __int64 v49; // [rsp+8h] [rbp-B0h]
  __int64 v50; // [rsp+8h] [rbp-B0h]
  __int64 v51; // [rsp+8h] [rbp-B0h]
  __int64 v52; // [rsp+8h] [rbp-B0h]
  __int64 v53; // [rsp+8h] [rbp-B0h]
  __int64 v54; // [rsp+8h] [rbp-B0h]
  unsigned int v55; // [rsp+8h] [rbp-B0h]
  __int64 v56; // [rsp+10h] [rbp-A8h]
  unsigned int v57; // [rsp+10h] [rbp-A8h]
  unsigned int v58; // [rsp+10h] [rbp-A8h]
  __int64 v59; // [rsp+20h] [rbp-98h]
  __int64 v60; // [rsp+28h] [rbp-90h]
  __int64 v61; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v62; // [rsp+38h] [rbp-80h]
  __int64 v63; // [rsp+48h] [rbp-70h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h]
  __int64 v65[11]; // [rsp+60h] [rbp-58h] BYREF

  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  a1[1] = 0;
  *a1 = v10;
  v11 = v10;
  v61 = v10;
  v62 = nullptr;
  sub_E5ED50(a2, (__int64)&v61);
  v12 = v62;
  v63 = 0;
  ptr = nullptr;
  v47 = v61;
  if ( !v62 )
    return a1;
  v13 = *((_DWORD *)v62 - 1);
  v14 = 0;
  v15 = v13;
  while ( v14 < v15 )
  {
    v17 = v12[v14];
    v18 = *(_DWORD *)v17;
    if ( *(_DWORD *)v17 >= (unsigned int)v63 )
    {
      v56 = v12[v14];
      v48 = *(_DWORD *)v17;
      sub_186B510(&v63, v18 + 1, 0);
      v16 = ptr;
      v17 = v56;
      v18 = v48;
    }
    else
    {
      v16 = ptr;
      if ( (*((_DWORD *)ptr + (v18 >> 5)) & (1 << v18)) != 0 )
        goto LABEL_7;
    }
    v16[v18 >> 5] |= 1 << v18;
    if ( *(_WORD *)(v17 + 4) )
    {
      if ( v14 < v13 )
        goto LABEL_6;
      v21 = (_QWORD *)a1[1];
      ++*(_DWORD *)(v17 + 8);
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v23 = (3 * v22 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_182962(v65, "Overflow encountered when expanding vector", v7);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_37;
        }
        goto LABEL_45;
      }
      goto LABEL_47;
    }
    v19 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL);
    if ( !v19 || *v19 )
    {
      if ( v14 < v13 )
        goto LABEL_6;
      v21 = (_QWORD *)a1[1];
      ++*(_DWORD *)(v17 + 8);
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v23 = (3 * v22 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_182962(v65, "Overflow encountered when expanding vector", v3);
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_37:
          v57 = v23;
          v50 = v17;
          v30 = (unsigned int *)sub_186B300(v21 - 1, v24);
          v21 = v30 + 2;
          v17 = v50;
          a1[1] = (__int64)(v30 + 2);
          *v30 = v57;
          LODWORD(v30) = v30[1];
          v31 = &v21[(unsigned int)v30];
          v32 = (_DWORD)v30 + 1;
LABEL_46:
          *v31 = v17;
          *((_DWORD *)v21 - 1) = v32;
          goto LABEL_6;
        }
LABEL_45:
        v34 = v22;
        v32 = v22 + 1;
        v31 = &v21[v34];
        goto LABEL_46;
      }
LABEL_47:
      v52 = v17;
      v35 = (_QWORD *)sub_186B270(0x18u);
      *v35 = 2;
      v17 = v52;
      v32 = 1;
      v21 = v35 + 1;
      a1[1] = (__int64)v21;
      v31 = v21;
      goto LABEL_46;
    }
    if ( v14 < v13 )
    {
      if ( v19[1] == 8 )
      {
        v53 = v17;
        v36 = sub_E5E5B0(v11, *(_QWORD *)(v17 + 32));
        v17 = v53;
        if ( v36 )
        {
          v37 = *(unsigned int **)(v53 + 32);
          v38 = *v37;
          if ( *v37 >= (unsigned int)v63 )
          {
            v55 = *v37;
            sub_186B510(&v63, v38 + 1, 0);
            v38 = v55;
          }
          *((_DWORD *)ptr + (v38 >> 5)) |= 1 << v38;
          v15 = *((_DWORD *)v12 - 1);
          goto LABEL_7;
        }
      }
      if ( !*(_DWORD *)(v17 + 24) )
        goto LABEL_6;
    }
    else if ( !*(_DWORD *)(v17 + 24) )
    {
      goto LABEL_16;
    }
    v51 = v17;
    v33 = sub_15D2CB0(v11, *(_QWORD *)(v17 + 32));
    v17 = v51;
    if ( !v33 )
    {
      if ( v14 < v13 )
        goto LABEL_6;
LABEL_16:
      v49 = v17;
      v20 = sub_E5E5B0(v11, v17);
      v17 = v49;
      if ( !v20 )
      {
LABEL_6:
        v15 = *((_DWORD *)v12 - 1);
        goto LABEL_7;
      }
      v21 = (_QWORD *)a1[1];
      ++*(_DWORD *)(v49 + 8);
      if ( v21 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v23 = (3 * v22 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v24 || v22 >= v23 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_182962(v65, "Overflow encountered when expanding vector", v9);
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, v65);
            sub_233E40((__int64)v65);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          goto LABEL_37;
        }
        goto LABEL_45;
      }
      goto LABEL_47;
    }
    v39 = *(unsigned int *)(v51 + 24);
    v40 = v51 + 8 * v39;
    if ( !(_DWORD)v39 )
      goto LABEL_6;
    do
    {
      v42 = *(_QWORD *)(v17 + 32);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      v43 = *((_DWORD *)v12 - 1);
      if ( v43 == *((_DWORD *)v12 - 2) )
      {
        v44 = (3 * v43 + 1) >> 1;
        v45 = 8 * v44 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v45 || v43 >= v44 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_182962(v65, "Overflow encountered when expanding vector", v5);
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v65);
          sub_233E40((__int64)v65);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v60 = v17;
        v59 = v40;
        v58 = (3 * v43 + 1) >> 1;
        v54 = v42;
        v46 = (unsigned int *)sub_186B300(v12 - 1, v45);
        v12 = v46 + 2;
        v42 = v54;
        v40 = v59;
        v17 = v60;
        *v46 = v58;
        v43 = v46[1];
      }
      v41 = v43;
      v17 += 8;
      v15 = v43 + 1;
      v12[v41] = v42;
      *((_DWORD *)v12 - 1) = v15;
    }
    while ( v40 != v17 );
LABEL_7:
    ++v14;
  }
  if ( ptr )
    sub_186B220(ptr);
  v26 = v12;
  v27 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
  if ( (unsigned __int64)v12 < v27 )
  {
    do
    {
      v28 = *v26;
      if ( *v26 )
      {
        if ( (*(_DWORD *)(v28 + 8))-- == 1 )
          sub_15D7BC0(v47, v28);
      }
      ++v26;
    }
    while ( (unsigned __int64)v26 < v27 );
  }
  sub_186B220(v12 - 1);
  return a1;
}

