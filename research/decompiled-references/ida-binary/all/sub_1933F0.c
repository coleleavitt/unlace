__int64 __fastcall sub_1933F0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v5; // eax

  v3 = sub_3ED590(a2, a3);
  result = 1;
  if ( v3 != -1 )
  {
    v5 = sub_192880(v3);
    return (unsigned __int8)sub_192AA0(a1, v3, v5, 1u);
  }
  return result;
}
