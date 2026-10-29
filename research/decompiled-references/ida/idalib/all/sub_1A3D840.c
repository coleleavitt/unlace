bool __fastcall sub_1A3D840(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  bool result; // al

  v6 = *(_QWORD *)(a1 + 128);
  result = (v6
         || (sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6),
             (v6 = *(_QWORD *)(a1 + 128)) != 0))
        && *(_QWORD *)(v6 + 88)
        && !(unsigned __int8)sub_B8E180(a1 + 64)
        && (*(_BYTE *)(a1 + 74) & 2) == 0;
  return result;
}
