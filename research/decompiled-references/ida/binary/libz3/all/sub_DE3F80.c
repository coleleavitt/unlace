__int64 __fastcall sub_DE3F80(__int64 a1, int a2, __int64 *a3, __int64 *a4, unsigned int a5, __int64 *a6)
{
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // edx
  int v13; // esi
  __int64 v15; // rcx

  v10 = sub_17E9C90(*(_QWORD *)(a1 + 8), 48);
  v11 = *(_QWORD *)(a1 + 24);
  if ( v11 && (v12 = *(_DWORD *)(v11 - 4)) != 0 )
  {
    v15 = (unsigned int)(v12 - 1);
    v13 = *(_DWORD *)(v11 + 4 * v15);
    *(_DWORD *)(v11 - 4) = v15;
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v13 + 1;
  }
  sub_DE3E40(v10, v13, a2, a1, a3, a4, a5, a6);
  return v10;
}

