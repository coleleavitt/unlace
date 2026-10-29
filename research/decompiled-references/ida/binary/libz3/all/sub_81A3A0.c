double __fastcall sub_81A3A0(unsigned int *a1, __int64 a2, double (__fastcall ***a3)(_QWORD))
{
  unsigned int v4; // r13d
  unsigned int *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned int *v8; // r12
  unsigned int v9; // r14d
  int v10; // eax
  bool v11; // al
  __int64 v13; // rax
  unsigned int *v14; // r14
  unsigned int v15; // ebx
  int v16; // eax
  double v17; // [rsp+0h] [rbp-58h]
  double v18; // [rsp+10h] [rbp-48h]
  unsigned int *v19; // [rsp+18h] [rbp-40h]

  v4 = a1[15];
  if ( *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 96LL))(a2) + 248) == 2 )
  {
    v13 = 2LL * a1[8];
    v19 = &a1[v13 + 19];
    if ( !(v13 * 4) )
      return 0.0;
    v17 = 0.0;
    v14 = a1 + 19;
    v6 = 0;
    v18 = 0.0;
    while ( 1 )
    {
      v15 = *v14;
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
      if ( v16 )
      {
        if ( v16 != 1 )
          goto LABEL_17;
        if ( v15 >= v4 )
          return 0.0;
      }
      v6 += v15;
      v18 = (**a3)(a3) + v18;
      v17 = v17 + 1.0;
LABEL_17:
      v14 += 2;
      if ( v19 == v14 )
        goto LABEL_9;
    }
  }
  v5 = a1 + 19;
  v17 = 0.0;
  v6 = 0;
  v7 = 2LL * a1[8];
  v8 = &a1[v7 + 19];
  if ( !(v7 * 4) )
    return 0.0;
  do
  {
    v9 = *v5;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v5[1]);
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_7;
      if ( v9 >= v4 )
        return 0.0;
    }
    v6 += v9;
    v17 = v17 + 1.0;
LABEL_7:
    v5 += 2;
  }
  while ( v8 != v5 );
  v18 = 1.0;
LABEL_9:
  if ( v4 < v6 )
  {
    v11 = 1;
    if ( v17 != 0.0 )
      v11 = v4 >= v6;
    if ( !v11 )
      return pow(0.5, (double)(int)(v6 - v4 + 1) / ((double)(int)v6 / v17)) * v18;
  }
  return 0.0;
}

