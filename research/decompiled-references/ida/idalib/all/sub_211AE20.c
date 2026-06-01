void *__fastcall sub_211AE20(__int64 a1)
{
  void *(__fastcall *v1)(__int64, __int64); // rax
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  void *result; // rax
  __int64 v8; // rbp

  v1 = *(void *(__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 184LL);
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) + 24LL);
  if ( v1 != sub_211A990 )
    return v1(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) + 24LL));
  v3 = *(_QWORD *)(a1 + 120) + 32LL * *(unsigned int *)(a1 + 128) - 32;
  v4 = *(_QWORD *)v3;
  *(_DWORD *)(v3 + 24) = *(_DWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 16) = v4;
  v5 = *(_QWORD *)(a1 + 120) + 32LL * *(unsigned int *)(a1 + 128) - 32;
  *(_QWORD *)v5 = v2;
  *(_DWORD *)(v5 + 8) = 0;
  v6 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
  if ( v6 == sub_2119D60 )
  {
    result = *(void **)(*(_QWORD *)(v2 + 56) + 8LL);
    *(_QWORD *)(a1 + 288) = result;
  }
  else
  {
    result = (void *)((__int64 (__fastcall *)(__int64, __int64, _QWORD))v6)(a1, v2, 0);
  }
  v8 = *(_QWORD *)(v2 + 16);
  if ( v8 )
  {
    result = *(void **)v8;
    if ( !*(_QWORD *)v8 )
    {
      if ( (*(_BYTE *)(v8 + 9) & 0x70) != 0x20 )
        return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
      if ( (*(_BYTE *)(v8 + 8) & 0x40) != 0 )
        return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
      result = sub_210D820(*(_QWORD *)(v8 + 24));
      *(_QWORD *)v8 = result;
      if ( !result )
        return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
    }
    if ( off_2C8EF40 == result )
      return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
  }
  return result;
}
