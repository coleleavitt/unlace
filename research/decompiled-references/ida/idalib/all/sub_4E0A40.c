__int64 __fastcall sub_4E0A40(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 1728);
  sub_4E07C0(v6);
  result = sub_4DEDA0(v6, a2, a3, a4);
  if ( (_BYTE)result )
  {
    *(_BYTE *)(v6 + 704) = 1;
    *(_BYTE *)(v6 + 640) = 0;
    return sub_4E14A0(215, a2, a3, a4);
  }
  return result;
}
