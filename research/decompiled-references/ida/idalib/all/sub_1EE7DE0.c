__int64 __fastcall sub_1EE7DE0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r13d
  unsigned int i; // ebx
  __int64 v6; // rax
  unsigned int v7; // esi
  int v8; // r13d
  int j; // ebx
  __int64 v10; // rax
  int v11; // esi
  __int64 result; // rax

  v3 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v4 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = v3;
  if ( v4 )
  {
    for ( i = 0; i != v4; ++i )
    {
      v6 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v7 = i;
      sub_EB5670(a2, v7, v6);
    }
    v8 = *(_DWORD *)(a2 + 24);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
        v11 = j;
        sub_EB5690(a2, v11, v10);
      }
    }
  }
  result = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
