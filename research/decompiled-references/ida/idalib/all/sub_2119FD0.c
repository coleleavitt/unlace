_DWORD *__fastcall sub_2119FD0(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *result; // rax
  __int64 v4; // r8
  int v5; // ecx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rbp

  result = (_DWORD *)(*(_QWORD *)(a1 + 120) + 32LL * *(unsigned int *)(a1 + 128) - 32);
  v4 = *(_QWORD *)result;
  v5 = result[2];
  *((_QWORD *)result + 2) = *(_QWORD *)result;
  result[6] = v5;
  if ( v5 != a3 || v4 != a2 )
  {
    v7 = **(__int64 (__fastcall ***)(__int64, __int64))a1;
    if ( v7 == sub_2119D60 )
      *(_QWORD *)(a1 + 288) = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
    else
      ((void (__fastcall *)(__int64, __int64, _QWORD))v7)(a1, a2, a3);
    result = (_DWORD *)(*(_QWORD *)(a1 + 120) + 32LL * *(unsigned int *)(a1 + 128) - 32);
    *(_QWORD *)result = a2;
    result[2] = a3;
    v8 = *(_QWORD *)(a2 + 16);
    if ( v8 )
    {
      result = *(_DWORD **)v8;
      if ( !*(_QWORD *)v8 )
      {
        if ( (*(_BYTE *)(v8 + 9) & 0x70) != 0x20 )
          return (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
        if ( (*(_BYTE *)(v8 + 8) & 0x40) != 0 )
          return (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
        result = sub_210D820(*(_QWORD *)(v8 + 24));
        *(_QWORD *)v8 = result;
        if ( !result )
          return (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
      }
      if ( off_2C8EF40 == (_UNKNOWN *)result )
        return (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, v8, 0);
    }
  }
  return result;
}
