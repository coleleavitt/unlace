__int64 __fastcall sub_DE18C0(__int64 a1, __int64 *a2, int a3, int a4)
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
  v11 = *a2;
  *(_DWORD *)(result + 8) = v10;
  *(_QWORD *)(result + 12) = 0xFFFFFFFFLL;
  *(_QWORD *)(result + 24) = v11;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_1C5AD40;
  *(_DWORD *)(result + 48) = a3;
  *(_DWORD *)(result + 52) = a4;
  *(_DWORD *)(result + 32) = 2;
  return result;
}

