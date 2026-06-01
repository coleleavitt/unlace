__int64 __fastcall sub_1F6A1D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx

  *(_QWORD *)(a1 + 48) = a2;
  result = (unsigned int)((__int64)(*(_QWORD *)(a2 + 4352) - *(_QWORD *)(a2 + 4344)) >> 3) + 1;
  *(_DWORD *)(a1 + 928) = result;
  v3 = *(_DWORD *)(a2 + 4480) + 1;
  *(_DWORD *)(a1 + 1080) = v3;
  v4 = *(_DWORD *)(a2 + 4728);
  *(_DWORD *)(a1 + 932) = result;
  ++v4;
  *(_DWORD *)(a1 + 1084) = v3;
  *(_DWORD *)(a1 + 1088) = v4;
  *(_DWORD *)(a1 + 1092) = v4;
  return result;
}
