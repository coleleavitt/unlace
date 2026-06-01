unsigned __int64 __fastcall sub_19832D0(__int64 *a1, unsigned __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  char v8; // r13
  int v9; // r15d
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // [rsp+0h] [rbp-88h] BYREF
  int v13; // [rsp+8h] [rbp-80h]
  __int64 v14; // [rsp+10h] [rbp-78h] BYREF
  __int128 v15; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h]
  __int128 v17; // [rsp+40h] [rbp-48h]

  v4 = a2;
  result = sub_190CCA0(a1, *(unsigned __int16 **)(a2 + 24), a3, a4);
  if ( result != 1 )
  {
    v6 = result & 0xFFFFFFFFFFFFFFFELL;
    if ( (result & 0xFFFFFFFFFFFFFFFELL) != *(_QWORD *)(a2 + 24) )
    {
      v7 = *(_QWORD *)(a2 + 16);
      v8 = *(_BYTE *)(a2 + 40);
      v15 = 0;
      v9 = *(_DWORD *)(a2 + 32);
      *(_OWORD *)ptr = 0;
      v17 = 0;
      v10 = *(_QWORD *)(v7 + 40);
      v13 = v9;
      v12 = v10;
      sub_B85890(&v14, v10);
      v11 = sub_19CC2F0(*a1, v6, *(_QWORD *)(v6 + 8), v9, v8 & 1, (unsigned int)&v15, 0, 0, (__int64)&v12, 0, 0, 0);
      v4 = v11;
      if ( v11 > 1 && (v8 & 2) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFFFFFFELL) + 40) |= 2u;
      if ( HIDWORD(ptr[1]) )
        free(ptr[0]);
    }
    return v4;
  }
  return result;
}
