__int64 __fastcall sub_B6D830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v7; // al
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi

  v7 = *(_BYTE *)(a1 + 8) & 0x7F;
  v9 = v7;
  switch ( v7 )
  {
    case 0u:
      result = *(_QWORD *)(a1 + 40);
      if ( result )
        result += 40;
      return result;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 7u:
    case 8u:
    case 0x12u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
      goto LABEL_3;
    case 0x13u:
      result = 48;
      if ( a1 == 48 )
        return result;
      v11 = *(_QWORD *)(a1 + 56);
      if ( !v11 )
      {
        sub_A55AE0((__int64 *)(*(_QWORD *)(a1 + 48) + 88LL), *(_QWORD *)(a1 + 48), a3, v9, a5, a6);
        v11 = *(_QWORD *)(a1 + 56);
      }
      goto LABEL_17;
    case 0x14u:
      result = 48;
      if ( a1 == 48 )
        return result;
      v11 = *(_QWORD *)(a1 + 72);
      if ( !v11 )
      {
        sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 48) + 88LL), *(_QWORD *)(a1 + 48), a3, v9, a5, a6);
        v11 = *(_QWORD *)(a1 + 72);
      }
LABEL_17:
      v12 = (__int64 *)(v11 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v12 && (v13 = *v12) != 0 )
        result = v13 + 48;
      else
LABEL_3:
        result = a1;
      break;
    case 0x18u:
      result = *(_QWORD *)(a1 + 40);
      if ( result )
        result += 48;
      return result;
    default:
      if ( ((v7 + 70) & 0x7Fu) > 4 )
        goto LABEL_3;
      v14 = sub_B5AB30(a1 - 64, a2, a3, a4, a5, a6);
      if ( !v14 )
      {
        v18 = *(_QWORD *)(a1 - 16);
        if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 47 > 1 )
          goto LABEL_3;
        v14 = (_QWORD *)sub_F3D1D0(v18, a2, v15, v16, v17);
        if ( (*((_BYTE *)v14 + 74) & 2) == 0 )
          goto LABEL_3;
      }
      result = (__int64)(v14 + 8);
      break;
  }
  return result;
}

