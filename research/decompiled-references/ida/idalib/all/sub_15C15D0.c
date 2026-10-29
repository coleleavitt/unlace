__int64 __fastcall sub_15C15D0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+8h] [rbp-10h] BYREF

  v6 = a2;
  if ( (a2 & 7) != 0 )
    goto LABEL_12;
  v2 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v2 || (*(_BYTE *)(v2 + 4) & 0x10) == 0 )
    goto LABEL_6;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 8) + 120LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                                                 + 120LL));
  if ( (v6 & 7) != 0 )
  {
LABEL_12:
    v3 = sub_B85750(&v6);
    goto LABEL_7;
  }
  v2 = v6 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_6:
  v3 = *(_QWORD *)(v2 + 8);
LABEL_7:
  result = 0;
  if ( v3 )
  {
    result = v3;
    if ( (v3 & 1) != 0 )
    {
      v5 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL) + 8LL * *(unsigned int *)((v3 & 0xFFFFFFFFFFFFFFFELL) + 8);
      result = 0;
      if ( *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFELL) != v5 )
        return (v5 - 8) | 1;
    }
  }
  return result;
}
