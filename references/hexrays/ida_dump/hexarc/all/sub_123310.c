__int64 __fastcall sub_123310(__int128 a1, char *a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v10 = *((_QWORD *)&a1 + 1);
  v11[1] = __readfsqword(0x28u);
  if ( a3 > 4 )
    return 0;
  if ( (unsigned __int8)sub_1196C0(a2, v11, 1u) && v11[0] >= 0LL )
    return 1;
  if ( !(_QWORD)a1 )
    return 0;
  if ( !v10 )
    return 0;
  *((_QWORD *)&a1 + 1) = a2;
  v6 = sub_122D80(a1, (__int64)&v10, 0);
  v7 = (_DWORD *)v6;
  if ( !v6 || *a2 != 4 && !sub_11EF10((unsigned __int8 *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL), v6 + 64, 0) )
    return 0;
  v8 = a3 + 1;
  switch ( *v7 )
  {
    case 8:
    case 0xB:
    case 0x18:
      result = sub_123310(a1, v10, v7 + 8, v8);
      break;
    case 9:
    case 0x17:
      return 1;
    case 0xF:
    case 0x10:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      v9 = v10;
      result = sub_123310(a1, v10, v7 + 8, v8);
      if ( (*v7 == 20) != (_BYTE)result )
        result = sub_123310(a1, v9, v7 + 12, v8);
      break;
    case 0x11:
      result = sub_123310(a1, v10, v7 + 12, v8);
      break;
    default:
      return 0;
  }
  return result;
}
