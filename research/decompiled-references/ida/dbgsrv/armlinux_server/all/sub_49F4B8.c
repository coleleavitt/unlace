/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49F4B8
// Address: 0x000000000049F4B8

//----- (000000000049F4B8) ----------------------------------------------------
__int64 __fastcall sub_49F4B8(unsigned __int8 *a1)
{
  unsigned int v3; // w0
  __int64 v5; // x3
  unsigned int v6; // w0
  _QWORD *v7; // x0

  if ( atomic_load(a1) )
    return 0;
  if ( &_pthread_key_create )
  {
    while ( 1 )
    {
      do
        v3 = __ldaxr((unsigned int *)a1);
      while ( !v3 && __stlxr(0x100u, (unsigned int *)a1) );
      if ( !v3 )
        break;
      v5 = v3;
      if ( v3 == 1 )
        return 0;
      if ( v3 == 256 )
      {
        v5 = 65792;
        do
          v6 = __ldaxr((unsigned int *)a1);
        while ( v6 == 256 && __stlxr(0x10100u, (unsigned int *)a1) );
        if ( v6 != 256 )
        {
          if ( v6 == 1 )
            return 0;
          if ( !v6 )
            continue;
        }
      }
      syscall(98, a1, 0, v5, 0);
    }
    return 1;
  }
  else if ( *a1 )
  {
    return 0;
  }
  else
  {
    if ( a1[1] )
    {
      v7 = sub_49DA58(8);
      *v7 = &off_51E7F8;
      sub_49DCD8(
        (__int64)v7,
        (__int64)&`typeinfo for'__gnu_cxx::recursive_init_error,
        (__int64)__gnu_cxx::recursive_init_error::~recursive_init_error);
    }
    a1[1] = 1;
    return 1;
  }
}
// 51E7D0: using guessed type __int64 `typeinfo for'__gnu_cxx::recursive_init_error;
// 51E7F8: using guessed type void (__fastcall *off_51E7F8)(__gnu_cxx::recursive_init_error *__hidden this);
