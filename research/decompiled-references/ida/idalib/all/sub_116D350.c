__int64 __fastcall sub_116D350(__int64 **a1, _BYTE *a2, signed __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 result; // rax
  __int64 *v7; // rdx
  __int64 **v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // ebp
  unsigned __int8 v11; // dl
  const char *v12; // rsi
  void *v14; // [rsp+10h] [rbp-B8h] BYREF
  signed __int64 v15; // [rsp+18h] [rbp-B0h]
  __int64 v16; // [rsp+20h] [rbp-A8h] BYREF
  _DWORD v17[8]; // [rsp+30h] [rbp-98h] BYREF
  __int16 v18; // [rsp+50h] [rbp-78h]
  unsigned __int8 *v19[13]; // [rsp+60h] [rbp-68h] BYREF

  result = *((unsigned __int8 *)a1 + 9);
  if ( (_BYTE)result )
  {
    if ( a5 )
    {
      if ( a6 > 0x1F3 )
      {
        v7 = a1[95];
        if ( !v7 )
          goto LABEL_13;
        v8 = a1 + 94;
        do
        {
          while ( a6 <= *((_DWORD *)v7 + 8) )
          {
            v8 = (__int64 **)v7;
            v7 = (__int64 *)v7[2];
            if ( !v7 )
              goto LABEL_10;
          }
          v7 = (__int64 *)v7[3];
        }
        while ( v7 );
LABEL_10:
        if ( a1 + 94 == v8 || a6 < *((_DWORD *)v8 + 8) || !v8[6] )
        {
LABEL_13:
          v9 = **a1;
          v10 = a6 / 0x64;
          if ( a6 <= 0x257 )
          {
            sub_FC70B0((__int64)v19, v9, 0, 442);
            sub_AE9DF0(v19, 2, 2u);
            v17[0] = v10;
            v18 = 265;
            sub_2253560(&v14, v17);
            sub_AEC220(v19, v14, v15);
            v11 = 2;
            v12 = nullptr;
          }
          else
          {
            sub_FC70B0((__int64)v19, v9, 0, 442);
            sub_AE9DF0(v19, 2, 2u);
            v17[0] = v10;
            v18 = 265;
            sub_2253560(&v14, v17);
            sub_AEC220(v19, v14, v15);
            sub_AE9DF0(v19, 1, 2u);
            v11 = 1;
            v12 = "6.3";
          }
          sub_AE9DF0(v19, (__int64)v12, v11);
          if ( v14 != &v16 )
            operator delete(v14);
          sub_AEA040((__int64)v19);
          return 0;
        }
      }
    }
    else
    {
      sub_FC70B0((__int64)v19, **a1, 0, 442);
      sub_AE9DF0(v19, 1, 2u);
      sub_AEC220(v19, a2, a3);
      sub_AEA040((__int64)v19);
      return 0;
    }
  }
  else
  {
    sub_FC70B0((__int64)v19, **a1, 0, 442);
    sub_AE9DF0(v19, 0, 2u);
    sub_AEA040((__int64)v19);
    return 0;
  }
  return result;
}
