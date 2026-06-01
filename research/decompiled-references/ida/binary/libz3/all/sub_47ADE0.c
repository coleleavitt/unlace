__int64 __fastcall sub_47ADE0(__int64 a1, _QWORD **a2, __int64 a3, int a4, int a5, int a6)
{
  _QWORD **v6; // rbx
  __int64 v7; // rdx
  _QWORD **v8; // r12
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d

  v6 = *(_QWORD ***)(a1 + 80);
  if ( !v6 )
    return 0;
  v7 = *((unsigned int *)v6 - 1);
  v8 = &v6[17 * v7];
  if ( v8 == v6 )
    return 0;
  while ( 1 )
  {
    v9 = sub_407E90(*a2, (__int64)a2, v7, a4, a5, a6);
    if ( v9 == sub_407E90(*v6, (__int64)a2, v10, v11, v12, v13) )
      break;
    v6 += 17;
    if ( v8 == v6 )
      return 0;
  }
  return 1;
}

