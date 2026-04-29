unsigned __int64 __fastcall sub_3112F0(__int64 *a1, _QWORD *a2, char a3)
{
  __int64 (*v4)(void); // rax
  int v5; // eax
  unsigned __int64 v6; // rbx
  int v7; // r13d
  int j; // ebx
  __int64 v9; // rax
  __int64 *v10; // rdx
  int v12; // eax
  __int64 v13; // r14
  unsigned __int64 i; // rbx
  int v15; // r13d
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-78h] BYREF
  __int128 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+18h] [rbp-60h]
  __int128 v23; // [rsp+20h] [rbp-58h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v20 = 0;
  v22 = 0;
  v21 = 0;
  v23 = 0;
  sub_6D620(a1, &v20);
  v4 = *(__int64 (**)(void))(*a1 + 64);
  if ( a3 )
  {
    v5 = v4() - 1;
    v6 = v5;
    if ( v5 >= 0 )
    {
      do
      {
        if ( v6 < (unsigned __int64)v21 )
        {
          v7 = *(_DWORD *)(v20 + 4 * v6);
          if ( v7 != -1
            && (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) != v7
            && (unsigned __int8)sub_63B90(a2 + 3, v7) )
          {
            v16 = qalloc_or_throw(24);
            *(_DWORD *)(v16 + 16) = v7;
            *(_QWORD *)v16 = a2;
            v17 = (__int64 *)a2[1];
            *(_QWORD *)(v16 + 8) = v17;
            *v17 = v16;
            a2[1] = v16;
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
    v12 = v4();
    if ( v12 > 0 )
    {
      v13 = v12;
      for ( i = 0; i != v13; ++i )
      {
        if ( i < (unsigned __int64)v21 )
        {
          v15 = *(_DWORD *)(v20 + 4 * i);
          if ( v15 != -1
            && (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 88))(a1) != v15
            && (unsigned __int8)sub_63B90(a2 + 3, v15) )
          {
            v18 = qalloc_or_throw(24);
            *(_DWORD *)(v18 + 16) = v15;
            *(_QWORD *)v18 = a2;
            v19 = (__int64 *)a2[1];
            *(_QWORD *)(v18 + 8) = v19;
            *v19 = v18;
            a2[1] = v18;
            ++a2[2];
          }
        }
      }
    }
  }
  for ( j = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, 0);
        j != (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 56))(a1);
        j = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 160))(a1, (unsigned int)(j + 1)) )
  {
    if ( !sub_64330(a2 + 3, j) )
    {
      if ( (unsigned __int8)sub_63B90(a2 + 3, j) )
      {
        v9 = qalloc_or_throw(24);
        *(_DWORD *)(v9 + 16) = j;
        *(_QWORD *)v9 = a2;
        v10 = (__int64 *)a2[1];
        *(_QWORD *)(v9 + 8) = v10;
        *v10 = v9;
        a2[1] = v9;
        ++a2[2];
      }
    }
  }
  if ( v22 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v22);
  }
  if ( v20 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v20);
  }
  return v24 - __readfsqword(0x28u);
}
