__int64 __fastcall sub_C03DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rcx
  __int64 v12; // [rsp+10h] [rbp-58h]
  __int64 v13; // [rsp+18h] [rbp-50h]
  _BYTE v14[64]; // [rsp+28h] [rbp-40h] BYREF

  sub_180C5A0(v14, "seq.align.m");
  if ( (unsigned __int8)sub_1407860(a2, v14, a3)
    && *(_DWORD *)(a3 + 24) == 2
    && (v13 = *(_QWORD *)(a3 + 32),
        v12 = *(_QWORD *)(a3 + 40),
        sub_180C5A0(v14, "seq.align.m"),
        (unsigned __int8)sub_1407860(a2, v14, a4))
    && *(_DWORD *)(a4 + 24) == 2
    && (v9 = *(_QWORD *)(a4 + 32), *(_QWORD *)(a4 + 40) == v12)
    && v13 != v9 )
  {
    sub_C03DB0(a1, a2, v13, v9, a5, a6, a5, a6, v12, v13);
  }
  else
  {
    sub_180C5A0(v14, "seq.align.m");
    sub_1407560(a1, a2, (unsigned int)v14, a3, a4, a5, a6, 0, 1);
  }
  return a1;
}

