_DWORD *__fastcall sub_7E2750(_QWORD *a1, char *a2)
{
  char **exception; // rbp
  char v4; // r15
  unsigned __int8 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  double v10; // xmm0_8
  int v11; // eax
  unsigned int v12; // r13d
  unsigned int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  _QWORD *v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r12
  __int64 v25; // r13
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int v30; // r8d
  size_t v31; // rsi
  unsigned int *v32; // rax
  _QWORD *v33; // rax
  unsigned int v34; // [rsp+4h] [rbp-74h]
  unsigned int v35; // [rsp+8h] [rbp-70h]
  _QWORD *v36; // [rsp+18h] [rbp-60h] BYREF
  __int64 v37; // [rsp+20h] [rbp-58h] BYREF
  __int64 v38; // [rsp+28h] [rbp-50h]

  v4 = *a2;
  v5 = a2[1];
  v6 = **((_QWORD **)a2 + 1);
  if ( (unsigned __int8)sub_15D2CB0(a1[9], v6) )
  {
    v10 = (*(double (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[10] + 152LL) + 40LL))(
            *(_QWORD *)(a1[10] + 152LL),
            v6);
    v12 = sub_79B540(a1[10], 2 * v11, (unsigned int *)v6, v10);
    sub_D850C0(&v37, a1 + 97, a1 + 14, v6);
    v13 = sub_7E58C0(a1, v37);
    v14 = v37;
    v34 = v13;
    if ( v37 )
    {
      v15 = v38;
      v16 = (*(_DWORD *)(v37 + 8))-- == 1;
      if ( v16 )
        sub_15D7BC0(v15, v14);
    }
    sub_7E1590(&v36, a1);
    v17 = v36;
    if ( v36 )
    {
      v18 = *((unsigned int *)v36 - 1);
      if ( (_DWORD)v18 == *((_DWORD *)v36 - 2) )
      {
        v30 = (unsigned int)(3 * v18 + 1) >> 1;
        v31 = 4 * v30 + 8;
        if ( 4 * (int)v18 + 8 >= (unsigned int)v31 || (unsigned int)v18 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v37, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v37);
          sub_233E40((__int64)&v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v35 = (unsigned int)(3 * v18 + 1) >> 1;
        v32 = (unsigned int *)sub_186B300(v36 - 1, v31);
        v17 = v32 + 2;
        v36 = v32 + 2;
        *v32 = v35;
        v19 = &v32[v32[1] + 2];
      }
      else
      {
        v19 = (unsigned int *)v36 + v18;
      }
    }
    else
    {
      v33 = (_QWORD *)sub_186B270(0x10u);
      v17 = v33 + 1;
      *v33 = 2;
      v36 = v33 + 1;
      v19 = (unsigned int *)(v33 + 1);
    }
    *v19 = v34;
    ++*((_DWORD *)v17 - 1);
    sub_7E65C0(a1, v12, &v36);
    if ( v4 )
      sub_7E5160(a1, v12 ^ v5, 0);
    if ( v36 )
      sub_186B220(v36 - 1);
  }
  else
  {
    v21 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
    if ( v21 )
    {
      v22 = *(unsigned int *)(v21 + 4);
      if ( (unsigned int)v22 <= 0x2E )
      {
        v23 = 0x474000000000LL;
        if ( _bittest64(&v23, v22) )
        {
          sub_7E1020(&v37, (__int64)a1, v6, v7, v8, v9);
          v24 = v37;
          v25 = v38;
          v29 = sub_7E58D0((_DWORD)a1, v6, v37, v26, v27, v28);
          sub_7E5160(a1, v29, 0);
          sub_7E1590(&v36, a1);
          sub_7E5290(a1, &v36);
          if ( v36 )
            sub_186B220(v36 - 1);
          if ( v24 )
          {
            v16 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v16 )
              sub_15D7BC0(v25, v24);
          }
        }
      }
    }
  }
  return sub_7E1790(a1, v6);
}

