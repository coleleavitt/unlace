__int64 __fastcall sub_1764D50(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  char v6; // r13
  int v7; // r15d
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-88h] BYREF
  int v11; // [rsp+8h] [rbp-80h]
  __int64 v12; // [rsp+10h] [rbp-78h] BYREF
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v15; // [rsp+40h] [rbp-48h]

  v2 = a2;
  result = sub_175B800(a1, *(unsigned __int16 **)(a2 + 24));
  if ( result != 1 )
  {
    v4 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || v4 != *(_QWORD *)(a2 + 24) )
    {
      v5 = *(_QWORD *)(a2 + 16);
      v6 = *(_BYTE *)(a2 + 40);
      v13 = 0;
      v7 = *(_DWORD *)(a2 + 32);
      *(_OWORD *)ptr = 0;
      v15 = 0;
      v8 = *(_QWORD *)(v5 + 40);
      v11 = v7;
      v10 = v8;
      sub_B85890(&v12, v8);
      v9 = sub_19CC2F0(*a1, v4, *(_QWORD *)(v4 + 8), v7, v6 & 1, (unsigned int)&v13, 0, 0, (__int64)&v10, 0, 0, 0);
      v2 = v9;
      if ( v9 > 1 && (v6 & 2) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 40) |= 2u;
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
    }
    return v2;
  }
  return result;
}
