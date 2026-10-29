unsigned __int64 __fastcall sub_270FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v8; // rbp
  int v11; // r13d
  int v12; // r15d
  int v13; // eax
  _QWORD v15[9]; // [rsp+10h] [rbp-88h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-40h]

  v8 = a3;
  v16 = __readfsqword(0x28u);
  v11 = *(_DWORD *)(a5 + 4) + sub_277B90(a3);
  v12 = *(_DWORD *)(a6 + 4) + sub_277B90(a4);
  LODWORD(v8) = *(_DWORD *)(a5 + 4) + sub_277B90(v8 + 20);
  v13 = *(_DWORD *)(a6 + 4) + sub_277B90(a4 + 20);
  v15[0] = 0;
  v15[6] = 0;
  *(double *)&v15[1] = (double)v11;
  *(double *)&v15[3] = (double)v12;
  *(double *)&v15[2] = (double)a7;
  *(double *)&v15[4] = (double)a7;
  *(double *)&v15[5] = (double)v13;
  *(double *)&v15[7] = (double)(int)v8;
  QT::QPainter::drawPolygon(a2, v15, 4, 0);
  return v16 - __readfsqword(0x28u);
}
