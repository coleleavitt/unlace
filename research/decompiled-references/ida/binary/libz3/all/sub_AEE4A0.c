__int64 __fastcall sub_AEE4A0(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  unsigned int v5; // [rsp+Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a1 + 24);
  if ( a2 )
    ++a2[2];
  sub_AEE2E0(a1, a2);
  result = sub_B645B0(*(_QWORD *)(a1 + 16), a2);
  if ( a2 )
  {
    if ( a2[2]-- == 1 )
    {
      v5 = result;
      sub_15D7BC0(v2, a2);
      return v5;
    }
  }
  return result;
}

