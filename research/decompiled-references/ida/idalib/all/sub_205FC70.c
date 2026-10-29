__int64 __fastcall sub_205FC70(__int64 **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // [rsp+8h] [rbp-50h]
  __int64 v12[9]; // [rsp+10h] [rbp-48h] BYREF

  switch ( *((_BYTE *)a1 + 8) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      v7 = sub_20C2F60(a1);
      v9 = sub_21F90D0(a1, a2, v8);
      v10 = v9;
      if ( v7 == v9 )
        sub_21FFC40(v12, v9, 0);
      else
        sub_21FD1F0(v12, v7, 0);
      if ( v12[0] == v10 )
        sub_2200250(v12, 0);
      else
        sub_21FB9A0(v12, 0);
      v11 = sub_2055C80(*a1, v12);
      sub_9955A0(v12);
      result = v11;
      break;
    case 7:
    case 8:
    case 9:
    case 0xA:
    case 0xD:
    case 0x13:
    case 0x14:
      result = sub_2057A60(a1, a2, a3, a4, a5, a6);
      break;
    case 0xB:
      result = sub_20513D0(*a1);
      break;
    case 0xC:
      result = sub_205FB40((__int64)a1, 0, 0);
      break;
    case 0xE:
      result = sub_2057660(a1, a2, a3, a4, a5, a6);
      break;
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12:
      result = sub_2056DA0(a1, a2, a3, a4, a5, a6);
      break;
  }
  return result;
}
