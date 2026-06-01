__int64 __fastcall sub_A3F4B0(__int64 a1)
{
  __int64 v1; // rbp
  void (__fastcall *v2)(__int64, char *, size_t); // r13
  size_t v3; // rax

  v1 = *(_QWORD *)(a1 + 17448);
  v2 = *(void (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v1 + 584LL);
  v3 = j__strlen("reference-types");
  v2(v1, "reference-types", v3);
  return *(_QWORD *)(a1 + 22688);
}

