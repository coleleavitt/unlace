__int64 __fastcall sub_80BFC0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 result; // rax
  char v4; // dl
  char v5; // cl
  _DWORD *v6; // rdx
  _DWORD *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-20h]
  __int64 v10; // [rsp+10h] [rbp-18h]

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v2 = *(_QWORD *)(a1 + 32);
  v9 = *(_DWORD *)(a1 + 40);
  v8 = v1;
  v10 = v2;
  result = sub_792B00((__int64)&v8);
  v4 = *(_BYTE *)(a1 + 2);
  v5 = v4 & 0x40;
  if ( (_DWORD)result )
  {
    if ( v5 )
    {
      v6 = (_DWORD *)(a1 + 16LL * ((v4 & 0x10) != 0) + 8LL * ((v4 & 0x20) != 0) + 48);
      if ( *v6 )
        return (unsigned int)v6[1];
    }
  }
  else
  {
    result = v9;
    if ( v5 && (v7 = (_DWORD *)(a1 + 16LL * ((v4 & 0x10) != 0) + 8LL * ((v4 & 0x20) != 0) + 48), *v7) )
    {
      return (unsigned int)v7[1];
    }
    else if ( !v9 )
    {
      return sub_AC7460(*(_QWORD *)(a1 + 16));
    }
  }
  return result;
}

