unsigned __int64 __fastcall sub_3AF870(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // edi
  unsigned int v7; // esi
  unsigned __int64 result; // rax
  __int64 v9; // r12
  int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // rdi

  if ( a2 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    v7 = v6 + *(_DWORD *)(a2 + 28);
  }
  else
  {
    v7 = -1;
    v6 = 0;
  }
  sub_3AF480(v6, v7, 1, 0, a5, a6);
  result = qword_2CA1698;
  v9 = *(_QWORD *)(qword_2CA1698 + 1384);
  v10 = *(_DWORD *)(v9 + 8) - 1;
  if ( v10 >= 0 )
  {
    v11 = 8LL * (unsigned int)v10;
    do
    {
      v12 = *(_QWORD *)(*(_QWORD *)v9 + v11);
      result = *(unsigned int *)(v12 + 40);
      if ( !(_DWORD)result )
        break;
      result = sub_3ABA20(v12);
      --v10;
      v11 -= 8;
    }
    while ( v10 != -1 );
  }
  return result;
}

