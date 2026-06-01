unsigned __int64 __fastcall sub_781300(__int64 a1, int a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdi

  result = *(_QWORD *)(a1 + 152) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 152) & 6LL) == 4 )
  {
    *(_QWORD *)(result + 16) = (2LL * (unsigned int)(a2 - 1)) | *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFF9LL;
    if ( !a3 || a2 == 2 || *(_DWORD *)(result + 40) )
      return result;
    *(_DWORD *)(result + 40) = a3;
  }
  else
  {
    *(_QWORD *)result = (2LL * (unsigned int)(a2 - 1)) | *(_QWORD *)result & 0xFFFFFFFFFFFFFFF9LL;
    if ( !a3 || a2 == 2 || *(_DWORD *)(result + 8) )
      return result;
    *(_DWORD *)(result + 8) = a3;
  }
  result = sub_798D40(a1);
  v5 = *(_QWORD *)(result + 18208);
  if ( v5 )
  {
    result = *(_QWORD *)(*(_QWORD *)v5 + 96LL);
    if ( (void (*)())result != nullsub_73 )
      return ((__int64 (__fastcall *)(__int64, __int64))result)(v5, a1);
  }
  return result;
}

