__int64 __fastcall sub_72A350(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  _QWORD v6[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 40) == 0;
  v6[1] = __readfsqword(0x28u);
  if ( !v3 )
  {
    v6[0] = a3;
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 48))(a1 + 24, v6);
  }
  return sub_836BE0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), a2, a3);
}
