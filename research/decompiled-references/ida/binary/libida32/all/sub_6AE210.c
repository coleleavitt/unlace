void *__fastcall sub_6AE210(__int64 **a1)
{
  __int64 *v1; // rax
  unsigned int *v3; // rbp
  unsigned int *j; // r12
  unsigned int v5; // r15d
  _DWORD *v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 *v10; // r15
  _QWORD *v11; // r13
  __int64 *v12; // r15
  int v13; // eax
  __int64 v14; // rsi
  unsigned int v15; // r15d
  __int64 *v16; // rdi
  __int64 *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *i; // [rsp+0h] [rbp-98h]
  _QWORD *v22; // [rsp+8h] [rbp-90h]
  int v23; // [rsp+18h] [rbp-80h] BYREF
  int v24; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *v25; // [rsp+20h] [rbp-78h] BYREF
  __int128 v26; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v28; // [rsp+48h] [rbp-50h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v1 = a1[14];
  v29 = __readfsqword(0x28u);
  v22 = a1 + 9;
  for ( i = v1; i; i = (__int64 *)*i )
  {
    v3 = (unsigned int *)i[2];
    for ( j = &v3[i[3]]; j != v3; ++v3 )
    {
      v5 = *v3;
      v6 = sub_518BB0(*(_QWORD *)(**a1 + 1680), *v3);
      v7 = (__int64)v6;
      if ( v6 )
      {
        v8 = 0;
        if ( v6[1] )
        {
          do
          {
            v9 = 5 * v8++;
            sub_69E750(*a1, *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v9), 1);
          }
          while ( v8 < *(unsigned int *)(v7 + 4) );
        }
        v25 = nullptr;
        v10 = *a1;
        ptr = nullptr;
        v26 = 0;
        v28 = 0;
        v11 = *(_QWORD **)(*v10 + 1680);
        v23 = sub_3B90A0(*(_QWORD **)(*v11 + 1480LL), *(_DWORD *)v7);
        sub_79B6F0(&v23, *v11, &v25, 1, 83);
        v12 = *(__int64 **)(*v10 + 1680);
        v13 = sub_3B90A0(*(_QWORD **)(*v12 + 1480), *(_DWORD *)v7);
        v14 = *v12;
        v24 = v13;
        sub_79B6F0(&v24, v14, &ptr, 0, 83);
        v15 = *(_DWORD *)(v7 + 24);
        sub_518560(*(_QWORD *)(**a1 + 1680), v7, 1024);
        v16 = *a1;
        if ( (unsigned __int64)v26 > 1 )
        {
          sub_699910((__int64)v16, v15, (__int64)v25, 1u);
        }
        else if ( (unsigned __int64)v28 > 1 )
        {
          sub_699910((__int64)v16, v15, (__int64)ptr, 0);
        }
        if ( ptr )
        {
          *(_QWORD *)&v28 = 0;
          qfree(ptr);
        }
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v25);
        }
      }
      else
      {
        v18 = a1[10];
        v19 = (__int64)a1[9];
        if ( a1[11] < (__int64 *)((char *)v18 + 1) )
        {
          v20 = qvector_reserve(v22, v19, (char *)v18 + 1, 4);
          a1[9] = (__int64 *)v20;
          v19 = v20;
          v18 = a1[10];
        }
        *(_DWORD *)(v19 + 4LL * (_QWORD)v18) = v5;
        a1[10] = (__int64 *)((char *)a1[10] + 1);
      }
    }
  }
  return sub_6AE1A0((__int64)(a1 + 12));
}

