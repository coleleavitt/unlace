__int64 __fastcall sub_7A4600(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax

  v1 = sub_79A2E0(a1 + 64);
  v2 = *(_QWORD *)(a1 + 128);
  if ( (*(_BYTE *)(v2 + 120) & 1) != 0 )
  {
    v3 = sub_798D40(v1);
    *(_QWORD *)(v2 + 120) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 18200) + 16LL))(
                              *(_QWORD *)(v3 + 18200),
                              *(_QWORD *)(v2 + 120) >> 1);
  }
  return *(_QWORD *)(v2 + 120);
}

