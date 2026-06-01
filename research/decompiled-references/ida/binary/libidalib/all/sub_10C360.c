__int64 *__fastcall sub_10C360(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  _QWORD *v5; // rbx
  __int64 *v6; // rbp
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r13
  const void *v10; // r15
  void *v11; // rax
  const void *v12; // r15
  void *v13; // rax

  if ( a5 >= *(_QWORD *)(a1 + 192) )
  {
    if ( under_debugger )
      BUG();
    interr();
    return (__int64 *)sub_10C580(40649);
  }
  else
  {
    v5 = (_QWORD *)(*(_QWORD *)(a1 + 184) + 200 * a5);
    sub_94440(*a2);
    v6 = *a2;
    if ( *a2 + 3 != v5 + 10 )
    {
      v7 = v5[11];
      if ( v7 > 1 )
      {
        v12 = (const void *)v5[10];
        v13 = (void *)v6[3];
        if ( v6[5] < v7 )
        {
          v13 = (void *)qvector_reserve();
          v6[3] = (__int64)v13;
        }
        v6[4] = v7;
        memmove(v13, v12, v7 - 1);
        *(_BYTE *)(v6[3] + v7 - 1) = 0;
        v6 = *a2;
      }
      else
      {
        v6[4] = 0;
        v6 = *a2;
      }
    }
    if ( v6 + 6 != v5 + 1 )
    {
      v8 = v5[2];
      if ( v8 > 1 )
      {
        v10 = (const void *)v5[1];
        v11 = (void *)v6[6];
        if ( v6[8] < v8 )
        {
          v11 = (void *)qvector_reserve();
          v6[6] = (__int64)v11;
        }
        v6[7] = v8;
        memmove(v11, v10, v8 - 1);
        *(_BYTE *)(v6[6] + v8 - 1) = 0;
      }
      else
      {
        v6[7] = 0;
      }
    }
    print_tinfo();
    print_tinfo();
    sub_94440(*a2 + 15);
    return sub_94440(*a2 + 18);
  }
}

