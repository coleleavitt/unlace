__int64 __fastcall sub_1F45150(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax

  sub_1F43F90(a1, a2);
  if ( *(_DWORD *)(a2 + 72) )
  {
    v2 = 0;
    do
    {
      v3 = a1[2];
      v4 = *(_QWORD **)(v3 + 8);
      v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
      v10 = sub_1EDB980(v4, v5, v6, v7, v8, v9);
      v11 = v2++;
      *(_QWORD *)(a2 + 8 * v11 + 88) = v10;
    }
    while ( *(_DWORD *)(a2 + 72) > v2 );
  }
  v12 = a1[2];
  v13 = *(unsigned int *)(v12 + 24);
  *(_DWORD *)(v12 + 24) = v13 + 1;
  sub_B7A000(a2, *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13) != 0);
  v14 = sub_1F68F80(*(_QWORD *)(a1[2] + 8), *(_QWORD *)(a1[2] + 16));
  return sub_B79FE0(a2, v14);
}
