__int64 __fastcall sub_A01290(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp

  if ( *(_DWORD *)(a2 + 64) != 21 )
    return 1;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = (unsigned int)(v3 + *(_DWORD *)(a2 + 100) + 1);
  if ( v3 + *(_DWORD *)(a2 + 100) == -1 )
    return 1;
  v5 = *(_QWORD *)(a1 + 8);
  if ( (unsigned int)v4 >= *(_DWORD *)(v5 + 16) )
    return 1;
  v6 = 8 * v4;
  result = sub_A01150(*(_QWORD *)(8 * v4 + v5 + 8 * (((*(_BYTE *)(v5 + 2) & 8) != 0) + 1LL) + 32));
  if ( (_BYTE)result )
    return 1;
  **(_QWORD **)(a1 + 24) = *(_QWORD *)(v6
                                     + *(_QWORD *)(a1 + 8)
                                     + 8 * (((*(_BYTE *)(*(_QWORD *)(a1 + 8) + 2LL) & 8) != 0) + 1LL)
                                     + 32);
  return result;
}
