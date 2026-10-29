__int64 __fastcall sub_A29930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // esi
  __int64 v11; // rcx
  __int64 result; // rax
  _QWORD v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = *(_DWORD *)(a1 + 8);
  v13[0] = a3;
  v8 = *(unsigned int *)(a1 + 16);
  v9 = v7 + 1;
  v10 = 2 * v8;
  v11 = (unsigned int)(3 * v8);
  if ( 4 * v9 >= (unsigned int)v11 )
    goto LABEL_9;
  v11 = (unsigned int)(v8 - *(_DWORD *)(a1 + 12) - v9);
  if ( (unsigned int)v11 <= (unsigned int)v8 >> 3 )
  {
    v10 = *(_DWORD *)(a1 + 16);
LABEL_9:
    sub_A29700(a1, v10, v8, v11, a5, a6);
    sub_A21FD0((__int64 *)a1, a2, v13);
    v9 = *(_DWORD *)(a1 + 8) + 1;
  }
  *(_DWORD *)(a1 + 8) = v9;
  result = v13[0];
  if ( *(_DWORD *)v13[0] != -1 || *(_BYTE *)(v13[0] + 4LL) != 0xFF || *(_DWORD *)(v13[0] + 8LL) != -1 )
    --*(_DWORD *)(a1 + 12);
  return result;
}
