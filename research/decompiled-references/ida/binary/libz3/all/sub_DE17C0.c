__int64 __fastcall sub_DE17C0(__int64 a1, int a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx

  result = sub_17E9C90(*(_QWORD *)(a1 + 8), 48);
  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 && (v7 = *(_DWORD *)(v6 - 4)) != 0 )
  {
    v10 = (unsigned int)(v7 - 1);
    v8 = *(_DWORD *)(v6 + 4 * v10);
    *(_DWORD *)(v6 - 4) = v10;
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v8 + 1;
  }
  v9 = *a3;
  *(_DWORD *)(result + 8) = v8;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = v9;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)result = off_1C5ACD8;
  *(_DWORD *)(result + 32) = 3;
  return result;
}

