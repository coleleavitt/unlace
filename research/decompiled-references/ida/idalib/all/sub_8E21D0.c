__int64 __fastcall sub_8E21D0(__int64 a1, const void **a2, __int64 a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v5; // r14
  int v6; // eax
  const void *v7; // rdx
  const void *v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v8 = *a2;
  if ( __CFADD__(a3, v8) )
    return 0;
  v3 = sub_7E1CF0((__int64 *)(a1 + 16), &v8, (unsigned __int64)v8 + a3);
  if ( !(_BYTE)v3 )
    return 0;
  v5 = (unsigned __int64)v8;
  v9[0] = v8;
  v6 = unpack_dd(v9);
  v7 = (const void *)v9[0];
  if ( v5 >= v9[0] )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 40) = v6 != 0;
    *a2 = v7;
  }
  return v3;
}
