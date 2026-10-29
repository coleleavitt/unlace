__int64 __fastcall sub_7A62D0(__int64 a1)
{
  __int64 v1; // rax

  if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
  {
    v1 = sub_798D40(a1);
    *(_QWORD *)(a1 + 168) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 18200) + 48LL))(
                              *(_QWORD *)(v1 + 18200),
                              *(_QWORD *)(a1 + 168) >> 1);
  }
  return *(_QWORD *)(a1 + 168);
}

