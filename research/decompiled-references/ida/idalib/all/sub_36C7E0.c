__int64 __fastcall sub_36C7E0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 < (unsigned __int64)xmmword_2CCB488 && *(_QWORD *)(qword_2CCB480 + 8 * v2) )
  {
    *(_BYTE *)a2 = 9;
    *(_QWORD *)(a2 + 8) = qftell();
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}
