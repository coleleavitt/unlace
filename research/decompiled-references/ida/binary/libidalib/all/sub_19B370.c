__int64 __fastcall sub_19B370(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi

  if ( *(_QWORD *)(a1 + 128) )
  {
    result = sub_8F740((__int64)"Coherency check failed: _handler == nullptr\n");
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  }
  *(_QWORD *)(a1 + 128) = a2;
  return result;
}

