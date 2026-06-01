__int64 __fastcall sub_1358140(__int64 a1, __int64 a2, size_t *a3, unsigned __int8 a4)
{
  size_t i; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  size_t v7; // r12
  _BYTE *v8; // rbx
  __int64 (__fastcall *v9)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // r10
  __int64 result; // rax
  __int64 v11; // [rsp-10h] [rbp-28h]

  for ( i = a3[1]; i; i = *(_QWORD *)(v5 + 8) )
  {
    if ( (i & 4) == 0 )
      break;
    v5 = i & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v5 )
      break;
    a3 = (size_t *)v5;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *a3;
  v8 = a3 + 4;
  v9 = *(__int64 (__fastcall **)(__int64, _BYTE *, size_t, unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))(*(_QWORD *)v6 + 56LL);
  if ( v9 == sub_1358050 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *, size_t, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v6 + 32LL))(
               v6,
               v8,
               v7,
               0,
               a4,
               0,
               0);
    if ( (_BYTE)result )
      return sub_1357C20(v6, v8, v7);
  }
  else
  {
    v9(*(_QWORD *)(a1 + 8), v8, v7, 0, a4, 0, 0);
    return v11;
  }
  return result;
}
