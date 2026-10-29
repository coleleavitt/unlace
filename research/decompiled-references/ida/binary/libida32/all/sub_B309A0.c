unsigned __int64 __fastcall sub_B309A0(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  int v11; // ecx
  __int16 v12; // dx

  v7 = *a1;
  v9 = *v7;
  v7[10] += 56;
  result = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v7[1] >= result + 56 && v9 )
    *v7 = result + 56;
  else
    result = sub_962430((__int64)v7, 56, 56, 4, a5, a6);
  *(_DWORD *)(result + 4) = a2;
  v11 = a2 + 1 + a4;
  *(_DWORD *)(result + 32) = a2 + 1;
  *(_DWORD *)result = a2 + 1;
  v12 = *(_WORD *)(result + 12);
  *(_DWORD *)(result + 8) = v11;
  *(_QWORD *)(result + 16) = a3;
  *(_QWORD *)(result + 24) = a4;
  *(_DWORD *)(result + 36) = v11;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  *(_WORD *)(result + 12) = v12 & 0xF800 | 4;
  return result;
}

