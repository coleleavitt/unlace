__int64 __fastcall sub_B8E840(__int64 a1)
{
  __int64 v1; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    v1 = sub_B685F0(a1);
    *(_QWORD *)(a1 + 112) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v1 + 18360) + 16LL))(
                              *(_QWORD *)(v1 + 18360),
                              *(_QWORD *)(a1 + 112) >> 1);
  }
  return *(_QWORD *)(a1 + 112);
}

