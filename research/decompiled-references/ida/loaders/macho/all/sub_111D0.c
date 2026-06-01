__int64 __fastcall sub_111D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( *(_QWORD *)(a1 + 32) > a2 )
    v2 = *(_QWORD *)(a1 + 40) + a2;
  if ( v2 == qlseek() )
    return qlread();
  else
    return -1;
}

