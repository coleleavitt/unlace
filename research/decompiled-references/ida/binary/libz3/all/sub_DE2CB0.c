__int64 __fastcall sub_DE2CB0(__int64 a1, int a2, int a3, __int64 (__fastcall ***a4)())
{
  __int64 v7; // rbp
  __int64 v8; // rax
  int v9; // edx
  int v10; // esi
  __int64 v12; // rcx

  v7 = sub_17E9C90(*(_QWORD *)(a1 + 8), 32);
  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 && (v9 = *(_DWORD *)(v8 - 4)) != 0 )
  {
    v12 = (unsigned int)(v9 - 1);
    v10 = *(_DWORD *)(v8 + 4 * v12);
    *(_DWORD *)(v8 - 4) = v12;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v10 + 1;
  }
  sub_DE2B60(v7, v10, a2, a1, a3, a4);
  return v7;
}

