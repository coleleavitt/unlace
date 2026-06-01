__int64 __fastcall sub_806070(__int64 a1)
{
  char v1; // al
  _DWORD *v2; // rax
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-20h]
  __int64 v8; // [rsp+10h] [rbp-18h]

  v1 = *(_BYTE *)(a1 + 2);
  if ( (v1 & 0x10) != 0 )
  {
    v2 = (_DWORD *)(a1 + 16LL * ((v1 & 8) != 0) + 8LL * ((v1 & 0x20) != 0) + 32);
    if ( *v2 )
      return (unsigned int)v2[1];
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  v5 = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 4);
  v6 = v4;
  v8 = v5;
  result = sub_792B00((__int64)&v6);
  if ( !(_DWORD)result )
    return v7;
  return result;
}

