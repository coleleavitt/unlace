__int64 __fastcall sub_226E6F0(__int64 a1, unsigned int a2)
{
  char *v2; // rdx
  __int64 result; // rax
  const char *v4; // [rsp+0h] [rbp-38h] BYREF
  __int16 v5; // [rsp+20h] [rbp-18h]

  v2 = *(char **)(a1 + 40);
  if ( a2 > 0x7F )
    goto LABEL_6;
  if ( *(char **)(a1 + 48) == v2 )
    return 0;
  if ( *v2 < 0 )
  {
LABEL_6:
    v4 = "Cannot consume non-ascii characters";
    v5 = 259;
    sub_226E270(a1, (__int64)&v4, v2);
    return 0;
  }
  result = 0;
  if ( *v2 == a2 )
  {
    ++*(_DWORD *)(a1 + 60);
    *(_QWORD *)(a1 + 40) = v2 + 1;
    return 1;
  }
  return result;
}
