_BOOL8 __fastcall sub_5A8922(__int64 a1)
{
  __int64 v1; // rbx
  size_t v2; // rax

  v1 = *(_QWORD *)a1;
  v2 = sub_5A8498();
  return sub_5A8230(v1, *(_DWORD *)(a1 + 8), (const char *)(a1 + 24), v2);
}
