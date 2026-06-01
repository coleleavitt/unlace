__int64 __fastcall sub_FFD940(__int64 a1, int a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax
  _DWORD *v6; // rax
  _BYTE v7[25]; // [rsp+Fh] [rbp-19h] BYREF

  v7[0] = 0;
  v2 = sub_FFD780(a1, a2);
  v3 = sub_FFBD10(a1, v2, v7);
  if ( v7[0] )
    return 0;
  v4 = v3;
  result = 0;
  if ( v4 && *(char *)(v4 + 3) >= 0 )
  {
    if ( *(char *)(v4 + 15) < 0 && (v6 = sub_FFB800(*(_QWORD *)(a1 + 488), v2, HIDWORD(v2))) != nullptr )
      return (unsigned int)v6[3];
    else
      return *(_QWORD *)(v4 + 16) & 7LL;
  }
  return result;
}

