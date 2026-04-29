unsigned __int64 __fastcall sub_6B1C0(__int64 *a1, _QWORD *a2, __int64 *a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  int i; // eax
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int k; // ebp
  __int64 v17; // r8
  int v18; // r9d
  int m; // r14d
  __int64 v20; // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  int n; // eax
  int v24; // ebx
  int ii; // eax
  int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // rbp
  __int64 v29; // rbx
  __int64 v30; // rax
  __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  int j; // [rsp+Ch] [rbp-BCh]
  int v37; // [rsp+10h] [rbp-B8h]
  __int64 v39[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+30h] [rbp-98h] BYREF
  __int128 v41; // [rsp+38h] [rbp-90h]
  __int64 v42; // [rsp+50h] [rbp-78h] BYREF
  __int128 v43; // [rsp+58h] [rbp-70h]
  __int64 v44; // [rsp+68h] [rbp-60h]
  __int128 v45; // [rsp+70h] [rbp-58h]
  unsigned __int64 v46; // [rsp+88h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v5 = *a1;
  if ( a4 )
    v37 = (*(__int64 (**)(void))(v5 + 88))();
  else
    v37 = (*(__int64 (**)(void))(v5 + 80))();
  v6 = *a1;
  v40 = 0;
  v41 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 56))(a1);
  sub_6AC40(&v40, v7);
  for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v10 + 1)) )
  {
    v10 = i;
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) == i )
      break;
    v9 = 16LL * v10;
    sub_5E350((__int64 *)(v9 + v40), (__int64 *)(v9 + *a2));
    sub_5DDC0((__int64 *)(v9 + v40), v10);
  }
  v42 = 0;
  v44 = 0;
  v43 = 0;
  v45 = 0;
  if ( a4 )
    sub_67660(a1, &v42);
  else
    sub_66E80((__int64)a1, &v42);
  v11 = 0;
  for ( j = 0; j < (unsigned __int64)v43; v11 = ++j )
  {
    v12 = *(_DWORD *)(v42 + 4 * v11);
    if ( v12 == -1 )
      break;
    if ( v37 != v12 )
    {
      v39[0] = 0;
      v39[1] = 0;
      v13 = v40 + 16LL * v12;
      for ( k = sub_5E3E0((_QWORD *)v13, 0); k != *(_DWORD *)(v13 + 8); k = sub_5E3E0((_QWORD *)v13, k + 1) )
      {
        for ( m = sub_5E3E0((_QWORD *)v13, 0); m != *(_DWORD *)(v13 + 8); m = sub_5E3E0((_QWORD *)v13, m + 1) )
        {
          if ( m != k && sub_5E3B0((_QWORD *)(16LL * k + v40), m) )
            sub_5DC10(v39, m);
        }
      }
      sub_5E0C0((__int64 *)v13, v39, v14, v15, v17, v18);
      qfree(v39[0]);
    }
  }
  v20 = *a1;
  LODWORD(v39[0]) = -1;
  v21 = (*(int (__fastcall **)(__int64 *))(v20 + 56))(a1);
  v22 = a3[1];
  if ( v21 < v22 )
    goto LABEL_51;
  if ( v22 < v21 )
  {
    v32 = *a3;
    v33 = a3[2];
    if ( (unsigned __int64)v39 < *a3 || (unsigned __int64)v39 >= v32 + 4 * v33 )
    {
      if ( v33 >= v21 || (v35 = qvector_reserve(a3, v32, v21, 4), *a3 = v35, v32 = v35, v22 = a3[1], v22 < v21) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v32 + 4 * v22++) = -1;
          if ( v21 == v22 )
            break;
          v32 = *a3;
        }
      }
    }
    else if ( v33 >= v21 || (v34 = qvector_reserve(a3, v32, v21, 4), *a3 = v34, v32 = v34, v22 = a3[1], v22 < v21) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v32 + 4 * v22++) = -1;
        if ( v21 == v22 )
          break;
        v32 = *a3;
      }
    }
LABEL_51:
    a3[1] = v21;
  }
  for ( n = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        ;
        n = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v24 + 1)) )
  {
    v24 = n;
    if ( n == (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) )
      break;
    if ( v37 == v24 || (unsigned __int8)sub_5E300((_QWORD *)(16LL * v24 + v40)) )
      *(_DWORD *)(*a3 + 4LL * v24) = -1;
    else
      *(_DWORD *)(*a3 + 4LL * v24) = sub_5E3E0((_QWORD *)(16LL * v24 + v40), 0);
  }
  if ( a4 )
  {
    for ( ii = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
          ;
          ii = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v26 + 1)) )
    {
      v26 = ii;
      if ( ii == (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) )
        break;
      if ( !*(_DWORD *)(*a3 + 4LL * v26) )
      {
        if ( !under_debugger )
          sub_37B760(50416);
        BUG();
      }
    }
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44);
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  v27 = v40;
  if ( v40 )
  {
    v28 = v41;
    if ( (_QWORD)v41 )
    {
      v29 = 0;
      do
      {
        v30 = v29++;
        qfree(*(_QWORD *)(v27 + 16 * v30));
        v27 = v40;
      }
      while ( v28 != v29 );
    }
    *(_QWORD *)&v41 = 0;
    qfree(v27);
  }
  return v46 - __readfsqword(0x28u);
}
