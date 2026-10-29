__int64 __fastcall sub_21FE3E0(_BYTE *a1, __int64 a2, __int64 a3, char a4)
{
  char v6; // al
  __int64 result; // rax
  char v8; // al
  int v9; // r13d
  unsigned __int8 v10; // dl
  char v11; // dl
  __int64 v12; // rcx
  _QWORD v13[9]; // [rsp+0h] [rbp-48h] BYREF

  v6 = a1[20] & 0xF7 | (a1[20] ^ *(_BYTE *)(a2 + 20)) & 8;
  a1[20] = v6;
  if ( (v6 & 6) != 0
    && (v6 & 7) != 3
    && (v8 = *(_BYTE *)(a2 + 20), (v8 & 6) != 0)
    && (v8 & 7) != 3
    && (*(_BYTE *)(a3 + 20) & 6) != 0 )
  {
    sub_21F9140(v13, *(_QWORD *)a3);
    sub_21F9190((__int64)v13, a3);
    v9 = sub_21FE060((__int64)a1, a2, (__int64)v13, 0);
    sub_21F9170(v13);
    result = sub_21FAF10((__int64)a1, a4, v9);
    if ( v9 )
      result = (unsigned int)result | 0x10;
    v10 = a1[20];
    if ( (v10 & 7) == 3 && (result & 8) == 0 && ((v10 ^ *(_BYTE *)(a3 + 20)) & 8) != 0 )
    {
      v11 = (8 * (a4 == 3)) | v10 & 0xF7;
      v12 = *(_QWORD *)a1;
      a1[20] = v11;
      if ( *(_DWORD *)(v12 + 20) == 2 )
        a1[20] = v11 & 0xF7;
    }
  }
  else
  {
    result = sub_21FD510((__int64)a1, a2);
    if ( !(_DWORD)result )
      return sub_21FD790(a1, a3, a4, 0);
  }
  return result;
}
