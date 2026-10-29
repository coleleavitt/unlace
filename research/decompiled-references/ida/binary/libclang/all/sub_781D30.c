__int64 __fastcall sub_781D30(__int64 a1, __int64 a2, __int64 a3, __int16 a4, int a5)
{
  int v5; // eax
  __int64 result; // rax
  void (*v7)(); // rdx

  if ( *(_QWORD *)(a1 + 128) <= 7u )
    *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFFBLL;
  v5 = *(_DWORD *)(a1 + 74);
  *(_QWORD *)(a1 + 136) = a3;
  *(_DWORD *)(a1 + 74) = v5 & 0xFF80007C | (a5 << 15) & 0x7F8000 | (a4 << 7) & 0x7F80 | 1;
  result = sub_798D90(a1);
  if ( result )
  {
    v7 = *(void (**)())(*(_QWORD *)result + 16LL);
    if ( v7 != nullsub_64 )
      return ((__int64 (__fastcall *)(__int64, __int64))v7)(result, a1);
  }
  return result;
}

