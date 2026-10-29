_QWORD *__fastcall sub_7E5DB0(__int64 a1, const void **a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // r15
  __int64 v7; // r13
  __int64 v8; // rdx
  unsigned int *v9; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  __int64 (*v12)(void); // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int128 v19[4]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *a3;
  if ( *a3 )
  {
    v7 = *(unsigned int *)(v6 - 4);
    v8 = 4 * v7;
  }
  else
  {
    v8 = 0;
    LODWORD(v7) = 0;
  }
  v9 = (unsigned int *)*a2;
  if ( *a2 )
  {
    v10 = *(v9 - 1);
    v8 += v10;
  }
  else
  {
    LODWORD(v10) = 0;
  }
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 432LL);
  if ( (char *)v12 == (char *)sub_79EFF0 )
  {
    v13 = v11 + 2144;
  }
  else
  {
    v18 = v8;
    v17 = v12();
    v8 = v18;
    v13 = v17;
  }
  v14 = (_QWORD *)sub_180C100(v13, 4 * v8 + 64);
  *v14 = a1;
  v15 = v14 + 1;
  v19[0] = 0;
  sub_7E59A0((__int64)(v14 + 1), v10, v9, v7, v6, -2, (__int64)v19, a4);
  return v15;
}

