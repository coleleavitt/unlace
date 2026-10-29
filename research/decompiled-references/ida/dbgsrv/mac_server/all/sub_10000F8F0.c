/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000F8F0
// Address: 0x000000010000F8F0

//----- (000000010000F8F0) ----------------------------------------------------
__int64 __fastcall sub_10000F8F0(__int64 a1)
{
  __int64 v1; // r15
  char *v2; // rbx
  const char *v3; // rdi
  __int64 v4; // r14
  char *__s1[2]; // [rsp+0h] [rbp-40h] BYREF
  __int64 v7; // [rsp+10h] [rbp-30h]

  *(_OWORD *)__s1 = 0;
  v7 = 0;
  v1 = sub_10000F7C0((__int64)__s1, a1);
  v2 = __s1[0];
  if ( v1 < 0 )
  {
    v4 = -1;
    if ( !__s1[0] )
      return v4;
LABEL_7:
    __s1[1] = nullptr;
    qfree(v2);
    return v4;
  }
  v3 = _s1;
  if ( __s1[1] )
    v3 = __s1[0];
  v4 = v1 | -(__int64)(strcmp(v3, "IM4P") != 0);
  if ( v2 )
    goto LABEL_7;
  return v4;
}
