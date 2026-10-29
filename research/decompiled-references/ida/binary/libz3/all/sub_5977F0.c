__int64 __fastcall sub_5977F0(_QWORD *a1, __int64 a2)
{
  char **exception; // r12
  _QWORD *v3; // r13
  void *v4; // r12
  __int64 v5; // rax
  int v6; // ecx
  __int64 *v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // edx
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned int v14; // edx
  unsigned int v15; // r9d
  size_t v16; // rsi
  _DWORD *v17; // rax
  __int64 v18; // rax
  int v19; // eax
  int v20; // r9d
  __int64 result; // rax
  __int64 v22; // rsi
  __int64 v23; // rdi
  bool v24; // zf
  __int64 v25; // rsi
  void *v26; // rdi
  __int64 *v27; // rbp
  unsigned __int64 v28; // r13
  __int64 v29; // rsi
  _QWORD *v30; // rax
  int v31; // [rsp+0h] [rbp-98h]
  __int64 *v32; // [rsp+0h] [rbp-98h]
  __int64 v33; // [rsp+8h] [rbp-90h]
  int v34; // [rsp+10h] [rbp-88h]
  int v35; // [rsp+18h] [rbp-80h]
  int v36; // [rsp+28h] [rbp-70h]
  int v37[2]; // [rsp+30h] [rbp-68h] BYREF
  void *v38; // [rsp+38h] [rbp-60h]
  int v39[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h]

  v3 = (_QWORD *)a1[8];
  v4 = *(void **)(a2 + 8);
  v31 = a2;
  v5 = v3[2];
  *(_QWORD *)v37 = 0;
  v38 = v4;
  if ( !v5 )
  {
    HIDWORD(v33) = 0;
    v7 = nullptr;
    goto LABEL_15;
  }
  v6 = *(_DWORD *)(v5 - 4);
  HIDWORD(v33) = v6;
  if ( !v6 )
  {
    v7 = nullptr;
    goto LABEL_15;
  }
  v7 = nullptr;
  v8 = 4LL * (unsigned int)(v6 - 1);
  while ( 1 )
  {
    v12 = sub_15DB5C0(v4, *(unsigned int *)(a1[6] + v8), *(_QWORD *)(v5 + 2 * v8));
    v13 = v12;
    if ( v12 )
      ++*(_DWORD *)(v12 + 8);
    if ( v7 )
      break;
    v30 = (_QWORD *)sub_186B270(0x18u);
    *v30 = 2;
    v11 = v30 + 1;
    v10 = 1;
    v7 = v11;
LABEL_5:
    v8 -= 4;
    *v11 = v13;
    *((_DWORD *)v7 - 1) = v10;
    if ( v8 == -4 )
      goto LABEL_14;
LABEL_6:
    v5 = v3[2];
  }
  v14 = *((_DWORD *)v7 - 1);
  if ( v14 != *((_DWORD *)v7 - 2) )
  {
    v9 = v14;
    v10 = v14 + 1;
    v11 = &v7[v9];
    goto LABEL_5;
  }
  v15 = (3 * v14 + 1) >> 1;
  v16 = 8 * v15 + 8;
  if ( 8 * v14 + 8 >= (unsigned int)v16 || v14 >= v15 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0((__int64 *)v39, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v39);
    sub_233E40((__int64)v39);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  LODWORD(v33) = (3 * v14 + 1) >> 1;
  v17 = (_DWORD *)sub_186B300(v7 - 1, v16);
  v7 = (__int64 *)(v17 + 2);
  v8 -= 4;
  *v17 = v33;
  v18 = (unsigned int)v17[1];
  v7[v18] = v13;
  *((_DWORD *)v7 - 1) = v18 + 1;
  if ( v8 != -4 )
    goto LABEL_6;
LABEL_14:
  v3 = (_QWORD *)a1[8];
LABEL_15:
  (*(void (__fastcall **)(_QWORD *, int *))(*v3 + 144LL))(v3, v37);
  v19 = sub_4D6480(*(_QWORD *)(a1[1] + 24LL));
  sub_157BE40(
    (int)v39,
    v19 + 104,
    v37[0],
    SHIDWORD(v33),
    (int)v7,
    v20,
    v31,
    v33,
    v34,
    v35,
    (int)v4,
    v36,
    *(__int64 *)v37,
    v38);
  result = *(_QWORD *)v39;
  v22 = *v32;
  *v32 = *(_QWORD *)v39;
  *(_QWORD *)v39 = v22;
  if ( v22 )
  {
    v23 = v40;
    v24 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v23, v22);
  }
  v25 = *(_QWORD *)v37;
  if ( *(_QWORD *)v37 )
  {
    v26 = v38;
    v24 = (*(_DWORD *)(*(_QWORD *)v37 + 8LL))-- == 1;
    if ( v24 )
      result = sub_15D7BC0(v26, v25);
  }
  if ( v7 )
  {
    v27 = v7;
    v28 = (unsigned __int64)&v7[*((unsigned int *)v7 - 1)];
    if ( (unsigned __int64)v7 < v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v24 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v24 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            return sub_186B220(v7 - 1);
        }
        ++v27;
        sub_15D7BC0(v4, v29);
      }
      while ( (unsigned __int64)v27 < v28 );
    }
    return sub_186B220(v7 - 1);
  }
  return result;
}

