__int64 __fastcall sub_F2C360(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    if ( v2 )
    {
      sub_995540(*(_QWORD *)(a1 + 1096), " nrvo_candidate(");
      sub_F2A6D0(a1, v2);
      return sub_995540(*(_QWORD *)(a1 + 1096), ")");
    }
  }
  return result;
}
