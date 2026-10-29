__int64 __fastcall sub_1FC2ED0(__int64 a1, __int64 a2)
{
  int v3; // edx
  int v4; // eax
  __int64 result; // rax
  int v6; // edi

  sub_1FC2690(a1, a2);
  v3 = *(_DWORD *)(a1 + 236);
  v4 = *(_DWORD *)(a1 + 232) | (((*(_BYTE *)(a2 + 2) & 8) != 0) << v3);
  *(_DWORD *)(a1 + 232) = v4;
  *(_DWORD *)(a1 + 236) = v3 + 1;
  if ( (*(_BYTE *)(a2 + 2) & 8) != 0 )
  {
    v6 = *(_DWORD *)(a2 + 68);
    *(_DWORD *)(a1 + 236) = v3 + 17;
    *(_DWORD *)(a1 + 232) = (v6 << (v3 + 1)) | v4;
    sub_1FC2440(a1, a2 + 56, a2 + 72);
  }
  sub_1F9A420((__int64 *)(a1 + 8), *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
  result = sub_1F9E200(a1 + 8, a2 + 32);
  *(_DWORD *)(a1 + 224) = 273;
  return result;
}
