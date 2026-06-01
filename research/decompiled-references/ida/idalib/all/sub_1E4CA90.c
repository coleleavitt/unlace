__int16 __fastcall sub_1E4CA90(_WORD *a1, __int64 a2)
{
  __int64 (__fastcall **v2)(); // rax
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]
  char v7; // [rsp+18h] [rbp-10h]
  int v8; // [rsp+1Ch] [rbp-Ch]

  v2 = off_2C6ECE0;
  v4 = off_2C6ECE0;
  v6 = a2;
  v7 = 0;
  v8 = -1;
  v5 = 16842752;
  if ( a1 )
  {
    LOWORD(v2) = (*a1 + 509) & 0x1FF;
    if ( (unsigned __int16)v2 <= 0x7Eu && (*(_DWORD *)a1 & 0x4000) != 0 )
      LOWORD(v2) = sub_BC97E0((__int64 *)&v4, (__int64)a1);
  }
  return (__int16)v2;
}
