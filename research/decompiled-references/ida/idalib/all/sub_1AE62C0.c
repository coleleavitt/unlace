__int64 __fastcall sub_1AE62C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *a1;
  ++*((_DWORD *)a1 + 3);
  (*(void (__fastcall **)(__int64 *, _QWORD))(v2 + 96))(a1, *(_QWORD *)(a2 + 40));
  --*((_DWORD *)a1 + 3);
  return 0;
}
