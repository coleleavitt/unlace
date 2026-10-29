__int64 __fastcall sub_B3C250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v5 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(unsigned __int8 *)(v6 + 16);
  switch ( (_BYTE)v7 )
  {
    case 0xD:
      if ( (((*(_WORD *)(v6 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        break;
      return 258;
    case 0x2F:
      v10 = sub_F3D1D0(v6, a2, v7, a4, a5);
      if ( (*(_BYTE *)(v10 + 74) & 1) != 0 || (*(_QWORD *)(v10 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return 258;
      break;
    case 0xA:
      return 258;
  }
  if ( (unsigned __int8)sub_F343C0() )
    return 256;
  v11 = *v5;
  if ( *(_BYTE *)(*v5 + 16) == 42
    || (v12 = *(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v12 + 16) == 42)
    && (v11 = sub_F3F310(*v5, a2, v12, v8)) != 0 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 > 1 )
      return 258;
  }
  return 0;
}

