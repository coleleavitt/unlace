__int64 __fastcall sub_B96980(__int64 a1)
{
  __int64 v1; // rax

  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v1 = sub_B8C330(*(_QWORD *)(a1 + 88));
    *(_QWORD *)(a1 + 24) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 18360) + 56LL))(
                             *(_QWORD *)(v1 + 18360),
                             *(_QWORD *)(a1 + 24) >> 1);
  }
  return *(_QWORD *)(a1 + 24);
}
