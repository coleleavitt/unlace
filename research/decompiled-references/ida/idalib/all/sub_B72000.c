__int64 __fastcall sub_B72000(__int64 a1)
{
  __int64 v1; // rax
  void (*v2)(); // rdx
  __int64 v3; // rbp
  __int64 result; // rax

  *(_BYTE *)(a1 + 74) = *(_BYTE *)(a1 + 74) & 0xFC | 1;
  v1 = sub_B8C590();
  if ( v1 )
  {
    v2 = *(void (**)())(*(_QWORD *)v1 + 16LL);
    if ( v2 != nullsub_430 )
      ((void (__fastcall *)(__int64, __int64))v2)(v1, a1);
  }
  v3 = sub_B8C330(a1);
  result = *(_QWORD *)(v3 + 2320);
  if ( (*(_BYTE *)(result + 104) & 0x40) != 0 )
  {
    result = sub_B8E180(a1 + 64);
    if ( !(_BYTE)result && *(char *)(a1 + 28) >= 0 )
      return sub_EDE580(v3, a1);
  }
  return result;
}
