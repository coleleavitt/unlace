__int16 __fastcall sub_16A8350(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  char v14; // dl
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // edx
  _QWORD v19[4]; // [rsp+8h] [rbp-20h] BYREF

  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)a1 = a2;
  v6 = *(_QWORD *)(a2 + 248);
  v19[0] = a3;
  *(_QWORD *)(a1 + 24) = sub_F67970(v19, v6);
  v7 = *(_QWORD *)(v19[0] & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(unsigned __int8 *)(v7 + 16);
  if ( (unsigned int)(v8 - 43) > 1 )
  {
    v16 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v16 > 1 || (v7 = sub_F63050(*(_QWORD *)(v19[0] & 0xFFFFFFFFFFFFFFF0LL), v6, v16, v8)) == 0 )
    {
      v9 = 0;
      goto LABEL_4;
    }
    v8 = *(unsigned __int8 *)(v7 + 16);
  }
  if ( (_BYTE)v8 == 43 )
    goto LABEL_3;
  while ( 1 )
  {
    v12 = (*(_BYTE *)(v7 + 18) & 0x10) == 0;
    v7 = *(_QWORD *)(*(_QWORD *)(v7 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    if ( v12 )
      break;
    v13 = (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43;
    if ( (unsigned int)v13 > 1 )
      v7 = sub_F63050(v7, v6, v13, v8);
  }
  v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  v9 = 2;
  if ( (unsigned int)(v17 - 25) <= 1 )
LABEL_3:
    v9 = 1;
LABEL_4:
  *(_DWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 48) = a1 + 64;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 56) = 0x400000000LL;
  *(_BYTE *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 248) + 2320LL) + 2LL) & 4) == 0 )
  {
    v14 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( v14 != 48 && (unsigned __int8)(v14 - 2) > 4u )
    {
      v15 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v15 & 8) == 0 || !*(_DWORD *)((char *)&qword_18 + (v15 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
        *(_QWORD *)(a1 + 16) = sub_F64D20((__int64 *)(a1 + 16));
    }
  }
  v10 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)((a4 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 13 )
  {
    LOWORD(v11) = (*(_WORD *)(v11 + 18) >> 3) & 0x1FF;
    if ( (unsigned __int16)v11 > 0x1F1u )
      v10 = (unsigned __int16)v11;
  }
  *(_DWORD *)(a1 + 40) = v10;
  return v11;
}
