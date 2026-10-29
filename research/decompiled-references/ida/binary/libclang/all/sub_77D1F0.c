__int64 __fastcall sub_77D1F0(__int64 a1, int a2, int a3)
{
  int v5; // edx
  __int64 result; // rax
  __int64 v7; // rdi

  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 39 > 1 )
  {
    result = sub_77D020(a1);
    if ( !result )
      return result;
    *(_QWORD *)result = (2LL * (unsigned int)(a2 - 1)) | *(_QWORD *)result & 0xFFFFFFFFFFFFFFF9LL;
    if ( !a3 || a2 == 2 || *(_DWORD *)(result + 8) )
      return result;
    *(_DWORD *)(result + 8) = a3;
  }
  else
  {
    v5 = a2 & 7;
    result = v5 | *(_BYTE *)(a1 + 140) & 0xF8u;
    *(_BYTE *)(a1 + 140) = v5 | *(_BYTE *)(a1 + 140) & 0xF8;
    if ( !a3 || a2 == 2 || *(_DWORD *)(a1 + 136) )
      return result;
    *(_DWORD *)(a1 + 136) = a3;
  }
  result = sub_798D40(a1);
  v7 = *(_QWORD *)(result + 18208);
  if ( v7 )
  {
    result = *(_QWORD *)(*(_QWORD *)v7 + 96LL);
    if ( (void (*)())result != nullsub_73 )
      return ((__int64 (__fastcall *)(__int64, __int64))result)(v7, a1);
  }
  return result;
}

