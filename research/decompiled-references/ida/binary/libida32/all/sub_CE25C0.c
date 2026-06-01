__int64 __fastcall sub_CE25C0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rax
  _BYTE v9[72]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v5 = a2;
    v6 = *(_QWORD *)(a1 + 560);
    v7 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)(a1 + 1240) = *a3;
    sub_E05460(v9, v7, v5);
    v8 = sub_DFD980(v6, 48);
    sub_DFF520(v8);
    sub_DFF560(v9);
  }
  return 1;
}

