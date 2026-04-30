__int64 __fastcall sub_5A4100(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = sub_5A40EE(a2);
  *(_QWORD *)(a1 + 16) = 0;
  return a1;
}
