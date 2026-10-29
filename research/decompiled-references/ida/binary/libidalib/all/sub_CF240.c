__int64 __fastcall sub_CF240(int a1, __int64 *a2)
{
  _DWORD *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 *func; // rax
  __int64 v8; // rdx

  v3 = qword_252758;
  if ( qword_252758 )
  {
    *((_QWORD *)qword_252758 + 1) = a2;
    *v3 = a1;
    v4 = sub_CDCF0((__int64)v3, 28);
    v5 = *a2;
    v6 = v4;
    if ( 32 * a2[1] )
    {
      do
      {
        func = (__int64 *)get_func();
        v8 = *(_QWORD *)(v5 + 8);
        if ( v8 == -1 )
        {
          if ( func )
            v8 = *func;
          *(_QWORD *)(v5 + 8) = v8;
        }
        *(_BYTE *)(v5 + 24) = func != nullptr;
        v5 += 32;
      }
      while ( v5 != *a2 + 32 * a2[1] );
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

