__int64 __fastcall sub_7A7320(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // eax

  v3 = *(_DWORD *)(a1 + 484);
  result = 0;
  if ( v3 != 0x7FFFFFFF )
  {
    v5 = *(_DWORD *)(a1 + 488);
    *a2 = v3;
    *a3 = v5;
    *(_QWORD *)(a1 + 484) = 0x7FFFFFFF;
    return 1;
  }
  return result;
}

