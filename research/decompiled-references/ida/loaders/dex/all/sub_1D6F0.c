__int64 __fastcall sub_1D6F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi

  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return -1;
  qlseek(v5, a2, 0);
  return qlread(*(_QWORD *)(a1 + 24), a3, a4);
}

