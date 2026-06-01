__int64 __fastcall sub_778A20(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rax
  int v5; // ebp
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  const void *v9; // r14
  void *v10; // rdi
  __int64 v11; // rax

  v4 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 == -1 )
    return 0;
  if ( *(_BYTE *)(a3 + 8) )
  {
    LOBYTE(a3) = v4 < *(_QWORD *)(a1 + 56);
    LOBYTE(a4) = a3 & (a2 != nullptr);
    v5 = a4;
    if ( (_BYTE)a4 )
    {
      v7 = *(_QWORD *)(a1 + 48) + 176 * v4;
      if ( (__int64 *)v7 != a2 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( v8 < 2 )
        {
          a2[1] = 0;
          LODWORD(a3) = a4;
          return (unsigned int)a3;
        }
        v9 = *(const void **)v7;
        v10 = (void *)*a2;
        if ( a2[2] < v8 )
        {
          v11 = qvector_reserve(a2, *a2, *(_QWORD *)(v7 + 8), 1);
          *a2 = v11;
          v10 = (void *)v11;
        }
        a2[1] = v8;
        memmove(v10, v9, v8 - 1);
        *(_BYTE *)(*a2 + v8 - 1) = 0;
      }
      LODWORD(a3) = v5;
    }
    return (unsigned int)a3;
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64 *, unsigned __int64))(**(_QWORD **)(a1 + 40) + 16LL))(
           *(_QWORD *)(a1 + 40),
           a2,
           v4);
}
