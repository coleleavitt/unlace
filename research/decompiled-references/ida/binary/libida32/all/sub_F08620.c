__int64 __fastcall sub_F08620(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax

  if ( (*(_WORD *)a2 & 0x200) != 0 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    if ( v2 )
    {
      sub_971800(*(_QWORD *)(a1 + 1096), " nrvo_candidate(");
      sub_F06990(a1, v2);
      return sub_971800(*(_QWORD *)(a1 + 1096), ")");
    }
  }
  return result;
}

