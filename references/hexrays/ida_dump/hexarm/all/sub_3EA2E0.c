__int64 __fastcall sub_3EA2E0(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v5; // esi
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rdi

  result = a1;
  v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL);
  *(_BYTE *)(a1 + 400) = a3;
  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 != -1 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(result + 384) = v5 * (v6 - v7);
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 != -1 && *(_DWORD *)(a2 + 24) < (int)v7 )
      *(_QWORD *)(result + 368) = v8 + v5 * (int)v7;
  }
  v9 = *(_DWORD *)(a2 + 48);
  if ( v9 != -1 )
  {
    v10 = *(_QWORD *)(result + 48);
    *(_DWORD *)(result + 388) = 2 * v5 * (v9 - v10);
    v11 = *(_QWORD *)(a2 + 40);
    if ( v11 != -1 && *(_DWORD *)(a2 + 48) < *(_DWORD *)(result + 24) )
      *(_QWORD *)(result + 376) = v11 + 2 * (int)v10 * v5;
  }
  return result;
}
