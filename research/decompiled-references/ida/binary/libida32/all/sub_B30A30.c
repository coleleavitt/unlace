__int64 __fastcall sub_B30A30(__int64 **a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax

  if ( *(char *)(a2 + 15) >= 0 )
    *(_BYTE *)(a2 + 15) &= 0x1Fu;
  v10 = *a1;
  v11 = *v10;
  v10[10] += 24;
  v12 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v10[1] >= v12 + 24 && v11 )
    *v10 = v12 + 24;
  else
    v12 = sub_962430((__int64)v10, 24, 24, 4, a5, a6);
  *(_DWORD *)v12 = a3;
  *(_DWORD *)(v12 + 4) = a4;
  *(_QWORD *)(v12 + 8) = a5;
  *(_QWORD *)(v12 + 16) = a6;
  *(_QWORD *)(a2 + 16) = v12;
  *(_QWORD *)(a2 + 24) = 1;
  result = *(unsigned int *)(v12 + 4);
  if ( (_DWORD)result )
    *(_DWORD *)(a2 + 8) = result;
  return result;
}

