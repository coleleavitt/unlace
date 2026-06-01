_DWORD *__fastcall sub_C2810(__int64 *a1)
{
  _DWORD *result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax

  result = &dword_254298;
  if ( dword_254298 && (result = (_DWORD *)get_module_data()) != nullptr )
  {
    v7 = sub_B8210();
    return (_DWORD *)sub_BDF70(a1, (_QWORD *)(v7 + 8));
  }
  else
  {
    v3 = *a1;
    if ( *a1 )
    {
      v4 = a1[1];
      if ( v4 )
      {
        for ( i = 0; i != v4; ++i )
        {
          v6 = (_QWORD *)(v3 + 80 * i);
          if ( v6[5] )
          {
            v6[6] = 0;
            qfree();
          }
          if ( v6[2] )
          {
            v6[3] = 0;
            qfree();
          }
          v3 = *a1;
        }
      }
      a1[1] = 0;
      result = (_DWORD *)qfree();
      *a1 = 0;
      a1[2] = 0;
    }
  }
  return result;
}

