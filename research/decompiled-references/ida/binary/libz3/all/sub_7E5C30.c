_QWORD *__fastcall sub_7E5C30(__int64 a1, const void **a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 v12; // rcx
  unsigned int *v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 (*v16)(void); // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 v21; // rax
  const void *v22; // [rsp+8h] [rbp-60h]
  unsigned int *v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+10h] [rbp-58h]
  __int64 v26; // [rsp+18h] [rbp-50h]
  _QWORD v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v10 = *a3;
  if ( *a3 )
  {
    v11 = *(unsigned int *)(v10 - 4);
    v12 = 4 * v11;
  }
  else
  {
    v12 = 0;
    LODWORD(v11) = 0;
  }
  v13 = (unsigned int *)*a2;
  if ( *a2 )
  {
    v14 = *(v13 - 1);
    v12 += v14;
  }
  else
  {
    LODWORD(v14) = 0;
  }
  v15 = *(_QWORD *)(a1 + 80);
  v16 = *(__int64 (**)(void))(*(_QWORD *)v15 + 432LL);
  if ( (char *)v16 == (char *)sub_79EFF0 )
  {
    v17 = v15 + 2144;
  }
  else
  {
    v26 = v12;
    v25 = v10;
    v23 = (unsigned int *)*a2;
    v21 = v16();
    v12 = v26;
    v10 = v25;
    v13 = v23;
    v17 = v21;
  }
  v24 = v10;
  v22 = v13;
  v18 = (_QWORD *)sub_180C100(v17, 4 * v12 + 64);
  v27[0] = a4;
  *v18 = a1;
  v19 = v18 + 1;
  v27[1] = a5;
  sub_7E59A0((__int64)(v18 + 1), v14, v22, v11, v24, -2, (__int64)v27, a6);
  return v19;
}

