__int64 __fastcall sub_799030(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdi
  void (*v6)(); // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( (*(_BYTE *)(result + 29) & 4) == 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
    if ( (*(_BYTE *)(result + 29) & 4) == 0 )
    {
      v5 = *(_QWORD *)(a2 + 18208);
      if ( v5 )
      {
        v6 = *(void (**)())(*(_QWORD *)v5 + 144LL);
        if ( v6 != nullsub_79 )
          ((void (__fastcall *)(__int64, __int64))v6)(v5, a1);
      }
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
      *(_BYTE *)(result + 29) |= 4u;
    }
  }
  return result;
}

