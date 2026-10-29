__int64 __fastcall sub_1933BC0(__int64 *a1, unsigned __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+0h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A8h]
  unsigned __int8 *v23; // [rsp+28h] [rbp-98h] BYREF
  char v24; // [rsp+80h] [rbp-40h]
  unsigned int v25; // [rsp+88h] [rbp-38h]
  char v26; // [rsp+8Ch] [rbp-34h]
  __int64 v27; // [rsp+98h] [rbp-28h]

  if ( !a2 )
    return 0;
  v5 = (*(_WORD *)a2 + 509) & 0x1FF;
  v27 = v4;
  switch ( (__int16)v5 )
  {
    case 0:
      result = sub_1967D20();
      break;
    case 1:
      if ( *(_BYTE *)(a2 + 2) >> 3 == 4
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 33 )
      {
        result = a2;
      }
      else
      {
        result = sub_19749F0(a1, a2);
      }
      break;
    case 2:
      result = sub_196DC80();
      break;
    case 3:
      result = sub_1971AC0();
      break;
    case 4:
      result = sub_18BB980(a2);
      break;
    case 5:
      result = sub_18BB990(a2);
      break;
    case 6:
      result = sub_18BB9A0(a2);
      break;
    case 7:
      result = sub_1975F10();
      break;
    case 8:
      result = sub_18BD020(a1, a2);
      break;
    case 9:
      result = sub_196AFB0();
      break;
    case 10:
      result = sub_1934F60();
      break;
    case 11:
      result = sub_19448A0();
      break;
    case 12:
      result = sub_1972900();
      break;
    case 13:
      result = sub_193BE10();
      break;
    case 14:
      result = sub_193BF30();
      break;
    case 15:
      result = sub_18C6F70(a1, a2);
      break;
    case 16:
      result = sub_1935020();
      break;
    case 17:
      result = sub_193BFA0();
      break;
    case 18:
      result = sub_193BFF0();
      break;
    case 19:
      result = sub_193C200();
      break;
    case 20:
      result = sub_196EC50();
      break;
    case 21:
      result = sub_196E360();
      break;
    case 22:
      result = sub_18BB5C0((__int64)a1, a2);
      break;
    case 23:
      result = sub_18BB9B0(a2);
      break;
    case 24:
      result = sub_1967D80();
      break;
    case 25:
      result = sub_193C250();
      break;
    case 26:
      result = sub_18BB7F0(*a1, a2);
      break;
    case 27:
      result = sub_18BB9C0(a2);
      break;
    case 28:
      result = sub_18BB9D0(a2);
      break;
    case 29:
      result = sub_193C2C0();
      break;
    case 30:
      result = sub_1967FA0();
      break;
    case 31:
      result = sub_193C470();
      break;
    case 32:
      result = sub_193C570();
      break;
    case 33:
      result = sub_193C670();
      break;
    case 34:
      result = sub_1944900();
      break;
    case 35:
      result = sub_193C680();
      break;
    case 36:
      result = sub_193CA80();
      break;
    case 37:
      result = sub_18BB9E0(a2);
      break;
    case 38:
      result = sub_18BB9F0(a2);
      break;
    case 39:
      result = sub_19350C0();
      break;
    case 40:
      result = sub_19683C0();
      break;
    case 41:
      result = sub_193CAD0();
      break;
    case 42:
      sub_2E9A94();
    case 43:
      result = sub_196F070();
      break;
    case 44:
      result = sub_193CC60();
      break;
    case 45:
      result = sub_193CCF0();
      break;
    case 46:
      result = sub_193CD10();
      break;
    case 47:
      result = sub_196F840();
      break;
    case 48:
      result = sub_1940EB0();
      break;
    case 49:
      result = sub_18BBA00(a2);
      break;
    case 50:
      result = sub_1935160();
      break;
    case 51:
      result = sub_1942B40();
      break;
    case 52:
      result = sub_18BBA10(a2);
      break;
    case 53:
      result = sub_193CD90();
      break;
    case 54:
      result = sub_1968780();
      break;
    case 55:
      result = sub_18BBA20(a2);
      break;
    case 56:
      result = sub_18BBA30(a2);
      break;
    case 57:
      result = sub_193CDA0();
      break;
    case 58:
      result = sub_193CDB0();
      break;
    case 59:
      result = sub_18BBA40(a2);
      break;
    case 60:
      result = sub_18BBA50(a2);
      break;
    case 61:
      result = sub_193CDC0();
      break;
    case 62:
      result = sub_193CED0();
      break;
    case 63:
      result = sub_18BBA60(a2);
      break;
    case 64:
      sub_2E9A94();
    case 65:
      result = sub_193CF60();
      break;
    case 66:
      result = sub_196DC70();
      break;
    case 67:
      result = sub_196E370();
      break;
    case 68:
      if ( (*(_BYTE *)(*(_QWORD *)(a2 + 16) + 28LL) & 0x7Fu) - 49 > 2
        || (v8 = *a1, v9 = *(_DWORD *)(*(_QWORD *)(*a1 + 4616) + 640LL * *(unsigned int *)(*a1 + 4624) - 640), v9 == 3)
        || v9 <= 1 )
      {
        result = sub_196E8D0(a1, a2);
      }
      else
      {
        v10 = *(_DWORD *)(a2 + 4);
        v11 = v8 + 8;
        sub_168B9F0((__int64)v21, (__int64 *)(v8 + 8), v10, 0xFD0u, 0);
        v12 = *(_QWORD *)(a2 + 16);
        if ( v24 )
        {
          v11 = *(_QWORD *)(a2 + 16);
          sub_AE9DF0(&v23, v11, 0xAu);
        }
        else if ( v26 )
        {
          v17 = sub_168B9E0(v21);
          v18 = v22;
          if ( v22 )
            v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 32LL))(v22);
          v20 = v18;
          v19 = sub_1587BC0(v17, &v20, v13, v14, v15, v16);
          v11 = v12;
          sub_AE9DF0((unsigned __int8 **)(*v19 + 32LL * v25 + 8), v12, 0xAu);
        }
        v20 = sub_EEC8C0(a2, v11, a3);
        sub_1587DB0((__int64)v21, &v20);
        sub_15F7200(v21);
        result = 1;
      }
      break;
    case 69:
      result = sub_1934E70();
      break;
    case 70:
      result = sub_1934EC0();
      break;
    case 71:
      result = sub_1968AB0();
      break;
    case 72:
      result = sub_196C0D0();
      break;
    case 73:
      result = sub_1968B10();
      break;
    case 74:
      result = sub_193D6B0();
      break;
    case 75:
      result = sub_18BBA70(a2);
      break;
    case 76:
      result = sub_193D740();
      break;
    case 77:
      result = sub_1968B90();
      break;
    case 78:
      result = sub_1968D30();
      break;
    case 79:
      result = sub_1968D40();
      break;
    case 80:
      result = sub_1968D50();
      break;
    case 81:
      result = sub_1968D60();
      break;
    case 82:
      result = sub_1968D70();
      break;
    case 83:
      result = sub_196D0D0();
      break;
    case 84:
      result = sub_1968D80();
      break;
    case 85:
      result = sub_1968DE0();
      break;
    case 86:
      result = sub_193D760();
      break;
    case 87:
      result = sub_193D8E0();
      break;
    case 88:
      result = sub_196E3D0();
      break;
    case 89:
      result = sub_193D8F0();
      break;
    case 90:
      result = sub_193D900();
      break;
    case 91:
      result = sub_1968E40();
      break;
    case 92:
      result = sub_196D1C0();
      break;
    case 93:
      result = sub_1968F00();
      break;
    case 94:
      result = sub_193DA10();
      break;
    case 95:
      result = sub_1942C00();
      break;
    case 96:
      result = sub_193DA70();
      break;
    case 97:
      result = sub_1944950();
      break;
    case 98:
      result = sub_193DA80();
      break;
    case 99:
      result = sub_196FF60();
      break;
    case 100:
      result = sub_1942DA0();
      break;
    case 101:
      result = sub_18BBA80(a2);
      break;
    case 102:
      result = sub_193DC60();
      break;
    case 103:
      result = sub_196CD50();
      break;
    case 104:
      result = sub_1942CB0();
      break;
    case 105:
      result = sub_193DCE0();
      break;
    case 106:
      result = sub_196FAC0();
      break;
    case 107:
      result = sub_193DEE0();
      break;
    case 108:
      result = sub_1910AC0((__int64)a1, a2);
      break;
    case 109:
      result = sub_193DF50();
      break;
    case 110:
      result = sub_1942E70();
      break;
    case 111:
      result = sub_196D330();
      break;
    case 112:
      result = sub_18BBA90(a2);
      break;
    case 113:
      result = sub_193E0E0();
      break;
    case 114:
      result = sub_19336B0(a1, a2, a3, a4);
      break;
    case 115:
      result = sub_193E140();
      break;
    case 116:
      result = sub_193E2D0();
      break;
    case 117:
      result = sub_1935250();
      break;
    case 118:
      result = sub_1943190();
      break;
    case 119:
      result = sub_1969070();
      break;
    case 120:
      result = sub_193E470();
      break;
    case 121:
      result = sub_193E510();
      break;
    case 122:
      sub_2E9A94();
    case 123:
      sub_2E9A94();
    case 124:
      result = sub_18CCBD0((__int64)a1, a2);
      break;
    case 125:
      result = sub_193E6D0();
      break;
    case 126:
      result = sub_193E760();
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
