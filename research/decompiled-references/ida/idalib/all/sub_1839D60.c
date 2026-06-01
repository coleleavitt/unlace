__int64 __fastcall sub_1839D60(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  _DWORD *v4; // r8
  __int64 v5; // rax
  __int64 result; // rax
  _DWORD *v7; // rax
  __int64 v8; // r9
  _DWORD *v9; // r11
  __int64 v10; // rbx
  char v11; // [rsp+Fh] [rbp-29h] BYREF
  int v12; // [rsp+10h] [rbp-28h] BYREF
  __int64 v13; // [rsp+18h] [rbp-20h]
  char *v14; // [rsp+20h] [rbp-18h]

  v3 = *(_DWORD *)(a2 + 136);
  v4 = *(_DWORD **)(a2 + 128);
  if ( v3 )
  {
    v5 = 1LL << *v4;
    if ( (v5 & 0xB7) == 0 && (v5 & 0x40) != 0 )
    {
      v7 = v4 + 36;
      v8 = (__int64)&v4[36 * (v3 - 1) + 36];
      while ( (_DWORD *)v8 != v7 )
      {
        v9 = v7;
        v10 = 1LL << *v7;
        if ( (v10 & 0xB7) != 0 )
          break;
        v7 += 36;
        if ( (v10 & 0x40) == 0 )
        {
          v4 = v9;
          break;
        }
      }
    }
  }
  result = *((_QWORD *)v4 + 13);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 3) & 0x7C) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 720) & 1) != 0 )
        return result;
    }
    else if ( !*(_DWORD *)(result + 48) || (*(_BYTE *)(a2 + 720) & 1) != 0 )
    {
      return result;
    }
    if ( ((**(_DWORD **)a2 >> 12) & 0x7F) != 0x45 )
    {
      v12 = a3;
      v13 = a1;
      v14 = &v11;
      v11 = 0;
      result = sub_15AC6E0(
                 result,
                 (void (__fastcall *)(__int64, __int64, const char *, __int64, _QWORD))sub_18692E0,
                 (__int64)&v12);
      if ( v11 )
        *(_BYTE *)(a2 + 720) |= 1u;
    }
  }
  return result;
}
