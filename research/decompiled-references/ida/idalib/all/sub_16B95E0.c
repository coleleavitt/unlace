__int64 __fastcall sub_16B95E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v11; // rax

  v6 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(unsigned __int8 *)(v8 + 16);
  switch ( (_BYTE)v9 )
  {
    case 0xD:
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        return (unsigned int)!sub_F58100(v7) + 1;
      break;
    case 0x2F:
      v11 = sub_F60F10(v8, a2, v9, a4, a5, a6);
      if ( (*((_BYTE *)v11 + 74) & 1) == 0 && (v11[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      {
        v7 = *v6;
        return (unsigned int)!sub_F58100(v7) + 1;
      }
      break;
    case 0xA:
      break;
    default:
      return (unsigned int)!sub_F58100(v7) + 1;
  }
  return 0;
}
