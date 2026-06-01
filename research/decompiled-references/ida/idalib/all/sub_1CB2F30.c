__int64 __fastcall sub_1CB2F30(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // rdx
  unsigned int v4; // r8d
  int v6; // eax
  __int64 v7; // [rsp+0h] [rbp-28h] BYREF
  int v8; // [rsp+8h] [rbp-20h]

  v2 = *(_BYTE *)(a2 + 7) >> 7;
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
  if ( v4 > 0x40 )
  {
    sub_2205600(&v7, v4, v3, ((unsigned __int64)v4 + 63) >> 6);
    v6 = v8;
    *(_BYTE *)(a1 + 12) = v2;
    *(_DWORD *)(a1 + 8) = v6;
    *(_QWORD *)a1 = v7;
    return a1;
  }
  else
  {
    *(_DWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = v3;
    *(_BYTE *)(a1 + 12) = v2;
    return a1;
  }
}
