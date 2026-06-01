unsigned __int64 __fastcall sub_70C80(__int64 *a1, _QWORD *a2, __int64 *a3, char a4)
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
  __int64 v27; // rbp
  __int64 v28; // rbx
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  int j; // [rsp+Ch] [rbp-BCh]
  int v35; // [rsp+10h] [rbp-B8h]
  __int64 v37[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-98h] BYREF
  __int128 v39; // [rsp+38h] [rbp-90h]
  __int64 v40; // [rsp+50h] [rbp-78h] BYREF
  __int128 v41; // [rsp+58h] [rbp-70h]
  __int64 v42; // [rsp+68h] [rbp-60h]
  __int128 v43; // [rsp+70h] [rbp-58h]
  unsigned __int64 v44; // [rsp+88h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v5 = *a1;
  if ( a4 )
    v35 = (*(__int64 (**)(void))(v5 + 88))();
  else
    v35 = (*(__int64 (**)(void))(v5 + 80))();
  v6 = *a1;
  v38 = 0;
  v39 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *))(v6 + 56))(a1);
  sub_70700(&v38, v7);
  for ( i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        ;
        i = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(v10 + 1)) )
  {
    v10 = i;
    if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1) == i )
      break;
    v9 = 16LL * v10;
    sub_63FD0((__int64 *)(v9 + v38), (__int64 *)(v9 + *a2));
    sub_63A40((__int64 *)(v9 + v38), v10);
  }
  v40 = 0;
  v42 = 0;
  v41 = 0;
  v43 = 0;
  if ( a4 )
    sub_6D120(a1, &v40);
  else
    sub_6C940((__int64)a1, &v40);
  v11 = 0;
  for ( j = 0; j < (unsigned __int64)v41; v11 = ++j )
  {
    v12 = *(_DWORD *)(v40 + 4 * v11);
    if ( v12 == -1 )
      break;
    if ( v35 != v12 )
    {
      v37[0] = 0;
      v37[1] = 0;
      v13 = v38 + 16LL * v12;
      for ( k = sub_64060((_QWORD *)v13, 0); k != *(_DWORD *)(v13 + 8); k = sub_64060((_QWORD *)v13, k + 1) )
      {
        for ( m = sub_64060((_QWORD *)v13, 0); m != *(_DWORD *)(v13 + 8); m = sub_64060((_QWORD *)v13, m + 1) )
        {
          if ( m != k && sub_64030((_QWORD *)(16LL * k + v38), m) )
            sub_63890(v37, m);
        }
      }
      sub_63D40((__int64 *)v13, v37, v14, v15, v17, v18);
      qfree();
    }
  }
  v20 = *a1;
  LODWORD(v37[0]) = -1;
  v21 = (*(int (__fastcall **)(__int64 *))(v20 + 56))(a1);
  v22 = a3[1];
  if ( v21 < v22 )
    goto LABEL_51;
  if ( v22 < v21 )
  {
    v30 = *a3;
    v31 = a3[2];
    if ( (unsigned __int64)v37 < *a3 || (unsigned __int64)v37 >= v30 + 4 * v31 )
    {
      if ( v31 >= v21 || (v33 = qvector_reserve(), *a3 = v33, v30 = v33, v22 = a3[1], v22 < v21) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v30 + 4 * v22++) = -1;
          if ( v21 == v22 )
            break;
          v30 = *a3;
        }
      }
    }
    else if ( v31 >= v21 || (v32 = qvector_reserve(), *a3 = v32, v30 = v32, v22 = a3[1], v22 < v21) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v30 + 4 * v22++) = -1;
        if ( v21 == v22 )
          break;
        v30 = *a3;
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
    if ( v35 == v24 || (unsigned __int8)sub_63F80((_QWORD *)(16LL * v24 + v38)) )
      *(_DWORD *)(*a3 + 4LL * v24) = -1;
    else
      *(_DWORD *)(*a3 + 4LL * v24) = sub_64060((_QWORD *)(16LL * v24 + v38), 0);
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
          sub_37EA20(50416);
        BUG();
      }
    }
  }
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree();
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  if ( v38 )
  {
    v27 = v39;
    if ( (_QWORD)v39 )
    {
      v28 = 0;
      do
      {
        ++v28;
        qfree();
      }
      while ( v27 != v28 );
    }
    *(_QWORD *)&v39 = 0;
    qfree();
  }
  return v44 - __readfsqword(0x28u);
}
