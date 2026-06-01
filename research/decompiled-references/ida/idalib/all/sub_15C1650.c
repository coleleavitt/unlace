__int64 __fastcall sub_15C1650(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+8h] [rbp-10h] BYREF

  v7 = a2;
  if ( (a2 & 7) != 0 )
    goto LABEL_13;
  v2 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 || (*(_BYTE *)(v2 + 4) & 0x10) == 0 )
    goto LABEL_6;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                                 + 120LL));
  if ( (v7 & 7) != 0 )
  {
LABEL_13:
    result = sub_B85750(&v7);
    goto LABEL_7;
  }
  v2 = v7 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_6:
  result = *(_QWORD *)(v2 + 8);
LABEL_7:
  if ( !result )
    return 0;
  if ( (result & 1) == 0 )
    return result;
  v4 = result & 0xFFFFFFFFFFFFFFFELL;
  v5 = *(_QWORD *)v4;
  v6 = *(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8);
  if ( v5 == v6 )
    return 0;
  return (v6 - 8) | 1;
}
