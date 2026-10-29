_WORD *__fastcall sub_16B6070(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _WORD *v6; // rbp
  char v7; // al
  unsigned int v8; // edx
  __int64 v10; // rax
  _WORD *v11; // rax
  __int16 v12; // [rsp+0h] [rbp-68h] BYREF
  __int64 v13; // [rsp+8h] [rbp-60h]
  unsigned int v14; // [rsp+10h] [rbp-58h] BYREF
  char v15; // [rsp+14h] [rbp-54h]

  v6 = nullptr;
  v12 = 0;
  v14 = 0;
  v13 = 0;
  v15 &= ~1u;
  v7 = sub_C3D370(a2, (__int64)&v12, a1, 0, a5, a6);
  v8 = v14;
  if ( v7 )
  {
    if ( v14 == 7 )
    {
      v10 = sub_A51060((__int64)&v14);
      v8 = v14;
      if ( v10 )
      {
        v8 = v14;
        if ( (v10 & 3) == 1 )
        {
          v11 = (_WORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
          v6 = v11;
          if ( v11 )
          {
            if ( (*v11 & 0x1FF) != 9 )
              v6 = nullptr;
          }
        }
      }
    }
  }
  if ( v8 > 1 )
    sub_A4F8E0((int *)&v14);
  return v6;
}
