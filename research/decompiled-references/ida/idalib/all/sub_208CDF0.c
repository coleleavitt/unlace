__int64 __fastcall sub_208CDF0(__int64 a1, unsigned __int8 a2)
{
  __int64 v3; // rdi
  unsigned __int8 *v4; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned __int8 **)(v3 + 32);
  if ( (unsigned __int64)v4 >= *(_QWORD *)(v3 + 24) )
  {
    sub_227BA10(v3, a2);
  }
  else
  {
    *(_QWORD *)(v3 + 32) = v4 + 1;
    *v4 = a2;
  }
  return a1;
}
