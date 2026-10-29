unsigned __int64 __fastcall sub_8050D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char v3; // dl
  unsigned int v4; // eax
  __int64 v6; // rax
  __int16 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  unsigned int v9; // [rsp+10h] [rbp-58h] BYREF
  char v10; // [rsp+14h] [rbp-54h]

  v2 = 0;
  v10 &= ~1u;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v3 = sub_897AC0(a1, &v7, a2, 0);
  v4 = v9;
  if ( v3 )
  {
    if ( v9 == 12 )
    {
      v2 = sub_6A37B0((__int64)&v9);
      v4 = v9;
    }
    else if ( v9 == 7 )
    {
      if ( !*(_QWORD *)sub_6A34F0((__int64)&v9) )
      {
        v6 = sub_6A34D0((__int64)&v9);
        if ( v6 )
        {
          if ( (v6 & 3) == 0 )
            v2 = v6 & 0xFFFFFFFFFFFFFFFCLL;
        }
      }
      v4 = v9;
    }
  }
  if ( v4 > 1 )
    sub_69F740((__int64)&v9);
  return v2;
}

