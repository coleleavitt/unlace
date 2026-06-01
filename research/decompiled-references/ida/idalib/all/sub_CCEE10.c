__int64 __fastcall sub_CCEE10(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rax

  if ( *(_QWORD *)(a1 + 576) )
  {
    v2 = sub_C94CC0(a2);
    return sub_CCC710(a1, v2);
  }
  else
  {
    *(_QWORD *)(a1 + 576) = a2;
    v4 = sub_C94CC0(a2);
    result = sub_CCC710(a1, v4);
    *(_QWORD *)(a1 + 576) = 0;
  }
  return result;
}
