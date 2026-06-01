__int64 __fastcall sub_B970F0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rax

  v1 = sub_B8C1B0(a1 + 64);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = v2 + 120;
  if ( (*(_BYTE *)(v2 + 120) & 1) != 0 )
  {
    v3 = v2 + 120;
    v4 = sub_B8C330(v1);
    *(_QWORD *)(v2 + 120) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 18360) + 16LL))(
                              *(_QWORD *)(v4 + 18360),
                              *(_QWORD *)(v2 + 120) >> 1);
  }
  return *(_QWORD *)v3;
}
