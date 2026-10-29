__int64 __fastcall sub_28BFB0(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // edx

  v1 = (__int64 *)sub_28BE60((__int64)"Choose function to jump to", -1);
  v2 = 1;
  if ( v1 )
    return (unsigned __int8)sub_192AA0(a1, *v1, -1, 1u);
  return v2;
}
