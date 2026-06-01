_BYTE *__fastcall sub_B9BEB0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _BYTE *result; // rax
  int v5; // r8d
  unsigned int v6; // edx
  _BYTE *v7; // [rsp+0h] [rbp-20h]
  __int64 v8[3]; // [rsp+8h] [rbp-18h] BYREF

  result = (_BYTE *)a4;
  while ( 1 )
  {
    if ( a2 == *(_QWORD *)(*(_QWORD *)result + 16LL) && result == *((_BYTE **)result + 3) )
    {
      v5 = 0;
      if ( (result[44] & 8) == 0 )
        v5 = *(_DWORD *)(*(_QWORD *)result + 24LL);
      if ( a3 == v5 )
        break;
    }
    result = *((_BYTE **)result + 2);
    if ( (_BYTE *)a4 == result )
      return nullptr;
  }
  v6 = *(_DWORD *)(a1 + 80);
  if ( v6 < *((_DWORD *)result + 9) )
    v6 = *((_DWORD *)result + 9);
  *(_DWORD *)(a1 + 80) = v6;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 912LL) )
  {
    v8[0] = (__int64)result;
    v7 = result;
    v8[1] = a4;
    sub_B9BD60((__int64 **)(a1 + 128), v8);
    return v7;
  }
  return result;
}

