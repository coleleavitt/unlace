__int64 __fastcall sub_22A9800(__int64 a1, __int64 a2)
{
  char **v2; // rbx
  char *v3; // r15
  unsigned int v4; // ebp
  size_t v5; // rax
  __int64 v6; // r12
  __int64 v8; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]

  v2 = (char **)&off_2BF2720;
  v8 = a1;
  v9 = a2;
  do
  {
    v3 = *v2;
    v4 = *((_DWORD *)v2 + 2);
    v5 = 0;
    v6 = *((unsigned int *)v2 + 3);
    if ( *v2 )
      v5 = strlen(*v2);
    if ( v9 == v5 && !(unsigned int)sub_22462B0((__int64)&v8, (unsigned __int8 *)v3, v5) )
      return (v6 << 32) | v4;
    v2 += 2;
  }
  while ( v2 != (char **)&off_2BF2AE0 );
  return -1;
}
