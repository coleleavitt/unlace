__int64 __fastcall sub_D200(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // r13
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // [rsp+Ch] [rbp-ACh] BYREF
  _BYTE v19[96]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp-48h]
  unsigned __int64 v21; // [rsp+88h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  if ( (int)sub_B290(a3, (__int64)&v18, 4, 1) < 0 || !v18 )
    return 0;
  v6 = v18;
  v7 = a2[1];
  v8 = v18 + 1LL;
  if ( v7 < v8 )
  {
    v15 = *a2;
    if ( a2[2] < v8 )
    {
      v16 = qvector_reserve(a2, v15, v18 + 1LL, 1);
      v7 = a2[1];
      *a2 = v16;
      v15 = v16;
    }
    memset((void *)(v15 + v7), 0, v8 - v7);
    a2[1] = v8;
  }
  else if ( v8 != v7 )
  {
    a2[1] = v8;
  }
  *(_BYTE *)(*a2 + v6) = 0;
  v9 = qlread(*(_QWORD *)(a3 + 472), *a2, v18);
  if ( v18 != v9 )
    return 0;
  if ( (int)sub_B290(a3, (__int64)(a2 + 3), 4, 1) < 0 )
    return 0;
  if ( (int)sub_B290(a3, (__int64)a2 + 28, 4, 1) < 0 )
    return 0;
  v10 = *(_QWORD *)(a1 + 8) + *((unsigned int *)a2 + 7);
  a2[4] = v10;
  if ( v10 < *(_QWORD *)(a1 + 8) )
    return 0;
  v11 = *(_QWORD *)(a1 + 16);
  if ( v10 >= v11 )
    return 0;
  *((_DWORD *)a2 + 10) = v11 - v10;
  v12 = qlseek(*(_QWORD *)(a3 + 472), 0, 1);
  v13 = *(_QWORD *)(a3 + 480);
  v14 = v12 - v13;
  qlseek(*(_QWORD *)(a3 + 472), a2[4] + v13, 0);
  sub_B290(a3, (__int64)v19, 112, 1);
  qlseek(*(_QWORD *)(a3 + 472), v14 + *(_QWORD *)(a3 + 480), 0);
  if ( v19[0] != 100
    || v19[1] != 101
    || (unsigned __int8)(v19[2] - 120) > 1u
    || v19[3] != 10
    || (unsigned __int8)(v19[4] - 48) > 9u
    || (unsigned __int8)(v19[5] - 48) > 9u
    || (unsigned __int8)(v19[6] - 48) > 9u
    || v19[7] )
  {
    sub_5860((__int64)"Could not locate DEX file inside the OAT file\n");
    return 0;
  }
  v17 = *(_DWORD *)a1;
  if ( (unsigned int)(*(_DWORD *)a1 - 39) <= 0x21 )
  {
    qlseek(*(_QWORD *)(a3 + 472), *(_QWORD *)(a3 + 480) + v14 + 4LL * v20, 0);
    return 1;
  }
  if ( (unsigned int)(v17 - 73) <= 1 )
  {
    qlseek(*(_QWORD *)(a3 + 472), *(_QWORD *)(a3 + 480) + v14 + 4LL * v20 + 4, 0);
    return 1;
  }
  if ( (unsigned int)(v17 - 75) <= 0x33 )
  {
    qlseek(*(_QWORD *)(a3 + 472), v14 + *(_QWORD *)(a3 + 480) + 8, 0);
    return 1;
  }
  if ( v17 <= 126 )
    return 0;
  qlseek(*(_QWORD *)(a3 + 472), v14 + *(_QWORD *)(a3 + 480) + 12, 0);
  return 1;
}
