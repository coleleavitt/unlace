__int64 __fastcall sub_8C8430(__int64 a1, _QWORD *a2, __int64 a3)
{
  const void *v3; // r14
  unsigned __int64 v4; // rbx
  unsigned int v7; // eax
  const void *v8; // rbp
  unsigned int v9; // r15d
  __int64 v10; // r14
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rbp
  const void *v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v15[1] = (const void *)__readfsqword(0x28u);
  v3 = (const void *)*a2;
  v4 = *a2 + a3;
  if ( __CFADD__(*a2, a3) )
    return 0;
  v15[0] = *(const void **)a2;
  v7 = unpack_dd(v15);
  v8 = v15[0];
  v9 = v7;
  if ( v3 >= v15[0] )
    return 0;
  v10 = v7;
  sub_8C8060((__int64 *)(a1 + 16), v7);
  if ( v9 )
  {
    v11 = 0;
    v12 = 56 * v10;
    do
    {
      v15[0] = v8;
      v13 = *(_QWORD *)(a1 + 16);
      if ( v4 < (unsigned __int64)v8 )
        return 0;
      v14 = v13 + v11;
      if ( !(unsigned __int8)sub_7BE9B0((__int64 *)(v13 + v11), v15, v4)
        || !(unsigned __int8)sub_7BE9B0((__int64 *)(v14 + 24), v15, v4)
        || !sub_7BFDB0((_DWORD *)(v14 + 48), (unsigned __int64 *)v15) )
      {
        return 0;
      }
      v11 += 56;
      v8 = v15[0];
    }
    while ( v11 != v12 );
  }
  *a2 = v8;
  return 1;
}

