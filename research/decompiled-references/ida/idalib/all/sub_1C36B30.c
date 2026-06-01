__int64 __fastcall sub_1C36B30(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 *v6; // rax
  int v7; // edx
  __int64 result; // rax
  __int16 v9; // dx
  __int64 v10; // [rsp+8h] [rbp-30h]

  sub_15F2460(a1);
  v6 = *(__int64 **)(a1 + 608);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v6 + 2);
      if ( (v7 & 0x10000000) != 0 )
        break;
      if ( (v7 & 0xDE1) == 0 )
      {
        v6 = (__int64 *)*v6;
        if ( v6 )
          continue;
      }
      goto LABEL_7;
    }
    sub_15F2480(a1);
  }
LABEL_7:
  sub_B8C4D0(a4, *(_QWORD *)(a1 + 248));
  result = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  v9 = *(_WORD *)result & 0xFE00;
  LOBYTE(v9) = -14;
  *(_WORD *)result = v9;
  if ( unk_2CD7484 )
  {
    v10 = result;
    sub_EE9B50(242);
    result = v10;
  }
  *(_QWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 16) = a3;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
