__int64 __fastcall dwarf_twalk(__int64 *a1, __int64 (__fastcall *a2)(_QWORD *, __int64, _QWORD))
{
  __int64 v2; // r14
  _QWORD *v3; // r12
  __int64 v4; // r13
  __int64 result; // rax
  _QWORD *i; // rbx

  if ( a1 )
  {
    v2 = *a1;
    v3 = (_QWORD *)a1[4];
    if ( *a1 )
    {
      v4 = 0;
      do
      {
        if ( *v3 )
          result = a2(v3, 3, 0);
        for ( i = (_QWORD *)v3[2]; i; i = (_QWORD *)i[2] )
          result = a2(i, 3, 0);
        ++v4;
        v3 += 3;
      }
      while ( v2 != v4 );
    }
  }
  return result;
}

