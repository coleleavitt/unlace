__int64 __fastcall sub_B546B0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  __int16 v5; // ax
  __int16 v6; // cx
  char v8; // r8
  __int64 result; // rax
  void (*v10)(); // rdx

  if ( (*(_QWORD *)(a1 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFFBLL;
  v5 = *(_WORD *)(a1 + 74);
  *(_QWORD *)(a1 + 136) = a3;
  v6 = a4 << 7;
  LOBYTE(v5) = v6 | v5 & 0x7F;
  LOBYTE(v6) = ((a5 & 1) << 7) | HIBYTE(v6);
  v8 = *(_BYTE *)(a1 + 76);
  *(_BYTE *)(a1 + 75) = v6;
  *(_BYTE *)(a1 + 74) = v5 & 0xFC | 1;
  *(_BYTE *)(a1 + 76) = (a5 >> 1) | v8 & 0x80;
  result = sub_B68850(a1);
  if ( result )
  {
    v10 = *(void (**)())(*(_QWORD *)result + 16LL);
    if ( v10 != nullsub_409 )
      return ((__int64 (__fastcall *)(__int64, __int64))v10)(result, a1);
  }
  return result;
}

