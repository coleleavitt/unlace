__int64 __fastcall sub_8D64E0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r13
  unsigned int v5; // eax
  unsigned int v6; // ebp
  __int64 v8; // rdx
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // ecx
  __int64 v15; // rdi
  unsigned int i; // r13d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // [rsp+Ch] [rbp-CCh]
  char v24; // [rsp+1Fh] [rbp-B9h] BYREF
  _QWORD v25[4]; // [rsp+20h] [rbp-B8h] BYREF
  int v26[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v27; // [rsp+48h] [rbp-90h]
  __int64 v28; // [rsp+50h] [rbp-88h]
  __int64 v29; // [rsp+58h] [rbp-80h]
  int v30; // [rsp+60h] [rbp-78h]
  int v31; // [rsp+70h] [rbp-68h] BYREF
  char v32; // [rsp+74h] [rbp-64h]
  __int64 v33; // [rsp+78h] [rbp-60h]
  int v34; // [rsp+80h] [rbp-58h]
  char v35; // [rsp+84h] [rbp-54h]
  __int64 v36; // [rsp+88h] [rbp-50h]
  int v37; // [rsp+90h] [rbp-48h]

  v2 = a1 + 14;
  v25[0] = 0;
  v25[1] = 0;
  v25[2] = 1;
  v25[3] = 0;
  if ( (unsigned __int8)sub_1666AE0(a1 + 14, a2, v25, &v24) )
  {
    v5 = sub_8D62F0((__int64)a1, (unsigned int *)a2, (int *)v25);
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
  if ( (unsigned __int8)sub_1666AE0(v2, *(_QWORD *)(a2 + 32), v25, &v31) )
  {
    v11 = *(_QWORD *)(a2 + 40);
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) != 2 || !(unsigned __int8)sub_1666AE0(v2, *(_QWORD *)(a2 + 40), v25, v26) )
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
  v23 = v12;
  if ( v14 )
  {
    for ( i = 0; i < v14; ++i )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)(v15 + 8656);
        if ( !v17 )
          break;
        v18 = **(unsigned int **)(a2 + 8LL * i + 32);
        if ( (unsigned int)v18 >= *(_DWORD *)(v17 - 4) || !*(_QWORD *)(v17 + 8 * v18) )
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
  v19 = sub_B68280(v15, a2, 0, 0, 1, v13);
  v6 = (*(__int64 (__fastcall **)(_QWORD *, __int64))*a1)(a1, v19);
  *(_QWORD *)v26 = 0;
  v27 = 0;
  v28 = 1;
  v29 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v26, (int *)v25);
  v20 = (__int64)(a1 + 27);
  v30 = 0;
  v21 = sub_8AD5A0(v20, v23, v6, v26, (int *)&qword_18C26B0);
  sub_8D33D0(v20, v21);
  v32 &= 0xFCu;
  v35 &= 0xFCu;
  v31 = 0;
  v33 = 0;
  v34 = 1;
  v36 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v31, v26);
  v37 = v30;
  sub_1831620(qword_1C7F2C0, &v31);
  v37 = -v37;
  v22 = sub_8AD5A0(v20, v6, v23, &v31, (int *)&qword_18C26B0);
  sub_8D33D0(v20, v22);
  sub_25A130((char *)&v31);
  sub_25A130((char *)v26);
LABEL_4:
  sub_25A130((char *)v25);
  return v6;
}

