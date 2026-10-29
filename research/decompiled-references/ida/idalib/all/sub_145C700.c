__int64 __fastcall sub_145C700(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdi

  result = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 968) = 1;
  *(_BYTE *)(result + 6) = 1;
  v2 = *(_QWORD *)(a1 + 752);
  if ( v2 )
  {
    result = *(_QWORD *)(*(_QWORD *)v2 + 64LL);
    if ( (void (*)())result != nullsub_681 )
      return ((__int64 (*)(void))result)();
  }
  return result;
}
