__int64 __fastcall sub_17FC10(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  __int64 v4; // rdx
  void (*v5)(); // rdx
  unsigned __int8 v6; // [rsp+Fh] [rbp-19h]

  v2 = *a1;
  *((_DWORD *)a1 + 440) |= 0x10u;
  result = (*(__int64 (**)(void))(v2 + 256))();
  v4 = *a1;
  *((_DWORD *)a1 + 440) &= ~0x10u;
  v5 = *(void (**)())(v4 + 264);
  if ( v5 != nullsub_112 )
  {
    v6 = result;
    ((void (__fastcall *)(__int64 *, __int64))v5)(a1, a2);
    return v6;
  }
  return result;
}

