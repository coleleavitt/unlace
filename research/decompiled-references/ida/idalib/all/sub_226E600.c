char *__fastcall sub_226E600(__int64 a1)
{
  char *result; // rax
  unsigned __int64 i; // rcx
  char v3; // dl
  __int64 v4[5]; // [rsp+0h] [rbp-28h] BYREF

  result = *(char **)(a1 + 40);
  for ( i = *(_QWORD *)(a1 + 48); result != (char *)i; *(_QWORD *)(a1 + 40) = result )
  {
    v3 = *result;
    if ( *result == 37 )
    {
      if ( i > (unsigned __int64)(result + 2)
        && ((unsigned __int8)((result[1] & 0xDF) - 65) <= 0x19u || (unsigned __int8)(result[1] - 48) <= 9u)
        && ((unsigned __int8)((result[2] & 0xDF) - 65) <= 0x19u || (unsigned __int8)(result[2] - 48) <= 9u) )
      {
        goto LABEL_5;
      }
    }
    else if ( v3 == 45 || (unsigned __int8)(v3 - 97) <= 0x19u || (unsigned __int8)(v3 - 65) <= 0x19u )
    {
      goto LABEL_5;
    }
    v4[0] = (__int64)result;
    v4[1] = 1;
    result = (char *)sub_2246EC0(v4, "#;/?:@&=+$,_.!~*'()[]", 21, 0);
    if ( result == (char *)-1LL )
      return result;
    i = *(_QWORD *)(a1 + 48);
    result = *(char **)(a1 + 40);
LABEL_5:
    ++result;
    ++*(_DWORD *)(a1 + 60);
  }
  return result;
}
