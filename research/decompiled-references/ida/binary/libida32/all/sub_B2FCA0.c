unsigned __int64 __fastcall sub_B2FCA0(__int64 **a1, int a2, int a3, const void *a4, size_t a5, __int64 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // ebx
  unsigned __int64 result; // rax
  __int16 v16; // dx
  int v17; // edx

  v8 = sub_B1AC40((__int64)a1[3], a4, a5, (__int64)a4, a5, a6);
  v11 = *a1;
  v12 = *(_DWORD *)(v8 + 16);
  v13 = **a1;
  v11[10] += 32;
  v14 = v12 & 0xFFFFF;
  result = (v13 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v11[1] >= result + 32 && v13 )
    *v11 = result + 32;
  else
    result = sub_962430((__int64)v11, 32, 32, 4, v9, v10);
  v16 = *(_WORD *)(result + 12);
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 16) = 0;
  *(_WORD *)(result + 12) = v16 & 0xF000 | 3;
  v17 = *(_DWORD *)(result + 12);
  *(_QWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = (v14 << 12) | v17 & 0xFFF;
  return result;
}

