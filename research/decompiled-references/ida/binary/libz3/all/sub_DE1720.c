__int64 __fastcall sub_DE1720(__int64 a1, int a2, __int64 *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx

  result = sub_17E9C90(*(_QWORD *)(a1 + 8), 56);
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
  v11 = *a3;
  *(_DWORD *)(result + 8) = v10;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = v11;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_1C5AC08;
  *(_QWORD *)(result + 48) = a4;
  *(_DWORD *)(result + 32) = 1;
  if ( a4 )
    ++*(_DWORD *)(a4 + 16);
  return result;
}

