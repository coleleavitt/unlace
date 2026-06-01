unsigned __int64 __fastcall sub_16B6930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v6; // al
  unsigned int v7; // ecx
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  __int16 v11; // [rsp+0h] [rbp-68h] BYREF
  __int64 v12; // [rsp+8h] [rbp-60h]
  unsigned int v13; // [rsp+10h] [rbp-58h] BYREF
  char v14; // [rsp+14h] [rbp-54h]

  v11 = 0;
  v13 = 0;
  v12 = 0;
  v14 &= ~1u;
  v6 = sub_C3D370(a2, (__int64)&v11, a1, 0, a5, a6);
  v7 = v13;
  if ( v6 && v13 == 7 )
  {
    v10 = sub_A51060((__int64)&v13);
    if ( v10 && (v10 & 3) == 0 && (v8 = v10 & 0xFFFFFFFFFFFFFFFCLL, (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0) )
    {
      sub_A51080((__int64)&v13);
      v7 = v13;
    }
    else
    {
      v8 = 0;
      v7 = v13;
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v7 > 1 )
    sub_A4F8E0((int *)&v13);
  return v8;
}
