__int64 __fastcall sub_62FA80(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v3; // [rsp-8h] [rbp-18h]

  v1 = *(__int64 **)a1;
  *v1 = sub_62E0C0(
          *(_QWORD *)(a1 + 8),
          *(char **)(a1 + 16),
          *(_DWORD *)(a1 + 24),
          *(_DWORD *)(a1 + 28),
          *(_QWORD *)(a1 + 32),
          *(unsigned int *)(a1 + 40),
          *(_DWORD *)(a1 + 44));
  return v3;
}

