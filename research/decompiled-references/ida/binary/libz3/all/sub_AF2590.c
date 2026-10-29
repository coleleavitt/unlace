__int64 __fastcall sub_AF2590(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 544);
  if ( v2 )
    *(_DWORD *)(v2 - 4) = 0;
  sub_AF0E00(a2 + 64, a2);
  return sub_AF22A0(a1, a2);
}

