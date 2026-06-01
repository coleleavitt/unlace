__int64 __fastcall sub_141E5C0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 *v5; // r12
  bool v6; // al
  __int64 v7; // [rsp-28h] [rbp-28h]

  result = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  if ( (*(_BYTE *)(v3 + 4) & 2) == 0 )
  {
    v5 = (__int64 *)sub_141E3D0(result, **(_DWORD **)(a1 + 8), (*(_BYTE *)(v3 + 22) & 0x10) != 0);
    v6 = sub_1021600(*(_QWORD *)(*(_QWORD *)a1 + 88LL), **(_DWORD **)(a1 + 8));
    sub_14086E0(
      *(_QWORD *)(*(_QWORD *)a1 + 104LL) + 632LL,
      v5,
      !v6,
      **(_DWORD **)(a1 + 8),
      **(_BYTE ***)(a1 + 16),
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
      a2);
    return v7;
  }
  return result;
}
