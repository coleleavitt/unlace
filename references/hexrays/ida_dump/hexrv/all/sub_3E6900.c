__int64 __fastcall sub_3E6900(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rcx
  int v9; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  int v14; // ecx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a4 + 24);
  v15[1] = __readfsqword(0x28u);
  v9 = sub_3348D0(a1, a2, a3, v7, a5, (char *)a6);
  if ( !v9 )
    return 0;
  if ( v9 == 1 )
    return 1;
  if ( *(_BYTE *)a6 != 1 )
    return 0;
  v11 = **(_DWORD **)(a1 + 648);
  if ( *(_DWORD *)(a6 + 8) != v11 )
    return 0;
  if ( *(_BYTE *)(a4 + 64) != 1 || v11 != *(_DWORD *)(a4 + 72) )
  {
    v12 = *(_QWORD *)(a4 + 24);
    v15[0] = -1;
    sub_CBAB0(0xBB8u, v15, v12);
    v13 = v15[0];
    if ( v15[0] != -1 )
    {
      sub_1188E0(a2);
      *(_BYTE *)a2 = 6;
      v14 = 8 * *(_DWORD *)(a1 + 84);
      if ( (unsigned __int64)v14 <= 0x3F )
        v13 &= ~(-1LL << v14);
      *(_QWORD *)(a2 + 8) = v13;
      return 1;
    }
    return 0;
  }
  return 0;
}
