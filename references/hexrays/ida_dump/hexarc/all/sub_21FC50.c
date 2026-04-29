bool __fastcall sub_21FC50(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  bool result; // al
  int v10; // ebx

  v4 = *(_QWORD *)(a1 + 936);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    v7 = *(_QWORD *)(a1 + 144);
    v8 = v6;
    if ( (__int64)v7 <= v6 )
      v8 = *(_QWORD *)(a1 + 144);
    if ( v6 != -1 )
      v7 = v8;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 144);
  }
  result = 0;
  if ( a3 > 0 )
  {
    v10 = a3 - 1;
    result = v10 != 0 && v7 >= a2 + 1;
    if ( result )
      return a2 + v10 >= v7;
  }
  return result;
}
