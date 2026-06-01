char *__fastcall Z3_get_numeral_string(__int64 a1, __int64 a2)
{
  char v2; // bp
  char *v3; // rbx
  void *v4; // r14
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // [rsp+1Ch] [rbp-ACh] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-98h] BYREF
  void *v12[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v13; // [rsp+50h] [rbp-78h] BYREF
  void *v14; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v15[8]; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v16[11]; // [rsp+70h] [rbp-58h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29A880(a1, a2);
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      v3 = "";
LABEL_19:
      byte_1C7EBA0 = 1;
      return v3;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    if ( !a2 )
    {
      sub_24EA30(a1, 3u, "ast is not an expression");
      return "";
    }
  }
  if ( (unsigned int)*(unsigned __int16 *)(a2 + 4) - 3 <= 1 )
  {
    sub_24EA30(a1, 3u, "ast is not an expression");
    v3 = "";
  }
  else
  {
    v10[0] = 0;
    v10[1] = 0;
    v11[0] = 1;
    v11[1] = 0;
    if ( (unsigned __int8)Z3_get_numeral_rational(a1, a2) )
    {
      sub_1850940(&v14, qword_1C7F2C0, v10);
      v3 = (char *)sub_24ED70((_QWORD *)a1, (__int64)&v14);
      if ( v14 != v16 )
        operator delete(v14, v16[0] + 1LL);
    }
    else
    {
      v14 = (void *)(*(_QWORD *)(a1 + 376) + 24LL);
      sub_181A6B0(v15);
      if ( (unsigned __int8)sub_15C5390(*(_QWORD *)(a1 + 376), a2, &v9) )
      {
        v3 = "roundTowardPositive";
        if ( v9 != 2 )
        {
          if ( v9 > 2 )
          {
            v3 = "roundTowardNegative";
            if ( v9 != 3 )
              v3 = "roundTowardZero";
          }
          else
          {
            v3 = "roundNearestTiesToEven";
            if ( v9 )
              v3 = "roundNearestTiesToAway";
          }
        }
      }
      else if ( (unsigned __int8)sub_15C4FC0(*(_QWORD *)(a1 + 376), a2, (unsigned int)v15, v6, v7, v8) )
      {
        sub_1820AA0(v12, *(_QWORD *)(a1 + 376) + 24LL, v15);
        v3 = (char *)sub_24ED70((_QWORD *)a1, (__int64)v12);
        if ( v12[0] != &v13 )
          operator delete(v12[0], v13 + 1);
      }
      else
      {
        sub_24EA30(a1, 3u, nullptr);
        v3 = "";
      }
      sub_182EF00(*((_QWORD *)v14 + 91), v16);
    }
    v4 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v10);
    sub_182CBA0(v4, v11);
  }
  if ( v2 )
    goto LABEL_19;
  return v3;
}

