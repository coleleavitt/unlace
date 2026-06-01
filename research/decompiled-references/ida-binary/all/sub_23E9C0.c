__int64 __fastcall sub_23E9C0(int a1, __int64 *a2, __int64 a3, char *a4, double a5)
{
  _DWORD *v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // ebp
  __int64 *func; // rax
  __int64 v11; // rdx

  v6 = qword_8CC600;
  if ( qword_8CC600 )
  {
    *((_QWORD *)qword_8CC600 + 1) = a2;
    *v6 = a1;
    v7 = sub_23D480((__int64)v6, 28, a3, a4, a5);
    v8 = *a2;
    v9 = v7;
    if ( 32 * a2[1] )
    {
      do
      {
        func = (__int64 *)get_func(*(_QWORD *)v8);
        v11 = *(_QWORD *)(v8 + 8);
        if ( v11 == -1 )
        {
          if ( func )
            v11 = *func;
          *(_QWORD *)(v8 + 8) = v11;
        }
        *(_BYTE *)(v8 + 24) = func != nullptr;
        v8 += 32;
      }
      while ( v8 != *a2 + 32 * a2[1] );
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v9;
}
