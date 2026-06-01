__int64 __fastcall sub_9B08F0(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // r12
  __int64 result; // rax
  unsigned int v4; // eax
  unsigned __int64 v5; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-40h]
  void *v7; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-30h]
  void *v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+28h] [rbp-20h]

  v2 = *(_BYTE *)sub_A1A5A0(a1, 8);
  sub_A1A5E0(a1, 8);
  v8 = a2;
  if ( a2 > 0x40 )
  {
    sub_2585A50(&v7, v2, 1);
    v10 = v8;
    if ( v8 <= 0x40 )
    {
      v6 = v8;
      v5 = (unsigned __int64)v7;
    }
    else
    {
      sub_2585B30(&v9);
      v6 = v10;
      if ( v10 <= 0x40 )
      {
        v4 = v8;
        v5 = (unsigned __int64)v9;
      }
      else
      {
        sub_2585B30(&v5);
        if ( v10 > 0x40 && v9 )
          operator delete[](v9);
        v4 = v8;
      }
      if ( v4 > 0x40 && v7 )
        operator delete[](v7);
    }
  }
  else if ( a2 )
  {
    v6 = a2;
    v5 = (0xFFFFFFFFFFFFFFFFLL >> -(char)a2) & v2;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  result = sub_A1A4E0(a1, 16);
  *(_DWORD *)(result + 8) = v6;
  *(_QWORD *)result = v5;
  return result;
}

