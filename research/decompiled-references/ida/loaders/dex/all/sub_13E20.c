__int64 __fastcall sub_13E20(__int64 a1, unsigned __int64 a2, unsigned int a3, const char *a4, double a5)
{
  __int64 v5; // r12
  bool v6; // cf
  unsigned __int64 v7; // r12
  __int64 v10; // rbx
  unsigned __int64 v12; // rdx
  const char *v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ebp
  __int64 v18; // rdx
  unsigned int dword; // eax
  __int64 v20; // rdi
  int v21; // edx
  char v22; // [rsp+Fh] [rbp-59h]
  const char *v23; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v5 = 8LL * a3;
  v6 = __CFADD__(a2, v5);
  v7 = a2 + v5;
  v25 = __readfsqword(0x28u);
  if ( a3 > 0x1FFFFFFF || v6 || a2 < *(_QWORD *)(a1 + 168) || *(_QWORD *)(a1 + 176) < v7 )
  {
    sub_5860((__int64)"dex: failed to format '%s' annotation at %a\n", a4, a5);
    return -1;
  }
  else
  {
    v10 = a2;
    v22 = *a4;
    if ( a3 )
    {
      do
      {
        create_data(v10, 0x20000000, 4, -1);
        dword = get_dword(v10, 0x20000000, v18);
        v20 = *(_QWORD *)(a1 + 8);
        v21 = *(_DWORD *)a1;
        v24 = 0;
        v23 = nullptr;
        if ( v22 == 102 )
        {
          sub_89A0(v20, (__int64 *)&v23, v21, dword);
          v13 = s1;
          v14 = "Field";
          if ( (_QWORD)v24 )
            v13 = v23;
        }
        else
        {
          v12 = (unsigned int)(v21 - 1);
          if ( v12 >= *(_QWORD *)(v20 + 56) )
            sub_59F0();
          if ( (unsigned __int8)sub_8BD0((__int64)&v23, *(_QWORD *)(*(_QWORD *)(v20 + 48) + 8 * v12), dword, 0x4Eu) )
            sub_57A0(&v23);
          v13 = s1;
          v14 = "Method";
          if ( (_QWORD)v24 )
          {
            v13 = v23;
            v14 = "Method";
          }
        }
        sub_13370(v10, (__int64)"%s: '%s'", v14, v13);
        v15 = num_flag();
        set_op_type(v10, v15, 0);
        create_data(v10 + 4, 0x20000000, 4, -1);
        v17 = get_dword(v10 + 4, 0x20000000, v16);
        sub_13370(v10 + 4, (__int64)"Offset to %s annotation", a4);
        add_dref(v10 + 4, *(_QWORD *)(a1 + 152) + v17, 5);
        v10 += 8;
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23);
        }
      }
      while ( v7 != v10 );
    }
  }
  return v10;
}

