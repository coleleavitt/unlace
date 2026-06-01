unsigned __int64 __fastcall sub_2208020(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebp
  unsigned __int64 v3; // rbx
  int v4; // eax
  __int64 *v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_DWORD *)(a1 + 8);
  v7 = a2;
  if ( v2 <= 0x40 )
    return *(_QWORD *)a1 % a2;
  v3 = ((unsigned __int64)(v2 - (unsigned int)sub_2206780((__int64 *)a1)) + 63) >> 6;
  if ( !v3 )
    return v3;
  if ( v7 == 1 )
    return 0;
  v4 = sub_C16760(a1);
  v5 = *(__int64 **)a1;
  if ( v2 - v4 > 0x40 )
    goto LABEL_7;
  result = *v5;
  if ( v7 <= *v5 )
  {
    if ( v7 != *v5 )
    {
LABEL_7:
      if ( v3 == 1 )
        return *v5 % v7;
      sub_2206F10(v5, v3, (__int64 *)&v7, 1, 0, (__int64)v8);
      return v8[0];
    }
    return 0;
  }
  return result;
}
