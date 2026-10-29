/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000017A4
// Address: 0x00000001000017A4

//----- (00000001000017A4) ----------------------------------------------------
__int64 __fastcall sub_1000017A4(__int64 a1, int a2)
{
  _QWORD *v4; // x0

  v4 = (_QWORD *)sub_10005FEC0(a1);
  *v4 = off_10009C7C0;
  v4[190] = 0;
  v4[192] = 0;
  v4[191] = 0;
  sub_100018B00((__int64)(v4 + 195), a1, a2);
  *(_OWORD *)(a1 + 1800) = 0u;
  *(_OWORD *)(a1 + 1816) = 0u;
  *(_OWORD *)(a1 + 1784) = 0u;
  *(_QWORD *)(a1 + 1768) = -1;
  *(_QWORD *)(a1 + 1776) = 0;
  *(_OWORD *)(a1 + 1840) = 0u;
  *(_QWORD *)(a1 + 1832) = a1 + 1840;
  *(_QWORD *)(a1 + 1864) = 0;
  *(_OWORD *)(a1 + 1872) = 0u;
  *(_QWORD *)(a1 + 1856) = a1 + 1864;
  *(_OWORD *)(a1 + 1888) = 0u;
  *(_OWORD *)(a1 + 1912) = 0u;
  *(_QWORD *)(a1 + 1904) = a1 + 1912;
  *(_DWORD *)(a1 + 1932) = 0;
  sub_10005C618((_QWORD *)a1, "macosx");
  *(_WORD *)(a1 + 1929) = 0;
  return a1;
}
// 10009C7C0: using guessed type __int64 (__fastcall *off_10009C7C0[4])();
