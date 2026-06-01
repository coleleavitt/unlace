unsigned __int64 __fastcall sub_B2FDD0(__int64 **a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int16 v11; // dx
  int v12; // ecx

  v7 = *a1;
  v9 = *v7;
  v7[10] += 32;
  result = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v7[1] >= result + 32 && v9 )
    *v7 = result + 32;
  else
    result = sub_962430((__int64)v7, 32, 32, 4, a5, a6);
  v11 = *(_WORD *)(result + 12);
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 16) = 0;
  *(_WORD *)(result + 12) = v11 & 0xF000 | 3;
  v12 = *(_DWORD *)(result + 12);
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = (a4 << 12) | v12 & 0xFFF;
  return result;
}

