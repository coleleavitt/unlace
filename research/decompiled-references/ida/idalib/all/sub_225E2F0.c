__int64 __fastcall sub_225E2F0(__int64 *a1, __int64 *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rdx

  result = *a2;
  v3 = (volatile signed __int32 *)a2[1];
  *(_OWORD *)a2 = 0;
  *a1 = result;
  a1[1] = (__int64)v3;
  if ( !*(_QWORD *)(result + 16) )
  {
    *(_OWORD *)a1 = 0;
    if ( v3 )
      return sub_4343A0(v3);
  }
  return result;
}
