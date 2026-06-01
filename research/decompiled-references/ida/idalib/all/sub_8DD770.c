__int64 __fastcall sub_8DD770(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  int v5; // eax
  unsigned __int64 v6; // r14
  int v7; // eax
  unsigned __int64 v8; // rdx
  _QWORD v9[9]; // [rsp+0h] [rbp-48h] BYREF

  v9[1] = __readfsqword(0x28u);
  v3 = *a2;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v9[0] = *a2;
  v5 = unpack_dd(v9);
  v6 = v9[0];
  *(_DWORD *)(a1 + 12) = v5;
  if ( v3 >= v6 )
    return 0;
  v7 = unpack_dd(v9);
  v8 = v9[0];
  if ( v6 >= v9[0] )
    return 0;
  *(_BYTE *)(a1 + 16) = v7 != 0;
  *a2 = v8;
  return 1;
}
