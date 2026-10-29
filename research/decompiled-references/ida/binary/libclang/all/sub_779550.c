__int64 __fastcall sub_779550(__int64 a1)
{
  __int64 v1; // rax
  void (*v2)(); // rdx
  __int64 v3; // rbp
  __int64 result; // rax

  *(_BYTE *)(a1 + 74) = *(_BYTE *)(a1 + 74) & 0xFC | 1;
  v1 = sub_798D90();
  if ( v1 )
  {
    v2 = *(void (**)())(*(_QWORD *)v1 + 16LL);
    if ( v2 != nullsub_64 )
      ((void (__fastcall *)(__int64, __int64))v2)(v1, a1);
  }
  v3 = sub_798D40(a1);
  result = *(_QWORD *)(v3 + 2160);
  if ( (*(_BYTE *)(result + 104) & 0x40) != 0 )
  {
    result = sub_79B8A0(a1 + 64);
    if ( !(_BYTE)result && *(char *)(a1 + 28) >= 0 )
      return sub_AB4240(v3, a1);
  }
  return result;
}

