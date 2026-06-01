__int64 __fastcall sub_703AD0(__int64 a1, _QWORD *a2)
{
  unsigned int *v3; // rbp
  __int64 v4; // rax
  unsigned int *v5; // r12
  _QWORD *v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  unsigned int v9; // edx
  int v10; // edx
  __int64 v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int *v18; // rax
  int v19; // eax
  bool v20; // zf
  unsigned int v22; // r14d
  size_t v23; // rsi
  unsigned int *v24; // rax
  unsigned int v25; // r15d
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  char **exception; // rbp
  __int64 v31[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = (unsigned int *)a2[1];
  if ( !v3 || (v4 = *(v3 - 1), !(_DWORD)v4) )
  {
    v13 = sub_1142010(a1 + 40);
    v14 = v13 ^ 1;
    sub_11420C0(*a2, v13 >> 1, v15, v16);
    v3 = (unsigned int *)a2[1];
    if ( v3 )
    {
      v17 = *(v3 - 1);
      if ( (_DWORD)v17 == *(v3 - 2) )
      {
        v25 = (unsigned int)(3 * v17 + 1) >> 1;
        v26 = 4 * v25 + 8;
        if ( 4 * (int)v17 + 8 >= (unsigned int)v26 || (unsigned int)v17 >= v25 )
        {
LABEL_20:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_6FFCA0(v31, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v31);
          sub_233E40((__int64)v31);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v3 - 2, v26);
        v3 = v27 + 2;
        *v27 = v25;
        v28 = v27[1];
        a2[1] = v3;
        v18 = (int *)&v3[v28];
      }
      else
      {
        v18 = (int *)&v3[v17];
      }
    }
    else
    {
      v29 = (_QWORD *)sub_186B270(0x10u);
      *v29 = 2;
      v3 = (unsigned int *)(v29 + 1);
      a2[1] = v29 + 1;
      v18 = (int *)(v29 + 1);
    }
    *v18 = v14;
    v19 = *(v3 - 1);
    v20 = v19 == -1;
    v4 = (unsigned int)(v19 + 1);
    *(v3 - 1) = v4;
    if ( v20 )
      return sub_11458B0(a1 + 40, 0, 0, 0);
  }
  v5 = &v3[v4];
  v6 = (_QWORD *)sub_186B270(0x10u);
  *v6 = 2;
  v7 = (unsigned int *)(v6 + 1);
  v8 = v7;
  while ( 1 )
  {
    v9 = *v3++;
    *v7 = v9;
    v10 = *(v8 - 1);
    v11 = (unsigned int)(v10 + 1);
    *(v8 - 1) = v11;
    if ( v5 == v3 )
      break;
    v12 = *(v8 - 2);
    if ( v12 == (_DWORD)v11 )
    {
      v22 = (3 * v12 + 1) >> 1;
      v23 = 4 * v22 + 8;
      if ( 4 * v10 + 12 >= (unsigned int)v23 || v12 >= v22 )
        goto LABEL_20;
      v24 = (unsigned int *)sub_186B300(v8 - 2, v23);
      v8 = v24 + 2;
      *v24 = v22;
      v7 = &v24[v24[1] + 2];
    }
    else
    {
      v7 = &v8[v11];
    }
  }
  sub_11458B0(a1 + 40, v11, v8, 0);
  return sub_186B220(v8 - 2);
}

