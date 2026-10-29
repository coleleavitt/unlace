__int64 __fastcall sub_861CE0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  _QWORD *v8; // rax
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r14d
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int *v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // r9d
  unsigned int v32; // eax
  __int64 v33; // rsi
  unsigned int v34; // r15d
  __int64 v35; // rdi
  bool v36; // zf
  __int64 v38; // [rsp+0h] [rbp-70h] BYREF
  __int64 v39; // [rsp+8h] [rbp-68h]
  _OWORD v40[5]; // [rsp+20h] [rbp-50h] BYREF

  v5 = *(unsigned int *)(a2 + 24);
  v39 = a1;
  ++*(_DWORD *)(a1 + 180);
  if ( (_DWORD)v5 )
  {
    v6 = a2;
    v7 = a2 + 8 * v5;
    v8 = (_QWORD *)sub_186B270(0x18u);
    v9 = 1;
    *v8 = 2;
    v10 = v8 + 1;
    v11 = v10;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v6 + 32);
      v6 += 8;
      *v10 = v12;
      *((_DWORD *)v11 - 1) = v9;
      if ( v7 == v6 )
        break;
      if ( *((_DWORD *)v11 - 2) == v9 )
      {
        v14 = (3 * v9 + 1) >> 1;
        v15 = 8 * v14 + 8;
        if ( 8 * v9 + 8 >= (unsigned int)v15 || v9 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v40, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v40);
          sub_233E40((__int64)v40);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v16 = (unsigned int *)sub_186B300(v11 - 1, v15);
        v11 = v16 + 2;
        *v16 = v14;
        v17 = v16[1];
        v18 = v17;
        v10 = &v11[v17];
        v9 = v18 + 1;
      }
      else
      {
        v13 = v9++;
        v10 = &v11[v13];
      }
    }
    v19 = (__int64)(v11 - 1);
  }
  else
  {
    v19 = -8;
    v11 = nullptr;
  }
  v20 = v39;
  *v11 = a3;
  v21 = *(_QWORD *)(v20 + 120);
  v38 = *(_QWORD *)(v20 + 72);
  v22 = (unsigned int *)sub_15DCAD0(v21, (int)v11, 0);
  if ( v22 )
  {
    v23 = v22[2];
    v40[0] = _mm_loadh_ps((const double *)&v38);
    v22[2] = v23 + 2;
  }
  else
  {
    *(_QWORD *)&v40[0] = 0;
    *((_QWORD *)&v40[0] + 1) = v38;
  }
  v24 = v39;
  sub_7E5890(v39, (__int64)v40);
  v25 = *(_QWORD *)(v24 + 80);
  v26 = v24;
  v39 = v24;
  v27 = *(_QWORD *)(v24 + 464);
  v28 = sub_7E5940(v26, *(unsigned int **)&v40[0]);
  v29 = sub_7E5940(v39, v22);
  v32 = sub_7CA650(v25, v29, v28, v27, v30, v31);
  v33 = *(_QWORD *)&v40[0];
  v34 = v32;
  if ( *(_QWORD *)&v40[0] )
  {
    v35 = *((_QWORD *)&v40[0] + 1);
    v36 = (*(_DWORD *)(*(_QWORD *)&v40[0] + 8LL))-- == 1;
    if ( v36 )
      sub_15D7BC0(v35, v33);
  }
  if ( v22 )
  {
    v36 = v22[2]-- == 1;
    if ( v36 )
      sub_15D7BC0(v38, v22);
  }
  sub_186B220((void *)v19);
  return v34;
}

