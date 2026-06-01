__int64 __fastcall sub_21348C0(__int64 a1)
{
  __int64 v1; // r13
  unsigned int v2; // ebp
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h] BYREF
  __int64 v12; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v13[4]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v14; // [rsp+40h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 184);
  if ( *(_BYTE *)(a1 + 861) || !(unsigned __int8)sub_2129170(a1) )
  {
    v13[0] = 0;
    if ( !sub_2133530(a1, &v10, (__int64)v13) )
    {
      v4 = 0;
      v5 = 0;
      v11 = 1;
      v12 = 0;
      if ( !(unsigned __int8)sub_2154640(a1, 26)
        || (v6 = sub_2153C00(a1), v4 = sub_2124B50(v6), !(unsigned __int8)sub_21335C0(a1, &v11))
        && (!(unsigned __int8)sub_2154640(a1, 26)
         || (v9 = sub_2153C00(a1), v5 = sub_2124B50(v9), !(unsigned __int8)sub_21335C0(a1, &v12))) )
      {
        v2 = sub_21544B0(a1);
        if ( !(_BYTE)v2 )
        {
          v7 = v11;
          if ( v11 < 0 )
          {
            v14 = 259;
            v13[0] = "'.fill' directive with negative size has no effect";
            sub_212CE20(a1, v4, (__int64)v13, nullptr, 0);
            return v2;
          }
          if ( v11 > 8 )
          {
            v14 = 259;
            v13[0] = "'.fill' directive with size greater than 8 has been truncated to 8";
            sub_212CE20(a1, v4, (__int64)v13, nullptr, 0);
            v8 = v12;
            v7 = 8;
            v11 = 8;
            if ( v12 == (unsigned int)v12 )
            {
LABEL_14:
              (*(void (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 24)
                                                                                          + 592LL))(
                *(_QWORD *)(a1 + 24),
                v10,
                v7,
                v8,
                v1);
              return v2;
            }
          }
          else
          {
            v8 = v12;
            if ( v12 == (unsigned int)v12 || v11 <= 4 )
              goto LABEL_14;
          }
          v13[0] = "'.fill' directive pattern has been truncated to 32-bits";
          v14 = 259;
          sub_212CE20(a1, v5, (__int64)v13, nullptr, 0);
          v8 = v12;
          v7 = v11;
          goto LABEL_14;
        }
      }
    }
  }
  return 1;
}
