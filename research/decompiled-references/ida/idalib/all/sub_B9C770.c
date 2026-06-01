__int64 __fastcall sub_B9C770(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // al
  int v9; // ebp
  __int64 v10; // rsi
  __int64 *v11; // rdi
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  _DWORD v15[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v8 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v8 == 38 )
  {
    v15[0] = 0;
    if ( !(unsigned __int8)sub_B990E0(a2, v15, a3, a4)
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a2 + 120) + 48LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 43 )
    {
      v15[0] = 0;
      v9 = 4;
      if ( sub_B99060(a2, v15, a3, a4) )
        goto LABEL_5;
LABEL_8:
      v10 = *(_QWORD *)(a1 + 104);
      v9 = 0;
      v11 = (__int64 *)(v10 + 96);
      if ( (*(_BYTE *)(a2 + 83) & 1) != 0 )
        goto LABEL_6;
      goto LABEL_9;
    }
    v9 = 2;
  }
  else
  {
    if ( v8 != 36 )
      goto LABEL_8;
    v9 = 32;
  }
LABEL_5:
  v10 = *(_QWORD *)(a1 + 104);
  v11 = (__int64 *)(v10 + 96);
  if ( (*(_BYTE *)(a2 + 83) & 1) != 0 )
  {
LABEL_6:
    sub_7052B0(v11, v10, a3, a4, a5, a6);
    v12 = *(_QWORD *)(a1 + 128);
    result = *(_DWORD *)(v12 + 4) & 0xFFF81FFF | ((v9 & 0x3F | (*(_DWORD *)(v12 + 4) >> 13) & 0x3F) << 13);
    *(_DWORD *)(v12 + 4) = result;
    return result;
  }
LABEL_9:
  sub_7052B0(v11, v10, a3, a4, a5, a6);
  v14 = *(_QWORD *)(a1 + 128);
  result = *(_BYTE *)(v14 + 7) & 0x81 | (2 * (v9 | (*(_BYTE *)(v14 + 7) >> 1) & 0x3Fu));
  *(_BYTE *)(v14 + 7) = *(_BYTE *)(v14 + 7) & 0x81 | (2 * (v9 | (*(_BYTE *)(v14 + 7) >> 1) & 0x3F));
  return result;
}
