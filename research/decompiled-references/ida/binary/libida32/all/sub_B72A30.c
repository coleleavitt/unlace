__int64 __fastcall sub_B72A30(__int64 a1, __int64 *a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 2);
  v3 = *a2;
  *(_DWORD *)a1 = 2;
  result = *((unsigned __int8 *)a2 + 12);
  *(_BYTE *)(a1 + 4) &= ~1u;
  *((_DWORD *)a2 + 2) = 0;
  *(_QWORD *)(a1 + 8) = v3;
  *(_DWORD *)(a1 + 16) = v2;
  *(_BYTE *)(a1 + 20) = result;
  return result;
}

