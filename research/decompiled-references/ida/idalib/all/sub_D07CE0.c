__int64 __fastcall sub_D07CE0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbp
  _BYTE v4[72]; // [rsp-48h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v3 = *(_QWORD *)(a1 + 560);
    *(_QWORD *)(a1 + 1240) = *a2;
    sub_E21760(v3, 48);
    sub_E23260(v4);
    sub_E21790(v3, 48);
    sub_E232A0(v4);
  }
  return 1;
}
