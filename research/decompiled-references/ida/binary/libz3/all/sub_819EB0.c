bool __fastcall sub_819EB0(_DWORD *a1, __int64 a2, int a3)
{
  int v3; // edx
  bool result; // al
  unsigned int v5; // r14d
  int *v6; // rbx
  __int64 v7; // rax
  int *v8; // r13
  unsigned int v9; // r12d
  int v10; // ebp
  unsigned int v11; // ebp

  if ( a1[4] == -2 || (v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2), result = 0, v3 == 1) )
  {
    v5 = 0;
    v6 = a1 + 19;
    v7 = 2LL * (unsigned int)a1[8];
    v8 = &a1[v7 + 19];
    if ( v7 * 4 )
    {
      do
      {
        v9 = v6[1];
        v10 = *v6;
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v9) != -1 )
        {
          v11 = v5 + v10;
          if ( v9 != a3 )
            v5 = v11;
        }
        v6 += 2;
      }
      while ( v8 != v6 );
    }
    return v5 < a1[15];
  }
  return result;
}

