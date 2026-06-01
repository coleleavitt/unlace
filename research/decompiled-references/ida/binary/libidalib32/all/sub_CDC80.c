__int64 __fastcall sub_CDC80(int a1, __int64 *a2)
{
  _DWORD *v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int *func; // rax
  int v8; // edx

  v3 = qword_2515B0;
  if ( qword_2515B0 )
  {
    *((_QWORD *)qword_2515B0 + 1) = a2;
    *v3 = a1;
    v4 = sub_CC780((__int64)v3, 28);
    v5 = *a2;
    v6 = v4;
    if ( 16 * a2[1] )
    {
      do
      {
        func = (int *)get_func();
        v8 = *(_DWORD *)(v5 + 4);
        if ( v8 == -1 )
        {
          if ( func )
            v8 = *func;
          *(_DWORD *)(v5 + 4) = v8;
        }
        *(_BYTE *)(v5 + 12) = func != nullptr;
        v5 += 16;
      }
      while ( v5 != *a2 + 16 * a2[1] );
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

