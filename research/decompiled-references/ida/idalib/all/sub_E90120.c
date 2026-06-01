__int64 __fastcall sub_E90120(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r9
  __int64 v4; // rdx
  unsigned __int8 v5; // cl
  __int64 v6; // r12
  const void *v7; // rbp
  _QWORD v8[7]; // [rsp-38h] [rbp-38h] BYREF

  result = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
  {
    v4 = (*(__int64 *)(a1 + 8) >> 1) & 3;
    if ( (_DWORD)v4 == 1 )
    {
      return 0;
    }
    else if ( (_DWORD)v4 == 2 )
    {
      v5 = *(_BYTE *)(result + 16);
      if ( v5 <= 0x38u )
      {
        if ( ((1LL << v5) & 0x1A3800000000000LL) != 0 )
        {
          return *(_QWORD *)(sub_A76250((__int64)a2, 6, v3, result & 0xFFFFFFFFFFFFFFF0LL, 0) & 0xFFFFFFFFFFFFFFF0LL);
        }
        else if ( ((1LL << v5) & 0x400000) != 0 )
        {
          v6 = *(unsigned int *)(result + 20);
          v7 = (const void *)(result + 48);
          sub_F22FF0(v8, v3, *(_QWORD *)(result + 40), (*(__int64 *)(result + 32) >> 2) & 1);
          return *(_QWORD *)(sub_AB72A0(a2, 6u, v8, v7, v6, 0) & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
    }
    else
    {
      if ( v4 )
        result = 0;
      return *(_QWORD *)(sub_AB77C0(a2, 6, v3, result) & 0xFFFFFFFFFFFFFFF0LL);
    }
  }
  return result;
}
