__int64 __fastcall sub_861EF0(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edx
  size_t v15; // rsi
  unsigned int v16; // r12d
  unsigned int *v17; // rax
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int *v27; // r12
  __int64 v28; // r13
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // r9d
  unsigned int v32; // ebx
  int v35; // [rsp+0h] [rbp-80h]
  __int64 v36; // [rsp+8h] [rbp-78h]
  __int64 v37; // [rsp+8h] [rbp-78h]
  int v38; // [rsp+10h] [rbp-70h]
  unsigned int v39; // [rsp+10h] [rbp-70h]
  unsigned int *v41; // [rsp+18h] [rbp-68h]
  int v42; // [rsp+20h] [rbp-60h]
  char v43; // [rsp+28h] [rbp-58h]
  __int64 v44; // [rsp+30h] [rbp-50h] BYREF
  int v45; // [rsp+38h] [rbp-48h]
  int v46; // [rsp+40h] [rbp-40h]
  void *v47; // [rsp+48h] [rbp-38h]

  v4 = a2;
  ++*(_DWORD *)(a1 + 148);
  v6 = *(unsigned int *)(a2 + 24);
  v38 = sub_1684260(a1 + 112, a3);
  if ( (_DWORD)v6 )
  {
    v7 = a2 + 8 * v6;
    v8 = (_QWORD *)sub_186B270(0x18u);
    v9 = 1;
    *v8 = 2;
    v10 = v8 + 1;
    v11 = v10;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v4 + 32);
      v4 += 8;
      *v10 = v12;
      *((_DWORD *)v11 - 1) = v9;
      if ( v7 == v4 )
        break;
      if ( *((_DWORD *)v11 - 2) == v9 )
      {
        v14 = (3 * v9 + 1) >> 1;
        v15 = 8 * v14 + 8;
        v16 = v14;
        if ( 8 * v9 + 8 >= (unsigned int)v15 || v9 >= v14 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v44, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v44);
          sub_233E40((__int64)&v44);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v17 = (unsigned int *)sub_186B300(v11 - 1, v15);
        v11 = v17 + 2;
        *v17 = v16;
        v18 = v17[1];
        v19 = v18;
        v10 = &v11[v18];
        v9 = v19 + 1;
      }
      else
      {
        v13 = v9++;
        v10 = &v11[v13];
      }
    }
    v20 = (__int64)(v11 - 1);
  }
  else
  {
    v20 = -8;
    v11 = nullptr;
  }
  v21 = *(_QWORD *)(a1 + 120);
  *v11 = a3;
  v36 = *(_QWORD *)(a1 + 72);
  v22 = sub_15DCAD0(v21, (int)v11, 0);
  if ( v22 )
    ++*(_DWORD *)(v22 + 8);
  v25 = *(_QWORD *)(a1 + 72);
  v26 = sub_15DC610(
          v25,
          v38,
          *((_DWORD *)v11 - 1) - 1,
          (int)v11 + 8,
          v23,
          v24,
          v35,
          v36,
          v38,
          v22,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
  v27 = (unsigned int *)v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v28 = sub_7E5940(a1, v41);
  v29 = sub_7E5940(a1, v27);
  v32 = sub_7CA650(*(_QWORD *)(a1 + 80), v28, v29, *(_QWORD *)(a1 + 464), v30, v31);
  if ( v27 )
  {
    if ( v27[2]-- == 1 )
      sub_15D7BC0(v25, v27);
  }
  if ( v41 )
  {
    v39 = v41[2];
    v41[2] = v39 - 1;
    if ( v39 == 1 )
      sub_15D7BC0(v37, v41);
  }
  sub_186B220((void *)v20);
  return v32;
}

