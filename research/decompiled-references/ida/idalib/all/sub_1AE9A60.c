__int64 __fastcall sub_1AE9A60(_QWORD *a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  __int16 v8; // dx
  __int64 v9; // [rsp+0h] [rbp-20h]

  if ( !a3 )
    return 0;
  v6 = 0;
  if ( (_DWORD)a3 )
  {
    if ( (_DWORD)a3 == 1 )
      v6 = *a2;
    else
      v6 = (unsigned __int64)sub_BA6010(a1, a2, a3, a4, a5, a6) | 1;
  }
  result = sub_EEE9A0(24, a1, 8u);
  v8 = *(_WORD *)result & 0xFE00;
  LOBYTE(v8) = -11;
  *(_WORD *)result = v8;
  if ( unk_2CD7484 )
  {
    v9 = result;
    sub_EE9B50(245);
    result = v9;
  }
  *(_QWORD *)(result + 8) = v6;
  *(_QWORD *)(result + 16) = 0;
  return result;
}
