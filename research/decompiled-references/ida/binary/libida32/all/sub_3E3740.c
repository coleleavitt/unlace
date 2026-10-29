unsigned __int64 __fastcall sub_3E3740(__int64 *a1, int a2, unsigned __int16 *a3)
{
  _BYTE *v3; // r12
  int v4; // eax
  __int64 v5; // rsi
  int v7; // [rsp+Ch] [rbp-5Ch] BYREF
  _BYTE v8[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = sub_3E3600((__int64)v8, 26, a3);
    v4 = sub_3B90A0(a1, a2);
    v5 = *a1;
    v7 = v4;
    sub_79B440(&v7, v5, 28, v8, v3, 83);
  }
  return v9 - __readfsqword(0x28u);
}

