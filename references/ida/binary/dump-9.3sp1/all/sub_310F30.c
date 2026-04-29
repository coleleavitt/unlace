unsigned __int64 __fastcall sub_310F30(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned __int64 v6; // rbx
  unsigned int v7; // r13d
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int j; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rdx
  int v16; // eax
  __int64 v17; // r14
  unsigned __int64 i; // rbx
  unsigned int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 *v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-78h] BYREF
  __int128 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+18h] [rbp-60h]
  __int128 v29; // [rsp+20h] [rbp-58h]
  unsigned __int64 v30; // [rsp+38h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v26 = 0;
  v28 = 0;
  v27 = 0;
  v29 = 0;
  sub_6DBE0(a1, &v26);
  v4 = *(__int64 (**)(void))(*a1 + 64);
  if ( a3 )
  {
    v5 = v4() - 1;
    v6 = v5;
    if ( v5 >= 0 )
    {
      do
      {
        if ( v6 < (unsigned __int64)v27 )
        {
          v7 = *(_DWORD *)(v26 + 4 * v6);
          if ( v7 != -1
            && (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) != v7
            && (unsigned __int8)sub_64190(a2 + 3, v7) )
          {
            v22 = qalloc_or_throw(24, v7, v8, v9);
            *(_DWORD *)(v22 + 16) = v7;
            *(_QWORD *)v22 = a2;
            v23 = (__int64 *)a2[1];
            *(_QWORD *)(v22 + 8) = v23;
            *v23 = v22;
            a2[1] = v22;
            ++a2[2];
          }
        }
        --v6;
      }
      while ( (v6 & 0x80000000) == 0LL );
    }
  }
  else
  {
    v16 = v4();
    if ( v16 > 0 )
    {
      v17 = v16;
      for ( i = 0; i != v17; ++i )
      {
        if ( i < (unsigned __int64)v27 )
        {
          v19 = *(_DWORD *)(v26 + 4 * i);
          if ( v19 != -1
            && (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 88))(a1) != v19
            && (unsigned __int8)sub_64190(a2 + 3, v19) )
          {
            v24 = qalloc_or_throw(24, v19, v20, v21);
            *(_DWORD *)(v24 + 16) = v19;
            *(_QWORD *)v24 = a2;
            v25 = (__int64 *)a2[1];
            *(_QWORD *)(v24 + 8) = v25;
            *v25 = v24;
            a2[1] = v24;
            ++a2[2];
          }
        }
      }
    }
  }
  for ( j = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        j != (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1);
        j = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, j + 1) )
  {
    if ( !sub_64930(a2 + 3, j) )
    {
      if ( (unsigned __int8)sub_64190(a2 + 3, j) )
      {
        v13 = qalloc_or_throw(24, j, v11, v12);
        *(_DWORD *)(v13 + 16) = j;
        *(_QWORD *)v13 = a2;
        v14 = (__int64 *)a2[1];
        *(_QWORD *)(v13 + 8) = v14;
        *v14 = v13;
        a2[1] = v13;
        ++a2[2];
      }
    }
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v30 - __readfsqword(0x28u);
}
