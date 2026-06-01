__int64 *__fastcall sub_FDE1C0(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // rdx
  char v4; // al
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 *v7; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-10h]

  v1 = *(__int64 **)(a1 + 16);
  v2 = *v1;
  v7 = v1 + 2;
  v8 = (unsigned int)v2;
  if ( (v2 & 0xFFFFFFFE) == 0 )
    return v7;
  if ( *((_BYTE *)v1 + 16) != 95 )
    return v7;
  v4 = *((_BYTE *)v1 + 17);
  if ( v4 != 95 && (unsigned __int8)(v4 - 65) > 0x19u )
    return v7;
  v5 = sub_2246F60(&v7, 95, 0);
  v6 = v8;
  if ( v5 < v8 )
    v6 = v5;
  return (__int64 *)((char *)v7 + v6);
}
