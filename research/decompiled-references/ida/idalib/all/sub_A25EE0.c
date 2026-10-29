_DWORD *__fastcall sub_A25EE0(__int64 a1, int *a2)
{
  bool v3; // zf
  __int64 v4; // r9
  _DWORD *v5; // rax
  _DWORD *result; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // esi
  int v12; // edx
  _DWORD *v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-20h] BYREF

  v3 = (unsigned __int8)sub_A21670((__int64 *)a1, a2, &v13) == 0;
  v5 = v13;
  if ( !v3 )
    return v13 + 1;
  v7 = *(_DWORD *)(a1 + 8);
  v14 = v13;
  v8 = (unsigned int)(v7 + 1);
  v9 = *(unsigned int *)(a1 + 16);
  v10 = (unsigned int)(4 * v8);
  v11 = 2 * v9;
  if ( (unsigned int)v10 >= 3 * (int)v9 )
    goto LABEL_9;
  if ( (int)v9 - *(_DWORD *)(a1 + 12) - (int)v8 <= (unsigned int)v9 >> 3 )
  {
    v11 = *(_DWORD *)(a1 + 16);
LABEL_9:
    sub_A25D80(a1, v11, v8, v9, v10, v4);
    sub_A21670((__int64 *)a1, a2, &v14);
    LODWORD(v8) = *(_DWORD *)(a1 + 8) + 1;
    v5 = v14;
  }
  *(_DWORD *)(a1 + 8) = v8;
  if ( *v5 != -1 )
    --*(_DWORD *)(a1 + 12);
  v12 = *a2;
  v5[1] = 0;
  result = v5 + 1;
  *(result - 1) = v12;
  return result;
}
