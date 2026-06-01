__int64 __fastcall sub_DE4160(__int64 a1, int a2, __int64 *a3, int a4, __int64 (__fastcall ***a5)())
{
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // edx
  int v12; // esi
  __int64 v14; // rcx

  v9 = sub_17E9C90(*(_QWORD *)(a1 + 8), 64);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 && (v11 = *(_DWORD *)(v10 - 4)) != 0 )
  {
    v14 = (unsigned int)(v11 - 1);
    v12 = *(_DWORD *)(v10 + 4 * v14);
    *(_DWORD *)(v10 - 4) = v14;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v12 + 1;
  }
  sub_DE4010(v9, v12, a2, a1, a3, a4, a5);
  return v9;
}

