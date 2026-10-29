__int64 __fastcall sub_13580B0(__int64 a1, _BYTE *a2, size_t a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // r10
  __int64 result; // rax
  __int64 v7; // [rsp-10h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v4 + 56LL);
  if ( v5 == sub_1358050 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *, size_t, __int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v4 + 32LL))(
               v4,
               a2,
               a3,
               1,
               0,
               1,
               0);
    if ( (_BYTE)result )
      return sub_1357C20(v4, a2, a3);
  }
  else
  {
    v5(*(_QWORD *)(a1 + 8), a2, a3, 1u, 0, 1u, 0);
    return v7;
  }
  return result;
}
