unsigned __int64 __fastcall sub_2206E30(__int64 a1, __int64 *a2)
{
  unsigned __int64 *v2; // r11
  unsigned __int64 v3; // rbp
  unsigned int v4; // r9d
  unsigned __int64 result; // rax
  int v6; // eax
  int v7; // r10d
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  v2 = (unsigned __int64 *)a1;
  v3 = *(unsigned int *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  if ( *((_DWORD *)a2 + 2) > 0x40u )
  {
    v6 = sub_2206780(a2);
    v8 = v7 - v6;
    result = (unsigned int)v3;
    if ( v8 <= 0x40 )
    {
      result = *(_QWORD *)*a2;
      if ( v3 < result )
        result = (unsigned int)v3;
      if ( v4 > 0x40 )
        goto LABEL_5;
      goto LABEL_12;
    }
  }
  else
  {
    result = *a2;
    if ( v3 < *a2 )
      result = (unsigned int)v3;
  }
  if ( v4 > 0x40 )
  {
LABEL_5:
    if ( (_DWORD)result )
      return (unsigned __int64)sub_2205320((__int64)v2, result);
    return result;
  }
LABEL_12:
  v9 = 0;
  if ( v4 )
    v9 = (__int64)(*v2 << (64 - (unsigned __int8)v4)) >> (64 - (unsigned __int8)v4);
  v10 = v9 >> 63;
  v11 = v9 >> result;
  if ( v4 == (_DWORD)result )
    v11 = v10;
  *v2 = v11;
  return (unsigned __int64)sub_CF8100(v2);
}
