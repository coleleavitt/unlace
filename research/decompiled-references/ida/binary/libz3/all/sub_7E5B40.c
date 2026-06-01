_QWORD *__fastcall sub_7E5B40(__int64 a1, const void **a2, __int64 *a3, int a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned int *v10; // r15
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 (*v13)(void); // rax
  __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v18; // rax
  __int64 v20; // [rsp+8h] [rbp-50h]
  __int128 v21[4]; // [rsp+10h] [rbp-48h] BYREF

  v7 = *a3;
  if ( *a3 )
  {
    v8 = *(unsigned int *)(v7 - 4);
    v9 = 4 * v8;
  }
  else
  {
    v9 = 0;
    LODWORD(v8) = 0;
  }
  v10 = (unsigned int *)*a2;
  if ( *a2 )
  {
    v11 = *(v10 - 1);
    v9 += v11;
  }
  else
  {
    LODWORD(v11) = 0;
  }
  v12 = *(_QWORD *)(a1 + 80);
  v13 = *(__int64 (**)(void))(*(_QWORD *)v12 + 432LL);
  if ( (char *)v13 == (char *)sub_79EFF0 )
  {
    v14 = v12 + 2144;
  }
  else
  {
    v20 = v9;
    v18 = v13();
    v9 = v20;
    v14 = v18;
  }
  v15 = (_QWORD *)sub_180C100(v14, 4 * v9 + 64);
  *v15 = a1;
  v16 = v15 + 1;
  v21[0] = 0;
  sub_7E59A0((__int64)(v15 + 1), v11, v10, v8, v7, a4, (__int64)v21, a5);
  return v16;
}

