__int64 __fastcall register_custom_fixup(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // edx
  bool v3; // zf
  __int64 result; // rax

  v1 = sub_40C440(*(_QWORD *)(**(_QWORD **)(qword_2CA1698 + 1480) + 1408LL) + 16LL, a1, nullptr);
  HIWORD(v2) = HIWORD(v1);
  LOWORD(v2) = v1 | 0x8000;
  v3 = v1 == -1;
  result = 0;
  if ( !v3 )
    return v2;
  return result;
}

