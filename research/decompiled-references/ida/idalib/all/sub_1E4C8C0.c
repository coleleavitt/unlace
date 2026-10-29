char __fastcall sub_1E4C8C0(_DWORD a1, __int64 a2, _DWORD a3, _DWORD a4, _DWORD a5, _DWORD a6, char a7)
{
  char result; // al
  __int64 (__fastcall **v8)(); // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]
  char v11; // [rsp+18h] [rbp-10h]
  int v12; // [rsp+1Ch] [rbp-Ch]

  v8 = off_2C6ECE0;
  v10 = a2;
  v11 = 0;
  v12 = -1;
  v9 = 16842752;
  result = sub_F1D570((__int64)&a7);
  if ( !result )
    return sub_BC8610((__int64)&v8, (__int64)&a7);
  return result;
}
