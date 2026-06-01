signed __int64 __fastcall sub_410AE0(__int64 a1, char *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int64 v5; // r15
  signed __int64 result; // rax
  __int64 v9; // r14
  char *v10; // rbp
  char *v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi

  v5 = (unsigned __int64)&a2[a3];
  result = 0;
  if ( a2 < &a2[a3] )
  {
    v9 = sub_4EE820(a1 + 1552, a5);
    if ( v9 || (v9 = sub_4EE960(a1 + 1552, a5)) != 0 )
    {
      v10 = a2;
      if ( (unsigned int)get_segm_para(v9) )
      {
        v11 = &a2[b2a32(a2)];
        if ( (unsigned __int64)v11 >= v5 )
        {
          if ( !under_debugger )
            interr(518);
          BUG();
        }
        v10 = v11 + 1;
        *v11 = 58;
        if ( (unsigned __int64)(v11 + 1) >= v5 )
        {
          *(_BYTE *)(v5 - 1) = 0;
          v10 = (char *)(v5 - 1);
        }
      }
    }
    else
    {
      v12 = *a4;
      v13 = a4;
      v10 = a2;
      (*(void (__fastcall **)(_QWORD *))(v12 + 144))(v13);
    }
    return &v10[b2a32(v10)] - a2;
  }
  return result;
}

