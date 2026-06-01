__int64 __fastcall sub_367710(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax

  v2 = *(_BYTE **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = (unsigned __int8)*v2;
  *v2 = *(_QWORD *)(a1 + 40);
  return 0;
}
