__int64 __fastcall sub_DE1840(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = sub_17E9C90(*(_QWORD *)(a1 + 8), 56);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 && (v5 = *(_DWORD *)(v4 - 4)) != 0 )
  {
    v8 = (unsigned int)(v5 - 1);
    v6 = *(_DWORD *)(v4 + 4 * v8);
    *(_DWORD *)(v4 - 4) = v8;
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v6 + 1;
  }
  v7 = *a2;
  *(_DWORD *)(result + 8) = v6;
  *(_QWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 24) = v7;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_1C5AC70;
  *(_DWORD *)(result + 32) = 4;
  return result;
}

