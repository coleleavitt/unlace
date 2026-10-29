__int64 __fastcall sub_7ECC20(__int64 *a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r13
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7[6]; // [rsp+0h] [rbp-30h] BYREF

  if ( !a2 )
    return 1;
  v2 = (__int64 *)(a2 + 24);
  v3 = a2 + (unsigned int)(8 * *(_DWORD *)(a2 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a2 + 20) )
  {
    while ( 1 )
    {
      v4 = *a1;
      v7[0] = *v2;
      result = sub_7E09C0((__int64)a1, v7[0], v7[0], v7, a1, v4);
      if ( !(_BYTE)result )
        break;
      if ( (__int64 *)v3 == ++v2 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0
      && (v6 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24)) != 0 )
    {
      return sub_7EBA80(a1, v6);
    }
    else
    {
      return 1;
    }
  }
  return result;
}

