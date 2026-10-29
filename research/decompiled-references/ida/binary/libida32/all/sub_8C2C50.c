__int64 __fastcall sub_8C2C50(__int64 *a1, const void **a2, __int64 a3)
{
  __int64 result; // rax
  char *v4; // rbx
  __int64 v5; // r15
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned int v9; // [rsp+8h] [rbp-60h]
  __int64 v10; // [rsp+8h] [rbp-60h]
  unsigned int v11; // [rsp+1Ch] [rbp-4Ch] BYREF
  const void *v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = (const void *)__readfsqword(0x28u);
  v12[0] = *a2;
  if ( __CFADD__(a3, v12[0]) )
    return 0;
  v4 = (char *)v12[0] + a3;
  if ( !(unsigned __int8)sub_7BE9B0(a1 + 2, v12, (unsigned __int64)v12[0] + a3)
    || !(unsigned __int8)sub_7BE9B0(a1 + 5, v12, (unsigned __int64)v4)
    || !sub_7BFDB0(&v11, (unsigned __int64 *)v12) )
  {
    return 0;
  }
  v5 = v11;
  v6 = v11;
  if ( v11 != a1[9] )
  {
    v9 = v11;
    sub_8B65B0(a1 + 8, v11);
    v6 = v9;
  }
  if ( v6 )
  {
    v7 = 24 * v5;
    v8 = 0;
    v10 = v7;
    while ( (unsigned __int8)sub_7BE9B0((__int64 *)(v8 + a1[8]), v12, (unsigned __int64)v4) )
    {
      v8 += 24;
      if ( v10 == v8 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  if ( !(unsigned __int8)sub_8C2BC0((__int64)(a1 + 11), (const __m128i **)v12, v4 - (char *)v12[0]) )
    return 0;
  result = sub_8C2BC0((__int64)(a1 + 14), (const __m128i **)v12, v4 - (char *)v12[0]);
  if ( !(_BYTE)result )
    return 0;
  *a2 = v12[0];
  return result;
}

