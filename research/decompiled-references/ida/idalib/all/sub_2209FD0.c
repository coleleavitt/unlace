__int64 __fastcall sub_2209FD0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int64 v5; // r13
  __int64 v6; // r12
  unsigned int v7; // ebp
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // [rsp+8h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v7 = a5;
  if ( a4 > a5 )
  {
    v7 = a4;
    v6 = a3;
    v5 = a2;
    a4 = a5;
  }
  if ( a4 )
  {
    v9 = 0;
    v12 = a4 - 1;
    while ( 1 )
    {
      v10 = a1;
      a1 += 8;
      sub_2209A70(v10, v5, *(_QWORD *)(v6 + 8 * v9), 0, v7, v7 + 1, (_DWORD)v9 != 0);
      result = v9 + 1;
      if ( v12 == v9 )
        break;
      ++v9;
    }
  }
  return result;
}
