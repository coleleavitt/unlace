__int64 __fastcall sub_71D930(
        unsigned __int64 a1,
        unsigned int **a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 v6; // r12
  unsigned int *v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r13
  unsigned int v14; // ebx
  __int64 v17; // [rsp+8h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 16);
  v7 = *a2;
  v8 = *(_QWORD *)(v6 + 8);
  if ( (_DWORD)a3 )
  {
    a3 = 3LL * ((int)a3 - 1);
    v9 = *(unsigned int *)((char *)v7 + 2 * a3 + 6);
  }
  else
  {
    v9 = *v7;
  }
  if ( !(_DWORD)v9 )
    sub_722BF0(a1, v9, a3);
  v10 = sub_71AA60(a1, v9, 1u);
  if ( !v10 || *(__int16 *)(v10 + 8) < 0 )
    sub_722BF0(a1, v9, v11);
  v12 = *(_QWORD *)v10;
  v13 = *(_QWORD *)(a1 + 8);
  v17 = v10;
  sub_7180A0(v13, *(_QWORD *)v10);
  v14 = sub_71D340(a1, v17, a4, a5);
  sub_7180B0(v13, v12);
  *(_QWORD *)(v6 + 8) = v8;
  return v14;
}

