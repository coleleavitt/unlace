__int64 __fastcall sub_CE3FA0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  _BYTE v4[72]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    sub_DFDA20(v3, 48);
    sub_DFF520(v4);
    sub_DFDA50(v3, 48);
    sub_DFF560(v4);
  }
  return 1;
}

