void __fastcall sub_A9BE70(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // r15
  char v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // r14d
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  unsigned int *v16; // rbx
  unsigned int *v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r13
  void *v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+8h] [rbp-50h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  int v28; // [rsp+18h] [rbp-40h]

  v4 = a3;
  if ( *(_DWORD *)(**(_QWORD **)(a1 + 144) + 4LL * a3) == 4
    && !*(_DWORD *)(sub_FFA040(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), a3) + 32) )
  {
    return;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL);
  v7 = sub_FFADC0(v6, a3);
  v8 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 48) + (v4 << 6);
  if ( v7 )
  {
    v23 = sub_FF9B90(v6);
    v10 = sub_83D5F0(v23, v8);
    if ( v10 )
      goto LABEL_4;
LABEL_21:
    sub_A9B930(a1, a2);
    return;
  }
  v9 = sub_FF9BA0(v6);
  v10 = sub_83D5F0(v9, v8);
  if ( !v10 )
    goto LABEL_21;
LABEL_4:
  v11 = *(_DWORD *)(v10 + 40);
  v25 = 0;
  v12 = (_QWORD *)sub_186B270(0x60u);
  *v12 = 0;
  *(_QWORD *)((char *)v12 + 12) = 0;
  v12[3] = 0;
  *(_QWORD *)((char *)v12 + 36) = 0;
  v12[6] = 0;
  *(_QWORD *)((char *)v12 + 60) = 0;
  v12[9] = 0;
  *(_QWORD *)((char *)v12 + 84) = 0;
  ptr = v12;
  v13 = *(_QWORD *)(a1 + 56);
  v27 = 8;
  v14 = *(_QWORD *)(v13 + 504);
  v28 = 0;
  v15 = *(_QWORD *)(sub_FF9B20(v14) + 256) + 24LL * a2;
  v16 = *(unsigned int **)v15;
  v17 = *(unsigned int **)(v15 + 8);
  if ( *(unsigned int **)v15 != v17 )
  {
    do
    {
      while ( !(unsigned __int8)sub_FFADE0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), *v16) )
      {
        v16 += 10;
        if ( v17 == v16 )
          goto LABEL_9;
      }
      sub_10054D0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), *v16, &v25);
      v16 += 10;
    }
    while ( v17 != v16 );
  }
LABEL_9:
  sub_10054D0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), v11, &v25);
  if ( (unsigned __int8)sub_A9B400(*(unsigned int ***)(a1 + 56), v11, a3, (__int64)&v25, 1) )
  {
    v24 = sub_FF9A30(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL));
    ++*(_DWORD *)(v24 + 120);
  }
  if ( ptr )
    sub_186B220(ptr);
  v18 = v25;
  if ( v25 )
  {
    v19 = *(unsigned int *)(v25 - 4);
    if ( (_DWORD)v19 )
    {
      v20 = v25 + 40 * v19;
      do
      {
        v21 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v18 + 8);
        v22 = v18 + 24;
        v18 += 40;
        sub_182CBA0(v21, v22);
      }
      while ( v20 != v18 );
      v18 = v25;
    }
    sub_186B220((void *)(v18 - 8));
  }
}

