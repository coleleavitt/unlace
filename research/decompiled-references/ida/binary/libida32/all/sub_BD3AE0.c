unsigned __int64 __fastcall sub_BD3AE0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  unsigned int v3; // eax
  unsigned __int64 v4; // rbp
  __int64 v6; // rax
  __int16 v7; // [rsp+0h] [rbp-68h] BYREF
  __int64 v8; // [rsp+8h] [rbp-60h]
  unsigned int v9; // [rsp+10h] [rbp-58h] BYREF
  char v10; // [rsp+14h] [rbp-54h]

  v10 &= ~1u;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v2 = (unsigned __int8)sub_C5E6D0(a1, &v7, a2, 0) == 0;
  v3 = v9;
  if ( v2 )
  {
    v4 = 0;
  }
  else if ( v9 == 12 )
  {
    v4 = sub_A2D650((__int64)&v9);
    v3 = v9;
  }
  else
  {
    v4 = 0;
    if ( v9 == 7 )
    {
      if ( !*(_QWORD *)sub_A2D340((__int64)&v9) )
      {
        v6 = sub_A2D320((__int64)&v9);
        if ( v6 )
        {
          if ( (v6 & 3) == 0 )
            v4 = v6 & 0xFFFFFFFFFFFFFFFCLL;
        }
      }
      v3 = v9;
    }
  }
  if ( v3 > 1 )
    sub_A2BBA0((int *)&v9);
  return v4;
}

