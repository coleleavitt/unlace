__int64 __fastcall sub_1A86120(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v4; // rax
  __int64 result; // rax
  __int16 v6; // dx
  __int64 v7; // [rsp+8h] [rbp-20h]

  v4 = (_QWORD *)sub_168B6C0(a1);
  result = sub_EEE9A0(24, v4, 8u);
  v6 = *(_WORD *)result & 0xFE00;
  LOBYTE(v6) = -97;
  *(_WORD *)result = v6;
  if ( unk_2CD7484 )
  {
    v7 = result;
    sub_EE9B50(159);
    *(_DWORD *)(v7 + 8) = a2;
    *(_QWORD *)(v7 + 16) = a3;
    return v7;
  }
  else
  {
    *(_DWORD *)(result + 8) = a2;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
