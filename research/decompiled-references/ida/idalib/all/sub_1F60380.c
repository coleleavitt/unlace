__int64 __fastcall sub_1F60380(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // r13
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  sub_1F58FC0(a1, a2);
  v2 = *a1;
  v3 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  *(_DWORD *)(a2 + 28) = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v4 = *(_QWORD **)(*a1 + 8);
  v5 = sub_1EE13A0((__int64)v4, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 16) = sub_1EDB980(v4, v5, v6, v7, v8, v9);
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  result = *(unsigned int *)(a2 + 28);
  if ( (_DWORD)result )
  {
    v11 = a2 + 32;
    v12 = a2 + 8LL * (unsigned int)(result - 1) + 40;
    do
    {
      v11 += 8;
      v13 = *(_QWORD **)(*a1 + 8);
      v14 = sub_1EE13A0((__int64)v13, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
      result = sub_1EDB980(v13, v14, v15, v16, v17, v18);
      *(_QWORD *)(v11 - 8) = result;
    }
    while ( v12 != v11 );
  }
  return result;
}
