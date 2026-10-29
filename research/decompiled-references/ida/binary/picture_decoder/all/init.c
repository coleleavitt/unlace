void __fastcall init(unsigned int a1, __int64 a2, __int64 a3)
{
  signed __int64 v4; // rbp
  __int64 i; // rbx

  init_proc();
  v4 = &off_68F8 - funcs_4E49;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
      ((void (__fastcall *)(_QWORD, __int64, __int64))funcs_4E49[i])(a1, a2, a3);
  }
}

