_QWORD *__fastcall sub_F82D40(__int64 a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // r9
  __int64 v5; // rax
  _QWORD *result; // rax
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // esi
  int v12; // edx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = (unsigned __int8)sub_F7E560((__int64 *)a1, (__int64 *)a2, &v13) == 0;
  v5 = v13;
  if ( !v3 )
    return (_QWORD *)(v13 + 16);
  v7 = *(_DWORD *)(a1 + 8);
  v14[0] = v13;
  v8 = (unsigned int)(v7 + 1);
  v9 = *(unsigned int *)(a1 + 16);
  v10 = (unsigned int)(4 * v8);
  v11 = 2 * v9;
  if ( (unsigned int)v10 < 3 * (int)v9 )
  {
    if ( (int)v9 - *(_DWORD *)(a1 + 12) - (int)v8 > (unsigned int)v9 >> 3 )
      goto LABEL_5;
    v11 = *(_DWORD *)(a1 + 16);
  }
  sub_F82B90(a1, v11, v8, v9, v10, v4);
  sub_F7E560((__int64 *)a1, (__int64 *)a2, v14);
  LODWORD(v8) = *(_DWORD *)(a1 + 8) + 1;
  v5 = v14[0];
LABEL_5:
  v3 = *(_QWORD *)v5 == -4096;
  *(_DWORD *)(a1 + 8) = v8;
  if ( !v3 || *(_DWORD *)(v5 + 8) != -1 )
    --*(_DWORD *)(a1 + 12);
  result = (_QWORD *)(v5 + 16);
  *(result - 2) = *(_QWORD *)a2;
  v12 = *(_DWORD *)(a2 + 8);
  *result = 0;
  *((_DWORD *)result - 2) = v12;
  return result;
}
