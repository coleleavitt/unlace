__int64 __fastcall sub_80A150(int a1, int a2, int **a3, int a4)
{
  char **v4; // r12
  char **exception; // r12
  int *v7; // r13
  unsigned int v9; // r14d
  _QWORD *v10; // rax
  int v11; // r8d
  int v12; // r9d
  int *v13; // rsi
  int *v14; // rax
  int *v15; // rbx
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // r8d
  size_t v19; // rsi
  _DWORD *v20; // rax
  __int64 v21; // rax
  int v22; // ebp
  int *v23; // rax
  unsigned int v24; // ebp
  unsigned int v26; // r12d
  size_t v27; // rsi
  unsigned int *v28; // rax
  _QWORD *v29; // rax
  void *v30; // [rsp+0h] [rbp-88h]
  __int64 v31; // [rsp+8h] [rbp-80h]
  int v33; // [rsp+20h] [rbp-68h]
  int v34; // [rsp+28h] [rbp-60h]
  int v35[2]; // [rsp+30h] [rbp-58h] BYREF
  char v36; // [rsp+38h] [rbp-50h]
  int v37; // [rsp+40h] [rbp-48h]
  char v38; // [rsp+48h] [rbp-40h]
  int v39; // [rsp+50h] [rbp-38h]
  int v40; // [rsp+58h] [rbp-30h]
  int v41; // [rsp+60h] [rbp-28h]
  int v42; // [rsp+68h] [rbp-20h]
  int v43; // [rsp+70h] [rbp-18h]
  void *v44; // [rsp+78h] [rbp-10h]
  __int64 v45; // [rsp+80h] [rbp-8h]

  v7 = *a3;
  if ( *a3 && *(v7 - 1) )
  {
    v9 = 0;
    v10 = (_QWORD *)sub_186B270(0x10u);
    v13 = *a3;
    *v10 = 2;
    v14 = (int *)(v10 + 1);
    v15 = v14;
    while ( 1 )
    {
      v16 = *v7;
      ++v9;
      *v14 = *v7;
      ++*(v15 - 1);
      if ( !v13 || v9 >= *(v13 - 1) )
        break;
      v7 = &v13[v9];
      v17 = (unsigned int)*(v15 - 1);
      if ( (_DWORD)v17 == *(v15 - 2) )
      {
        v18 = (unsigned int)(3 * v17 + 1) >> 1;
        v19 = 4 * v18 + 8;
        if ( 4 * (int)v17 + 8 >= (unsigned int)v19 || (unsigned int)v17 >= v18 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v35, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v35);
          sub_233E40((__int64)v35);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        HIDWORD(v31) = (unsigned int)(3 * v17 + 1) >> 1;
        v20 = (_DWORD *)sub_186B300(v15 - 2, v19);
        v11 = HIDWORD(v31);
        v15 = v20 + 2;
        v13 = *a3;
        *v20 = HIDWORD(v31);
        v14 = &v20[v20[1] + 2];
      }
      else
      {
        v14 = &v15[v17];
      }
    }
    v21 = (unsigned int)*(v15 - 1);
    v22 = a2 ^ 1;
    if ( (_DWORD)v21 == *(v15 - 2) )
    {
      v26 = (unsigned int)(3 * v21 + 1) >> 1;
      v27 = 4 * v26 + 8;
      if ( 4 * (int)v21 + 8 >= (unsigned int)v27 || (unsigned int)v21 >= v26 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v35, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v35);
        sub_233E40((__int64)v35);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(v15 - 2, v27);
      v15 = (int *)(v28 + 2);
      *v28 = v26;
      v23 = (int *)&v28[v28[1] + 2];
    }
    else
    {
      v23 = &v15[v21];
    }
  }
  else
  {
    v22 = a2 ^ 1;
    v29 = (_QWORD *)sub_186B270(0x10u);
    v15 = (int *)(v29 + 1);
    *v29 = 2;
    v23 = (int *)(v29 + 1);
  }
  *v23 = v22;
  ++*(v15 - 1);
  v24 = sub_8091C0(
          a1,
          (int)v35,
          a4,
          v16,
          v11,
          v12,
          v30,
          v31,
          a1,
          a4,
          v33,
          v34,
          (int)v15,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
  sub_186B220(v15 - 2);
  return v24;
}

