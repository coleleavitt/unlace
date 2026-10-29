__int64 __fastcall sub_BBB990(__int64 a1, __int64 a2)
{
  char **exception; // rbx
  __int64 v3; // rdx
  _DWORD *v4; // rax
  __int64 *v5; // rbx
  __int64 *v6; // r15
  char v7; // r12
  __int64 v8; // rbp
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  _DWORD *v14; // rdx
  int v15; // ebx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  _QWORD *v22; // rcx
  unsigned int v24; // r12d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r14
  _QWORD *v30; // rax
  __int64 v32[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( *(_WORD *)(a2 + 4)
    || (v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) == nullptr
    || *(_DWORD *)(a1 + 1744) != *v4
    || v4[1] != 44
    || *(_DWORD *)(a2 + 24) != 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1624);
  }
  v29 = *(_QWORD *)(a2 + 32);
  v5 = *(__int64 **)(a1 + 1064);
  if ( !v5 )
    goto LABEL_25;
  v6 = &v5[*((unsigned int *)v5 - 1)];
  if ( v6 == v5 )
    goto LABEL_25;
  v7 = 0;
  do
  {
    v13 = *v5;
    if ( *(_WORD *)(*v5 + 4)
      || (v14 = *(_DWORD **)(*(_QWORD *)(v13 + 16) + 24LL)) == nullptr
      || *(_DWORD *)(a1 + 1744) != *v14
      || v14[1] != 44
      || *(_DWORD *)(v13 + 24) != 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1627);
    }
    v8 = sub_15D1F10(*(_QWORD *)(v13 + 32));
    ++v5;
    v7 |= v8 == sub_15D1F10(v29);
  }
  while ( v6 != v5 );
  if ( v7 )
  {
    v15 = a1 + 2696;
  }
  else
  {
LABEL_25:
    v15 = a1 + 2696;
    v28 = sub_15D1F10(v29);
    sub_14519A0(a1 + 2696, v28);
  }
  sub_1451430(v15, v29, v9, v10, v11, v12);
  ++*(_DWORD *)(a2 + 8);
  v32[0] = a2;
  sub_BB70A0((_QWORD *)(a1 + 1064), v32);
  v16 = (_QWORD *)sub_180C100(a1 + 3960, 16);
  v17 = *(_QWORD **)(a1 + 3944);
  v18 = v16;
  *v16 = off_1C4DF80;
  v16[1] = a1 + 1056;
  if ( v17 )
  {
    v19 = *((_DWORD *)v17 - 1);
    if ( v19 == *((_DWORD *)v17 - 2) )
    {
      v24 = (3 * v19 + 1) >> 1;
      v25 = 8 * v24 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v25 || v19 >= v24 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_154526(v32, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v26 = (unsigned int *)sub_186B300(v17 - 1, v25);
      v27 = v26[1];
      v17 = v26 + 2;
      *v26 = v24;
      *(_QWORD *)(a1 + 3944) = v26 + 2;
      LODWORD(v26) = v27;
      v22 = &v17[v27];
      v21 = (_DWORD)v26 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v17[v20];
    }
  }
  else
  {
    v30 = (_QWORD *)sub_186B270(0x18u);
    v17 = v30 + 1;
    *v30 = 2;
    v21 = 1;
    *(_QWORD *)(a1 + 3944) = v17;
    v22 = v17;
  }
  *v22 = v18;
  *((_DWORD *)v17 - 1) = v21;
  return sub_BBB240(a1, (unsigned int *)a2);
}

