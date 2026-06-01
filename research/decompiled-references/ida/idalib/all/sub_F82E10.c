_QWORD *__fastcall sub_F82E10(__int64 a1, __int64 *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // esi
  __int64 v11; // rcx
  _QWORD *result; // rax
  _QWORD *v13; // [rsp+8h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a1 + 8);
  v13 = a3;
  v8 = *(unsigned int *)(a1 + 16);
  v9 = v7 + 1;
  v10 = 2 * v8;
  v11 = (unsigned int)(3 * v8);
  if ( 4 * v9 < (unsigned int)v11 )
  {
    v11 = (unsigned int)(v8 - *(_DWORD *)(a1 + 12) - v9);
    if ( (unsigned int)v11 > (unsigned int)v8 >> 3 )
      goto LABEL_3;
    v10 = *(_DWORD *)(a1 + 16);
  }
  sub_BA5420((__int64 *)a1, v10, v8, v11, a5, a6);
  sub_B9B690((__int64 *)a1, a2, &v13);
  v9 = *(_DWORD *)(a1 + 8) + 1;
LABEL_3:
  *(_DWORD *)(a1 + 8) = v9;
  result = v13;
  if ( *v13 != -4096 )
    --*(_DWORD *)(a1 + 12);
  return result;
}
