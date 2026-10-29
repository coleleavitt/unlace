__int64 __fastcall sub_8CEBD0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbp
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rdi
  unsigned int v16; // r14d
  unsigned int i; // ebp
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // eax
  unsigned int v23; // eax
  char v24; // [rsp+Fh] [rbp-99h] BYREF
  _QWORD v25[4]; // [rsp+10h] [rbp-98h] BYREF
  int v26[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v27; // [rsp+38h] [rbp-70h]
  __int64 v28; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  int v30[22]; // [rsp+50h] [rbp-58h] BYREF

  v3 = a1 + 13;
  v25[0] = 0;
  v25[1] = 0;
  v25[2] = 1;
  v25[3] = 0;
  if ( (unsigned __int8)sub_1666AE0(a1 + 13, a2, v25, &v24) )
  {
    v5 = sub_8CEA20((__int64)a1, (unsigned int *)a2, (int *)v25);
LABEL_3:
    v6 = v5;
    goto LABEL_4;
  }
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_13;
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_DWORD **)(v8 + 24);
  if ( !v9 || *v9 != 5 )
    goto LABEL_13;
  if ( v9[1] != 6 )
  {
LABEL_9:
    v6 = -1;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
LABEL_11:
    v10 = *(_DWORD **)(v8 + 24);
    if ( v10 && *v10 == 5 )
      goto LABEL_9;
LABEL_13:
    v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 392LL))(a1, a2);
    goto LABEL_3;
  }
  if ( (unsigned __int8)sub_1666AE0(v3, *(_QWORD *)(a2 + 32), v25, v30) )
  {
    v11 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) != 2 || !(unsigned __int8)sub_1666AE0(v3, *(_QWORD *)(a2 + 40), v25, v26) )
    {
      if ( *(_WORD *)(a2 + 4) )
        goto LABEL_13;
      v8 = *(_QWORD *)(a2 + 16);
      goto LABEL_11;
    }
    v11 = *(_QWORD *)(a2 + 32);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 392LL))(a1, v11);
  v14 = *(_DWORD *)(a2 + 24);
  v15 = a1[2];
  v16 = v12;
  if ( v14 )
  {
    for ( i = 0; i < v14; ++i )
    {
      while ( 1 )
      {
        v18 = *(_QWORD *)(v15 + 8656);
        if ( !v18 )
          break;
        v19 = **(unsigned int **)(a2 + 8LL * i + 32);
        if ( (unsigned int)v19 >= *(_DWORD *)(v18 - 4) || !*(_QWORD *)(v18 + 8 * v19) )
          break;
        if ( ++i >= v14 )
          goto LABEL_27;
      }
      sub_B6F780(v15);
      v14 = *(_DWORD *)(a2 + 24);
      v15 = a1[2];
    }
  }
LABEL_27:
  v20 = sub_B68280(v15, a2, 0, 0, 1, v13);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64))*a1)(a1, v20);
  *(_QWORD *)v26 = 0;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v26, (int *)v25);
  v21 = (__int64)(a1 + 26);
  v22 = sub_8ACED0(v21, v16, v6, v26, (int *)&qword_18C26B0);
  sub_8CBC10(v21, v22);
  sub_3EBD70((__int64)v30, (__int64)v26);
  v23 = sub_8ACED0(v21, v6, v16, v30, (int *)&qword_18C26B0);
  sub_8CBC10(v21, v23);
  sub_25A130((char *)v30);
  sub_25A130((char *)v26);
LABEL_4:
  sub_25A130((char *)v25);
  return v6;
}

