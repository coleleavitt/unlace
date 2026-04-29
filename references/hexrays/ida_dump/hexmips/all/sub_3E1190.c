__int64 __fastcall sub_3E1190(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdi

  if ( *(_BYTE *)(a1 + 1096) )
  {
    v2 = *(_QWORD *)(a1 + 1088);
    if ( v2 )
    {
      sub_80840(*(_QWORD **)(a1 + 1088));
      j__qfree(v2);
    }
  }
  v3 = *(_QWORD *)(a1 + 1176);
  *(_QWORD *)(a1 + 1088) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1184) = 0;
    qfree(v3);
  }
  v4 = *(_QWORD *)(a1 + 1152);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 1160) = 0;
    qfree(v4);
  }
  result = qfree(*(_QWORD *)(a1 + 1136));
  v6 = *(_QWORD *)(a1 + 1112);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 1120) = 0;
    return qfree(v6);
  }
  return result;
}
