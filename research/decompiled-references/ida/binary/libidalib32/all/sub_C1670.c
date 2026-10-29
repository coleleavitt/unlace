_DWORD *__fastcall sub_C1670(__int64 *a1)
{
  _DWORD *result; // rax
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  _QWORD *v6; // rbx
  __int64 v7; // rax

  result = &dword_2530D8;
  if ( dword_2530D8 && (result = (_DWORD *)get_module_data()) != nullptr )
  {
    v7 = sub_B7CA0();
    return (_DWORD *)sub_BD8E0(a1, (_QWORD *)(v7 + 8));
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
          v6 = (_QWORD *)(v3 + (i << 6));
          if ( v6[4] )
          {
            v6[5] = 0;
            qfree();
          }
          if ( v6[1] )
          {
            v6[2] = 0;
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

