__int64 __fastcall sub_1F58310(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v3 = *a1;
  v4 = *(unsigned int *)(v3 + 24);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)(v5 + 13064);
  *(_DWORD *)(v3 + 24) = v4 + 1;
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 8 * v4);
  v8 = *(_QWORD *)(v6 + 8LL * (unsigned int)(*(_DWORD *)(v5 + 13072))-- - 8);
  *(_QWORD *)(a2 + 8) = v8;
  if ( v7 )
  {
    v10 = sub_1EE13A0(v5, *(_QWORD *)(v3 + 16), (__int64 *)(v3 + 32), (_DWORD *)(v3 + 24));
    v15 = sub_1EDB980((_QWORD *)v5, v10, v11, v12, v13, v14);
    v3 = *a1;
    *(_QWORD *)(a2 + 16) = v15;
  }
  result = sub_1EE7490(v3);
  *(_DWORD *)(a2 + 4) = result;
  return result;
}
