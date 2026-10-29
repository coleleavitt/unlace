unsigned __int64 __fastcall sub_B77E40(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rdi

  v4 = *(_QWORD *)(a1 + 152);
  result = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( ((v4 >> 1) & 3) == 2 )
  {
    *(_QWORD *)(result + 16) = (2LL * (unsigned int)(a2 - 1)) | *(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFF9LL;
    if ( !a3 || a2 == 2 || *(_DWORD *)(result + 40) )
      return result;
    *(_DWORD *)(result + 40) = a3;
  }
  else
  {
    *(_QWORD *)result = (2LL * (unsigned int)(a2 - 1)) | *(_QWORD *)result & 0xFFFFFFFFFFFFFFF9LL;
    if ( a2 == 2 || !a3 || *(_DWORD *)(result + 8) )
      return result;
    *(_DWORD *)(result + 8) = a3;
  }
  result = sub_B8C330(a1);
  v6 = *(_QWORD *)(result + 18368);
  if ( v6 )
  {
    result = *(_QWORD *)(*(_QWORD *)v6 + 96LL);
    if ( (void (*)())result != nullsub_439 )
      return ((__int64 (__fastcall *)(__int64, __int64))result)(v6, a1);
  }
  return result;
}
