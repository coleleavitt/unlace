__int64 __fastcall sub_2185FF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rbp
  unsigned __int32 v7; // eax
  __int64 (__fastcall *v8)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v9; // r13
  __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  char v15; // [rsp+20h] [rbp-38h]

  v6 = a2;
  v7 = _byteswap_ulong(*(_DWORD *)(a3 + 4));
  LOBYTE(a4) = v7 != 4;
  if ( v7 == 4 || v7 == 9 || v7 == 1073741844 )
  {
    sub_216F6A0((__int64)&v13, a2 + 7, _byteswap_ulong(*(_DWORD *)(a3 + 28)), a4, a5, a6);
    v11 = v13;
    if ( (v14 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      v13 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 8) = a2;
    }
    *(_QWORD *)a1 = v11;
    sub_216F7A0(&v13);
    return a1;
  }
  else
  {
    v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64))(*a2 + 360);
    if ( v8 == sub_2184FF0 )
    {
      sub_216E3E0((__int64)&v13, a2 + 7, a3, a4, a5, a6);
      if ( (v15 & 1) != 0 )
      {
        v6 = nullptr;
        v9 = 0;
      }
      else
      {
        v9 = v13 + 40 * v14;
      }
      sub_216F680(&v13);
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(__int64 *))v8)(a2);
      v6 = v12;
    }
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v6;
    *(_BYTE *)(a1 + 16) &= ~1u;
    return a1;
  }
}
