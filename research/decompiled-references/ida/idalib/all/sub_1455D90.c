__int64 __fastcall sub_1455D90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // rax

  v5 = *(unsigned int **)(a1 + 696);
  if ( a3 )
  {
    v8 = sub_1452D80(*(_QWORD *)(a1 + 696), a2, a3, 1);
    v5 = (unsigned int *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
  }
  result = sub_1455CC0((__int64)v5, a4);
  v7 = *(_QWORD *)(a1 + 696);
  if ( v5 != (unsigned int *)v7 )
  {
    result = v5[13];
    if ( !(_DWORD)result )
    {
      sub_1455CC0(v7, (__int64)v5);
      return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return result;
}
