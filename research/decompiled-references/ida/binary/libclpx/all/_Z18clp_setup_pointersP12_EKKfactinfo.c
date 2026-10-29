__int64 __fastcall clp_setup_pointers(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // r9
  int v4; // edx
  int v5; // eax
  int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax

  v1 = *(int *)(a1 + 240);
  v2 = *(int *)(a1 + 256);
  v3 = *(_QWORD *)(a1 + 72);
  v4 = v1 + v2 + 5;
  v5 = 2 * *(_DWORD *)(a1 + 240);
  v6 = *(_DWORD *)(a1 + 304) - v4;
  *(_DWORD *)(a1 + 336) = v4;
  v7 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 332) = v6;
  v8 = v7 + 8 * v1 + 4;
  v9 = *(int *)(a1 + 244);
  *(_QWORD *)(a1 + 88) = v8;
  *(_QWORD *)(a1 + 96) = v3 + 4 * v9 + 8;
  v10 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 104) = v10 + 4 * (v5 + v2 + 4);
  v11 = 4 * v1 + 12;
  v12 = v11 + v10;
  result = v8 + v11 - 9;
  *(_QWORD *)(a1 + 232) = v12;
  *(_QWORD *)(a1 + 112) = result;
  return result;
}

