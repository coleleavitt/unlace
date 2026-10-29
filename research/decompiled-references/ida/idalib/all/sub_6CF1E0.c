void *__fastcall sub_6CF1E0(__int64 **a1)
{
  __int64 *v1; // rax
  unsigned __int64 *v3; // r12
  unsigned __int64 *j; // r13
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 *v10; // rbx
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  unsigned int v13; // ebx
  __int64 *v14; // rdi
  __int64 *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 *i; // [rsp+0h] [rbp-98h]
  _QWORD *v20; // [rsp+8h] [rbp-90h]
  unsigned __int64 v21; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-80h] BYREF
  void *v23; // [rsp+20h] [rbp-78h] BYREF
  __int128 v24; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v1 = a1[14];
  v27 = __readfsqword(0x28u);
  v20 = a1 + 9;
  for ( i = v1; i; i = (__int64 *)*i )
  {
    v3 = (unsigned __int64 *)i[2];
    for ( j = &v3[i[3]]; j != v3; ++v3 )
    {
      v5 = *v3;
      v6 = sub_5310F0(*(_QWORD *)(**a1 + 1872), *v3);
      v7 = (__int64)v6;
      if ( v6 )
      {
        v8 = 0;
        if ( *((_DWORD *)v6 + 2) )
        {
          do
          {
            v9 = v8++;
            sub_6BF220(*a1, *(_QWORD *)(*(_QWORD *)(v7 + 16) + 32 * v9), 1);
          }
          while ( v8 < *(unsigned int *)(v7 + 8) );
        }
        v10 = *a1;
        v23 = nullptr;
        ptr = nullptr;
        v24 = 0;
        v26 = 0;
        v11 = *(_QWORD **)(*v10 + 1872);
        v21 = sub_3BDD60(*(_QWORD **)(*v11 + 1672LL), *(_QWORD *)v7);
        sub_7BEA80(&v21, *v11, &v23, 1, 83);
        v12 = *(_QWORD **)(*v10 + 1872);
        v22 = sub_3BDD60(*(_QWORD **)(*v12 + 1672LL), *(_QWORD *)v7);
        sub_7BEA80(&v22, *v12, &ptr, 0, 83);
        v13 = *(_DWORD *)(v7 + 32);
        sub_530950(*(_QWORD *)(**a1 + 1872), v7, 1024);
        v14 = *a1;
        if ( (unsigned __int64)v24 > 1 )
        {
          sub_6BA270((__int64)v14, v13, (__int64)v23, 1u);
        }
        else if ( (unsigned __int64)v26 > 1 )
        {
          sub_6BA270((__int64)v14, v13, (__int64)ptr, 0);
        }
        if ( ptr )
        {
          *(_QWORD *)&v26 = 0;
          qfree(ptr);
        }
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
      }
      else
      {
        v16 = a1[10];
        v17 = (__int64)a1[9];
        if ( a1[11] < (__int64 *)((char *)v16 + 1) )
        {
          v18 = qvector_reserve(v20, v17, (char *)v16 + 1, 8);
          a1[9] = (__int64 *)v18;
          v17 = v18;
          v16 = a1[10];
        }
        *(_QWORD *)(v17 + 8LL * (_QWORD)v16) = v5;
        a1[10] = (__int64 *)((char *)a1[10] + 1);
      }
    }
  }
  return sub_6CF170((__int64)(a1 + 12));
}
