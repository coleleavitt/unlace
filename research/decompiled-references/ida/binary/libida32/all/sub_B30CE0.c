unsigned __int64 __fastcall sub_B30CE0(__int64 **a1, int a2, unsigned int a3)
{
  const char *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  __int64 *v9; // rdi
  int v10; // r12d
  __int64 v11; // rdx
  unsigned __int64 result; // rax
  int v13; // edx
  __int64 v14; // rdx

  v5 = (const char *)*sub_B1A550((__int64)a1[3], a3);
  v8 = 0;
  if ( v5 )
    v8 = strlen(v5);
  v9 = *a1;
  v10 = a2 + 1 + v8;
  v11 = **a1;
  v9[10] += 80;
  result = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v9[1] >= result + 80 && v11 )
    *v9 = result + 80;
  else
    result = sub_962430((__int64)v9, 80, 80, 4, v6, v7);
  v13 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = v10;
  *(_DWORD *)result = a2 + 1;
  *(_QWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 12) = v13 & 0xF00000FF | ((a3 & 0xFFFFF) << 8);
  v14 = *(_QWORD *)(result + 12);
  *(_QWORD *)(result + 28) = 0;
  *(_QWORD *)(result + 36) = 0;
  *(_QWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 12) = (unsigned int)v14 & 0xEFFFFF00 | 0x1000000ALL;
  *(_QWORD *)(result + 52) = 0;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 72) = 0;
  return result;
}

