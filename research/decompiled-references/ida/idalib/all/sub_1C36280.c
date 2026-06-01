__int64 __fastcall sub_1C36280(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  __int16 v8; // si
  bool v9; // zf
  __int64 v10; // [rsp+0h] [rbp-20h]

  if ( !a2 )
    return 1;
  result = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  v8 = *(_WORD *)result & 0xFE00;
  LOBYTE(v8) = -11;
  v9 = unk_2CD7484 == 0;
  *(_WORD *)result = v8;
  if ( !v9 )
  {
    v10 = result;
    sub_EE9B50(245);
    result = v10;
  }
  *(_QWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 20) = a4;
  return result;
}
