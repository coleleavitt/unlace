void __fastcall sub_11991D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int32 v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __m128i v16[3]; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v17[2]; // [rsp+30h] [rbp-88h] BYREF
  __int16 v18; // [rsp+50h] [rbp-68h]
  __m128i v19[2]; // [rsp+60h] [rbp-58h] BYREF
  __int16 v20; // [rsp+80h] [rbp-38h]

  v7 = *(_QWORD *)(a1 + 24);
  sub_11CCDF0(*(_QWORD *)(v7 + 8), a2, a3, a5, 0, 0);
  switch ( *(_DWORD *)(v7 + 48) )
  {
    case 1:
    case 2:
    case 0x23:
    case 0x24:
      sub_118C7B0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL), a2, a3, a5);
      v8 = sub_113F460(*(_QWORD *)(a1 + 24), a3);
      if ( v8 == 1 )
      {
        sub_10DC5D0(a5, (__int64)"-msoft-float");
        sub_10DC5D0(a5, (__int64)"-mfloat-abi");
        sub_10DC5D0(a5, (__int64)"soft");
      }
      else if ( v8 == 2 )
      {
        sub_10DC5D0(a5, (__int64)"-mfloat-abi");
        sub_10DC5D0(a5, (__int64)"soft");
      }
      else
      {
        sub_10DC5D0(a5, (__int64)"-mfloat-abi");
        sub_10DC5D0(a5, (__int64)"hard");
      }
      v9 = sub_10DE660(a3, 0x95Du, 0xA33u);
      if ( v9 )
      {
        sub_10DC5D0(a5, (__int64)"-mllvm");
        if ( (unsigned __int8)sub_21B9810(v9, 2611) )
          sub_10DC5D0(a5, (__int64)"-arm-global-merge=false");
        else
          sub_10DC5D0(a5, (__int64)"-arm-global-merge=true");
      }
      if ( !(unsigned __int8)sub_21B7850(a3, 2420, 2619, 1) )
        sub_10DC5D0(a5, (__int64)"-no-implicit-float");
      if ( sub_10DCD30(a3, 0x90Cu) )
        sub_10DC5D0(a5, (__int64)"-mcmse");
      sub_118C2D0(a3, a5);
      sub_118D570(*(_QWORD *)(a1 + 24), a3, a5, 0);
      sub_118AA90(a5);
      break;
    case 3:
    case 4:
    case 5:
      sub_118F470(a1, a3, a5);
      break;
    case 0xC:
      sub_10DC5D0(a5, (__int64)"-mqdsp6-compat");
      sub_10DC5D0(a5, (__int64)"-Wreturn-type");
      v10 = sub_1244F90(a3);
      v11 = v10;
      if ( BYTE4(v10) )
      {
        sub_10DC5D0(a5, (__int64)"-mllvm");
        v17[0].m128i_i32[0] = v11;
        v18 = 265;
        v20 = 259;
        v19[0].m128i_i64[0] = (__int64)"-hexagon-small-data-threshold=";
        sub_A41580(v16, v19, v17, v12, v13, v14);
        v15 = sub_10DA6C0(a3, (__int64)v16);
        sub_10DC5D0(a5, v15);
      }
      if ( !sub_10DCD30(a3, 0x571u) )
        sub_10DC5D0(a5, (__int64)"-fshort-enums");
      if ( sub_10DCD30(a3, 0x972u) )
      {
        sub_10DC5D0(a5, (__int64)"-mllvm");
        sub_10DC5D0(a5, (__int64)"-enable-hexagon-ieee-rnd-near");
      }
      sub_10DC5D0(a5, (__int64)"-mllvm");
      sub_10DC5D0(a5, (__int64)"-machine-sink-split=0");
      break;
    case 0xD:
    case 0xE:
      sub_118EC90(a1, a3, a5);
      break;
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
      sub_118CAB0(a1, a3, a5);
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      sub_118E4B0(a1, a3, a5);
      break;
    case 0x1B:
    case 0x1C:
      sub_1197540(a1, a3, a5);
      break;
    case 0x1D:
    case 0x1E:
    case 0x1F:
      sub_118E200(a1, a3, a5);
      break;
    case 0x20:
      sub_118C8C0(a1, a3, a5);
      break;
    case 0x25:
    case 0x26:
      sub_1198B80(a1, a3, a5);
      break;
    case 0x36:
      sub_118D280(a1, a3, a5);
      break;
    case 0x37:
    case 0x38:
      if ( !sub_10DE660(a3, 0x797u, 0x795u) )
        sub_10DC5D0(a5, (__int64)"-fvisibility=hidden");
      break;
    case 0x3B:
      sub_10DC5D0(a5, (__int64)"-mfloat-abi");
      sub_10DC5D0(a5, (__int64)"hard");
      break;
    default:
      return;
  }
}
