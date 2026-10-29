__int64 __fastcall sub_8BA950(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v5; // eax
  unsigned __int64 v6; // r14
  _QWORD v7[9]; // [rsp+0h] [rbp-48h] BYREF

  v7[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v7[0] = *a2;
  v5 = unpack_dd(v7);
  v6 = v7[0];
  *(_DWORD *)(a1 + 12) = v5;
  if ( v3 >= v6 )
    return 0;
  *(_DWORD *)(a1 + 16) = unpack_dd(v7);
  if ( v6 >= v7[0] )
    return 0;
  *a2 = v7[0];
  return 1;
}

