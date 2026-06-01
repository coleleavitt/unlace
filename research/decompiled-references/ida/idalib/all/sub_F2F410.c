__int64 __fastcall sub_F2F410(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12

  sub_F2AD60(a1, a2);
  sub_F2A610(a1, *(_QWORD *)(a2 + 48));
  sub_995540(*(_QWORD *)(a1 + 1096), " combiner");
  result = sub_F29AE0(a1, *(_QWORD *)(a2 + 88));
  v3 = *(_QWORD *)(a2 + 96);
  if ( v3 )
  {
    sub_995540(*(_QWORD *)(a1 + 1096), " initializer");
    sub_F29AE0(a1, v3);
    result = (*(_BYTE *)(a2 + 65) >> 5) & 3;
    if ( (_BYTE)result == 1 )
    {
      return sub_995540(*(_QWORD *)(a1 + 1096), " omp_priv = ");
    }
    else if ( (_BYTE)result == 2 )
    {
      return sub_995540(*(_QWORD *)(a1 + 1096), " omp_priv ()");
    }
  }
  return result;
}
