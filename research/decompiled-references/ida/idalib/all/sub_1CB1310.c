__int64 __fastcall sub_1CB1310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  _QWORD *v9; // rsi
  size_t v10; // r12
  _BYTE *v11; // r13
  size_t v12; // rdx
  __int64 v14; // r12
  void *s1; // [rsp+0h] [rbp-48h] BYREF
  size_t n; // [rsp+8h] [rbp-40h]
  _BYTE v17[56]; // [rsp+10h] [rbp-38h] BYREF

  v6 = sub_F60F10(a1, a2, a3, a4, a5, a6)[2];
  if ( (v6 & 4) != 0 )
  {
    v7 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v7 )
      goto LABEL_3;
  }
  else
  {
    v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v7 )
    {
LABEL_3:
      v8 = 0;
      if ( (*(_BYTE *)(v7 + 8) & 0x7F) != 0x18 )
        return v8;
      v9 = (_QWORD *)(v7 - 48);
      if ( !v9 )
        return v8;
      sub_B76FC0((__int64)&s1, v9);
      v10 = n;
      v11 = s1;
      if ( n )
      {
        v12 = 8;
        if ( n <= 8 )
          v12 = n;
        if ( memcmp(s1, "hlsl::vk", v12) || (v14 = v10 - 8, v14 > 0x7FFFFFFF) || v14 < (__int64)0xFFFFFFFF80000000LL )
        {
          if ( v11 == v17 )
            return v8;
LABEL_10:
          operator delete(v11);
          return v8;
        }
      }
      else
      {
        LODWORD(v14) = -8;
      }
      LOBYTE(v8) = (_DWORD)v14 == 0;
      if ( v11 == v17 )
        return v8;
      goto LABEL_10;
    }
  }
  return 0;
}
