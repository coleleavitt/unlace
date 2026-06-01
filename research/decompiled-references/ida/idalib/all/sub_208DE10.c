__int64 __fastcall sub_208DE10(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)a1 = &off_2BE5D78;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  return a1 + 24;
}
