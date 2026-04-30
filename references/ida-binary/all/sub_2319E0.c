void __fastcall sub_2319E0(__int64 *a1, const char *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  v4 = (unsigned int)dword_8CD7F0;
  if ( dword_8CD7F0 && get_module_data((unsigned int)dword_8CD7F0) )
  {
    v13 = sub_227580(a3, v4, (__int64)a2, v11, v12);
    sub_22BB70(a1, (_QWORD *)(v13 + 8));
  }
  else
  {
    v5 = *a1;
    if ( *a1 )
    {
      v6 = a1[1];
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v8 = (_QWORD *)(v5 + 80 * i);
          v9 = v8[5];
          if ( v9 )
          {
            v8[6] = 0;
            qfree(v9, a2);
          }
          v10 = v8[2];
          if ( v10 )
          {
            v8[3] = 0;
            qfree(v10, a2);
          }
          v5 = *a1;
        }
      }
      a1[1] = 0;
      qfree(v5, a2);
      *a1 = 0;
      a1[2] = 0;
    }
  }
}
