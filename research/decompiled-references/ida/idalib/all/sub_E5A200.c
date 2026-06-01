__int64 __fastcall sub_E5A200(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = a1[1];
  v2 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return sub_E5A130(v1, v2);
}
