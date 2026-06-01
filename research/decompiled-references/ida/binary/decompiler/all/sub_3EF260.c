__int64 __fastcall sub_3EF260(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rcx
  unsigned __int8 *v4; // r13
  char v7; // al
  int v8; // edx
  __int64 result; // rax
  char v10; // al
  int v11; // ebp
  char v12; // r8
  int v13; // r9d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // r9d
  int v19; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v3 = 40LL * a2;
  v4 = (unsigned __int8 *)(a1 + v3 + 64);
  switch ( *(_BYTE *)(a1 + v3 + 65) )
  {
    case 1:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      goto LABEL_18;
    case 2:
    case 6:
    case 7:
      v7 = sub_3EE990(a1, v4, a3, (unsigned int *)&v19);
      sub_3EF100(a1, (__int64)v4, v19, 1, v7);
      goto LABEL_3;
    case 3:
    case 4:
      v10 = sub_3EE990(a1, v4, a3, (unsigned int *)&v19);
      v11 = v19;
      v12 = v10;
      if ( !*(_BYTE *)(a1 + 40LL * a2 + 96) )
      {
        sub_3EED20(a1, (__int64)v4, v19, v10);
        v12 = 1;
      }
      sub_3EF100(a1, (__int64)v4, v11, *(_BYTE *)(a1 + 40LL * a2 + 65) == 4, v12);
LABEL_3:
      v8 = *(unsigned __int16 *)(a1 + 48);
      if ( (_WORD)v8 == 92
        || v8 == 222
        || (unsigned __int16)(v8 - 198) <= 1u
        || (unsigned __int16)(*(_WORD *)(a1 + 48) - 97) <= 1u )
      {
        return (unsigned int)v19;
      }
      else
      {
        return *(unsigned int *)(*(_QWORD *)(a1 + 832) + 468LL);
      }
    case 5:
      sub_3EEFC0(a1, v4, *(unsigned __int8 *)(a1 + 40LL * a2 + 69), *(_QWORD *)(a1 + 40LL * a2 + 72), a3);
      return a3;
    case 0xB:
      v13 = *(_DWORD *)(a1 + 892);
      if ( v13 < 0 )
        goto LABEL_12;
      v14 = 8 - v13;
      if ( !a2 && (unsigned int)sub_3E1060(*(_WORD *)(a1 + 48)) == 1 )
        v14 = 7 - v18;
      v15 = v14 + *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
      if ( v15 > 7 )
        goto LABEL_12;
      result = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 492LL)
                            + *(_DWORD *)(*(_QWORD *)(a1 + 832) + 448LL) * v15);
      break;
    case 0xC:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 56;
      goto LABEL_18;
    case 0xD:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 64;
      goto LABEL_18;
    case 0xE:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 81;
      goto LABEL_18;
    case 0xF:
      v16 = *(_QWORD *)(a1 + 832);
      v17 = (unsigned int)*(unsigned __int16 *)(a1 + 40LL * a2 + 70) + 133;
LABEL_18:
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 168LL))(v16, v17);
      break;
    default:
LABEL_12:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}
