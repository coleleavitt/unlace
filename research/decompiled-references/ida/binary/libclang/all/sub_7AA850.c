__int64 __fastcall sub_7AA850(__int64 a1, __int64 a2)
{
  int v2; // ebp
  char v5; // al
  __int64 v6; // rsi
  int v7; // ebp
  unsigned __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  _DWORD v14[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v5 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v5 != 36 )
  {
    LOBYTE(v2) = v5 == 34;
    v7 = 32 * v2;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_7A63A0(a2, v14)
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 42 )
  {
    v7 = 2;
    goto LABEL_10;
  }
  if ( (unsigned __int8)sub_7A63A0(a2, v14)
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL)
                                        + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 43 )
  {
    v7 = 4;
LABEL_10:
    v6 = *(_QWORD *)(a1 + 104);
    v8 = (unsigned __int64 *)(v6 + 96);
    if ( (*(_BYTE *)(a2 + 83) & 1) != 0 )
      goto LABEL_11;
LABEL_6:
    sub_6E77B0(v8, v6);
    v9 = *(_QWORD *)(a1 + 128);
    result = 2 * (v7 | (*(_BYTE *)(v9 + 7) >> 1) & 0x3Fu);
    *(_BYTE *)(v9 + 7) = (2 * (v7 | (*(_BYTE *)(v9 + 7) >> 1) & 0x3F)) | *(_BYTE *)(v9 + 7) & 0x81;
    return result;
  }
  v6 = *(_QWORD *)(a1 + 104);
  v7 = 0;
  v8 = (unsigned __int64 *)(v6 + 96);
  if ( (*(_BYTE *)(a2 + 83) & 1) == 0 )
    goto LABEL_6;
LABEL_11:
  sub_6E77B0(v8, v6);
  v11 = *(_QWORD *)(a1 + 128);
  v12 = *(_DWORD *)(v11 + 4);
  v13 = v12 & 0xFFF81FFF;
  result = (unsigned __int8)(v7 & 0x3F | (v12 >> 13) & 0x3F) << 13;
  *(_DWORD *)(v11 + 4) = result | v13;
  return result;
}

