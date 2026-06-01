__int64 __fastcall sub_33DD70(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebp
  char *v4; // rax

  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 928) + 4LL * a3);
  v4 = sub_33D9C0(a2);
  (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v4 + 16LL))(a1, v4, v3);
  return a1;
}

