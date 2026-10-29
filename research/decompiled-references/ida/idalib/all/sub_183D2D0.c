__int64 __fastcall sub_183D2D0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 9872) & 1) != 0 )
    *(_QWORD *)(a1 + 9872) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 18360LL)
                                                                       + 16LL))(
                               *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18360LL),
                               *(_QWORD *)(a1 + 9872) >> 1);
  return *(_QWORD *)(a1 + 9872);
}
