__int64 __fastcall sub_894D20(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // r15d
  int v7; // ebp
  __int64 v8; // rbx
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  bool (__fastcall *v11)(__int64, __int64, int); // rax

  v4 = a4;
  v7 = a2 + a4;
  v8 = a4;
  while ( --v8 >= 0 )
  {
    v9 = *(_DWORD **)(a1 + 8);
    v10 = *(unsigned int *)(a3 + 4 * v8);
    v11 = *(bool (__fastcall **)(__int64, __int64, int))(*(_QWORD *)v9 + 24LL);
    if ( v11 == sub_894B30 )
    {
      if ( (_DWORD)v10 == v9[2] )
        return v8;
    }
    else if ( v11((__int64)v9, (unsigned int)(v7 + v8 - v4), v10) )
    {
      return v8;
    }
  }
  return v8;
}

