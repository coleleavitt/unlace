void *__fastcall sub_211A990(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64); // rax
  void *result; // rax
  __int64 v7; // rbp

  v2 = *(_QWORD *)(a1 + 120) + 32LL * *(unsigned int *)(a1 + 128) - 32;
  v3 = *(_QWORD *)v2;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v2 + 8);
  *(_QWORD *)(v2 + 16) = v3;
  v4 = *(_QWORD *)(a1 + 120) + 32LL * *(unsigned int *)(a1 + 128) - 32;
  *(_QWORD *)v4 = a2;
  *(_DWORD *)(v4 + 8) = 0;
  v5 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
  if ( v5 == sub_2119D60 )
  {
    result = *(void **)(*(_QWORD *)(a2 + 56) + 8LL);
    *(_QWORD *)(a1 + 288) = result;
  }
  else
  {
    result = (void *)((__int64 (__fastcall *)(__int64, __int64, _QWORD))v5)(a1, a2, 0);
  }
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    result = *(void **)v7;
    if ( !*(_QWORD *)v7 )
    {
      if ( (*(_BYTE *)(v7 + 9) & 0x70) != 0x20 )
        return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v7, 0);
      if ( (*(_BYTE *)(v7 + 8) & 0x40) != 0 )
        return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v7, 0);
      result = sub_210D820(*(_QWORD *)(v7 + 24));
      *(_QWORD *)v7 = result;
      if ( !result )
        return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v7, 0);
    }
    if ( off_2C8EF40 == result )
      return (void *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v7, 0);
  }
  return result;
}
