__int64 __fastcall sub_1A0DD40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax

  v6 = 0;
  v9 = sub_F60F10(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
         a2,
         a3,
         a4,
         a5,
         a6);
  if ( (*((_BYTE *)v9 + 28) & 0x7Fu) - 59 <= 2 )
  {
    a2 = v9[13];
    sub_7052B0((__int64 *)(a2 + 96), a2, v7, v8, v10, v11);
    v6 = *(_DWORD *)(v9[16] + 16LL);
  }
  v12 = sub_B7E900((__int64)v9, a2, v7, v8, v10, v11);
  if ( v12 )
  {
LABEL_4:
    if ( (*(_BYTE *)(v12 + 68) & 1) == 0 || *(_QWORD *)(v12 + 40) )
      ++v6;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v12 = v13;
      if ( !v13 )
        break;
      if ( (*(_BYTE *)(v13 + 28) & 0x7Fu) - 49 <= 2 )
        goto LABEL_4;
    }
  }
  if ( *((_BYTE *)v9 + 73) >> 5 != 2 )
    return v6 - (unsigned int)((unsigned __int8)BYTE2(v9[9]) >> 7);
  result = 1;
  if ( v6 <= 0 )
    return (unsigned int)v6;
  return result;
}
