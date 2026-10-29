__int64 __fastcall sub_E40EA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  size_t v4; // rax
  _QWORD v6[2]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v7; // [rsp+10h] [rbp-78h] BYREF
  __int64 v8; // [rsp+18h] [rbp-70h]
  int v9; // [rsp+20h] [rbp-68h]
  __int16 v10; // [rsp+30h] [rbp-58h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+40h] [rbp-48h]
  int v13; // [rsp+48h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    if ( (v2 & 4) != 0 )
    {
      v3 = (__int64 *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v3 )
      {
        sub_E3FD20((__int64)&v7, a1, *v3, 1);
        v10 = 7;
        v11 = v7;
        v7 = 0;
        v12 = v8;
        v8 = 0;
        v13 = v9;
        v9 = 0;
        v4 = j__strlen("type");
        v6[0] = &v10;
        v6[1] = a1 + 1048;
        sub_E34890(a1 + 1048, (__int64)"type", v4, (__int64)sub_E34840, v6);
        sub_2207560(&v10);
        sub_E395A0(&v7);
      }
    }
  }
  return sub_E35E50(a1, (__int64)"isPackExpansion", 15, *(_DWORD *)(a2 + 60) != 0);
}

