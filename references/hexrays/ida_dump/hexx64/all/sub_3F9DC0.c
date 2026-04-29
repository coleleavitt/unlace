__int64 __fastcall sub_3F9DC0(__int64 a1, int a2, unsigned int a3, double a4)
{
  __int64 v4; // rcx
  unsigned __int8 *v5; // r13
  char v8; // al
  int v9; // edx
  __int64 result; // rax
  char v11; // al
  int v12; // ebp
  char v13; // r8
  int v14; // r9d
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // r9d
  unsigned int v20; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v21; // [rsp+8h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v4 = 40LL * a2;
  v5 = (unsigned __int8 *)(a1 + v4 + 64);
  switch ( *(_BYTE *)(a1 + v4 + 65) )
  {
    case 1:
      v17 = *(_QWORD *)(a1 + 832);
      v18 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      goto LABEL_18;
    case 2:
    case 6:
    case 7:
      v8 = sub_3F94F0(a1, v5, a3, (signed int *)&v20);
      sub_3F9C60(a1, (__int64)v5, v20, 1, v8);
      goto LABEL_3;
    case 3:
    case 4:
      v11 = sub_3F94F0(a1, v5, a3, (signed int *)&v20);
      v12 = v20;
      v13 = v11;
      if ( !*(_BYTE *)(a1 + 40LL * a2 + 96) )
      {
        sub_3F9880(a1, (__int64)v5, v20, v11, a4);
        v13 = 1;
      }
      sub_3F9C60(a1, (__int64)v5, v12, *(_BYTE *)(a1 + 40LL * a2 + 65) == 4, v13);
LABEL_3:
      v9 = *(unsigned __int16 *)(a1 + 48);
      if ( (_WORD)v9 == 92
        || v9 == 222
        || (unsigned __int16)(v9 - 198) <= 1u
        || (unsigned __int16)(*(_WORD *)(a1 + 48) - 97) <= 1u )
      {
        return v20;
      }
      else
      {
        return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 468LL);
      }
    case 5:
      sub_3F9B20(a1, v5, *(_BYTE *)(a1 + 40LL * a2 + 69), *(_QWORD *)(a1 + 40LL * a2 + 72), a3);
      return a3;
    case 0xB:
      v14 = *(_DWORD *)(a1 + 892);
      if ( v14 < 0 )
        goto LABEL_12;
      v15 = 8 - v14;
      if ( !a2 && (unsigned int)sub_3EBCA0(*(_WORD *)(a1 + 48)) == 1 )
        v15 = 7 - v19;
      v16 = v15 + *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      if ( v16 > 7 )
        goto LABEL_12;
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 492LL)
                            + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) * v16);
      break;
    case 0xC:
      v17 = *(_QWORD *)(a1 + 832);
      v18 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 56;
      goto LABEL_18;
    case 0xD:
      v17 = *(_QWORD *)(a1 + 832);
      v18 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 64;
      goto LABEL_18;
    case 0xE:
      v17 = *(_QWORD *)(a1 + 832);
      v18 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 81;
      goto LABEL_18;
    case 0xF:
      v17 = *(_QWORD *)(a1 + 832);
      v18 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 133;
LABEL_18:
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 168LL))(v17, v18);
      break;
    default:
LABEL_12:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}
