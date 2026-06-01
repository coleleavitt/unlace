__int64 __fastcall sub_5E8520(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char **exception; // r12
  __int64 v8; // r12
  int v9; // ebp
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // edx
  _QWORD *v16; // r12
  __int64 *v17; // rax
  __int64 *v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v24; // r10d
  size_t v25; // rsi
  _DWORD *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  int v29; // [rsp+0h] [rbp-88h]
  int v30[2]; // [rsp+0h] [rbp-88h]
  int v31; // [rsp+8h] [rbp-80h]
  void *v32; // [rsp+10h] [rbp-78h]
  void *v33; // [rsp+10h] [rbp-78h]
  int v34; // [rsp+18h] [rbp-70h]
  int v35; // [rsp+20h] [rbp-68h]
  char v36; // [rsp+28h] [rbp-60h]
  __int64 v37; // [rsp+30h] [rbp-58h] BYREF
  int v38; // [rsp+38h] [rbp-50h]
  int v39; // [rsp+40h] [rbp-48h]
  void *v40; // [rsp+48h] [rbp-40h]

  if ( a2 == a4 )
    return a3;
  if ( *(_WORD *)(a2 + 4) )
    return a2;
  v8 = 8LL * *(unsigned int *)(a2 + 24);
  if ( !v8 )
    return sub_15DC610(
             *(_QWORD *)(a1 + 24),
             *(_QWORD *)(a2 + 16),
             0,
             0,
             a5,
             a6,
             v29,
             a3,
             (int)v32,
             v34,
             v35,
             v36,
             v37,
             v38,
             v39,
             v40);
  v9 = a4;
  v10 = sub_5E8520(a1, *(_QWORD *)(a2 + 32), a3, a4, a5, a6, v29, a3, v32);
  v11 = sub_186B270(0x18u);
  v14 = a2 + 32 + v8;
  v15 = 1;
  v16 = (_QWORD *)(a2 + 32);
  *(_QWORD *)v30 = v14;
  v17 = (__int64 *)(v11 + 8);
  *(v17 - 1) = 2;
  v18 = v17;
  while ( 1 )
  {
    *v17 = v10;
    ++v16;
    *((_DWORD *)v18 - 1) = v15;
    if ( *(_QWORD **)v30 == v16 )
      break;
    while ( 1 )
    {
      v19 = sub_5E8520(a1, *v16, v31, v9, v12, v13, v30[0], v31, v33);
      v20 = *((_DWORD *)v18 - 1);
      v10 = v19;
      if ( v20 == *((_DWORD *)v18 - 2) )
        break;
      v21 = v20;
      v15 = v20 + 1;
      ++v16;
      v18[v21] = v10;
      *((_DWORD *)v18 - 1) = v15;
      if ( *(_QWORD **)v30 == v16 )
        goto LABEL_8;
    }
    v24 = (3 * v20 + 1) >> 1;
    v25 = 8 * v24 + 8;
    if ( 8 * v20 + 8 >= (unsigned int)v25 || v20 >= v24 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v37, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v37);
      sub_233E40((__int64)&v37);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    HIDWORD(v33) = (3 * v20 + 1) >> 1;
    v26 = (_DWORD *)sub_186B300(v18 - 1, v25);
    v18 = (__int64 *)(v26 + 2);
    *v26 = HIDWORD(v33);
    v27 = (unsigned int)v26[1];
    v28 = v27;
    v17 = &v18[v27];
    v15 = v28 + 1;
  }
LABEL_8:
  v22 = sub_15DC610(
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a2 + 16),
          v15,
          (int)v18,
          v12,
          v13,
          v30[0],
          v31,
          (int)v33,
          (int)v18 - 8,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
  sub_186B220(v18 - 1);
  return v22;
}

