__int64 __fastcall sub_3DB110(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 1096) && *(_QWORD *)(a1 + 1088) )
  {
    sub_83CC0(*(_QWORD **)(a1 + 1088));
    j__qfree();
  }
  v2 = *(_QWORD *)(a1 + 1176);
  *(_QWORD *)(a1 + 1088) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1184) = 0;
    qfree();
  }
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(_QWORD *)(a1 + 1160) = 0;
    qfree();
  }
  result = qfree();
  if ( *(_QWORD *)(a1 + 1112) )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    return qfree();
  }
  return result;
}
