_QWORD **__fastcall sub_4488E0(__int64 a1, __int64 a2)
{
  _QWORD **result; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rdx

  result = (_QWORD **)sub_496130(&qword_65A830, 16);
  v4 = *result;
  v5 = nullptr;
  while ( v4 )
  {
    if ( *v4 == a1 && v4[1] == a2 )
    {
      if ( v5 )
        v5[2] = v4[2];
      else
        *result = (_QWORD *)v4[2];
      return (_QWORD **)Tcl_Free((__int64)v4);
    }
    v5 = v4;
    v4 = (_QWORD *)v4[2];
  }
  return result;
}

