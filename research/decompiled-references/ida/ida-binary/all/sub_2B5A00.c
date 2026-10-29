__int64 __fastcall sub_2B5A00(__int64 *a1, int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 108);
  *((_DWORD *)a1 + 108) = a2;
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v2 + 152))(a1, 0, 0);
  return v3;
}
