__int64 __fastcall sub_2AE1C0(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 result; // rax

  result = (unsigned int)(int)(*(double (__fastcall **)(__int64))(*(_QWORD *)a1 + 312LL))(a1);
  *a5 = result;
  *a4 = result;
  *a3 = result;
  *a2 = result;
  return result;
}
