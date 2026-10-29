signed __int64 __fastcall sub_424430(__int64 a1, char *a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  signed __int64 result; // rax
  unsigned __int64 v6; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r15
  char *v12; // rbp
  char *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi

  result = 0;
  v6 = (unsigned __int64)&a2[a3];
  if ( a2 < &a2[a3] )
  {
    v9 = sub_505D70(a1 + 1624, a5);
    v10 = a1 + 1624;
    v11 = v9;
    if ( v9 || (v11 = sub_505EB0(v10, a5)) != 0 )
    {
      v12 = a2;
      if ( get_segm_para(v11) )
      {
        v13 = &a2[b2a64(a2)];
        if ( (unsigned __int64)v13 >= v6 )
        {
          if ( !under_debugger )
            interr(518);
          BUG();
        }
        v12 = v13 + 1;
        *v13 = 58;
        if ( (unsigned __int64)(v13 + 1) >= v6 )
        {
          *(_BYTE *)(v6 - 1) = 0;
          v12 = (char *)(v6 - 1);
        }
      }
    }
    else
    {
      v14 = *a4;
      v15 = a4;
      v12 = a2;
      (*(void (__fastcall **)(_QWORD *))(v14 + 144))(v15);
    }
    return &v12[b2a64(v12)] - a2;
  }
  return result;
}
