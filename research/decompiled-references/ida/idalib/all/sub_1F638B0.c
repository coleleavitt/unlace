__int64 __fastcall sub_1F638B0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  _QWORD *v6; // r13
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // rdi

  sub_1F58FC0(a1, a2);
  v3 = *a1;
  v4 = *(unsigned int *)(*a1 + 24);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  *(_DWORD *)(a2 + 16) = sub_1EE7490(v3);
  *(_DWORD *)(a2 + 20) = sub_1EE7490(*a1);
  *(_DWORD *)(a2 + 24) = sub_1EE7490(*a1);
  v6 = *(_QWORD **)(*a1 + 8);
  v7 = sub_1EE13A0((__int64)v6, *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  *(_QWORD *)(a2 + 32) = sub_1EDB980(v6, v7, v8, v9, v10, v11);
  if ( (*(_DWORD *)a2 & 0x20000) != 0 )
  {
    result = *(unsigned int *)(a2 + 28);
    if ( (_DWORD)result )
    {
      v15 = a2 + 40;
      result = 3LL * (unsigned int)v5;
      v16 = a2 + 40 + 24LL * (unsigned int)v5;
      if ( v16 != a2 + 40 )
      {
        do
        {
          v17 = v15;
          v15 += 24;
          result = sub_1F0B900(v17, *a1);
        }
        while ( v16 != v15 );
      }
    }
  }
  else
  {
    v12 = *a1;
    v13 = *(unsigned int *)(*a1 + 24);
    *(_DWORD *)(v12 + 24) = v13 + 1;
    result = *(_QWORD *)(*(_QWORD *)(v12 + 32) + 8 * v13);
    *(_DWORD *)(a2 + 28) = result;
  }
  return result;
}
