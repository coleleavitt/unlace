unsigned __int64 __fastcall sub_193C470(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rdx
  int v6; // r14d
  char v7; // r12
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // [rsp+8h] [rbp-90h]
  __int64 v11; // [rsp+10h] [rbp-88h] BYREF
  int v12; // [rsp+18h] [rbp-80h]
  __int64 v13; // [rsp+20h] [rbp-78h] BYREF
  __int128 v14; // [rsp+30h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int128 v16; // [rsp+50h] [rbp-48h]

  result = sub_1933BC0(a1, *(_QWORD *)(a2 + 24), a3, a4);
  if ( result != 1 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    v6 = *(_DWORD *)(a2 + 32);
    v14 = 0;
    v7 = *(_BYTE *)(a2 + 40);
    *(_OWORD *)ptr = 0;
    v8 = result & 0xFFFFFFFFFFFFFFFELL;
    v16 = 0;
    v9 = *(_QWORD *)(v5 + 40);
    v12 = v6;
    v11 = v9;
    sub_B85890(&v13, v9);
    result = sub_19CC2F0(*a1, v8, *(_QWORD *)(v8 + 8), v6, v7 & 1, (unsigned int)&v14, 0, 0, (__int64)&v11, 0, 0, 0);
    if ( result > 1 && (v7 & 2) != 0 )
      *(_BYTE *)((result & 0xFFFFFFFFFFFFFFFELL) + 40) |= 2u;
    if ( HIDWORD(ptr[1]) )
    {
      v10 = result;
      free(ptr[0]);
      return v10;
    }
  }
  return result;
}
