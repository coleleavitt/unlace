void __fastcall sub_E44070(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  size_t v6; // rax
  _QWORD v7[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v8; // [rsp+10h] [rbp-68h] BYREF
  __int64 v9; // [rsp+18h] [rbp-60h]
  int v10; // [rsp+20h] [rbp-58h]
  __int16 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 56);
  if ( v2 && (v2 & 2) != 0 )
  {
    v3 = v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v3 )
    {
      sub_E43670((__int64)&v8, a1, v3);
      v11 = 7;
      v4 = v8;
      v8 = 0;
      v12 = v4;
      v5 = v9;
      v9 = 0;
      v13 = v5;
      LODWORD(v5) = v10;
      v10 = 0;
      v14 = v5;
      v6 = j__strlen("field");
      v7[0] = &v11;
      v7[1] = a1 + 1048;
      sub_E34890(a1 + 1048, (__int64)"field", v6, (__int64)sub_E34840, v7);
      sub_2207560(&v11);
      sub_E395A0(&v8);
    }
  }
}

