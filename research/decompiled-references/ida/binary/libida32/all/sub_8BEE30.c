__int64 __fastcall sub_8BEE30(__int64 a1, const void **a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v5; // r14
  const void *v6; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v7[1] = __readfsqword(0x28u);
  v6 = *a2;
  if ( __CFADD__(a3, v6) )
    return 0;
  v3 = sub_7BE9B0((__int64 *)(a1 + 16), &v6, (unsigned __int64)v6 + a3);
  if ( !(_BYTE)v3 )
    return 0;
  v5 = (unsigned __int64)v6;
  v7[0] = v6;
  *(_DWORD *)(a1 + 40) = unpack_dd(v7);
  if ( v5 >= v7[0] )
    return 0;
  else
    *a2 = (const void *)v7[0];
  return v3;
}

